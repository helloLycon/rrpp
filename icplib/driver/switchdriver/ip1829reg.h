#ifndef IP1829REG_H
#define IP1829REG_H

#if 1
#define SWITCHREG_BASE			0xBE700000	//Virtual Address
#else
#define SWITCHREG_BASE			0x1E700000	//Physical Address
#endif

#define REG_Page			0xFF

#if 1
/* CPU register test */
#define CPU_REG_BASE			0xBE000000	//Virtual Address
#define CPU_TIMER_BASE			0xBEB00000	//Virtual Address
#define CPU_GPIO_BASE			0xBEE00000	//Virtual Address
#endif
/*--------------- Registers of Page0 ---------------*/
#define P0REG_MACBEHAVIOR			0x01
#define P0REG_JUMBO					0x02
#define P0REG_MACLOOPB				0x04
#define P0REG_L2FRAMEGETCTRL		0x06
#define P0REG_L2FRAMEGETCTRL1		0x07
#define P0REG_L3FRAMEGETCTRL		0x08
#define P0REG_L3USERDEF				0x09
#define P0REG_TCPUDPUSERDEF			0x0A
#define P0REG_TCPUDPPRICFG			0x12

#define P0REG_TCPUDFUNCEN			0x19
#define P0REG_QOSTCPUDPBASEPRIEN0   0x1B
#define P0REG_QOSTCPUDPBASEPRIEN1   0x1C

#define P0REG_TCPCHECKEN			0x1D
#define P0REG_UDPCHECKEN			0x1F

#define P0REG_INBANDRESTRICT		0x21
#define P0REG_INBANDRESTRICT1		0x22
#define P0REG_ETHERUSERDEF			0x23

#define P0REG_BPDUPORTCAPCFG		0x30

#define P0REG_QOSPORTBASEPRIQUE0    0x3A
#define P0REG_QOSPORTBASEPRIQUE1    0x3B
#define P0REG_QOSPORTBASEPRIQUE2    0x3C
#define P0REG_QOSPORTBASEPRIQUE3    0x3D
#define P0REG_QOSPORTBASEPRIQUE4    0x3E
#define P0REG_QOSPORTBASEPRIQUE5    0x3F  
#define P0REG_QOS8021PBASEPRIEN0    0x40
#define P0REG_QOS8021PBASEPRIEN1    0x41
#define P0REG_QOSDSCPBASEPRIEN0     0x42
#define P0REG_QOSDSCPBASEPRIEN1     0x43
#define P0REG_QOSDSCPPRISETTING0  0x44
#define P0REG_QOSDSCPPRISETTING1  0x45
#define P0REG_QOSDSCPVALUE0     0x46
#define P0REG_QOSDSCPVALUE1     0x47
#define P0REG_QOSDSCPVALUE2     0x48
#define P0REG_QOSDSCPVALUE3     0x49
#define P0REG_QOSMACBASEPRIEN0   0x4A
#define P0REG_QOSMACBASEPRIEN1   0x4B
#define P0REG_QOSVIDBASEPRIEN0   0x4C
#define P0REG_QOSVIDBASEPRIEN1   0x4D
#define P0REG_QOSIPBASEPRIEN0    0x4E
#define P0REG_QOSIPBASEPRIEN1    0x4F
#define P0REG_QOSIGMPBASEPRIEN0  0x50
#define P0REG_QOSIGMPBASEPRIEN1  0x51
#define P0REG_QOSACLBASEPRIEN0   0x52
#define P0REG_QOSACLBASEPRIEN1   0x53

#define P0REG_PORTLOCKEN			0x54

#define P0REG_MACRESET				0x5A
#define P0REG_MACADDRESS			0x5C

#define POREG_MIBCOUN_CMD       0x64
#define POREG_MIBCOUN_DATA_L    0x65
#define POREG_MIBCOUN_DATA_H    0x66

#define P0REG_MACSELFPKT			0x67
#define P0REG_MACSELFPKT1			0x68
#define P0REG_MACSELF				0x69
#define P0REG_LDCONFIG				0x6B
#define P0REG_LDCONFIG1				0x6C
#define P0REG_LDTIMER				0x6D
#define P0REG_LDDA0					0x6E
#define P0REG_LDETYPE				0x71
#define P0REG_LDSUBTYPE				0x72
#define P0REG_LDDEVID				0x73
#define P0REG_TCPFLGCFGGLB			0x74
#define P0REG_TCPFLGCFG0			0x75

#define P0REG_TCPFLGPORTEN			0x7B
#define P0REG_EOCCFG0				0x83
#define P0REG_EOCCFG1				0x84
#define P0REG_EOCBLKSTATUS			0x85
#define P0REG_INGRESS_RATE_CTRL0	0x87

