library verilog;
use verilog.vl_types.all;
entity user_logic is
    generic(
        DAC_WIDTH       : integer := 10;
        C_SLV_DWIDTH    : integer := 32;
        C_NUM_REG       : integer := 2
    );
    port(
        IP2DAC_Data     : out    vl_logic_vector;
        IP2DAC_DCLKIO   : out    vl_logic;
        IP2DAC_Clkout   : out    vl_logic;
        IP2DAC_PinMD    : out    vl_logic;
        IP2DAC_ClkMD    : out    vl_logic;
        IP2DAC_Format   : out    vl_logic;
        IP2DAC_PWRDN    : out    vl_logic;
        Bus2IP_Clk      : in     vl_logic;
        Bus2IP_Reset    : in     vl_logic;
        Bus2IP_Data     : in     vl_logic_vector;
        Bus2IP_BE       : in     vl_logic_vector;
        Bus2IP_RdCE     : in     vl_logic_vector;
        Bus2IP_WrCE     : in     vl_logic_vector;
        IP2Bus_Data     : out    vl_logic_vector;
        IP2Bus_RdAck    : out    vl_logic;
        IP2Bus_WrAck    : out    vl_logic;
        IP2Bus_Error    : out    vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of DAC_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of C_SLV_DWIDTH : constant is 1;
    attribute mti_svvh_generic_type of C_NUM_REG : constant is 1;
end user_logic;
