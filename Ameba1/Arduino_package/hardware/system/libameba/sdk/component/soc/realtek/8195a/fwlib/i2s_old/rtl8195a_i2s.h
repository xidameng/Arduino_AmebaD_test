/*
 *  Routines to access hardware
 *
 *  Copyright (c) 2013 Realtek Semiconductor Corp.
 *
 *  This module is a confidential and proprietary property of RealTek and
 *  possession or use of this module requires written permission of RealTek.
 */


#ifndef _RTL8195A_I2S_H_
#define _RTL8195A_I2S_H_

#include "hal_api.h"

#define HAL_I2SX_READ32(I2sIndex, addr)     \
                HAL_READ32(I2S0_REG_BASE+ (I2sIndex*I2S1_REG_OFF), addr)
#define HAL_I2SX_WRITE32(I2sIndex, addr, value)     \
                HAL_WRITE32((I2S0_REG_BASE+ (I2sIndex*I2S1_REG_OFF)), addr, value)

#define REG_I2S_PAGE_OWN_OFF   0x004
#define REG_I2S_CTL            0x000
#define REG_I2S_TX_PAGE_PTR    0x004
#define REG_I2S_RX_PAGE_PTR    0x008
#define REG_I2S_SETTING        0x00C

#define REG_I2S_TX_MASK_INT    0x010
#define REG_I2S_TX_STATUS_INT  0x014
#define REG_I2S_RX_MASK_INT    0x018
#define REG_I2S_RX_STATUS_INT  0x01c



#define REG_I2S_TX_PAGE0_OWN   0x020
#define REG_I2S_TX_PAGE1_OWN   0x024
#define REG_I2S_TX_PAGE2_OWN   0x028
#define REG_I2S_TX_PAGE3_OWN   0x02C
#define REG_I2S_RX_PAGE0_OWN   0x030
#define REG_I2S_RX_PAGE1_OWN   0x034
#define REG_I2S_RX_PAGE2_OWN   0x038
#define REG_I2S_RX_PAGE3_OWN   0x03C

/* template 
#define BIT_SHIFT_CTLX_ 7
#define BIT_MASK_CTLX_  0x1
#define BIT_CTLX_(x) (((x) & BIT_MASK_CTLX_) << BIT_SHIFT_CTLX_)
#define BIT_INV_CTLX_ (~(BIT_MASK_CTLX_ << BIT_SHIFT_CTLX_))
*/
#define BIT_SHIFT_CTLX_IIS_EN 0
#define BIT_MASK_CTLX_IIS_EN  0x1
#define BIT_CTLX_IIS_EN(x) (((x) & BIT_MASK_CTLX_IIS_EN) << BIT_SHIFT_CTLX_IIS_EN)
#define BIT_INV_CTLX_IIS_EN (~(BIT_MASK_CTLX_IIS_EN << BIT_SHIFT_CTLX_IIS_EN))

#define BIT_SHIFT_CTLX_TRX 1
#define BIT_MASK_CTLX_TRX 0x3
#define BIT_CTLX_TRX(x) (((x) & BIT_MASK_CTLX_TRX) << BIT_SHIFT_CTLX_TRX)
#define BIT_INV_CTLX_TRX (~(BIT_MASK_CTLX_TRX << BIT_SHIFT_CTLX_TRX))

#define BIT_SHIFT_CTLX_CH_NUM 3
#define BIT_MASK_CTLX_CH_NUM  0x3
#define BIT_CTLX_CH_NUM(x) (((x) & BIT_MASK_CTLX_CH_NUM) << BIT_SHIFT_CTLX_CH_NUM)
#define BIT_INV_CTLX_CH_NUM (~(BIT_MASK_CTLX_CH_NUM << BIT_SHIFT_CTLX_CH_NUM))

#define BIT_SHIFT_CTLX_EDGE_SW 5
#define BIT_MASK_CTLX_EDGE_SW  0x1
#define BIT_CTLX_EDGE_SW(x) (((x) & BIT_MASK_CTLX_EDGE_SW) << BIT_SHIFT_CTLX_EDGE_SW)
#define BIT_INV_CTLX_EDGE_SW (~(BIT_MASK_CTLX_EDGE_SW << BIT_SHIFT_CTLX_EDGE_SW))

#define BIT_SHIFT_CTLX_WL 6
#define BIT_MASK_CTLX_WL  0x1
#define BIT_CTLX_WL(x) (((x) & BIT_MASK_CTLX_WL) << BIT_SHIFT_CTLX_WL)
#define BIT_INV_CTLX_WL (~(BIT_MASK_CTLX_WL << BIT_SHIFT_CTLX_WL))

#define BIT_SHIFT_CTLX_LOOP_BACK 7
#define BIT_MASK_CTLX_LOOP_BACK  0x1
#define BIT_CTLX_LOOP_BACK(x) (((x) & BIT_MASK_CTLX_LOOP_BACK) << BIT_SHIFT_CTLX_LOOP_BACK)
#define BIT_INV_CTLX_LOOP_BACK (~(BIT_MASK_CTLX_LOOP_BACK << BIT_SHIFT_CTLX_LOOP_BACK))


