library verilog;
use verilog.vl_types.all;
entity bram_arb is
    port(
        clka            : in     vl_logic;
        wea             : in     vl_logic_vector(0 downto 0);
        addra           : in     vl_logic_vector(15 downto 0);
        dina            : in     vl_logic_vector(9 downto 0);
        douta           : out    vl_logic_vector(9 downto 0)
    );
end bram_arb;
