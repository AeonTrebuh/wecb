/*
** Copyright (c) 2007-2010 by Silicon Laboratories
**
** $Id: si3226_registers.h 515 2009-03-20 15:22:33Z cdp@SILABS.COM $
**
** Si3226_Registers.h
**
** Author(s): 
** laj
**
** Distributed by: 
** Silicon Laboratories, Inc
**
** This file contains proprietary information.	 
** No dissemination allowed without prior written permission from
** Silicon Laboratories, Inc.
**
** File Description:
** This is the header file that contains
** register and RAM names definitions for 
** the Si3226 ProSLIC.
**
** Dependancies:
** 
**
*/
#ifndef SI3226REGS_H
#define SI3226REGS_H

/*
** This defines the neumomics for the SI3226 registers
*/
enum REGISTERS {
ID  =  0,
RESET  =  1,
MSTREN  =  2,
MSTRSTAT  =  3,
RAMSTAT  =  4,
RAM_ADDR_HI  =  5,
RAM_DATA_B0  =  6,
RAM_DATA_B1  =  7,
RAM_DATA_B2  =  8,
RAM_DATA_B3  =  9,
RAM_ADDR_LO  =  10,
PCMMODE  =  11,
PCMTXLO  =  12,
PCMTXHI  =  13,
PCMRXLO  =  14,
PCMRXHI  =  15,
IRQ  =  16,
IRQ0  =  17,
IRQ1  =  18,
IRQ2  =  19,
IRQ3  =  20,
IRQ4  =  21,
IRQEN1  =  22,
IRQEN2  =  23,
IRQEN3  =  24,
IRQEN4  =  25,
CALR0  =  26,
CALR1  =  27,
CALR2  =  28,
CALR3  =  29,
LINEFEED  =  30,
POLREV  =  31,
SPEEDUP_DIS  =  32,
SPEEDUP  =  33,
LCRRTP  =  34,
OFFLOAD  =  35,
BATSELMAP  =  36,
BATSEL  =  37,
RINGCON  =  38,
RINGTALO  =  39,
RINGTAHI  =  40,
RINGTILO  =  41,
RINGTIHI  =  42,
LOOPBACK  =  43,
DIGCON  =  44,
RA  =  45,
ZCAL_EN  =  46,
ENHANCE  =  47,
OMODE  =  48,
OCON  =  49,
O1TALO  =  50,
O1TAHI  =  51,
O1TILO  =  52,
O1TIHI  =  53,
O2TALO  =  54,
O2TAHI  =  55,
O2TILO  =  56,
O2TIHI  =  57,
FSKDAT  =  58,
FSKDEPTH  =  59,
TONDTMF  =  60,
TONDET  =  61,
TONEN  =  62,
GCI_CI  =  63,
GLOBSTAT1  =  64,
GLOBSTAT2  =  65,
USERSTAT  =  66,
GPIO  =  67,
GPIO_CFG1  =  68,
GPIO_CFG2  =  69,
GPIO_CFG3  =  70,
DIAG1  =  71,
DIAG2  =  72,
CM_CLAMP  =  73,
DIAG3  =  74,
PMCON  =  75,
PCLK_FAULT_CNTL  =  76,
REG77  =  77,
REG78  =  78,
REG79  =  79,
AUTO  =  80,
JMPEN  =  81,
JMP0LO  =  82,
JMP0HI  =  83,
JMP1LO  =  84,
JMP1HI  =  85,
JMP2LO  =  86,
JMP2HI  =  87,
JMP3LO  =  88,
JMP3HI  =  89,
JMP4LO  =  90,
JMP4HI  =  91,
JMP5LO  =  92,
JMP5HI  =  93,
JMP6LO  =  94,
JMP6HI  =  95,
JMP7LO  =  96,
JMP7HI  =  97,
PDN  =  98,
PDN_STAT  =  99,
USERMODE_ENABLE = 126
};


