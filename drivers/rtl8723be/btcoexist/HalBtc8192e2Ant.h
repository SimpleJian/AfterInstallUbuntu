//===========================================
// The following is for 8192E 2Ant BT Co-exist definition
//===========================================
#define	BT_AUTO_REPORT_ONLY_8192E_2ANT				0

#define	BT_INFO_8192E_2ANT_B_FTP						BIT7
#define	BT_INFO_8192E_2ANT_B_A2DP					BIT6
#define	BT_INFO_8192E_2ANT_B_HID						BIT5
#define	BT_INFO_8192E_2ANT_B_SCO_BUSY				BIT4
#define	BT_INFO_8192E_2ANT_B_ACL_BUSY				BIT3
#define	BT_INFO_8192E_2ANT_B_INQ_PAGE				BIT2
#define	BT_INFO_8192E_2ANT_B_SCO_ESCO				BIT1
#define	BT_INFO_8192E_2ANT_B_CONNECTION				BIT0

#define		BTC_RSSI_COEX_THRESH_TOL_8192E_2ANT		2

typedef enum _BT_INFO_SRC_8192E_2ANT{
	BT_INFO_SRC_8192E_2ANT_WIFI_FW			= 0x0,
	BT_INFO_SRC_8192E_2ANT_BT_RSP				= 0x1,
	BT_INFO_SRC_8192E_2ANT_BT_ACTIVE_SEND		= 0x2,
	BT_INFO_SRC_8192E_2ANT_MAX
}BT_INFO_SRC_8192E_2ANT,*PBT_INFO_SRC_8192E_2ANT;

typedef enum _BT_8192E_2ANT_BT_STATUS{
	BT_8192E_2ANT_BT_STATUS_NON_CONNECTED_IDLE	= 0x0,
	BT_8192E_2ANT_BT_STATUS_CONNECTED_IDLE		= 0x1,
	BT_8192E_2ANT_BT_STATUS_INQ_PAGE				= 0x2,
	BT_8192E_2ANT_BT_STATUS_ACL_BUSY				= 0x3,
	BT_8192E_2ANT_BT_STATUS_SCO_BUSY				= 0x4,
	BT_8192E_2ANT_BT_STATUS_ACL_SCO_BUSY			= 0x5,
	BT_8192E_2ANT_BT_STATUS_MAX
}BT_8192E_2ANT_BT_STATUS,*PBT_8192E_2ANT_BT_STATUS;

typedef enum _BT_8192E_2ANT_COEX_ALGO{
	BT_8192E_2ANT_COEX_ALGO_UNDEFINED		= 0x0,
	BT_8192E_2ANT_COEX_ALGO_SCO				= 0x1,
	BT_8192E_2ANT_COEX_ALGO_SCO_PAN			= 0x2,
	BT_8192E_2ANT_COEX_ALGO_HID				= 0x3,
	BT_8192E_2ANT_COEX_ALGO_A2DP			= 0x4,
	BT_8192E_2ANT_COEX_ALGO_A2DP_PANHS		= 0x5,
	BT_8192E_2ANT_COEX_ALGO_PANEDR			= 0x6,
	BT_8192E_2ANT_COEX_ALGO_PANHS			= 0x7,
	BT_8192E_2ANT_COEX_ALGO_PANEDR_A2DP		= 0x8,
	BT_8192E_2ANT_COEX_ALGO_PANEDR_HID		= 0x9,
	BT_8192E_2ANT_COEX_ALGO_HID_A2DP_PANEDR	= 0xa,
	BT_8192E_2ANT_COEX_ALGO_HID_A2DP		= 0xb,
	BT_8192E_2ANT_COEX_ALGO_MAX				= 0xc
}BT_8192E_2ANT_COEX_ALGO,*PBT_8192E_2ANT_COEX_ALGO;

