/*****************************************************************************
* Filename:          F:\Programs\Verilog\FPGA_Group\test_br0101\microblaze/drivers/axi_dac_v1_00_a/src/axi_dac.h
* Version:           1.00.a
* Description:       axi_dac Driver Header File
* Date:              Sun Aug 06 14:50:48 2017 (by Create and Import Peripheral Wizard)
*****************************************************************************/

#ifndef AXI_DAC_H
#define AXI_DAC_H

/***************************** Include Files *******************************/

#include "xbasic_types.h"
#include "xstatus.h"
#include "xil_io.h"

/************************** Constant Definitions ***************************/


/**
 * User Logic Slave Space Offsets
 * -- SLV_REG0 : user logic slave module register 0
 * -- SLV_REG1 : user logic slave module register 1
 */
#define AXI_DAC_USER_SLV_SPACE_OFFSET (0x00000000)
#define AXI_DAC_SLV_REG0_OFFSET (AXI_DAC_USER_SLV_SPACE_OFFSET + 0x00000000)
#define AXI_DAC_SLV_REG1_OFFSET (AXI_DAC_USER_SLV_SPACE_OFFSET + 0x00000004)

/**
 * Software Reset Space Register Offsets
 * -- RST : software reset register
 */
#define AXI_DAC_SOFT_RST_SPACE_OFFSET (0x00000100)
#define AXI_DAC_RST_REG_OFFSET (AXI_DAC_SOFT_RST_SPACE_OFFSET + 0x00000000)

/**
 * Software Reset Masks
 * -- SOFT_RESET : software reset
 */
#define SOFT_RESET (0x0000000A)

/**************************** Type Definitions *****************************/


/***************** Macros (Inline Functions) Definitions *******************/

/**
 *
 * Write a value to a AXI_DAC register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the AXI_DAC device.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void AXI_DAC_mWriteReg(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Data)
 *
 */
#define AXI_DAC_mWriteReg(BaseAddress, RegOffset, Data) \
 	Xil_Out32((BaseAddress) + (RegOffset), (Xuint32)(Data))

/**
 *
 * Read a value from a AXI_DAC register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the AXI_DAC device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	Xuint32 AXI_DAC_mReadReg(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define AXI_DAC_mReadReg(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (RegOffset))


/**
 *
 * Write/Read 32 bit value to/from AXI_DAC user logic slave registers.
 *
 * @param   BaseAddress is the base address of the AXI_DAC device.
 * @param   RegOffset is the offset from the slave register to write to or read from.
 * @param   Value is the data written to the register.
 *
 * @return  Data is the data from the user logic slave register.
 *
 * @note
 * C-style signature:
 * 	void AXI_DAC_mWriteSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Value)
 * 	Xuint32 AXI_DAC_mReadSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define AXI_DAC_mWriteSlaveReg0(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_DAC_SLV_REG0_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_DAC_mWriteSlaveReg1(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_DAC_SLV_REG1_OFFSET) + (RegOffset), (Xuint32)(Value))

#define AXI_DAC_mReadSlaveReg0(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_DAC_SLV_REG0_OFFSET) + (RegOffset))
#define AXI_DAC_mReadSlaveReg1(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_DAC_SLV_REG1_OFFSET) + (RegOffset))

/**
 *
 * Reset AXI_DAC via software.
 *
 * @param   BaseAddress is the base address of the AXI_DAC device.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void AXI_DAC_mReset(Xuint32 BaseAddress)
 *
 */
#define AXI_DAC_mReset(BaseAddress) \
 	Xil_Out32((BaseAddress)+(AXI_DAC_RST_REG_OFFSET), SOFT_RESET)

/************************** Function Prototypes ****************************/


/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the AXI_DAC instance to be worked on.
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
XStatus AXI_DAC_SelfTest(void * baseaddr_p);
/**
*  Defines the number of registers available for read and write*/
#define TEST_AXI_LITE_USER_NUM_REG 2


#endif /** AXI_DAC_H */