#define P0REG_PTPCFG				0xA4
#define P0REG_LDSTATUS				0xA5

#define P0REG_IPV6RLTCFG			0xA7
#define P0REG_IPV6RLTFWD			0xA8

#define P0REG_IPV6NXHEADUSER		0xAA
#define P0REG_ICMPV6TYPEUSER		0xAB
#define P0REG_WOLEN					0xAD
#define P0REG_WOLCFG				0xAF
#define P0REG_WOLMODECTRL			0xB0
#define P0REG_WOLEVENT				0xB2

/*--------------- Registers of Page1 ---------------*/
#define P1REG_LUTAGINGTIME		0x01
#define P1REG_SRCLEARNCFG		0x02
#define P1REG_SRCLEARNEN		0x03
#define P1REG_SRCLEARNCNT		0x05
#define P1REG_SRCLCNTTHRESH		0x07
#define P1REG_FWDPAUSEEN		0x0B
#define P1REG_FWDPAUSEEN1		0x0C
#define P1REG_BSTORMTHRESH		0x0D
#define P1REG_BSTORMEN			0x0E
#define P1REG_MSTORMEN			0x10
#define P1REG_DLFSTORMEN		0x12
#define P1REG_ARPSTORMCFG		0x14
#define P1REG_ARPSTORMEN		0x15
#define P1REG_ICMPSTORMCFG		0x17
#define P1REG_ICMPSTORMEN		0x18
#define P1REG_PORTFLUSH			0x1A
#define P1REG_TRUNKCFG			0x1C
#define P1REG_TRUNKGRP			0x1D
#define P1REG_SNIFDEST			0x1E
#define P1REG_SNIFDEST1			0x1F
#define P1REG_SNIF2DEST			0x20
#define P1REG_SNIF2DEST1		0x21
#define P1REG_SNIFSRC			0x22
#define P1REG_MISCCFG			0x24

#define P1REG_IGMPSNOP			0x29
#define P1REG_IGMPPKTFWD_0		0x2A
#define P1REG_IGMPPKTFWD_1		0x2B
#define P1REG_ROUTLIST_0		0x2C
#define P1REG_ROUTLIST_1		0x2D

#define P1REG_MEM_COMMAND		0x2E
#define P1REG_MEM_TABLE_0		0x2F

#define P1REG_SPANTREE			0x57

#define P1REG_LUTCFG			0xE0
#define P1REG_LUTDATA			0xE1
#define P1REG_LUTDATA_0			0xE1
#define P1REG_LUTDATA_1			0xE2
#define P1REG_LUTDATA_2			0xE3
#define P1REG_LUTDATA_3			0xE4
#define P1REG_LUTDATA_4			0xE5

/*--------------- Registers of Page2 ---------------*/
#define P2REG_IMPCFG0				0x01
#define P2REG_IMPCFG1				0x02

#define P2REG_VLANCFG				0x06
#define P2REG_VLAN_INGRESS_CHK		0x09
#define P2REG_VLAN_INGRESS_FRAME	0x0B

#define P2REG_VLAN_EGRESS_CFG		0x0F
#define P2REG_VLAN_EGRESS_CFG1		0x10

#define P2REG_VLANLOCAL				0x11
#define P2REG_VLAN_PVIDCFG			0x13

#define P2REG_VLANGROUP				0x30

#define P2REG_VLAN_PROCOTOL_CFG		0x6A
#define P2REG_ACL_VID_REMARK_00		0x6A

#define P2REG_ACL_VLAN_01_0			0x8A

#define P2REG_VLAN_EXCLUSIVE		0xCA
#define P2REG_VLAN_ADDTAG			0xCC
#define P2REG_VLAN_RMVTAG			0xCE

#define P2REG_VLAN_UPLINK			0xD0
#define P2REG_VLANCMD				0xD2
#define P2REG_VLANDAT0				0xD3

#define P2REG_ACL_BW_01				0xD9

#define P2REG_ACL_TABLE_ACCESS		0xE3
#define P2REG_ACL_TABLE_DATA_E4		0xE4
#define P2REG_ACL_TABLE_DATA_E5		0xE5
#define P2REG_ACL_TABLE_DATA_E6		0xE6
#define P2REG_ACL_TABLE_DATA_E7		0xE7
#define P2REG_ACL_TABLE_DATA_E8		0xE8
#define P2REG_ACL_TABLE_DATA_E9		0xE9
#define P2REG_ACL_TABLE_DATA_EA		0xEA
#define P2REG_ACL_TABLE_DATA_EB		0xEB
#define P2REG_ACL_TABLE_DATA_EC		0xEC
#define P2REG_ACL_TABLE_DATA_ED		0xED

