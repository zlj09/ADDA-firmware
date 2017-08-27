always @( posedge Bus2IP_Clk )
					    if ( slv_reg_write_sel == 5'b00010)
					      spi_start_flag <= 1'b1;
					    else 
					      spi_start_flag <= 1'b0;
					 
					 always @( posedge Bus2IP_Clk )
					    if ( Bus2IP_Reset == 1 )
					      state_reg <= 3'd0;
					    else begin
					      case ( state_reg )
					        3'd0 : state_reg <= (slv_reg0[0]) ? (3'd1) : (3'd0);
					        3'd1 : state_reg <= 3'd0;
					        3'd2 : state_reg <= 3'd0;
					        3'd3 : state_reg <= 3'd0;
					        3'd4 : state_reg <= 3'd0;
					        default : state_reg <= 3'd0;
					      endcase
					    end
					  always @(posedge Bus2IP_Clk)
					    begin
					      if (Bus2IP_Reset == 1)
					        sclk_reg <= 1'b1;
					      else 
					        sclk_reg <= ~sclk_reg;
					    end
					  always @( posedge Bus2IP_Clk )
					    if ( Bus2IP_Reset == 1 )
					      spi_state <= 2'd0;
					    else begin
					      case ( spi_state )
					        2'd0 : begin
					            if (slv_reg_write_sel == 5'b00010) begin
					              spi_state <= (Bus2IP_Data[24]) ? (2'd2) : (2'd3);
					              slv_reg0[1] <= 1'b1;
					            end
					          end
					        2'd2 : begin
					            if (spi_cnt == 5'd16) begin
					              spi_state <= 2'd0;
					              slv_reg0[1] <= 1'b0;
					            end
					          end
					        3'd3 : begin
					            if (spi_cnt == 5'd16) begin
					              spi_state <= 2'd0;
					              slv_reg0[1] <= 1'b0;
					            end
					          end
					        default : begin
					            spi_state <= spi_state;
					            slv_reg0 <= slv_reg0;
					        end
					      endcase
					    end
