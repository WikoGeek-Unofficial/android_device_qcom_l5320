
/*
WARNING: This file is auto-generated.

Generated using: rfc_autogen.exe
Generated from:  v2.41.733 of MSM8974_RFC_HWSWCD.xlsm
*/

/*=============================================================================

          R F C     A U T O G E N    F I L E

GENERAL DESCRIPTION
  This file is auto-generated and it captures the configuration of the RF Card.

Copyright (c) 2013 Qualcomm Technologies Incorporated.  All Rights Reserved.

$Header: //Commercial/MPSS.DPM.1.0.c7/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr1605_chile_rp1/common/src/rfc_wtr1605_chile_rp1_cmn_ag.cpp#2 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include <stringl/stringl.h>
#include "rfc_msm_signal_info_ag.h" 
#include "rfc_wtr1605_chile_rp1_cmn_ag.h" 
#include "DDITlmm.h" 
#include "rfc_common.h" 
#include "rfcommon_efs.h" 
#include "rfcommon_core_sbi.h" 

#ifdef FEATURE_GSM
#include "rfc_wtr1605_chile_rp1_gsm_config_ag.h" 
#endif 

#ifdef FEATURE_CDMA1X
#include "rfc_wtr1605_chile_rp1_cdma_config_ag.h" 
#endif 

#ifdef FEATURE_WCDMA
#include "rfc_wtr1605_chile_rp1_wcdma_config_ag.h" 
#endif 

#ifdef FEATURE_LTE
#include "rfc_wtr1605_chile_rp1_lte_config_ag.h" 
#endif 

#ifdef FEATURE_TDSCDMA
#include "rfc_wtr1605_chile_rp1_tdscdma_config_ag.h" 
#endif 

#ifdef FEATURE_CGPS
#include "rfc_wtr1605_chile_rp1_gnss_config_ag.h" 
#endif 



const int8  RFC_EFS_VER_MAX_STRING_SIZE = 80;
const char RFC_EFS_VER_FILE_PATH[] =  "/rfc_ver_data" ; 


rfc_device_cfg_info_type rfc_wtr1605_chile_rp1_cmn_devices_list[] = 
{
  { /*Device: WTR1605 */ 
    RFDEVICE_TRANSCEIVER, /* DEVICE_TYPE */ 
    WTR1605, /* DEVICE_NAME */ 
    0, /* DEVICE_TYPE_INSTANCE */ 
    RFDEVICE_COMM_PROTO_SSBI, /* DEVICE_COMM_PROTOCOL */ 
    {    RFC_DEVICE_COMM_BUS_SSBI_1,RFC_DEVICE_COMM_BUS_SSBI_2,}, /* DEVICE_COMM_BUS */ 
    0 /*Warning: Not specified*/, /* MANUFACTURER_ID */ 
    0 /*Warning: Not specified*/, /* PRODUCT_ID */ 
    0 /*Warning: Not specified*/, /* PRODUCT_REV */ 
    0 /*Warning: Not specified*/, /* DEFAULT USID RANGE START */
    0 /*Warning: Not specified*/, /* DEFAULT USID RANGE END */
    0 /*Warning: Not specified*/, /* ASSIGNED_USID */ 
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_TX_MODEM_CHAIN_0, /* ASSOCIATED_DAC */ 
    RFDEVICE_TYPE_INVALID, /* ASSOCIATED_DEVICE_TYPE */ 
    0 /*Warning: Not specified*/, /* ASSOCIATED_DEVICE_TYPE_INSTANCE */ 
  }, /* END - Device: WTR1605 */ 

  { /*Device: QFE2101 */ 
    RFDEVICE_PAPM, /* DEVICE_TYPE */ 
    QFE2101, /* DEVICE_NAME */ 
    0, /* DEVICE_TYPE_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* DEVICE_COMM_BUS */ 
    0x217, /* MANUFACTURER_ID */ 
    0x31, /* PRODUCT_ID */ 
    0, /* PRODUCT_REV */ 
    0x4, /* DEFAULT USID RANGE START */
    0x4, /* DEFAULT USID RANGE END */
    0x6, /* ASSIGNED_USID */ 
    0x6, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
    RFDEVICE_TYPE_INVALID, /* ASSOCIATED_DEVICE_TYPE */ 
    0 /*Warning: Not specified*/, /* ASSOCIATED_DEVICE_TYPE_INSTANCE */ 
  }, /* END - Device: QFE2101 */ 

  { /*Device: SKY_77629 */ 
    RFDEVICE_PA, /* DEVICE_TYPE */ 
    GEN_PA, /* DEVICE_NAME */ 
    0, /* DEVICE_TYPE_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* DEVICE_COMM_BUS */ 
    0x01A5, /* MANUFACTURER_ID */ 
    0x0d, /* PRODUCT_ID */ 
    0, /* PRODUCT_REV */ 
    0x0F, /* DEFAULT USID RANGE START */
    0x0F, /* DEFAULT USID RANGE END */
    0x0F, /* ASSIGNED_USID */ 
    0x0F, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
    RFDEVICE_TYPE_INVALID, /* ASSOCIATED_DEVICE_TYPE */ 
    0 /*Warning: Not specified*/, /* ASSOCIATED_DEVICE_TYPE_INSTANCE */ 
  }, /* END - Device:  sky_77629 */ 
  
  { /*Device: RFMD_7940 */ 
    RFDEVICE_PA, /* DEVICE_TYPE */ 
    GEN_PA, /* DEVICE_NAME */ 
    1, /* DEVICE_TYPE_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* DEVICE_COMM_BUS */ 
    0x0134, /* MANUFACTURER_ID */ 
    0x2A, /* PRODUCT_ID */ 
    0, /* PRODUCT_REV */ 
    0xF, /* DEFAULT USID RANGE START */
    0xF, /* DEFAULT USID RANGE END */
    0xC, /* ASSIGNED_USID */ 
    0xC, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
    RFDEVICE_TYPE_INVALID, /* ASSOCIATED_DEVICE_TYPE */ 
    0 /*Warning: Not specified*/, /* ASSOCIATED_DEVICE_TYPE_INSTANCE */ 
  }, /* END - Device: rfmd_7940 */ 

  { /*Device: RFMD_7907 */ 
    RFDEVICE_PA, /* DEVICE_TYPE */ 
    GEN_PA, /* DEVICE_NAME */ 
    2, /* DEVICE_TYPE_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* DEVICE_COMM_BUS */ 
    0x0134, /* MANUFACTURER_ID */ 
    0x17, /* PRODUCT_ID */ 
    0, /* PRODUCT_REV */ 
    0xF, /* DEFAULT USID RANGE START */
    0xF, /* DEFAULT USID RANGE END */
    0xD, /* ASSIGNED_USID */ 
    0xD, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
    RFDEVICE_TYPE_INVALID, /* ASSOCIATED_DEVICE_TYPE */ 
    0 /*Warning: Not specified*/, /* ASSOCIATED_DEVICE_TYPE_INSTANCE */ 
  }, /* END - Device: rfmd_7907 */ 

  { /*Device: RFMD_1496A */ 
    RFDEVICE_ASM, /* DEVICE_TYPE */ 
    GEN_ASM, /* DEVICE_NAME */ 
    0, /* DEVICE_TYPE_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* DEVICE_COMM_BUS */ 
    0x0134, /* MANUFACTURER_ID */ 
    0x20, /* PRODUCT_ID */ 
    0, /* PRODUCT_REV */ 
    0xB, /* DEFAULT USID RANGE START */
    0xB, /* DEFAULT USID RANGE END */
    0xB, /* ASSIGNED_USID */ 
    0xB, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
    RFDEVICE_TYPE_INVALID, /* ASSOCIATED_DEVICE_TYPE */ 
    0, /* ASSOCIATED_DEVICE_TYPE_INSTANCE */ 
  }, /* END - Device: RFMD_1496A */ 



  { /*Device: TRX_HDET */ 
    RFDEVICE_HDET, /* DEVICE_TYPE */ 
    TRX_HDET, /* DEVICE_NAME */ 
    0, /* DEVICE_TYPE_INSTANCE */ 
    RFDEVICE_COMM_PROTO_SSBI, /* DEVICE_COMM_PROTOCOL */ 
    {    RFC_DEVICE_COMM_BUS_SSBI_1,0 /* 0 not specified */,}, /* DEVICE_COMM_BUS */ 
    0 /*Warning: Not specified*/, /* MANUFACTURER_ID */ 
    0 /*Warning: Not specified*/, /* PRODUCT_ID */ 
    0 /*Warning: Not specified*/, /* PRODUCT_REV */ 
    0 /*Warning: Not specified*/, /* DEFAULT USID RANGE START */
    0 /*Warning: Not specified*/, /* DEFAULT USID RANGE END */
    0 /*Warning: Not specified*/, /* ASSIGNED_USID */ 
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
    RFDEVICE_TRANSCEIVER, /* ASSOCIATED_DEVICE_TYPE */ 
    0, /* ASSOCIATED_DEVICE_TYPE_INSTANCE */ 
  }, /* END - Device: TRX_HDET */ 

  { /*Device: RFDEVICE_INVALID */ 
    RFDEVICE_TYPE_INVALID, /* DEVICE_TYPE */ 
    RFDEVICE_INVALID, /* DEVICE_NAME */ 
    0 /*Warning: Not specified*/, /* DEVICE_TYPE_INSTANCE */ 
    RFDEVICE_COMM_PROTO_INVALID, /* DEVICE_COMM_PROTOCOL */ 
    {    0 /* 0 not specified */,0 /* 0 not specified */,}, /* DEVICE_COMM_BUS */ 
    0 /*Warning: Not specified*/, /* MANUFACTURER_ID */ 
    0 /*Warning: Not specified*/, /* PRODUCT_ID */ 
    0 /*Warning: Not specified*/, /* PRODUCT_REV */ 
    0 /*Warning: Not specified*/, /* DEFAULT USID RANGE START */
    0 /*Warning: Not specified*/, /* DEFAULT USID RANGE END */
    0 /*Warning: Not specified*/, /* ASSIGNED_USID */ 
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
    RFDEVICE_TYPE_INVALID, /* ASSOCIATED_DEVICE_TYPE */ 
    0 /*Warning: Not specified*/, /* ASSOCIATED_DEVICE_TYPE_INSTANCE */ 
  }, /* END - Device: RFDEVICE_INVALID */ 

};


