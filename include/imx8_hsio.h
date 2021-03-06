/*
 * Copyright (C) 2016 Freescale Semiconductor, Inc. All Rights Reserved.
 */
/*
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */

#ifndef _IMX8_HSIO_H_
#define _IMX8_HSIO_H_

#define PCIEA_CFG_CPU_BASE	0x60000000
#define PCIEA_CFG_PCI_BASE	0x40000000
#define PCIEB_CFG_CPU_BASE	0x70000000
#define PCIEB_CFG_PCI_BASE	0x80000000
#define PCIE_CFG_MEM_SIZE	0x4000

#define PCIE_DBI_BASE_ADDR	0x5f000000
#define PCIE_CTRLA_BASE_ADDR	PCIE_DBI_BASE_ADDR
#define PCIE_CTRLB_BASE_ADDR	(PCIE_DBI_BASE_ADDR + 0x10000)

/* For 8DV */
#define DEVICE_TYPE_RC		BIT(14)
#define REFCLK_SEL		BIT(4)
#define CMN_REG_RST		BIT(3)

#define HSIO_BASE_ADDR                  0x5F070000
#define HSIO_GPR_PCIE_CTRL0_ADDR	(HSIO_BASE_ADDR + 0x00000000)
#define HSIO_GPR_PCIE_CTRL1_ADDR	(HSIO_BASE_ADDR + 0x00000004)
#define HSIO_GPR_PCIE_STATUS0_ADDR	(HSIO_BASE_ADDR + 0x00000008)

/* For 8QM */
#define AHCI_BASE_ADDR			0x5F020000
#define HW_SATA_CTRL0_ADDR		(HSIO_CRR_BASE_ADDR + 0x00040000)
#define HW_SATA_CTRL0_ADDR_MASK		0x000017fb
#define HW_SATA_CTRL0_ADDR_RESET	0x0
#define HW_SATA_CTRL0_PHY_FOMREQ	BIT(0)
#define HW_SATA_CTRL0_PHY_PMA_DRVN	BIT(1)
#define HW_SATA_CTRL0_EPCS_SKIPBIT	BIT(3)
#define HW_SATA_CTRL0_EPCS_RXERR	BIT(4)
#define HW_SATA_CTRL0_EPCS_TXDEEMP	BIT(5)
#define HW_SATA_CTRL0_EPCS_TXDEEMP_SEL	BIT(6)
#define HW_SATA_CTRL0_PHY_RESET		BIT(7)
#define HW_SATA_CTRL0_EPCS_PHYRESET_SEL	BIT(8)
#define HW_SATA_CTRL0_EPCS_RXOOB	BIT(9)
#define HW_SATA_CTRL0_EPCS_RXOOB_SEL	BIT(10)
#define HW_SATA_CTRL0_RESET		BIT(12)

#define HSIO_LPCG_BASE_ADDR		0x5F050000
#define HSIO_GPIO_BASE_ADDR		0x5F170000

#define GPR_LPCG_PCIEA_CTRL_MSTR_ACLK (HSIO_LPCG_BASE_ADDR + 0x00000000)
#define GPR_LPCG_PCIEB_CTRL_MSTR_ACLK (HSIO_LPCG_BASE_ADDR + 0x00010000)
#define GPR_LPCG_PHYX2APB_0_APB       (HSIO_LPCG_BASE_ADDR + 0x00030000)
#define GPR_LPCG_PHYX1_APB            (HSIO_LPCG_BASE_ADDR + 0x00040000)
#define GPR_LPCG_CRR_0                (HSIO_LPCG_BASE_ADDR + 0x00050000)
#define GPR_LPCG_CRR_1                (HSIO_LPCG_BASE_ADDR + 0x00060000)
#define GPR_LPCG_CRR_2                (HSIO_LPCG_BASE_ADDR + 0x00070000)
#define GPR_LPCG_CRR_3                (HSIO_LPCG_BASE_ADDR + 0x00080000)
#define GPR_LPCG_CRR_4                (HSIO_LPCG_BASE_ADDR + 0x00090000)
#define GPR_LPCG_CRR_5                (HSIO_LPCG_BASE_ADDR + 0x000a0000)
#define GPR_LPCG_GPIO                 (HSIO_LPCG_BASE_ADDR + 0x000b0000)