#define BIT_SHIFT_CTLX_FORMAT 8
#define BIT_MASK_CTLX_FORMAT  0x3
#define BIT_CTLX_FORMAT(x) (((x) & BIT_MASK_CTLX_FORMAT) << BIT_SHIFT_CTLX_FORMAT)
#define BIT_INV_CTLX_FORMAT (~(BIT_MASK_CTLX_FORMAT << BIT_SHIFT_CTLX_FORMAT))

#define BIT_SHIFT_CTLX_LRSWAP 10
#define BIT_MASK_CTLX_LRSWAP  0x1
#define BIT_CTLX_LRSWAP(x) (((x) & BIT_MASK_CTLX_LRSWAP) << BIT_SHIFT_CTLX_LRSWAP)
#define BIT_INV_CTLX_LRSWAP (~(BIT_MASK_CTLX_LRSWAP << BIT_SHIFT_CTLX_LRSWAP))

#define BIT_SHIFT_CTLX_SCK_INV 11
#define BIT_MASK_CTLX_SCK_INV  0x1
#define BIT_CTLX_SCK_INV(x) (((x) & BIT_MASK_CTLX_SCK_INV) << BIT_SHIFT_CTLX_SCK_INV)
#define BIT_INV_CTLX_SCK_INV (~(BIT_MASK_CTLX_SCK_INV << BIT_SHIFT_CTLX_SCK_INV))

#define BIT_SHIFT_CTLX_ENDIAN_SWAP 12
#define BIT_MASK_CTLX_ENDIAN_SWAP  0x1
#define BIT_CTLX_ENDIAN_SWAP(x) (((x) & BIT_MASK_CTLX_ENDIAN_SWAP) << BIT_SHIFT_CTLX_ENDIAN_SWAP)
#define BIT_INV_CTLX_ENDIAN_SWAP (~(BIT_MASK_CTLX_ENDIAN_SWAP << BIT_SHIFT_CTLX_ENDIAN_SWAP))


#define BIT_SHIFT_CTLX_DEBUG_SWITCH 15
#define BIT_MASK_CTLX_DEBUG_SWITCH  0x3
#define BIT_CTLX_DEBUG_SWITCH(x) (((x) & BIT_MASK_CTLX_DEBUG_SWITCH) << BIT_SHIFT_CTLX_DEBUG_SWITCH)
#define BIT_INV_CTLX_DEBUG_SWITCH (~(BIT_MASK_CTLX_DEBUG_SWITCH << BIT_SHIFT_CTLX_DEBUG_SWITCH))

#define BIT_SHIFT_CTLX_SLAVE_SEL 29
#define BIT_MASK_CTLX_SLAVE_SEL  0x1
#define BIT_CTLX_SLAVE_SEL(x) (((x) & BIT_MASK_CTLX_SLAVE_SEL) << BIT_SHIFT_CTLX_SLAVE_SEL)
#define BIT_INV_CTLX_SLAVE_SEL (~(BIT_MASK_CTLX_SLAVE_SEL << BIT_SHIFT_CTLX_SLAVE_SEL))


#define BIT_SHIFT_CTLX_CLK_SRC 30
#define BIT_MASK_CTLX_CLK_SRC  0x1
#define BIT_CTLX_CLK_SRC(x) (((x) & BIT_MASK_CTLX_CLK_SRC) << BIT_SHIFT_CTLX_CLK_SRC)
#define BIT_INV_CTLX_CLK_SRC (~(BIT_MASK_CTLX_CLK_SRC << BIT_SHIFT_CTLX_CLK_SRC))



#define BIT_SHIFT_CTLX_SW_RSTN 31
#define BIT_MASK_CTLX_SW_RSTN  0x1
#define BIT_CTLX_SW_RSTN(x) (((x) & BIT_MASK_CTLX_SW_RSTN) << BIT_SHIFT_CTLX_SW_RSTN)
#define BIT_INV_CTLX_SW_RSTN (~(BIT_MASK_CTLX_SW_RSTN << BIT_SHIFT_CTLX_SW_RSTN))


#define BIT_SHIFT_SETTING_PAGE_SZ 0
#define BIT_MASK_SETTING_PAGE_SZ  0xFFF
#define BIT_SETTING_PAGE_SZ(x) (((x) & BIT_MASK_SETTING_PAGE_SZ) << BIT_SHIFT_SETTING_PAGE_SZ)
#define BIT_INV_SETTING_PAGE_SZ (~(BIT_MASK_SETTING_PAGE_SZ << BIT_SHIFT_SETTING_PAGE_SZ))

#define BIT_SHIFT_SETTING_PAGE_NUM 12
#define BIT_MASK_SETTING_PAGE_NUM  0x3
#define BIT_SETTING_PAGE_NUM(x) (((x) & BIT_MASK_SETTING_PAGE_NUM) << BIT_SHIFT_SETTING_PAGE_NUM)
#define BIT_INV_SETTING_PAGE_NUM (~(BIT_MASK_SETTING_PAGE_NUM << BIT_SHIFT_SETTING_PAGE_NUM))