rfc_signal_info_type rfc_wtr1605_chile_rp1_sig_info[RFC_WTR1605_CHILE_RP1_SIG_NUM + 1] = 
{
  { RFC_MSM_TIMING_PA_CTL                   , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_PA_CTL */ 
  { RFC_MSM_TIMING_PA_RANGE                 , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_PA_RANGE */ 
  { RFC_MSM_TIMING_ASM_CTL                  , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_ASM_CTL */ 
  { RFC_MSM_TIMING_TUNER_CTL                , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_TUNER_CTL */ 
  { RFC_MSM_TIMING_PAPM_CTL                 , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_PAPM_CTL */ 
  { RFC_MSM_TIMING_TX_TX_RF_ON0             , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_TX_TX_RF_ON0 */ 
  { RFC_MSM_TIMING_TX_RX_RF_ON0             , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_TX_RX_RF_ON0 */ 
  { RFC_MSM_TIMING_ASM_TRIGGER              , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_ASM_TRIGGER */ 
  { RFC_MSM_TIMING_PAPM_TX_TX_TRIGGER       , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_PAPM_TX_TX_TRIGGER */ 
  { RFC_MSM_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER, RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER */ 
  { RFC_MSM_TIMING_PA_TRIGGER               , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_PA_TRIGGER */ 
  { RFC_MSM_TIMING_PAPM_OFF_TX_RX_TX_CTL    , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_PAPM_OFF_TX_RX_TX_CTL */ 
  { RFC_MSM_TIMING_PAPM_TX_TX_CTL           , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TIMING_PAPM_TX_TX_CTL */ 
  { RFC_MSM_RF_PATH_SEL_01                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_01 */ 
  { RFC_MSM_RF_PATH_SEL_00                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_00 */ 
  { RFC_MSM_RF_PATH_SEL_02                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_02 */ 
  { RFC_MSM_PA_ON_19                        , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_PA_ON_19 */ 
  { RFC_MSM_PA_ON_06                        , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_PA_ON_06 */ 
  { RFC_MSM_RF_PATH_SEL_03                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_03 */ 
  { RFC_MSM_RX_ON0_alt                      , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RX_ON0_alt */ 
  { RFC_MSM_RF_ON0                          , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_ON0 */ 
  { RFC_MSM_RF_PATH_SEL_20                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_20 */ 
// { RFC_MSM_PA_ON_18                        , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_PA_ON_18 */ 
  { RFC_MSM_RF_PATH_SEL_14                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_14 */ 
  { RFC_MSM_RF_PATH_SEL_07                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_07 */ 
  { RFC_MSM_PA0_R1                          , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_PA0_R1 */ 
  { RFC_MSM_PA1_R1_DEFAULT                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_PA1_R1_DEFAULT */ 
  { RFC_MSM_PA1_R2                          , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_PA1_R2 */ 
  { RFC_MSM_RF_PATH_SEL_15                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15 */ 
  { RFC_MSM_RF_PATH_SEL_12                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_12 */ 
  { RFC_MSM_PA_ON_10                        , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_PA_ON_10 */ 
  { RFC_MSM_RF_PATH_SEL_05                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05 */ 
  { RFC_MSM_PA0_R0                          , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_PA0_R0 */ 
  { RFC_MSM_RF_PATH_SEL_24                  , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_24 */ 
  { RFC_MSM_GPDATA0_1                       , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_GPDATA0_1 */ 
  { RFC_MSM_GPDATA0_0                       , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_GPDATA0_0 */ 
  { RFC_MSM_GPDATA1_1                       , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_GPDATA1_1 */ 
  { RFC_MSM_GPDATA1_0                       , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_GPDATA1_0 */ 
  { RFC_MSM_RFIC0_SSBI1                     , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RFIC0_SSBI1 */ 
  { RFC_MSM_RFIC0_SSBI2                     , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RFIC0_SSBI2 */ 
  { RFC_MSM_RFIC1_SSBI1                     , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RFIC1_SSBI1 */ 
  { RFC_MSM_RFIC1_SSBI2                     , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RFIC1_SSBI2 */ 
  { RFC_MSM_RFFE1_CLK                       , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RFFE1_CLK */ 
  { RFC_MSM_RFFE1_DATA                      , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RFFE1_DATA */ 
  { RFC_MSM_RFFE2_CLK                       , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RFFE2_CLK */ 
  { RFC_MSM_RFFE2_DATA                      , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RFFE2_DATA */ 
  { RFC_MSM_INTERNAL_GNSS_BLANK             , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_INTERNAL_GNSS_BLANK */ 
  { RFC_MSM_INTERNAL_GNSS_BLANK_CONCURRENCY , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_INTERNAL_GNSS_BLANK_CONCURRENCY */ 
  { RFC_MSM_EXT_GPS_LNA_EN                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_EXT_GPS_LNA_EN */ 
  { RFC_MSM_TX_GTR_TH                       , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_TX_GTR_TH */ 
  { RFC_MSM_PA_IND                          , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_PA_IND */ 
  { RFC_MSM_RF_PATH_SEL_06                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_06 */ /*Line <Add  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_06 signal> <2014.11.12> <mickal.ma> */
  { (rfc_msm_signal_type)RFC_SIG_LIST_END   , (rfc_logic_type)0x022902DD, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL } /* LAST SIG INDICATOR */ 
};


rfc_common_data* rfc_wtr1605_chile_rp1_cmn_ag::get_instance(rf_hw_type rf_hw)
{
  if (rfc_common_data_ptr == NULL)
  {
    rfc_common_data_ptr = (rfc_common_data *)new rfc_wtr1605_chile_rp1_cmn_ag(rf_hw);
  }
  return( (rfc_common_data *)rfc_common_data_ptr);
}

//constructor
rfc_wtr1605_chile_rp1_cmn_ag::rfc_wtr1605_chile_rp1_cmn_ag(rf_hw_type rf_hw)
  :rfc_common_data(rf_hw)
{
}


uint32 rfc_wtr1605_chile_rp1_cmn_ag::sig_info_table_get(rfc_signal_info_type **rfc_info_table)
{
  if (NULL == rfc_info_table)
  {
    return 0;
  }

  *rfc_info_table = &rfc_wtr1605_chile_rp1_sig_info[0];

  #ifdef FEATURE_GSM
  // Create GSM RFC AG Data Object
  rfc_gsm_data *rfc_gsm_data = rfc_wtr1605_chile_rp1_gsm_ag::get_instance(); 
  if (rfc_gsm_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC GSM Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_GSM */

  #ifdef FEATURE_CDMA1X
  // Create CDMA RFC AG Data Object
  rfc_cdma_data *rfc_cdma_data = rfc_wtr1605_chile_rp1_cdma_ag::get_instance(); 
  if (rfc_cdma_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC CDMA Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_CDMA */

  #ifdef FEATURE_WCDMA
  // Create WCDMA RFC AG Data Object
  rfc_wcdma_data *rfc_wcdma_data = rfc_wtr1605_chile_rp1_wcdma_ag::get_instance(); 
  if (rfc_wcdma_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC WCDMA Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_WCDMA */

  #ifdef FEATURE_LTE
  // Create LTE RFC AG Data Object
  rfc_lte_data *rfc_lte_data = rfc_wtr1605_chile_rp1_lte_ag::get_instance(); 
  if (rfc_lte_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC LTE Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_LTE */

  #ifdef FEATURE_TDSCDMA
  // Create TDSCDMA RFC AG Data Object
  rfc_tdscdma_data *rfc_tdscdma_data = rfc_wtr1605_chile_rp1_tdscdma_ag::get_instance(); 
  if (rfc_tdscdma_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC TDSCDMA Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_TDSCDMA */

  #ifdef FEATURE_CGPS
  // Create GNSS RFC AG Data Object
  rfc_gnss_data *rfc_gnss_data = rfc_wtr1605_chile_rp1_gnss_ag::get_instance(); 
  if (rfc_gnss_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC GNSS Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_GNSS */

  return RFC_WTR1605_CHILE_RP1_SIG_NUM;
}

rfc_device_cfg_info_type* rfc_wtr1605_chile_rp1_cmn_ag::get_device_cfg( void )
{
  return (&rfc_wtr1605_chile_rp1_cmn_devices_list[0]);
}


rfm_concurrency_restriction_type rfc_wtr1605_chile_rp1_restriction_table[] = 
{
  {
    RFM_DEVICE_0, RFM_LTE_MODE, SYS_BAND_CLASS_NONE, 
    RFM_DEVICE_3, RFM_1X_MODE, SYS_BAND_CLASS_NONE, 
  },
  {
    RFM_DEVICE_0, RFM_EGSM_MODE, SYS_BAND_CLASS_NONE, 
    RFM_DEVICE_3, RFM_1X_MODE, SYS_BAND_CLASS_NONE, 
  },
  {
    RFM_DEVICE_0, RFM_1X_MODE, SYS_BAND_CLASS_NONE, 
    RFM_DEVICE_3, RFM_1X_MODE, SYS_BAND_CLASS_NONE, 
  },
  {
    RFM_DEVICE_0, RFM_IMT_MODE, SYS_BAND_CLASS_NONE, 
    RFM_DEVICE_3, RFM_1X_MODE, SYS_BAND_CLASS_NONE, 
  },
  {
    RFM_DEVICE_0, RFM_TDSCDMA_MODE, SYS_BAND_CLASS_NONE, 
    RFM_DEVICE_3, RFM_1X_MODE, SYS_BAND_CLASS_NONE, 
  },
};

rfm_devices_configuration_type rfc_wtr1605_chile_rp1_logical_device_properties = 
{
  62, /* HWID */
  { /* Mode Concurrencies: Bit0 represents Rx concurrency and Bit1 represents Tx concurrency */
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
  },
  { /* device_support */ 
    { /* Logical Device 0 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          ( ( (uint64)1 << (SYS_BAND_GSM_850 - 0) ) | ( (uint64)1 << (SYS_BAND_GSM_EGSM_900 - 0) ) | ( (uint64)1 << (SYS_BAND_GSM_DCS_1800 - 0) ) | ( (uint64)1 << (SYS_BAND_GSM_PCS_1900 - 0) ) | ( (uint64)1 << (SYS_BAND_BC0 - 0) ) 
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          ( ( (uint64)1 << (SYS_BAND_WCDMA_I_IMT_2000 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_II_PCS_1900 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_V_850 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_VIII_900 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND1 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND3 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND2 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND4 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND5 - 64)) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND7 - 64) ) 
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          ( ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND17 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND20 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND38 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND40 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND41 - 128) ) | ( (uint64)1 << (SYS_BAND_TDS_BANDA - 128) ) | ( (uint64)1 << (SYS_BAND_TDS_BANDF - 128) ) 
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( RFM_DEVICE_RX_SUPPORTED | RFM_DEVICE_TX_SUPPORTED),
      RFM_DEVICE_1, /* Associated Slave Device for RFM_DEVICE_0 */
    }, /* End Logical Device 0 */ 
    { /* Logical Device 1 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          ( ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND1 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND3 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND2 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND4 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND5 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND7 - 64) ) 
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          ( ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND17 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND20 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND38 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND40 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND41 - 128) ) 
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( RFM_DEVICE_RX_SUPPORTED),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_1 */
    }, /* End Logical Device 1 */ 
    { /* Logical Device 2 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_DEVICE_3, /* Associated Slave Device for RFM_DEVICE_2 */
    }, /* End Logical Device 2 */ 
    { /* Logical Device 3 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_3 */
    }, /* End Logical Device 3 */ 
    { /* Logical Device 4 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_4 */
    }, /* End Logical Device 4 */ 
    { /* Logical Device 5 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_5 */
    }, /* End Logical Device 5 */ 
    { /* Logical Device 6 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_6 */
    }, /* End Logical Device 6 */ 
    { /* Logical Device 7 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_7 */
    }, /* End Logical Device 7 */ 
    { /* Logical Device 8 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_8 */
    }, /* End Logical Device 8 */ 
  },
  {
    5, /* num_concurrency_restrictions */ 
    &rfc_wtr1605_chile_rp1_restriction_table[0], /* restriction_table */ 
  },
  {
    0, /* num_3mode_entries */ 
    NULL, /* No 3Mode Support */ 
  },
  FALSE, /* gps_has_independent_receive_chain */ 
  FALSE, /* antenna_swap_supported */ 
};

boolean rfc_wtr1605_chile_rp1_cmn_ag::get_logical_path_config(rfm_devices_configuration_type* dev_cfg)
{
  if ( dev_cfg == NULL )
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR, "rfm_get_devices_configuration: Invalid Container", 0);
    return FALSE;
  }

  memscpy(dev_cfg,
          sizeof(rfm_devices_configuration_type),
          &rfc_wtr1605_chile_rp1_logical_device_properties,
          sizeof(rfm_devices_configuration_type));

  return TRUE;
}

rfc_cmn_properties_type rfc_wtr1605_chile_rp1_cmn_properties = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_ATTENUATION_STATE_MID,
};

boolean rfc_wtr1605_chile_rp1_cmn_ag::get_cmn_properties(rfc_cmn_properties_type **ptr)
{
  if (NULL==ptr)
  {
    return FALSE;
  }

  *ptr = &rfc_wtr1605_chile_rp1_cmn_properties;
  return TRUE;
}

boolean rfc_wtr1605_chile_rp1_cmn_ag::get_rfcard_data(void)
{
  int32 ret_val = TRUE;
  char rfc_efs_ver_file[RFC_EFS_VER_MAX_STRING_SIZE +1];
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
	          RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "common", "rfc_cmn_properties"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rfc_wtr1605_chile_rp1_cmn_properties, sizeof(rfc_cmn_properties_type),0 );
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat",  
                  RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "common", "rfc_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rfc_wtr1605_chile_rp1_cmn_devices_list[0], ((sizeof(rfc_device_cfg_info_type))*13),0 );

  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat",  
                  RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "common", "rfc_logical_path_properties"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)rfc_wtr1605_chile_rp1_logical_device_properties.multi_tech_support, ((sizeof(uint32))*RFM_NUM_MODES*RFM_NUM_MODES), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rfc_wtr1605_chile_rp1_logical_device_properties.device_support[0], (sizeof(rfc_wtr1605_chile_rp1_logical_device_properties.device_support)),1 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rfc_wtr1605_chile_rp1_logical_device_properties.concurrency_restrictions, (sizeof(rfc_wtr1605_chile_rp1_logical_device_properties.concurrency_restrictions)),1 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rfc_wtr1605_chile_rp1_logical_device_properties.gps_has_independent_receive_chain, (sizeof(rfc_wtr1605_chile_rp1_logical_device_properties.gps_has_independent_receive_chain)),1 );

  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat",  
                  RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "common", "rfc_sig_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rfc_wtr1605_chile_rp1_sig_info[0], (sizeof(rfc_signal_info_type)*(RFC_WTR1605_CHILE_RP1_SIG_NUM + 1)),0 );			  


 
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat",  
                  RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "common", "rfc_restriction_table"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rfc_wtr1605_chile_rp1_restriction_table[0], (sizeof(rfm_concurrency_restriction_type)*5),0 );			  


  return ret_val;
}
boolean rfc_wtr1605_chile_rp1_cmn_ag::get_asd_device_info( rfc_asd_cfg_params_type *cfg, rfc_asdiv_config_info_type **ptr )
{

  boolean ret_val = FALSE;

  if (NULL==ptr)
  {
    return FALSE;
  }

  if (NULL==cfg)
  {
    *ptr = NULL;
    return FALSE;
  }


  return ret_val;
}

