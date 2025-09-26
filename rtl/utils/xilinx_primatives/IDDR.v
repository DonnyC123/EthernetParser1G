///////////////////////////////////////////////////////////////////////////////
//    Copyright (c) 1995/2005 Xilinx, Inc.
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
///////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor : Xilinx
// \   \   \/     Version : 8.1i (I.13) - Verilator Compatible
//  \   \         Description : Dual Data Rate Input D Flip-Flop
//  /   /                  
// /___/   /\     Filename : IDDR.v
// \   \  /  \    Modified for Verilator compatibility
//  \___\/\___\
//
// Revision:
//    Modified for Verilator - Removed Xilinx-specific timing constructs
//    and GSR handling while preserving original functionality
// End Revision

`timescale  1 ps / 1 ps

module IDDR (Q1, Q2, C, CE, D, R, S);
    
    output Q1;
    output Q2;
    
    input C;
    input CE;
    input D;
    input R;
    input S;

    parameter [80*8-1:0] DDR_CLK_EDGE = "OPPOSITE_EDGE";    
    parameter INIT_Q1 = 1'b0;
    parameter INIT_Q2 = 1'b0;
    parameter [0:0] IS_C_INVERTED = 1'b0;
    parameter [0:0] IS_D_INVERTED = 1'b0;
    parameter [80*8-1:0] SRTYPE = "SYNC";

    // Internal registers matching original structure
    reg q1_out_int;
    reg q2_out_int;
    reg q1_out_pipelined;
    reg q2_out_same_edge_int;
    
    // Output registers
    reg q1_out;
    reg q2_out;
    
    // Internal signal processing
    wire c_in;
    wire ce_in;
    wire d_in;
    wire r_in;
    wire s_in;
    
    // Apply input inversions
    assign c_in = IS_C_INVERTED ? ~C : C;
    assign ce_in = CE;
    assign d_in = IS_D_INVERTED ? ~D : D;
    assign r_in = R;
    assign s_in = S;
    
    // Output assignments
    assign Q1 = q1_out;
    assign Q2 = q2_out;
    
    // Parameter validation
    initial begin
        if ((INIT_Q1 != 0) && (INIT_Q1 != 1)) begin
            $display("Attribute Syntax Error : The attribute INIT_Q1 on IDDR instance %m is set to %d.  Legal values for this attribute are 0 or 1.", INIT_Q1);
            $finish;
        end
        
        if ((INIT_Q2 != 0) && (INIT_Q2 != 1)) begin
            $display("Attribute Syntax Error : The attribute INIT_Q2 on IDDR instance %m is set to %d.  Legal values for this attribute are 0 or 1.", INIT_Q2);
            $finish;
        end

        if ((DDR_CLK_EDGE != "OPPOSITE_EDGE") && (DDR_CLK_EDGE != "SAME_EDGE") && (DDR_CLK_EDGE != "SAME_EDGE_PIPELINED")) begin
            $display("Attribute Syntax Error : The attribute DDR_CLK_EDGE on IDDR instance %m is set to %s.  Legal values for this attribute are OPPOSITE_EDGE, SAME_EDGE or SAME_EDGE_PIPELINED.", DDR_CLK_EDGE);
            $finish;
        end
        
        /* verilator lint_off WIDTHEXPAND */
        if ((SRTYPE != "ASYNC") && (SRTYPE != "SYNC")) begin
            $display("Attribute Syntax Error : The attribute SRTYPE on IDDR instance %m is set to %s.  Legal values for this attribute are ASYNC or SYNC.", SRTYPE);
            $finish;
        end
        /* verilator lint_on WIDTHEXPAND */
        
        // Initialize all internal registers
        q1_out_int = INIT_Q1;
        q2_out_int = INIT_Q2;
        q1_out_pipelined = INIT_Q1;
        q2_out_same_edge_int = INIT_Q2;
        q1_out = INIT_Q1;
        q2_out = INIT_Q2;
    end
    
    /* verilator lint_off WIDTHEXPAND */
    
    // Positive edge clocked logic - handles Q1 path and pipelining
    always @(posedge c_in or posedge r_in or posedge s_in) begin
        if (r_in == 1'b1 && SRTYPE == "ASYNC") begin
            q1_out_int <= 1'b0;
            q1_out_pipelined <= 1'b0;
            q2_out_same_edge_int <= 1'b0;
        end
        else if (s_in == 1'b1 && SRTYPE == "ASYNC") begin
            q1_out_int <= 1'b1;
            q1_out_pipelined <= 1'b1;
            q2_out_same_edge_int <= 1'b1;
        end
        else begin // Positive clock edge
            if (r_in == 1'b1 && SRTYPE == "SYNC") begin
                q1_out_int <= 1'b0;
                q1_out_pipelined <= 1'b0;
                q2_out_same_edge_int <= 1'b0;
            end
            else if (s_in == 1'b1 && SRTYPE == "SYNC") begin
                q1_out_int <= 1'b1;
                q1_out_pipelined <= 1'b1;
                q2_out_same_edge_int <= 1'b1;
            end
            else if (ce_in == 1'b1) begin
                q1_out_int <= d_in;
                q1_out_pipelined <= q1_out_int;  // Pipeline previous value
                q2_out_same_edge_int <= q2_out_int; // Capture previous Q2 for same edge
            end
        end
    end
    
    // Negative edge clocked logic - handles Q2 path for opposite edge
    always @(negedge c_in or posedge r_in or posedge s_in) begin
        if (r_in == 1'b1 && SRTYPE == "ASYNC") begin
            q2_out_int <= 1'b0;
        end
        else if (s_in == 1'b1 && SRTYPE == "ASYNC") begin
            q2_out_int <= 1'b1;
        end
        else begin // Negative clock edge
            if (r_in == 1'b1 && SRTYPE == "SYNC") begin
                q2_out_int <= 1'b0;
            end
            else if (s_in == 1'b1 && SRTYPE == "SYNC") begin
                q2_out_int <= 1'b1;
            end
            else if (ce_in == 1'b1) begin
                q2_out_int <= d_in;
            end
        end
    end
    
    // Output multiplexing based on DDR_CLK_EDGE parameter
    // This combinational logic updates outputs when internal registers change
    always @(q1_out_int or q2_out_int or q2_out_same_edge_int or q1_out_pipelined) begin
        case (DDR_CLK_EDGE)
            "OPPOSITE_EDGE" : begin
                q1_out = q1_out_int;      // Positive edge data
                q2_out = q2_out_int;      // Negative edge data
            end
            "SAME_EDGE" : begin
                q1_out = q1_out_int;              // Positive edge data
                q2_out = q2_out_same_edge_int;    // Previous positive edge data
            end
            "SAME_EDGE_PIPELINED" : begin
                q1_out = q1_out_pipelined;        // Pipelined positive edge data
                q2_out = q2_out_same_edge_int;    // Previous positive edge data
            end
            default : begin
                q1_out = 1'bx;
                q2_out = 1'bx;
                $display("Attribute Syntax Error : The attribute DDR_CLK_EDGE on IDDR instance %m is set to %s.  Legal values for this attribute are OPPOSITE_EDGE, SAME_EDGE or SAME_EDGE_PIPELINED.", DDR_CLK_EDGE);
                $finish;
            end
        endcase
    end
    
    /* verilator lint_on WIDTHEXPAND */

endmodule // IDDR