#define BIT_SHIFT_SETTING_SAMPLE_RATE 14
#define BIT_MASK_SETTING_SAMPLE_RATE  0x7
#define BIT_SETTING_SAMPLE_RATE(x) (((x) & BIT_MASK_SETTING_SAMPLE_RATE) << BIT_SHIFT_SETTING_SAMPLE_RATE)
#define BIT_INV_SETTING_SAMPLE_RATE (~(BIT_MASK_SETTING_SAMPLE_RATE << BIT_SHIFT_SETTING_SAMPLE_RATE))


typedef enum _I2S_CTL_FORMAT {
    FormatI2s             = 0x00,
    FormatLeftJustified   = 0x01,
    FormatRightJustified  = 0x02
}I2S_CTL_FORMAT, *PI2S_CTL_FORMAT;

typedef enum _I2S_CTL_CHNUM {
    ChannelStereo      = 0x00,
    Channel5p1         = 0x01,
    ChannelMono        = 0x02
}I2S_CTL_CHNUM, *PI2S_CTL_CHNUM;

typedef enum _I2S_CTL_TRX_ACT {
    RxOnly             = 0x00,
    TxOnly             = 0x01,
    TXRX               = 0x02
}I2S_CTL_TRX_ACT, *PI2S_CTL_TRX_ACT;

typedef struct _I2S_CTL_REG_ {
    I2S_CTL_FORMAT         Format;
    I2S_CTL_CHNUM          ChNum;
    I2S_CTL_TRX_ACT        TrxAct;

    u32                    I2s_En         :1; // Bit 0
    u32                    Rsvd1to4       :4; // Bit 1-4 is TrxAct, ChNum
    u32                    EdgeSw         :1; // Bit 5 Edge switch
    u32                    WordLength     :1; // Bit 6
    u32                    LoopBack       :1; // Bit 7
    u32                    Rsvd8to9       :2; // Bit 8-9 is Format
    u32                    DacLrSwap      :1; // Bit 10
    u32                    SckInv         :1; // Bit 11
    u32                    EndianSwap     :1; // Bit 12
    u32                    Rsvd13to14     :2; // Bit 11-14
    u32                    DebugSwitch    :2; // Bit 15-16
    u32                    Rsvd17to28    :12; // Bit 17-28
    u32                    SlaveMode      :1; // Bit 29
    u32                    SR44p1KHz      :1; // Bit 30
    u32                    SwRstn         :1; // Bit 31
} I2S_CTL_REG, *PI2S_CTL_REG;

typedef enum _I2S_SETTING_PAGE_NUM {
    I2s1Page           = 0x00,
    I2s2Page           = 0x01,
    I2s3Page           = 0x02,
    I2s4Page           = 0x03
}I2S_SETTING_PAGE_NUM, *PI2S_SETTING_PAGE_NUM;

//sampling rate
typedef enum _I2S_SETTING_SR {
    I2sSR8K            = 0x00,
    I2sSR16K           = 0x01,
    I2sSR24K           = 0x02,
    I2sSR32K           = 0x03,
    I2sSR48K           = 0x05,
    I2sSR96K           = 0x06
}I2S_SETTING_SR, *PI2S_SETTING_SR;

typedef struct _I2S_SETTING_REG_ {
    I2S_SETTING_PAGE_NUM     PageNum;
    I2S_SETTING_SR           SampleRate;

    u32                      PageSize:12; // Bit 0-11
}I2S_SETTING_REG, *PI2S_SETTING_REG;

typedef enum _I2S_TX_ISR {
    I2sTxP0OK          = 0x01,
    I2sTxP1OK          = 0x02,
    I2sTxP2OK          = 0x04,
    I2sTxP3OK          = 0x08,
    I2sTxPageUn        = 0x10,
    I2sTxFifoEmpty     = 0x20
}I2S_TX_ISR, *PI2S_TX_ISR;

typedef enum _I2S_RX_ISR {
    I2sRxP0OK          = 0x01,
    I2sRxP1OK          = 0x02,
    I2sRxP2OK          = 0x04,
    I2sRxP3OK          = 0x08,
    I2sRxPageUn        = 0x10,
    I2sRxFifoFull      = 0x20
}I2S_RX_ISR, *PI2S_RX_ISR;


VOID
HalI2sOnOffRtl8195a(
    IN  VOID              *Data
);

BOOL
HalI2sInitRtl8195a(
    IN  VOID		  *Data
);

BOOL
HalI2sSettingRtl8195a(
    IN  VOID		  *Data
);

BOOL
HalI2sEnRtl8195a(
    IN  VOID		  *Data
);

BOOL
HalI2sIsrEnAndDisRtl8195a(
    IN  VOID		  *Data
);

BOOL
HalI2sDumpRegRtl8195a(
    IN  VOID		  *Data
);

BOOL
HalI2sRtl8195a(
    IN  VOID		  *Data
);

#endif /* _RTL8195A_I2S_H_ */