#define HSIO_CRR_BASE_ADDR		0x5F110000

#define HW_PHYX2_CTRL0_ADDR		(HSIO_CRR_BASE_ADDR + 0x00000000)
#define HW_PHYX2_CTRL0_APB_RSTN_0	BIT(0)
#define HW_PHYX2_CTRL0_APB_RSTN_1	BIT(1)
#define HW_PHYX2_CTRL0_PIPE_LN2LK_MASK	(0xF << 13)
#define HW_PHYX2_CTRL0_PIPE_LN2LK_0	BIT(13)
#define HW_PHYX2_CTRL0_PIPE_LN2LK_1	BIT(14)
#define HW_PHYX2_CTRL0_PIPE_LN2LK_2	BIT(15)
#define HW_PHYX2_CTRL0_PIPE_LN2LK_3	BIT(16)

#define HW_PHYX2_STTS0_ADDR		(HSIO_CRR_BASE_ADDR + 0x00000004)
#define HW_PHYX2_STTS0_LANE0_TX_PLL_LOCK	BIT(4)
#define HW_PHYX2_STTS0_LANE1_TX_PLL_LOCK	BIT(12)

#define HW_PHYX1_CTRL0_ADDR		(HSIO_CRR_BASE_ADDR + 0x00010000)
#define HW_PHYX1_CTRL0_APB_RSTN		BIT(0)
#define HW_PHYX1_CTRL0_PIPE_LN2LK_MASK  (0xF << 13)
#define HW_PHYX1_CTRL0_PIPE_LN2LK_0     BIT(13)
#define HW_PHYX1_CTRL0_PIPE_LN2LK_1     BIT(14)
#define HW_PHYX1_CTRL0_PIPE_LN2LK_2     BIT(15)
#define HW_PHYX1_CTRL0_PIPE_LN2LK_3     BIT(16)

#define HW_PHYX1_STTS0_ADDR		(HSIO_CRR_BASE_ADDR + 0x00010004)
#define HW_PHYX1_STTS0_LANE0_TX_PLL_LOCK	BIT(4)
#define HW_PHYX1_STTS0_LANE0_RX_PLL_LOCK	BIT(5)

#define HW_MISC_CTRL0_ADDR		(HSIO_CRR_BASE_ADDR + 0x00050000)
#define HW_MISC_CTRL0_IOB_RXENA		BIT(0)
#define HW_MISC_CTRL0_IOB_TXENA		BIT(1)
#define HW_MISC_CTRL0_FAST_INIT		BIT(11)
#define HW_MISC_CTRL0_PHY_X1_EPCS_SEL	BIT(12)
#define HW_MISC_CTRL0_PCIE_AB_SELECT	BIT(13)

#define HW_PCIEX2_CTRL0_ADDR			(HSIO_CRR_BASE_ADDR + 0x00020000)
#define HW_PCIEX2_CTRL0_DEVICE_TYPE_MASK	(0xF << 24)
#define HW_PCIEX2_CTRL0_DEVICE_TYPE_RC		BIT(26)

#define HW_PCIEX2_CTRL2_ADDR			(HSIO_CRR_BASE_ADDR + 0x00020008)
#define HW_PCIEX2_CTRL2_APP_LTSSM_ENABLE	BIT(4)
#define HW_PCIEX2_CTRL2_BUTTON_RST_N		BIT(21)
#define HW_PCIEX2_CTRL2_PERST_N			BIT(22)
#define HW_PCIEX2_CTRL2_POWER_UP_RST_N		BIT(23)

#define HW_PCIEX2_STTS0_ADDR		(HSIO_CRR_BASE_ADDR + 0x0002000C)
#define HW_PCIEX2_STTS0_PM_REQ_CORE_RST BIT(19)