typedef struct _COEX_DM_8192E_2ANT{
	// fw mechanism
	u8		preBtDecPwrLvl;
	u8		curBtDecPwrLvl;
	u8		preFwDacSwingLvl;
	u8		curFwDacSwingLvl;
	bool		bCurIgnoreWlanAct;
	bool		bPreIgnoreWlanAct;
	u8		prePsTdma;
	u8		curPsTdma;
	u8		psTdmaPara[5];
	u8		psTdmaDuAdjType;
	bool		bResetTdmaAdjust;
	bool		bAutoTdmaAdjust;
	bool		bPrePsTdmaOn;
	bool		bCurPsTdmaOn;
	bool		bPreBtAutoReport;
	bool		bCurBtAutoReport;

	// sw mechanism
	bool		bPreRfRxLpfShrink;
	bool		bCurRfRxLpfShrink;
	u32		btRf0x1eBackup;
	bool 	bPreLowPenaltyRa;
	bool		bCurLowPenaltyRa;
	bool		bPreDacSwingOn;
	u32		preDacSwingLvl;
	bool		bCurDacSwingOn;
	u32		curDacSwingLvl;
	bool		bPreAdcBackOff;
	bool		bCurAdcBackOff;
	bool 	bPreAgcTableEn;
	bool		bCurAgcTableEn;
	u32		preVal0x6c0;
	u32		curVal0x6c0;
	u32		preVal0x6c4;
	u32		curVal0x6c4;
	u32		preVal0x6c8;
	u32		curVal0x6c8;
	u8		preVal0x6cc;
	u8		curVal0x6cc;
	bool		limited_dig;

	u32		backupArfrCnt1;	// Auto Rate Fallback Retry cnt
	u32		backupArfrCnt2;	// Auto Rate Fallback Retry cnt
	u16		backupRetryLimit;
	u8		backupAmpduMaxTime;

	// algorithm related
	u8		preAlgorithm;
	u8		curAlgorithm;
	u8		btStatus;
	u8		wifiChnlInfo[3];

	u8		preSsType;
	u8		curSsType;

	u32		prera_mask;
	u32		curra_mask;
	u8		curra_maskType;
	u8		preArfrType;
	u8		curArfrType;
	u8		preRetryLimitType;
	u8		curRetryLimitType;
	u8		preAmpduTimeType;
	u8		curAmpduTimeType;
} COEX_DM_8192E_2ANT, *PCOEX_DM_8192E_2ANT;

typedef struct _COEX_STA_8192E_2ANT{	
	bool					bBtLinkExist;
	bool					bScoExist;
	bool					bA2dpExist;
	bool					bHidExist;
	bool					bPanExist;

	bool					bUnderLps;
	bool					bUnderIps;
	u32					highPriorityTx;
	u32					highPriorityRx;
	u32					lowPriorityTx;
	u32					lowPriorityRx;
	u8					btRssi;
	u8					preBtRssiState;
	u8					preWifiRssiState[4];
	bool					bC2hBtInfoReqSent;
	u8					btInfoC2h[BT_INFO_SRC_8192E_2ANT_MAX][10];
	u32					btInfoC2hCnt[BT_INFO_SRC_8192E_2ANT_MAX];
	bool					bC2hBtInquiryPage;
	u8					btRetryCnt;
	u8					btInfoExt;
}COEX_STA_8192E_2ANT, *PCOEX_STA_8192E_2ANT;

//===========================================
// The following is interface which will notify coex module.
//===========================================
void
EXhalbtc8192e2ant_InitHwConfig(
	IN	struct btc_coexist *		pBtCoexist
	);
void
EXhalbtc8192e2ant_InitCoexDm(
	IN	struct btc_coexist *		pBtCoexist
	);
void
EXhalbtc8192e2ant_IpsNotify(
	IN	struct btc_coexist *		pBtCoexist,
	IN	u8			type
	);
void
EXhalbtc8192e2ant_LpsNotify(
	IN	struct btc_coexist *		pBtCoexist,
	IN	u8			type
	);
void
EXhalbtc8192e2ant_ScanNotify(
	IN	struct btc_coexist *		pBtCoexist,
	IN	u8			type
	);
void
EXhalbtc8192e2ant_ConnectNotify(
	IN	struct btc_coexist *		pBtCoexist,
	IN	u8			type
	);
void
EXhalbtc8192e2ant_MediaStatusNotify(
	IN	struct btc_coexist *			pBtCoexist,
	IN	u8				type
	);
void
EXhalbtc8192e2ant_SpecialPacketNotify(
	IN	struct btc_coexist *			pBtCoexist,
	IN	u8				type
	);
void
EXhalbtc8192e2ant_BtInfoNotify(
	IN	struct btc_coexist *		pBtCoexist,
	IN	u8 *			tmpBuf,
	IN	u8			length
	);
void
EXhalbtc8192e2ant_StackOperationNotify(
	IN	struct btc_coexist *			pBtCoexist,
	IN	u8				type
	);
void
EXhalbtc8192e2ant_HaltNotify(
	IN	struct btc_coexist *			pBtCoexist
	);
void
EXhalbtc8192e2ant_Periodical(
	IN	struct btc_coexist *			pBtCoexist
	);
void
EXhalbtc8192e2ant_DisplayCoexInfo(
	IN	struct btc_coexist *		pBtCoexist
	);

