#define DBG_IOMEM_IOC_MAGIC 	0x73

#define DBG_IOMEM_IOC_IOREAD32	_IOWR(DBG_IOMEM_IOC_MAGIC, 0xA2, int)
#define DBG_IOMEM_IOC_IOWRITE32	_IOWR(DBG_IOMEM_IOC_MAGIC, 0xA3, int)

#define BASE_RXI300              0xB8082000
#define BASE_PERF_G0             0xB8082100
#define BASE_PERF_G1             0xB8082200

#define DESIGN_NAME_OFT          0x000
#define IMPL_YEAR_OFT            0x010
#define IMPL_DATE_OFT            0x014

#define GLOBAL_MON_TW_SIZE_OFT   0x080
#define GLOBAL_MON_CTRL0_OFT     0x084
#define GLOBAL_MON_CTRL1_OFT     0x088

#define MON_SHARE_OFT            0x100
#define MON_SHARE_UNIT           0x100

#define MON_PRESENT_OFT          0x000
#define MON_ENABLE_OFT           0x004
#define MON_ENABLE_TRACE_OFT     0x008
#define MON_INTR_OFT             0x00C
#define MON_INTR_CLR_OFT         0x010
#define MON_STATUS_OFT           0x014

#define MON_PRIVATE_OFT          0x020
#define MON_PRIVATE_UNIT         0x020

#define MON_EVENT_OFT            0x000
#define MON_TAGID_OFT            0x004
#define MON_BLEN_MASK_OFT        0x008
#define MON_REG0_OFT             0x00C
#define MON_REG1_OFT             0x010

#define ARBITER_CTRL_OFT	0xA0
#define ARB_XB0_CTRL0_OFT	0x00
#define ARB_XB0_CTRL1_OFT	0x04
#define ARB_XB0_CTRL2_OFT	0x08
#define ARB_XB0_CTRL3_OFT	0x0C
#define ARB_XB1_CTRL0_OFT	0x10
#define ARB_XB1_CTRL1_OFT	0x14


#define DESIGN_NAME_ADR	(BASE_RXI300 +  DESIGN_NAME_OFT)
#define IMPL_YEAR_ADR            (BASE_RXI300 +  IMPL_YEAR_OFT)
#define IMPL_DATE_ADR            (BASE_RXI300 +  IMPL_DATE_OFT)

#define ARB_XB0_CTRL0_ADDR	(BASE_RXI300 + ARBITER_CTRL_OFT + ARB_XB0_CTRL0_OFT)
#define ARB_XB0_CTRL1_ADDR	(BASE_RXI300 + ARBITER_CTRL_OFT + ARB_XB0_CTRL1_OFT)
#define ARB_XB0_CTRL2_ADDR	(BASE_RXI300 + ARBITER_CTRL_OFT + ARB_XB0_CTRL2_OFT)
#define ARB_XB0_CTRL3_ADDR	(BASE_RXI300 + ARBITER_CTRL_OFT + ARB_XB0_CTRL3_OFT)
#define ARB_XB1_CTRL0_ADDR	(BASE_RXI300 + ARBITER_CTRL_OFT + ARB_XB1_CTRL0_OFT)
#define ARB_XB1_CTRL1_ADDR	(BASE_RXI300 + ARBITER_CTRL_OFT + ARB_XB1_CTRL1_OFT)

#define GLOBAL_MON_TW_SIZE_ADR   (BASE_RXI300 +  GLOBAL_MON_TW_SIZE_OFT)
#define GLOBAL_MON_CTRL0_ADR     (BASE_RXI300 +  GLOBAL_MON_CTRL0_OFT)
#define GLOBAL_MON_CTRL1_ADR     (BASE_RXI300 +  GLOBAL_MON_CTRL1_OFT)

#define MON_G0_PRESENT_ADR       (BASE_PERF_G0 +  MON_PRESENT_OFT)
#define MON_G0_ENABLE_ADR        (BASE_PERF_G0 +  MON_ENABLE_OFT)
#define MON_G0_ENABLE_TRACE_ADR  (BASE_PERF_G0 +  MON_ENABLE_TRACE_OFT)
#define MON_G0_INTR_ADR          (BASE_PERF_G0 +  MON_INTR_OFT)
#define MON_G0_INTR_CLR_ADR      (BASE_PERF_G0 +  MON_INTR_CLR_OFT)
#define MON_G0_STATUS_ADR        (BASE_PERF_G0 +  MON_STATUS_OFT)