/*--------------- Registers of Page3 ---------------*/
#define P3REG_AN			0x01
#define P3REG_SPG			0x03
#define P3REG_SP			0x04
#define P3REG_DUPLEX		0x06
#define P3REG_PAUSE			0x08
#define P3REG_ASPAUSE		0x0A
#define P3REG_BPRESS		0x0C
#define P3REG_POWERDOWN		0x0E

#define P3REG_SMI_MISC		0x12
#define P3REG_PHYACCESS_CMD   0x13
#define P3REG_PHYACCESS_DATA   0x14

#define P3REG_PORTSTS0		0x20

#define P3REG_FORCELINK		0x5C

#define P3REG_UNIDIRECT		0x66

/*--------------- Registers of Page6 ---------------*/
#define P6REG_QOS_REMAP_RX0   0x24

/*--------------- Registers of Page7 ---------------*/
#define P7REG_QINQ_RMVTAG		0x01
#define P7REG_QINQ_ADDTAG		0x03
#define P7REG_QINQ_DET_RX		0x05
#define P7REG_QINQEGTYPELEN		0x09
#define P7REG_QINQ_DATA			0x0A
#define P7REG_QINQ_P_DATA		0x4A

#define P7REG_DSCP_REMARKING_01	0x67
//#define P7REG_DSCP_REMARKING_23	0x68
//#define P7REG_DSCP_REMARKING_45	0x69
//#define P7REG_DSCP_REMARKING_67	0x6A

#define P7REG_8021TAGLEN		0x79

/*--------------- Registers of Page8 ---------------*/
#define P8REG_QOSMODESELGROUP1    0x01
#define P8REG_QOSGP1_WEIGHT0     0x02
#define P8REG_QOSGP1_WEIGHT1     0x03
#define P8REG_QOSGP1_WEIGHT2     0x04
#define P8REG_QOSGP1_WEIGHT3     0x05
#define P8REG_QOSGP1_MAXBDWT0     0x0A
#define P8REG_QOSGP1_MAXBDWT1     0x0B
#define P8REG_QOSGP1_MAXBDWT2     0x0C
#define P8REG_QOSGP1_MAXBDWT3     0x0D

#define P8REG_QOS_REMAP_TX0       0x14

#define P8REG_QOS_SBMDBMSEL0      0x55

#define P8REG_QOSQUEUEDBMEN0      0x64
#define P8REG_QOSQUEUEDBMEN1      0x65
#define P8REG_QOSAGINGTIME        0x66
#define P8REG_QOSPORTAGINGEN0     0x67
#define P8REG_QOSPORTAGINGEN1     0x68
#define P8REG_QOSPORTAGINGEN2     0x69
#define P8REG_QOSPORTAGINGEN3     0x6A
#define P8REG_QOSPORTAGINGEN4     0x6B
#define P8REG_QOSPORTAGINGEN5     0x6C
#define P8REG_QOSPORTAGINGEN6     0x6D
#define P8REG_QOSPORTAGINGEN7     0x6E
#define P8REG_QOSPORTAGINGEN8     0x6F
#define P8REG_QOSPORTAGINGEN9     0x70
#define P8REG_QOSPORTAGINGEN10    0x71
#define P8REG_QOSPORTAGINGEN11    0x72
#define P8REG_QOSPORTAGINGEN12    0x73
#define P8REG_QOSPORTAGINGEN13    0x74
#define P8REG_QOSPORTAGINGEN14    0x75

#define P8REG_QOSMODESELGROUP2    0x76
#define P8REG_QOSGROUPSEL0     0x77
#define P8REG_QOSGROUPSEL1     0x78

#define P8REG_QOSGP2_WEIGHT0     0x79
#define P8REG_QOSGP2_WEIGHT1     0x7A
#define P8REG_QOSGP2_WEIGHT2     0x7B
#define P8REG_QOSGP2_WEIGHT3     0x7C
#define P8REG_QOSGP2_MAXBDWT0     0x81
#define P8REG_QOSGP2_MAXBDWT1     0x82
#define P8REG_QOSGP2_MAXBDWT2     0x83
#define P8REG_QOSGP2_MAXBDWT3     0x84
#define P8REG_EGRESS_RATE_CTRL0   0x85
#define P8REG_OUT_QUEUE_PARAM     0xB1

/*--------------- Registers of PageC ---------------*/
#define PCREG_SW_RESET			0x00
#define PCREG_CPUMODE			0x03
#define PCREG_SPTAG				0x04
#define PCREG_IO_CONFIG2		0x0A
#define PCREG_EEPROM_CMD		0x0D
#define PCREG_EEPROM_DATA		0x0F

#endif		/* IP1829REG_H */