/*
** This defines the neumomics for the SI3226 RAM locations (revB)
*/
enum SRAM {
IRNGNG_SENSE  =  0,
MADC_VTIPC  =  1,
MADC_VRINGC  =  2,
MADC_VBAT  =  3,
MADC_VLONG  =  4,
UNUSED5  =  5,
MADC_VDC  =  6,
MADC_ILONG  =  7,
MADC_ITIP  =  8,
MADC_IRING  =  9,
MADC_ILOOP  =  10,
VDIFF_SENSE  =  11,
VTIP  =  12,
VRING  =  13,
P_Q1_D  =  14,
P_Q2_D  =  15,
P_Q3_D  =  16,
P_Q4_D  =  17,
P_Q5_D  =  18,
P_Q6_D  =  19,
P_Q1  =  20,
DIAG_EX1  =  21,
DIAG_EX2  =  22,
DIAG_LPF_MADC  =  23,
DIAG_DMM_I  =  24,
DIAG_DMM_V  =  25,
OSC1FREQ  =  26,
OSC1AMP  =  27,
OSC1PHAS  =  28,
OSC2FREQ  =  29,
OSC2AMP  =  30,
OSC2PHAS  =  31,
TESTB0_1  =  32,
TESTB1_1  =  33,
TESTB2_1  =  34,
TESTA1_1  =  35,
TESTA2_1  =  36,
TESTB0_2  =  37,
TESTB1_2  =  38,
TESTB2_2  =  39,
TESTA1_2  =  40,
TESTA2_2  =  41,
TESTB0_3  =  42,
TESTB1_3  =  43,
TESTB2_3  =  44,
TESTA1_3  =  45,
TESTA2_3  =  46,
TESTPKO  =  47,
TESTAVO  =  48,
TESTWLN  =  49,
TESTAVBW  =  50,
TESTPKFL  =  51,
TESTAVFL  =  52,
TESTPKTH  =  53,
TESTAVTH  =  54,
DAC_IN_SYNC1  =  55,
BYPASS_REG  =  56,
LCRMASK_CNT  =  57,
DAC_IN_SYNC  =  58,
TEMP  =  59,
TEMP_ISR  =  60,
P_Q2  =  61,
P_Q3  =  62,
P_Q4  =  63,
P_Q5  =  64,
P_Q6  =  65,
ILOOP_FILT  =  66,
ILONG_FILT  =  67,
VBAT_FILT  =  68,
VDIFF_FILT  =  69,
VCM_FILT  =  70,
VBAT_CNT  =  71,
V_VLIM_SCALED  =  72,
V_VLIM_TRACK  =  73,
V_VLIM_MODFEED  =  74,
DIAG_P_OUT  =  75,
DIAG_COUNT  =  76,
ROW0_MAG  =  77,
ROW1_MAG  =  78,
ROW2_MAG  =  79,
ROW3_MAG  =  80,
COL0_MAG  =  81,
COL1_MAG  =  82,
COL2_MAG  =  83,
COL3_MAG  =  84,
ROW0_2ND_Y1  =  85,
ROW1_2ND_Y1  =  86,
ROW2_2ND_Y1  =  87,
ROW3_2ND_Y1  =  88,
COL0_2ND_Y1  =  89,
COL1_2ND_Y1  =  90,
COL2_2ND_Y1  =  91,
COL3_2ND_Y1  =  92,
ROW0_2ND_Y2  =  93,
ROW1_2ND_Y2  =  94,
ROW2_2ND_Y2  =  95,
ROW3_2ND_Y2  =  96,
COL0_2ND_Y2  =  97,
COL1_2ND_Y2  =  98,
COL2_2ND_Y2  =  99,
COL3_2ND_Y2  =  100,
DTMF_IN  =  101,
DTMFDTF_D2_1  =  102,
DTMFDTF_D1_1  =  103,
DTMFDTF_OUT_1  =  104,
DTMFDTF_D2_2  =  105,
DTMFDTF_D1_2  =  106,
DTMFDTF_OUT_2  =  107,
DTMFDTF_D2_3  =  108,
DTMFDTF_D1_3  =  109,
DTMFDTF_OUT_3  =  110,
DTMFDTF_OUT  =  111,
DTMFLPF_D2_1  =  112,
DTMFLPF_D1_1  =  113,
DTMFLPF_OUT_1  =  114,
DTMFLPF_D2_2  =  115,
DTMFLPF_D1_2  =  116,
DTMFLPF_OUT_2  =  117,
DTMF_ROW  =  118,
DTMFHPF_D2_1  =  119,
DTMFHPF_D1_1  =  120,
DTMFHPF_OUT_1  =  121,
DTMFHPF_D2_2  =  122,
DTMFHPF_D1_2  =  123,
DTMFHPF_OUT_2  =  124,
DTMF_COL  =  125,
ROW_POWER  =  126,
COL_POWER  =  127,
GP_TIMER  =  128,
SPR_INTERP_DIF  =  129,
SPR_INTERP_DIF_OUT  =  130,
SPR_INTERP_INT  =  131,
SPR_CNT  =  132,
ROW0_Y1  =  133,
ROW0_Y2  =  134,
ROW1_Y1  =  135,
ROW1_Y2  =  136,
ROW2_Y1  =  137,
ROW2_Y2  =  138,
ROW3_Y1  =  139,
ROW3_Y2  =  140,
COL0_Y1  =  141,
COL0_Y2  =  142,
COL1_Y1  =  143,
COL1_Y2  =  144,
COL2_Y1  =  145,
COL2_Y2  =  146,
COL3_Y1  =  147,
COL3_Y2  =  148,
ROWMAX_MAG  =  149,
COLMAX_MAG  =  150,
ROW0_2ND_MAG  =  151,
COL0_2ND_MAG  =  152,
ROW_THR  =  153,
COL_THR  =  154,
OSC1_Y  =  155,
OSC2_Y  =  156,
OSC1_X  =  157,
OSC1_COEFF  =  158,
OSC2_X  =  159,
OSC2_COEFF  =  160,
RXACIIR_D2_1  =  161,
RXACIIR_OUT_1  =  162,
RXACIIR_D2_2  =  163,
RXACIIR_D1_2  =  164,
RXACIIR_OUT_2  =  165,
RXACIIR_D2_3  =  166,
RXACIIR_D1_3  =  167,
RXACIIR_OUT  =  168,
RXACIIR_OUT_3  =  169,
TXACCOMB_D1  =  170,
TXACCOMB_D2  =  171,
TXACCOMB_D3  =  172,
TXACSINC_OUT  =  173,
TXACHPF_D1_2  =  174,
TXACHPF_D2_1  =  175,
TXACHPF_D2_2  =  176,
TXACHPF_OUT  =  177,
TXACHPF_OUT_1  =  178,
TXACHPF_OUT_2  =  179,
TXACIIR_D2_1  =  180,
TXACIIR_OUT_1  =  181,
TXACIIR_D2_2  =  182,
TXACIIR_D1_2  =  183,
TXACIIR_OUT_2  =  184,
TXACIIR_D2_3  =  185,
TXACIIR_D1_3  =  186,
TXACIIR_OUT_3  =  187,
TXACIIR_OUT  =  188,
ECIIR_D1  =  189,
ECIIR_D2  =  190,
EC_DELAY1  =  191,
EC_DELAY2  =  192,
EC_DELAY3  =  193,
EC_DELAY4  =  194,
EC_DELAY5  =  195,
EC_DELAY6  =  196,
EC_DELAY7  =  197,
EC_DELAY8  =  198,
EC_DELAY9  =  199,
EC_DELAY10  =  200,
EC_DELAY11  =  201,
ECHO_EST  =  202,
EC_OUT  =  203,
TESTFILT_OUT_1  =  204,
TESTFILT_D1_1  =  205,
TESTFILT_D2_1  =  206,
TESTFILT_OUT_2  =  207,
TESTFILT_D1_2  =  208,
TESTFILT_D2_2  =  209,
TESTFILT_OUT_3  =  210,
TESTFILT_D1_3  =  211,
TESTFILT_D2_3  =  212,
TESTFILT_PEAK  =  213,
TESTFILT_ABS  =  214,
TESTFILT_MEANACC  =  215,
TESTFILT_COUNT  =  216,
TESTFILT_NO_OFFSET  =  217,
RING_X  =  218,
RING_Y  =  219,
RING_INT  =  220,
RING_Y_D1  =  221,
RING_DIFF  =  222,
RING_DELTA  =  223,
WTCHDOG_CNT  =  224,
RING_WAVE  =  225,
UNUSED226  =  226,
ONEKHZ_COUNT  =  227,
TX2100_Y1  =  228,
TX2100_Y2  =  229,
TX2100_MAG  =  230,
RX2100_Y1  =  231,
RX2100_Y2  =  232,
RX2100_MAG  =  233,
TX2100_POWER  =  234,
RX2100_POWER  =  235,
TX2100_IN  =  236,
RX2100_IN  =  237,
RINGTRIP_COUNT  =  238,
RINGTRIP_DC1  =  239,
RINGTRIP_DC2  =  240,
RINGTRIP_AC1  =  241,
RINGTRIP_AC2  =  242,
RINGTRIP_AC_COUNT  =  243,
RINGTRIP_DC_COUNT  =  244,
RINGTRIP_AC_RESULT  =  245,
RINGTRIP_DC_RESULT  =  246,
RINGTRIP_ABS  =  247,
TXACEQ_OUT  =  248,
LCR_DBI_CNT  =  249,
BAT_DBI_CNT  =  250,
LONG_DBI_CNT  =  251,
TXACEQ_DELAY3  =  252,
TXACEQ_DELAY2  =  253,
TXACEQ_DELAY1  =  254,
RXACEQ_DELAY3  =  255,
RXACEQ_DELAY2  =  256,
RXACEQ_DELAY1  =  257,
RXACEQ_IN  =  258,
TXDCCOMB_D1  =  259,
TXDCCOMB_D2  =  260,
TXDCSINC_OUT  =  261,
RXACDIFF_D1  =  262,
DC_NOTCH_1  =  263,
DC_NOTCH_2  =  264,
DC_NOTCH_OUT  =  265,
DC_NOTCH_SCALED  =  266,
V_FEED_IN  =  267,
I_TAR  =  268,
CONST_VLIM  =  269,
UNITY  =  270,
TXACNOTCH_1  =  271,
TXACNOTCH_2  =  272,
TXACNOTCH_OUT  =  273,
ZSYNTH_1  =  274,
ZSYNTH_2  =  275,
ZSYNTH_OUT_1  =  276,
TXACD2_1_0  =  277,
TXACD2_1_1  =  278,
TXACD2_1_2  =  279,
TXACD2_1_3  =  280,
TXACD2_1_4  =  281,
TXACD2_1_5  =  282,
TXACD2_1_OUT  =  283,
TXACD2_2_0  =  284,
TXACD2_2_1  =  285,
TXACD2_2_2  =  286,
TXACD2_2_3  =  287,
TXACD2_2_4  =  288,
TXACD2_2_5  =  289,
TXACD2_2_OUT  =  290,
TXACD2_3_0  =  291,
TXACD2_3_1  =  292,
TXACD2_3_2  =  293,
TXACD2_3_3  =  294,
TXACD2_3_4  =  295,
TXACD2_3_5  =  296,
TXACD2_3_OUT  =  297,
RXACI2_1_1  =  298,
RXACI2_1_2  =  299,
RXACI2_1_3  =  300,
RXACI2_1_4  =  301,
RXACI2_1_OUT  =  302,
RXACI2_2_1  =  303,
RXACI2_2_2  =  304,
RXACI2_2_3  =  305,
RXACI2_2_4  =  306,
RXACI2_2_OUT  =  307,
RXACI2_3_1  =  308,
RXACI2_3_2  =  309,
RXACI2_3_3  =  310,
RXACI2_3_4  =  311,
RXACI2_3_OUT  =  312,
TXACCOMP1  =  313,
TXACCOMP_OUT  =  314,
RXACCOMP1  =  315,
RXACCOMP_OUT  =  316,
RXACHPF_D1_2  =  317,
RXACHPF_D2_1  =  318,
RXACHPF_D2_2  =  319,
RXACHPF_OUT  =  320,
RXACHPF_OUT_1  =  321,
RXACHPF_OUT_2  =  322,
RXACEQ_OUT  =  323,
METER_I_1  =  324,
METER_I_OUT  =  325,
METER_LPF_1  =  326,
METER_LPF_2  =  327,
METER_LPF_OUT_1  =  328,
METER_BP_1  =  329,
METER_BP_2  =  330,
METER_BP_OUT  =  331,
METER_SRC_OUT  =  332,
UNUSED333  =  333,
UNUSED334  =  334,
RING_LPF_1  =  335,
RING_LPF_2  =  336,
RING_LPF_OUT  =  337,
RING_INTERP_DIFF  =  338,
RING_INTERP_DIFF_OUT  =  339,
RING_INTERP_INT  =  340,
RING_INTERP_INT_OUT  =  341,
V_ILIM_TRACK  =  342,
V_RFEED_TRACK  =  343,
LF_SPEEDUP_CNT  =  344,
DC_SPEEDUP_CNT  =  345,
AC_SPEEDUP_CNT  =  346,
LCR_SPEEDUP_CNT  =  347,
CM_SPEEDUP_CNT  =  348,
DC_SPEEDUP_MASK  =  349,
ZSYNTH_IN  =  350,
I_TAR_SAVE  =  351,
UNUSED352  =  352,
UNUSED353  =  353,
COUNTER_VTR  =  354,
I_RING_AVG  =  355,
COUNTER_IRING  =  356,
COMP_RATIO  =  357,
MADC_VBAT_DIV2  =  358,
VDIFF_PK_T  =  359,
PEAK_CNT  =  360,
CM_DBI_CNT  =  361,
VCM_LAST  =  362,
VBATL_SENSE  =  363,
VBATH_SENSE  =  364,
VBATR_SENSE  =  365,
BAT_SETTLE_CNT  =  366,
VBAT_TGT  =  367,
VBAT_REQ  =  368,
VCM_HIRES  =  369,
VCM_LORES  =  370,
ILOOP1  =  371,
ILONG2  =  372,
ITIP1  =  373,
IRING1  =  374,
CAL_TEMP1  =  375,
CAL_TEMP2  =  376,
CAL_TEMP3  =  377,
CAL_TEMP4  =  378,
CAL_TEMP5  =  379,
CAL_TEMP6  =  380,
CAL_TEMP7  =  381,
CMRR_DIVISOR  =  382,
CMRR_REMAINDER  =  383,
CMRR_Q_PTR  =  384,
I_SOURCE1  =  385,
I_SOURCE2  =  386,
VTR1  =  387,
VTR2 =  388,
STOP_TIMER1  =  389,
STOP_TIMER2  =  390,
UNUSED391  =  391,
UNUSED392  =  392,
CAL_ONHK_Z  =  393,
CAL_LB_SETTLE  =  394,
CAL_DECLPF_V0  =  395,
CAL_DECLPF_V1  =  396,
CAL_DECLPF_V2  =  397,
CAL_GOERTZEL_V0  =  398,
CAL_GOERTZEL_V1  =  399,
CAL_DECLPF_Y  =  400,
CAL_GOERTZEL_Y  =  401,
P_HVIC  =  402,
VBATL_MIRROR  =  403,
VBATH_MIRROR  =  404,
VBATR_MIRROR  =  405,
DIAG_EX1_OUT  =  406,
DIAG_EX2_OUT  =  407,
DIAG_DMM_V_OUT  =  408,
DIAG_DMM_I_OUT  =  409,
DIAG_P  =  410,
DIAG_LPF_V  =  411,
DIAG_LPF_I  =  412,
DIAG_TONE_FLAG  =  413,
ILOOP1_LAST  =  414,
RING_ENTRY_VOC  =  415,
UNUSED416  =  416,
OSC1_X_SAVE  =  417,
EZSYNTH_1  =  418,
EZSYNTH_2  =  419,
ZSYNTH_OUT  =  420,
UNUSED421  =  421,
CAL_SUBSTATE  =  422,
DIAG_EX1_DC_OUT  =  423,
DIAG_EX1_DC  =  424,
EZSYNTH_B1  =  425,
EZSYNTH_B2  =  426,
EZSYNTH_A1  =  427,
EZSYNTH_A2  =  428,
ILOOP1_FILT  =  429,
AC_PU_DELTA1_CNT  =  430,
AC_PU_DELTA2_CNT  =  431,
UNUSED432  =  432,
UNUSED433  =  433,
UNUSED434  =  434,
AC_DAC_GAIN_SAVE  =  435,
RING_FLUSH_CNT  =  436,
UNUSED437  =  437,
DIAG_VAR_OUT  =  438,
I_VBAT  =  439,
P_OFFLOAD  =  440,
CALTMP_LOOPCNT  =  441,
CALTMP_LOOPINC  =  442,
UNUSED443  =  443,
CALTMP_CODEINC  =  444,
CALTMP_TAUINC  =  445,
CALTMP_TAU  =  446,
CAL_TEMP8  =  447,
PATCH_ID  =  448,
UNUSED449  =  449,
UNUSED450  =  450,
UNUSED451  =  451,
CAL_LB_OFFSET_FWD  =  452,
CAL_LB_OFFSET_RVS  =  453,
COUNT_SPEEDUP  =  454,
SWEEP_COUNT  =  455,
AMP_RAMP  =  456,
DIAG_LPF_MADC_D  =  457,
DIAG_HPF_MADC  =  458,
UNUSED459  =  459,
TXDEC_OUT  =  460,
TXDEC_D1  =  461,
TXDEC_D2  =  462,
RXDEC_D1  =  463,
RXDEC_D2  =  464,
OSCINT1_D2_1  =  465,
OSCINT1_D1_1  =  466,
OSCINT1_OUT_1  =  467,
OSCINT1_D2_2  =  468,
OSCINT1_D1_2  =  469,
OSCINT1_OUT  =  470,
OSCINT2_D2_1  =  471,
OSCINT2_D1_1  =  472,
OSCINT2_OUT_1  =  473,
OSCINT2_D2_2  =  474,
OSCINT2_D1_2  =  475,
OSCINT2_OUT  =  476,
OSC1_Y_SAVE  =  477,
OSC2_Y_SAVE  =  478,
PWRSAVE_CNT  =  479,
VBATR_PK  =  480,
SPEEDUP_MASK_CNT  =  481,
VCM_RING_FIXED  =  482,
DELTA_VCM  =  483,
MADC_VTIPC_DIAG_OS  =  484,
MADC_VRINGC_DIAG_OS  =  485,
MADC_VLONG_DIAG_OS  =  486,
INIT_GUESS  =  487,
Y1  =  488,
Y2  =  489,
Y3  =  490,
UNUSED491  =  491,
PWRSAVE_DBI_CNT  =  492,
COMP_RATIO_SAVE  =  493,
CAL_TEMP9  =  494,
CAL_TEMP10  =  495,
DAC_OFFSET_TEMP =  496,
CAL_DAC_CODE  =  497,
DCDAC_OFFSET  =  498,
VDIFF_COARSE  =  499,
RXACIIR_OUT_4  =  500,
CAL_TEMP11  =  501,
METER_RAMP =  502,
METER_RAMP_DIR  =  503,
METER_ON_T  =  504,
METER_PK_DET  =  505,
METER_PK_DET_T =  506,
THERM_CNT  =  507,
VDIFF_SENSE_DELAY  =  508,
UNUSED509 =  509,
CPUMP_DEB_CNT  =  510,
UNUSED511  =  511,
MINUS_ONE  =  512,
ILOOPLPF  =  513,
ILONGLPF  =  514,
BATLPF  =  515,
VDIFFLPF  =  516,
VCMLPF  =  517,
TXACIIR_B0_1  =  518,
TXACIIR_B1_1  =  519,
TXACIIR_A1_1  =  520,
TXACIIR_B0_2  =  521,
TXACIIR_B1_2  =  522,
TXACIIR_B2_2  =  523,
TXACIIR_A1_2  =  524,
TXACIIR_A2_2  =  525,
TXACIIR_B0_3  =  526,
TXACIIR_B1_3  =  527,
TXACIIR_B2_3  =  528,
TXACIIR_A1_3  =  529,
TXACIIR_A2_3  =  530,
TXACHPF_B0_1  =  531,
TXACHPF_B1_1  =  532,
TXACHPF_A1_1  =  533,
TXACHPF_B0_2  =  534,
TXACHPF_B1_2  =  535,
TXACHPF_B2_2  =  536,
TXACHPF_A1_2  =  537,
TXACHPF_A2_2  =  538,
TXACHPF_GAIN  =  539,
TXACEQ_C0  =  540,
TXACEQ_C1  =  541,
TXACEQ_C2  =  542,
TXACEQ_C3  =  543,
TXACGAIN  =  544,
RXACGAIN  =  545,
RXACEQ_C0  =  546,
RXACEQ_C1  =  547,
RXACEQ_C2  =  548,
RXACEQ_C3  =  549,
RXACIIR_B0_1  =  550,
RXACIIR_B1_1  =  551,
RXACIIR_A1_1  =  552,
RXACIIR_B0_2  =  553,
RXACIIR_B1_2  =  554,
RXACIIR_B2_2  =  555,
RXACIIR_A1_2  =  556,
RXACIIR_A2_2  =  557,
RXACIIR_B0_3  =  558,
RXACIIR_B1_3  =  559,
RXACIIR_B2_3  =  560,
RXACIIR_A1_3  =  561,
RXACIIR_A2_3  =  562,
ECFIR_C2  =  563,
ECFIR_C3  =  564,
ECFIR_C4  =  565,
ECFIR_C5  =  566,
ECFIR_C6  =  567,
ECFIR_C7  =  568,
ECFIR_C8  =  569,
ECFIR_C9  =  570,
ECIIR_B0  =  571,
ECIIR_B1  =  572,
ECIIR_A1  =  573,
ECIIR_A2  =  574,
DTMFDTF_B0_1  =  575,
DTMFDTF_B1_1  =  576,
DTMFDTF_B2_1  =  577,
DTMFDTF_A1_1  =  578,
DTMFDTF_A2_1  =  579,
DTMFDTF_B0_2  =  580,
DTMFDTF_B1_2  =  581,
DTMFDTF_B2_2  =  582,
DTMFDTF_A1_2  =  583,
DTMFDTF_A2_2  =  584,
DTMFDTF_B0_3  =  585,
DTMFDTF_B1_3  =  586,
DTMFDTF_B2_3  =  587,
DTMFDTF_A1_3  =  588,
DTMFDTF_A2_3  =  589,
DTMFDTF_GAIN  =  590,
DTMFLPF_B0_1  =  591,
DTMFLPF_B1_1  =  592,
DTMFLPF_B2_1  =  593,
DTMFLPF_A1_1  =  594,
DTMFLPF_A2_1  =  595,
DTMFLPF_B0_2  =  596,
DTMFLPF_B1_2  =  597,
DTMFLPF_B2_2  =  598,
DTMFLPF_A1_2  =  599,
DTMFLPF_A2_2  =  600,
DTMFLPF_GAIN  =  601,
DTMFHPF_B0_1  =  602,
DTMFHPF_B1_1  =  603,
DTMFHPF_B2_1  =  604,
DTMFHPF_A1_1  =  605,
DTMFHPF_A2_1  =  606,
DTMFHPF_B0_2  =  607,
DTMFHPF_B1_2  =  608,
DTMFHPF_B2_2  =  609,
DTMFHPF_A1_2  =  610,
DTMFHPF_A2_2  =  611,
DTMFHPF_GAIN  =  612,
POWER_GAIN  =  613,
GOERTZEL_GAIN  =  614,
MODEM_GAIN  =  615,
HOTBIT1  =  616,
HOTBIT0  =  617,
ROW0_C1  =  618,
ROW1_C1  =  619,
ROW2_C1  =  620,
ROW3_C1  =  621,
COL0_C1  =  622,
COL1_C1  =  623,
COL2_C1  =  624,
COL3_C1  =  625,
ROW0_C2  =  626,
ROW1_C2  =  627,
ROW2_C2  =  628,
ROW3_C2  =  629,
COL0_C2  =  630,
COL1_C2  =  631,
COL2_C2  =  632,
COL3_C2  =  633,
SLOPE_VLIM  =  634,
SLOPE_RFEED  =  635,
SLOPE_ILIM  =  636,
SLOPE_RING  =  637,
SLOPE_DELTA1  =  638,
SLOPE_DELTA2  =  639,
V_VLIM  =  640,
V_RFEED  =  641,
V_ILIM  =  642,
CONST_RFEED  =  643,
CONST_ILIM  =  644,
I_VLIM  =  645,
DC_DAC_GAIN  =  646,
VDIFF_TH  =  647,
TXDEC_B0  =  648,
TXDEC_B1  =  649,
TXDEC_B2  =  650,
TXDEC_A1  =  651,
TXDEC_A2  =  652,
ZSYNTH_B0  =  653,
ZSYNTH_B1  =  654,
ZSYNTH_B2  =  655,
ZSYNTH_A1  =  656,
ZSYNTH_A2  =  657,
RXACHPF_B0_1  =  658,
RXACHPF_B1_1  =  659,
RXACHPF_A1_1  =  660,
RXACHPF_B0_2  =  661,
RXACHPF_B1_2  =  662,
RXACHPF_B2_2  =  663,
RXACHPF_A1_2  =  664,
RXACHPF_A2_2  =  665,
RXACHPF_GAIN  =  666,
MASK7LSB  =  667,
RXDEC_B0  =  668,
RXDEC_B1  =  669,
RXDEC_B2  =  670,
RXDEC_A1  =  671,
RXDEC_A2  =  672,
OSCINT1_B0_1  =  673,
OSCINT1_B1_1  =  674,
OSCINT1_B2_1  =  675,
OSCINT1_A1_1  =  676,
OSCINT1_A2_1  =  677,
OSCINT1_B0_2  =  678,
OSCINT1_B1_2  =  679,
OSCINT1_B2_2  =  680,
OSCINT1_A1_2  =  681,
OSCINT1_A2_2  =  682,
OSCINT2_B0_1  =  683,
OSCINT2_B1_1  =  684,
OSCINT2_B2_1  =  685,
OSCINT2_A1_1  =  686,
OSCINT2_A2_1  =  687,
OSCINT2_B0_2  =  688,
OSCINT2_B1_2  =  689,
OSCINT2_B2_2  =  690,
OSCINT2_A1_2  =  691,
OSCINT2_A2_2  =  692,
UNUSED693  =  693,
UNUSED694  =  694,
UNUSED695  =  695,
RING_LPF_B0  =  696,
RING_LPF_B1  =  697,
RING_LPF_B2  =  698,
RING_LPF_A1  =  699,
RING_LPF_A2  =  700,
LCRDBI  =  701,
LONGDBI  =  702,
VBAT_TIMER  =  703,
LF_SPEEDUP_TIMER  =  704,
DC_SPEEDUP_TIMER  =  705,
AC_SPEEDUP_TIMER  =  706,
LCR_SPEEDUP_TIMER  =  707,
CM_SPEEDUP_TIMER  =  708,
VCM_TH  =  709,
AC_SPEEDUP_TH  =  710,
SPR_SIG_0  =  711,
SPR_SIG_1  =  712,
SPR_SIG_2  =  713,
SPR_SIG_3  =  714,
SPR_SIG_4  =  715,
SPR_SIG_5  =  716,
SPR_SIG_6  =  717,
SPR_SIG_7  =  718,
SPR_SIG_8  =  719,
SPR_SIG_9  =  720,
SPR_SIG_10  =  721,
SPR_SIG_11  =  722,
SPR_SIG_12  =  723,
SPR_SIG_13  =  724,
SPR_SIG_14  =  725,
SPR_SIG_15  =  726,
SPR_SIG_16  =  727,
SPR_SIG_17  =  728,
SPR_SIG_18  =  729,
COUNTER_VTR_VAL  =  730,
CONST_028  =  731,
CONST_032  =  732,
CONST_038  =  733,
CONST_046  =  734,
COUNTER_IRING_VAL  =  735,
GAIN_RING  =  736,
RING_HYST  =  737,
COMP_Z  =  738,
CONST_115  =  739,
CONST_110  =  740,
CONST_105  =  741,
CONST_100  =  742,
CONST_095  =  743,
CONST_090  =  744,
CONST_085  =  745,
V_RASUM_IDEAL  =  746,
CONST_ONE  =  747,
VCM_OH  =  748,
VCM_RING  =  749,
VCM_HYST  =  750,
VOV_GND  =  751,
VOV_BAT  =  752,
VOV_RING_BAT  =  753,
CM_DBI  =  754,
RTPER  =  755,
P_TH_HVIC  =  756,
UNUSED757  =  757,
UNUSED758  =  758,
COEF_P_HVIC  =  759,
COEF_Q1256  =  760,
UNUSED761  =  761,
UNUSED762  =  762,
UNUSED763  =  763,
BAT_HYST  =  764,
BAT_DBI  =  765,
VBATL_EXPECT  =  766,
VBATH_EXPECT  =  767,
VBATR_EXPECT  =  768,
BAT_SETTLE  =  769,
VBAT_IRQ_TH  =  770,
MADC_VTIPC_OS  =  771,
MADC_VRINGC_OS  =  772,
MADC_VBAT_OS  =  773,
MADC_VLONG_OS  =  774,
UNUSED775  =  775,
MADC_VDC_OS  =  776,
MADC_ILONG_OS  =  777,
UNUSED778  =  778,
UNUSED779  =  779,
MADC_ILOOP_OS  =  780,
MADC_SCALE_ILOOP  =  781,
UNUSED782  =  782,
UNUSED783  =  783,
DC_ADC_OS  =  784,
CAL_UNITY  =  785,
UNUSED786  =  786,
UNUSED787  =  787,
ACADC_OFFSET  =  788,
ACDAC_OFFSET  =  789,
CAL_DCDAC_CODE  =  790,
CAL_DCDAC_15MA  =  791,
UNUSED792  =  792,
UNUSED793  =  793,
UNUSED794  =  794,
UNUSED795  =  795,
UNUSED796  =  796,
UNUSED797  =  797,
UNUSED798  =  798,
UNUSED799  =  799,
UNUSED800  =  800,
CAL_LB_TSQUELCH  =  801,
CAL_LB_TCHARGE  =  802,
CAL_LB_TSETTLE0  =  803,
CAL_GOERTZEL_DLY  =  804,
CAL_GOERTZEL_ALPHA  =  805,
CAL_DECLPF_K  =  806,
CAL_DECLPF_B1  =  807,
CAL_DECLPF_B2  =  808,
CAL_DECLPF_A1  =  809,
CAL_DECLPF_A2  =  810,
CAL_ACADC_THRL  =  811,
CAL_ACADC_THRH  =  812,
CAL_ACADC_TSETTLE  =  813,
DTROW0TH  =  814,
DTROW1TH  =  815,
DTROW2TH  =  816,
DTROW3TH  =  817,
DTCOL0TH  =  818,
DTCOL1TH  =  819,
DTCOL2TH  =  820,
DTCOL3TH  =  821,
DTFTWTH  =  822,
DTRTWTH  =  823,
DTROWRTH  =  824,
DTCOLRTH  =  825,
DTROW2HTH  =  826,
DTCOL2HTH  =  827,
DTMINPTH  =  828,
DTHOTTH  =  829,
RXPWR  =  830,
TXPWR  =  831,
RXMODPWR  =  832,
TXMODPWR  =  833,
FSKFREQ0  =  834,
FSKFREQ1  =  835,
FSKAMP0  =  836,
FSKAMP1  =  837,
FSK01  =  838,
FSK10  =  839,
VOCDELTA  =  840,
VOCLTH  =  841,
VOCHTH  =  842,
RINGOF  =  843,
RINGFR  =  844,
RINGAMP  =  845,
RINGPHAS  =  846,
RTDCTH  =  847,
RTACTH  =  848,
RTDCDB  =  849,
RTACDB  =  850,
RTCOUNT  =  851,
LCROFFHK  =  852,
LCRONHK  =  853,
LCRMASK  =  854,
LCRMASK_POLREV  =  855,
LCRMASK_STATE  =  856,
LCRMASK_LINECAP  =  857,
LONGHITH  =  858,
LONGLOTH  =  859,
IRING_LIM  =  860,
AC_PU_DELTA1  =  861,
AC_PU_DELTA2  =  862,
DIAG_LPF_8K  =  863,
DIAG_LPF_128K  =  864,
DIAG_INV_N  =  865,
DIAG_GAIN  =  866,
DIAG_G_CAL  =  867,
DIAG_OS_CAL  =  868,
SPR_GAIN_TRIM  =  869,
UNUSED870  =  870,
AC_DAC_GAIN  =  871,
UNUSED872  =  872,
UNUSED873  =  873,
AC_DAC_GAIN0  =  874,
EZSYNTH_B0  =  875,
OFFLD_DAC_SCALE  =  876,
UNUSED877  =  877,
OFFLD_DAC_OS  =  878,
UNUSED879  =  879,
AC_ADC_GAIN  =  880,
ILOOP1LPF  =  881,
RING_FLUSH_TIMER  =  882,
ALAW_BIAS  =  883,
MADC_VTRC_SCALE  =  884,
MADC_VBAT_SCALE  =  885,
UNUSED886  =  886,
MADC_VLONG_SCALE  =  887,
MADC_VLONG_SCALE_RING  =  888,
UNUSED889  =  889,
MADC_VDC_SCALE  =  890,
MADC_ILONG_SCALE  =  891,
UNUSED892  =  892,
UNUSED893  =  893,
VDIFF_SENSE_SCALE  =  894,
VDIFF_SENSE_SCALE_RING  =  895,
VOV_RING_GND  =  896,
P_TH_OFFLOAD  =  897,
CAL_LB_OSC1_FREQ  =  898,
CAL_DCDAC_9TAU  =  899,
CAL_MADC_9TAU  =  900,
ADAP_RING_MIN_I  =  901,
SWEEP_STEP  =  902,
SWEEP_STEP_SAVE  =  903,
SWEEP_REF  =  904,
AMP_STEP  =  905,
RXACGAIN_SAVE  =  906,
AMP_RAMP_INIT  =  907,
DIAG_HPF_GAIN  =  908,
DIAG_HPF_8K  =  909,
DIAG_ADJ_STEP  =  910,
UNUSED911  =  911,
UNUSED912  =  912,
MADC_SCALE_INV  =  913,
UNUSED914  =  914,
PWRSAVE_TIMER  =  915,
OFFHOOK_THRESH  =  916,
SPEEDUP_MASK_TIMER  =  917,
XTALK_TIMER  =  918,
VBAT_TRACK_MIN  =  919,
VBAT_TRACK_MIN_RNG  =  920,
UNUSED921  =  921,
UNUSED922  =  922,
UNUSED923  =  923,
UNUSED924  =  924,
UNUSED925 =  925,
UNUSED926  =  926,
DC_HOLD_DAC_OS  =  927,
DAA_DTMF_IN_SCALE  =  928,
NOTCH_B0  =  929,
NOTCH_B1  =  930,
NOTCH_B2  =  931,
NOTCH_A1  =  932,
NOTCH_A2  =  933,
METER_LPF_B0  =  934,
METER_LPF_B1  =  935,
METER_LPF_B2  =  936,
METER_LPF_A1  =  937,
METER_LPF_A2  =  938,
METER_SIG_0  =  939,
METER_SIG_1  =  940,
METER_SIG_2  =  941,
METER_SIG_3  =  942,
METER_SIG_4  =  943,
METER_SIG_5  =  944,
METER_SIG_6  =  945,
METER_SIG_7  =  946,
METER_SIG_8  =  947,
METER_SIG_9  =  948,
METER_SIG_10  =  949,
METER_SIG_11  =  950,
METER_SIG_12  =  951,
METER_SIG_13  =  952,
METER_SIG_14  =  953,
METER_SIG_15  =  954,
METER_BP_B0  =  955,
METER_BP_B1  =  956,
METER_BP_B2  =  957,
METER_BP_A1  =  958,
METER_BP_A2  =  959,
PM_AMP_THRESH  =  960,
PM_GAIN  =  961,
PWRSAVE_DBI  =  962,
DCDC_ANA_SCALE  =  963,
VOV_BAT_PWRSAVE_LO  =  964,
VOV_BAT_PWRSAVE_HI  =  965,
AC_ADC_GAIN0  =  966,
SCALE_KAUDIO  =  967,
METER_GAIN_TEMP  =  968,
METER_RAMP_STEP  =  969,
THERM_DBI  =  970,
LPR_SCALE =  971,
LPR_CM_OS =  972,
VOV_DCDC_SLOPE  =  973,
VOV_DCDC_OS  =  974,
VOV_RING_BAT_MAX  =  975,
SLOPE_VLIM1 =  976,
SLOPE_RFEED1  =  977,
SLOPE_ILIM1  =  978,
V_VLIM1  =  979,
V_RFEED1  =  980,
V_ILIM1  =  981,
CONST_RFEED1 =  982,
CONST_ILIM1 =  983,
I_VLIM1  =  984,
SLOPE_VLIM2 =  985,
SLOPE_RFEED2  =  986,
SLOPE_ILIM2  =  987,
V_VLIM2  =  988,
V_RFEED2  =  989,
V_ILIM2 =  990,
CONST_RFEED2  =  991,
CONST_ILIM2  =  992,
I_VLIM2  =  993,
DIAG_V_TAR  =  994,
DIAG_V_TAR2  =  995,
STOP_TIMER1_VAL =  996,
STOP_TIMER2_VAL =  997,
DIAG_VCM1_TAR  =  998,
DIAG_VCM_STEP  =  999,
LKG_DNT_HIRES  =  1000,
LKG_DNR_HIRES  =  1001,
LINEAR_OS  =  1002,
CPUMP_DEB =  1003,
DCDC_VERR  =  1004,
DCDC_VERR_HYST  =  1005,
DCDC_OITHRESH_LO  =  1006,
DCDC_OITHRESH_HI =  1007,
HV_BIAS_ONHK  =  1008,
HV_BIAS_OFFHK  =  1009,
#ifdef USE_SI3226X_REVB_DEFINES
RING_ENTRY_DLY  =  1010,
RING_EXIT_DLY  =  1011,
VBAT_FIXRL_RING  =  1012,
VBAT_FIXRL_ACT  =  1013,
VBAT_FIXRL_LP  =  1014,
VOV_RING_BAT_DCDC  =  1015,
P_OFFLOAD_VBAT_HYST  =  1016,
LKG_OFHK_OFFSET  =  1017,
LKG_LB_OFFSET  =  1018,
UNUSED1019  =  1019,
VBATH_DELTA  =  1020,
UVTHRESH_MAX  =  1021,
UVTHRESH_SCALE  =  1022,
UVTHRESH_BIAS  =  1023
#else
UVTHRESH_BIAS = 1010,
UVTHRESH_SCALE = 1011,
UVTHRESH_MAX = 1012,
VBATH_DELTA = 1013,
UNUSED1014 = 1014,
VOV_RING_BAT_DCDC = 1015,
P_OFFLOAD_VBAT_HYST = 1016,
LKG_LB_OFFSET = 1017,
LKG_OFHK_OFFSET = 1018
#endif
};