#define HW_PCIEX1_CTRL0_ADDR		(HSIO_CRR_BASE_ADDR + 0x00030000)
#define HW_PCIEX1_CTRL0_DEVICE_TYPE_MASK	(0xF << 24)
#define HW_PCIEX1_CTRL0_DEVICE_TYPE_RC		BIT(26)

#define HW_PCIEX1_CTRL2_ADDR		(HSIO_CRR_BASE_ADDR + 0x00030008)
#define HW_PCIEX1_CTRL2_APP_LTSSM_ENABLE	BIT(4)
#define HW_PCIEX1_CTRL2_BUTTON_RST_N		BIT(21)
#define HW_PCIEX1_CTRL2_PERST_N			BIT(22)
#define HW_PCIEX1_CTRL2_POWER_UP_RST_N		BIT(23)

#define HW_PCIEX1_STTS0_ADDR		(HSIO_CRR_BASE_ADDR + 0x0003000c)
#define HW_PCIEX1_STTS0_PM_REQ_CORE_RST BIT(19)

/* PCIe Port Logic registers (memory-mapped) */
#define PF0_PORT_LOGIC			(PCIE_CTRLA_BASE_ADDR + 0x700)
#define PF1_PORT_LOGIC			(PCIE_CTRLB_BASE_ADDR + 0x700)

#define PORT0_LINK_CTRL			(PF0_PORT_LOGIC + 0x10)
#define PORT1_LINK_CTRL			(PF1_PORT_LOGIC + 0x10)
#define PORT_LINK_CTRL_LNK_EN_MASK	(0x3F << 16)
#define PORT_LINK_CTRL_LNK_LANE1	(0x1 << 16)
#define PORT_LINK_CTRL_LNK_LANE2	(0x3 << 16)
#define PORT_LINK_CTRL_LNK_FAST_LNK	BIT(7)

#define PORT0_LINK_DEBUG1		(PF0_PORT_LOGIC + 0x2C)
#define PORT1_LINK_DEBUG1		(PF1_PORT_LOGIC + 0x2C)
#define PORT_LINK_DEBUG1_LINK_UP	BIT(4)

#define PORT0_GEN2_CTRL			(PF0_PORT_LOGIC + 0x10C)
#define PORT1_GEN2_CTRL			(PF1_PORT_LOGIC + 0x10C)
#define PORT_GEN2_CTRL_NUM_LANES_MASK	(0xFF << 8)
#define PORT_GEN2_CTRL_NUM_LANES_1	(0x1 << 8)
#define PORT_GEN2_CTRL_NUM_LANES_2	(0x2 << 8)

#define PORT0_MISC_CONTROL_1		(PF0_PORT_LOGIC + 0x1BC)
#define PORT1_MISC_CONTROL_1		(PF1_PORT_LOGIC + 0x1BC)

#define PORT0_DBI_LNK_STS_CTRL2		(PCIE_CTRLA_BASE_ADDR + 0xA0)

#define PF0_TYPE1_HDR			(PCIE_CTRLA_BASE_ADDR + 0x0)
#define PF0_TYPE1_STATUS_COMMAND_REG	(PF0_TYPE1_HDR + 0x4)
#define PF1_TYPE1_HDR			(PCIE_CTRLB_BASE_ADDR + 0x0)
#define PF1_TYPE1_STATUS_COMMAND_REG	(PF1_TYPE1_HDR + 0x4)

#define PF0_PCIE_CAP				(PCIE_CTRLA_BASE_ADDR + 0x70)
#define PF0_LINK_CONTROL_LINK_STATUS_REG	(PF0_PCIE_CAP + 0x10)
#define PF1_PCIE_CAP				(PCIE_CTRLB_BASE_ADDR + 0x70)
#define PF1_LINK_CONTROL_LINK_STATUS_REG	(PF1_PCIE_CAP + 0x10)

