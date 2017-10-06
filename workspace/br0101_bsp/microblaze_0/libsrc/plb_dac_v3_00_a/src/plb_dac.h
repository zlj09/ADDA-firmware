/*****************************************************************************
* Filename:          F:\Programs\Verilog\FPGA_Group\test_br0101\microblaze/drivers/plb_dac_v3_00_a/src/plb_dac.h
* Version:           3.00.a
* Description:       plb_dac Driver Header File
* Date:              Sun Oct 01 10:29:31 2017 (by Create and Import Peripheral Wizard)
*****************************************************************************/

#ifndef PLB_DAC_H
#define PLB_DAC_H

/***************************** Include Files *******************************/

#include "xbasic_types.h"
#include "xstatus.h"
#include "xil_io.h"

/************************** Constant Definitions ***************************/


/**
 * User Logic Slave Space Offsets
 * -- SLV_REG0 : user logic slave module register 0
 * -- SLV_REG1 : user logic slave module register 1
 * -- SLV_REG2 : user logic slave module register 2
 * -- SLV_REG3 : user logic slave module register 3
 * -- SLV_REG4 : user logic slave module register 4
 * -- SLV_REG5 : user logic slave module register 5
 * -- SLV_REG6 : user logic slave module register 6
 */
#define PLB_DAC_USER_SLV_SPACE_OFFSET (0x00000000)
#define PLB_DAC_SLV_REG0_OFFSET (PLB_DAC_USER_SLV_SPACE_OFFSET + 0x00000000)
#define PLB_DAC_SLV_REG1_OFFSET (PLB_DAC_USER_SLV_SPACE_OFFSET + 0x00000004)
#define PLB_DAC_SLV_REG2_OFFSET (PLB_DAC_USER_SLV_SPACE_OFFSET + 0x00000008)
#define PLB_DAC_SLV_REG3_OFFSET (PLB_DAC_USER_SLV_SPACE_OFFSET + 0x0000000C)
#define PLB_DAC_SLV_REG4_OFFSET (PLB_DAC_USER_SLV_SPACE_OFFSET + 0x00000010)
#define PLB_DAC_SLV_REG5_OFFSET (PLB_DAC_USER_SLV_SPACE_OFFSET + 0x00000014)
#define PLB_DAC_SLV_REG6_OFFSET (PLB_DAC_USER_SLV_SPACE_OFFSET + 0x00000018)

/**
 * Software Reset Space Register Offsets
 * -- RST : software reset register
 */
#define PLB_DAC_SOFT_RST_SPACE_OFFSET (0x00000100)
#define PLB_DAC_RST_REG_OFFSET (PLB_DAC_SOFT_RST_SPACE_OFFSET + 0x00000000)

/**
 * Software Reset Masks
 * -- SOFT_RESET : software reset
 */
#define SOFT_RESET (0x0000000A)

/**************************** Type Definitions *****************************/


/***************** Macros (Inline Functions) Definitions *******************/

/**
 *
 * Write a value to a PLB_DAC register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the PLB_DAC device.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void PLB_DAC_mWriteReg(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Data)
 *
 */
#define PLB_DAC_mWriteReg(BaseAddress, RegOffset, Data) \
 	Xil_Out32((BaseAddress) + (RegOffset), (Xuint32)(Data))

/**
 *
 * Read a value from a PLB_DAC register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the PLB_DAC device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	Xuint32 PLB_DAC_mReadReg(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define PLB_DAC_mReadReg(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (RegOffset))


/**
 *
 * Write/Read 32 bit value to/from PLB_DAC user logic slave registers.
 *
 * @param   BaseAddress is the base address of the PLB_DAC device.
 * @param   RegOffset is the offset from the slave register to write to or read from.
 * @param   Value is the data written to the register.
 *
 * @return  Data is the data from the user logic slave register.
 *
 * @note
 * C-style signature:
 * 	void PLB_DAC_mWriteSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Value)
 * 	Xuint32 PLB_DAC_mReadSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define PLB_DAC_mWriteSlaveReg0(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (PLB_DAC_SLV_REG0_OFFSET) + (RegOffset), (Xuint32)(Value))
#define PLB_DAC_mWriteSlaveReg1(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (PLB_DAC_SLV_REG1_OFFSET) + (RegOffset), (Xuint32)(Value))
#define PLB_DAC_mWriteSlaveReg2(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (PLB_DAC_SLV_REG2_OFFSET) + (RegOffset), (Xuint32)(Value))
#define PLB_DAC_mWriteSlaveReg3(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (PLB_DAC_SLV_REG3_OFFSET) + (RegOffset), (Xuint32)(Value))
#define PLB_DAC_mWriteSlaveReg4(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (PLB_DAC_SLV_REG4_OFFSET) + (RegOffset), (Xuint32)(Value))
#define PLB_DAC_mWriteSlaveReg5(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (PLB_DAC_SLV_REG5_OFFSET) + (RegOffset), (Xuint32)(Value))
#define PLB_DAC_mWriteSlaveReg6(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (PLB_DAC_SLV_REG6_OFFSET) + (RegOffset), (Xuint32)(Value))

#define PLB_DAC_mReadSlaveReg0(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (PLB_DAC_SLV_REG0_OFFSET) + (RegOffset))
#define PLB_DAC_mReadSlaveReg1(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (PLB_DAC_SLV_REG1_OFFSET) + (RegOffset))
#define PLB_DAC_mReadSlaveReg2(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (PLB_DAC_SLV_REG2_OFFSET) + (RegOffset))
#define PLB_DAC_mReadSlaveReg3(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (PLB_DAC_SLV_REG3_OFFSET) + (RegOffset))
#define PLB_DAC_mReadSlaveReg4(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (PLB_DAC_SLV_REG4_OFFSET) + (RegOffset))
#define PLB_DAC_mReadSlaveReg5(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (PLB_DAC_SLV_REG5_OFFSET) + (RegOffset))
#define PLB_DAC_mReadSlaveReg6(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (PLB_DAC_SLV_REG6_OFFSET) + (RegOffset))

/**
 *
 * Write/Read 32 bit value to/from PLB_DAC user logic memory (BRAM).
 *
 * @param   Address is the memory address of the PLB_DAC device.
 * @param   Data is the value written to user logic memory.
 *
 * @return  The data from the user logic memory.
 *
 * @note
 * C-style signature:
 * 	void PLB_DAC_mWriteMemory(Xuint32 Address, Xuint32 Data)
 * 	Xuint32 PLB_DAC_mReadMemory(Xuint32 Address)
 *
 */
#define PLB_DAC_mWriteMemory(Address, Data) \
 	Xil_Out32(Address, (Xuint32)(Data))
#define PLB_DAC_mReadMemory(Address) \
 	Xil_In32(Address)

/**
 *
 * Reset PLB_DAC via software.
 *
 * @param   BaseAddress is the base address of the PLB_DAC device.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void PLB_DAC_mReset(Xuint32 BaseAddress)
 *
 */
#define PLB_DAC_mReset(BaseAddress) \
 	Xil_Out32((BaseAddress)+(PLB_DAC_RST_REG_OFFSET), SOFT_RESET)

/************************** Function Prototypes ****************************/


/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the PLB_DAC instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus PLB_DAC_SelfTest(void * baseaddr_p);

#endif /** PLB_DAC_H */