/*
** This defines the neumomics for applicable SI3226X Memory-mapped register locations
*/
enum {
    PD_BIAS = 1413,
    PD_VBAT_SNS = 1418,
    PD_HVIC = 1430,
    MADC_LOOP_MAN = 1445,
    HVIC_CNTL_MAN = 1451,
    CAL_TRNRD_DACT = 1458,
    CAL_TRNRD_DACR,
    CMDAC_FWD = 1476,
    CMDAC_REV,
    PD_OFFLD_DAC = 1512,
    PD_OFFLD_GM = 1513,
    DCDC_DCFF_ENABLE = 1522,
    PD_DCDC = 1538,
    PD_UVLO = 1540,
    PD_OVLO,
    PD_OCLO,
	DCDC_UVHYST = 1545,
	DCDC_UVTHRESH,
	DCDC_OVTHRESH = 1547,
	DCDC_OITHRESH,
	UNUSED1549,
	DCDC_CCM_THRESH,
	DCDC_STATUS,
	DCDC_FSW,
	DCDC_SWDRV_POL,
	DCDC_UVPOL,
	DCDC_CPUMP,
	UNUSED1556,
	UNUSED1557,
	DCDC_VREF_CTRL,
	UNUSED1559,
	DCDC_RNGTYPE,
    DCDC_OIMASK = 1565,
    PD_REF_OSC = 1571,
    DCDC_ANA_GAIN = 1585,
    DCDC_ANA_TOFF,
    DCDC_ANA_TONMIN,
    DCDC_ANA_TONMAX,
    DCDC_ANA_DSHIFT,
    DCDC_ANA_LPOLY,
    DCDC_PD_ANA = 1592,
    PATCH_JMP8 = 1597,
    DCDC_UV_MAN = 1640,
    DCDC_UV_DEBOUNCE = 1641,
    DCDC_OV_MAN = 1642, 
    DCDC_OV_DEBOUNCE = 1643,
    OFFLD_DAC_MAN = 1646
};

/* Temporary Rev B Support During Rev C Adoption */
#define LKG_OFHK_OFFSET_REVB 1017
#define LKG_LB_OFFSET_REVB   1018
#define VBATH_DELTA_REVB     1020
#define UVTHRESH_MAX_REVB    1021
#define UVTHRESH_SCALE_REVB  1022
#define UVTHRESH_BIAS_REVB   1023

/* Temporarily map obsolete ram locations for debug purposes */
#define DCDC_FSW_NORM       UNUSED921
#define DCDC_FSW_NORM_LO    UNUSED922
#define DCDC_DIN_LIM        UNUSED925
#define DCDC_FSW_RING       UNUSED923
#define DCDC_FSW_RING_LO    UNUSED924
#define DCDC_VOUT_LIM       UNUSED926
#define DCDC_FSW_VHYST      Y3
#define DCDC_FSW_VTHLO      Y2
#define DAA_CNTL            74
#define DCDC_VREF_MIN       VBAT_TRACK_MIN
#define DCDC_VREF_MIN_RNG   VBAT_TRACK_MIN_RNG


#endif