#define MON_G0_0_EVENT_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (0 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G0_0_TAGID_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (0 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G0_0_BLEN_MASK_ADR   (BASE_PERF_G0 +  MON_PRIVATE_OFT + (0 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G0_0_REG0_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (0 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G0_0_REG1_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (0 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G0_1_EVENT_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (1 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G0_1_TAGID_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (1 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G0_1_BLEN_MASK_ADR   (BASE_PERF_G0 +  MON_PRIVATE_OFT + (1 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G0_1_REG0_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (1 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G0_1_REG1_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (1 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G0_2_EVENT_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (2 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G0_2_TAGID_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (2 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G0_2_BLEN_MASK_ADR   (BASE_PERF_G0 +  MON_PRIVATE_OFT + (2 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G0_2_REG0_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (2 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G0_2_REG1_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (2 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)
#define MON_G0_3_EVENT_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (3 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G0_3_TAGID_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (3 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G0_3_BLEN_MASK_ADR   (BASE_PERF_G0 +  MON_PRIVATE_OFT + (3 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G0_3_REG0_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (3 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G0_3_REG1_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (3 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G0_4_EVENT_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (4 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G0_4_TAGID_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (4 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G0_4_BLEN_MASK_ADR   (BASE_PERF_G0 +  MON_PRIVATE_OFT + (4 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G0_4_REG0_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (4 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G0_4_REG1_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (4 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G0_5_EVENT_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (5 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G0_5_TAGID_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (5 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G0_5_BLEN_MASK_ADR   (BASE_PERF_G0 +  MON_PRIVATE_OFT + (5 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G0_5_REG0_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (5 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G0_5_REG1_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (5 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)
#define MON_G0_6_EVENT_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (6 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G0_6_TAGID_ADR       (BASE_PERF_G0 +  MON_PRIVATE_OFT + (6 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G0_6_BLEN_MASK_ADR   (BASE_PERF_G0 +  MON_PRIVATE_OFT + (6 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G0_6_REG0_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (6 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G0_6_REG1_ADR        (BASE_PERF_G0 +  MON_PRIVATE_OFT + (6 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G1_PRESENT_ADR       (BASE_PERF_G1 +  MON_PRESENT_OFT)
#define MON_G1_ENABLE_ADR        (BASE_PERF_G1 +  MON_ENABLE_OFT)
#define MON_G1_ENABLE_TRACE_ADR  (BASE_PERF_G1 +  MON_ENABLE_TRACE_OFT)
#define MON_G1_INTR_ADR          (BASE_PERF_G1 +  MON_INTR_OFT)
#define MON_G1_INTR_CLR_ADR      (BASE_PERF_G1 +  MON_INTR_CLR_OFT)
#define MON_G1_STATUS_ADR        (BASE_PERF_G1 +  MON_STATUS_OFT)

#define MON_G1_0_EVENT_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (0 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G1_0_TAGID_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (0 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G1_0_BLEN_MASK_ADR   (BASE_PERF_G1 +  MON_PRIVATE_OFT + (0 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G1_0_REG0_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (0 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G1_0_REG1_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (0 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G1_1_EVENT_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (1 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G1_1_TAGID_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (1 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G1_1_BLEN_MASK_ADR   (BASE_PERF_G1 +  MON_PRIVATE_OFT + (1 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G1_1_REG0_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (1 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G1_1_REG1_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (1 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G1_2_EVENT_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (2 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G1_2_TAGID_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (2 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G1_2_BLEN_MASK_ADR   (BASE_PERF_G1 +  MON_PRIVATE_OFT + (2 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G1_2_REG0_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (2 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G1_2_REG1_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (2 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G1_3_EVENT_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (3 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G1_3_TAGID_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (3 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G1_3_BLEN_MASK_ADR   (BASE_PERF_G1 +  MON_PRIVATE_OFT + (3 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G1_3_REG0_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (3 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G1_3_REG1_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (3 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G1_4_EVENT_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (4 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G1_4_TAGID_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (4 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G1_4_BLEN_MASK_ADR   (BASE_PERF_G1 +  MON_PRIVATE_OFT + (4 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G1_4_REG0_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (4 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G1_4_REG1_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (4 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G1_5_EVENT_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (5 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G1_5_TAGID_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (5 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G1_5_BLEN_MASK_ADR   (BASE_PERF_G1 +  MON_PRIVATE_OFT + (5 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G1_5_REG0_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (5 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G1_5_REG1_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (5 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define MON_G1_6_EVENT_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (6 * MON_PRIVATE_UNIT) +  MON_EVENT_OFT)
#define MON_G1_6_TAGID_ADR       (BASE_PERF_G1 +  MON_PRIVATE_OFT + (6 * MON_PRIVATE_UNIT) +  MON_TAGID_OFT)
#define MON_G1_6_BLEN_MASK_ADR   (BASE_PERF_G1 +  MON_PRIVATE_OFT + (6 * MON_PRIVATE_UNIT) +  MON_BLEN_MASK_OFT)
#define MON_G1_6_REG0_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (6 * MON_PRIVATE_UNIT) +  MON_REG0_OFT)
#define MON_G1_6_REG1_ADR        (BASE_PERF_G1 +  MON_PRIVATE_OFT + (6 * MON_PRIVATE_UNIT) +  MON_REG1_OFT)

#define RES_HANDSHAKE             1
#define RES_LAST_HANDSHAKE        2
#define RES_NLAST_HANDSHAKE       3
#define RES_STALL                 4
#define DHS_HANDSHAKE             5
#define DHS_LAST_HANDSHAKE        6
#define DHS_NLAST_HANDSHAKE       7
#define DHS_STALL                 8
#define SPECIAL_EVENT             12
#define TRAN_LTCY                 13
#define REQ_LTCY                  14
#define REQAPT2RESP               15
#define RD_TRAN_CNT               16
#define WR_TRAN_CNT               17