#define PF0_SPICE_CAP			(PCIE_CTRLA_BASE_ADDR + 0x148)
#define PF0_SPCIE_CAP_OFF_0CH_REG	(PF0_SPICE_CAP + 0xC)
#define PF1_SPICE_CAP			(PCIE_CTRLB_BASE_ADDR + 0x148)
#define PF1_SPCIE_CAP_OFF_0CH_REG	(PF1_SPICE_CAP + 0xC)

/* iATU registers */
#define PCIE0_ATU_VIEWPORT		(PCIE_CTRLA_BASE_ADDR + 0x900)
#define PCIE1_ATU_VIEWPORT		(PCIE_CTRLB_BASE_ADDR + 0x900)
#define PCIE_ATU_REGION_INBOUND		(0x1 << 31)
#define PCIE_ATU_REGION_OUTBOUND	(0x0 << 31)
#define PCIE_ATU_REGION_INDEX1		(0x1 << 0)
#define PCIE_ATU_REGION_INDEX0		(0x0 << 0)
#define PCIE0_ATU_CR1			(PCIE_CTRLA_BASE_ADDR + 0x904)
#define PCIE1_ATU_CR1			(PCIE_CTRLB_BASE_ADDR + 0x904)
#define PCIE_ATU_TYPE_MEM		(0x0 << 0)
#define PCIE_ATU_TYPE_IO		(0x2 << 0)
#define PCIE_ATU_TYPE_CFG0		(0x4 << 0)
#define PCIE_ATU_TYPE_CFG1		(0x5 << 0)
#define PCIE0_ATU_CR2			(PCIE_CTRLA_BASE_ADDR + 0x908)
#define PCIE1_ATU_CR2			(PCIE_CTRLB_BASE_ADDR + 0x908)
#define PCIE_ATU_ENABLE			(0x1 << 31)
#define PCIE_ATU_BAR_MODE_ENABLE	(0x1 << 30)
#define PCIE0_ATU_LOWER_BASE	        (PCIE_CTRLA_BASE_ADDR + 0x90C)
#define PCIE0_ATU_UPPER_BASE	        (PCIE_CTRLA_BASE_ADDR + 0x910)
#define PCIE0_ATU_LIMIT		        (PCIE_CTRLA_BASE_ADDR + 0x914)
#define PCIE0_ATU_LOWER_TARGET		(PCIE_CTRLA_BASE_ADDR + 0x918)
#define PCIE0_ATU_UPPER_TARGET		(PCIE_CTRLA_BASE_ADDR + 0x91C)
#define PCIE1_ATU_LOWER_BASE	        (PCIE_CTRLB_BASE_ADDR + 0x90C)
#define PCIE1_ATU_UPPER_BASE	        (PCIE_CTRLB_BASE_ADDR + 0x910)
#define PCIE1_ATU_LIMIT		        (PCIE_CTRLB_BASE_ADDR + 0x914)
#define PCIE1_ATU_LOWER_TARGET		(PCIE_CTRLB_BASE_ADDR + 0x918)
#define PCIE1_ATU_UPPER_TARGET		(PCIE_CTRLB_BASE_ADDR + 0x91C)

#define  PCI_COMMAND_IO		0x1 /* Enable response in I/O space */
#define  PCI_COMMAND_MEMORY	0x2 /* Enable response in Memory space */
#define  PCI_COMMAND_MASTER	0x4 /* Enable bus mastering */

#define pcie_readl(x)			readl((unsigned long)x)
#define pcie_writel(v, c)		writel(v, (unsigned long)c)
#define pcie_clrbits_le32(addr, clear)	clrbits_le32((unsigned long)addr, clear)

void mx8x_pcie_controller_reset(sc_ipc_t ipc, u32 SC_R_PCIE);
void mx8x_pcie_ctrla_setup_regions(void);
void mx8x_pcie_ctrlb_setup_regions(void);

void mx8dv_pcie_init(void);
void mx8qm_pcie_init(void);
void mx8qxp_pcie_init(void);

int sata_init(void);

#endif	/* _IMX8_HSIO_H_ */
