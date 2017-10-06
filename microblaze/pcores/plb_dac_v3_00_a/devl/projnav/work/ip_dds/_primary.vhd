library verilog;
use verilog.vl_types.all;
entity ip_dds is
    port(
        clk             : in     vl_logic;
        we              : in     vl_logic;
        phase_out       : out    vl_logic_vector(15 downto 0);
        cosine          : out    vl_logic_vector(9 downto 0);
        sine            : out    vl_logic_vector(9 downto 0);
        data            : in     vl_logic_vector(15 downto 0)
    );
end ip_dds;
