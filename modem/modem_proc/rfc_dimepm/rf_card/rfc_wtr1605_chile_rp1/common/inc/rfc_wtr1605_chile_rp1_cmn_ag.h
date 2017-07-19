
#ifndef RFC_WTR1605_CHILE_RP1_CMN_AG
#define RFC_WTR1605_CHILE_RP1_CMN_AG


#ifdef __cplusplus
extern "C" {
#endif

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

$Header: //Commercial/MPSS.DPM.1.0.c7/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr1605_chile_rp1/common/inc/rfc_wtr1605_chile_rp1_cmn_ag.h#2 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_common.h" 



typedef enum
{
  RFC_WTR1605_CHILE_RP1_TIMING_PA_CTL,
  RFC_WTR1605_CHILE_RP1_TIMING_PA_RANGE,
  RFC_WTR1605_CHILE_RP1_TIMING_ASM_CTL,
  RFC_WTR1605_CHILE_RP1_TIMING_TUNER_CTL,
  RFC_WTR1605_CHILE_RP1_TIMING_PAPM_CTL,
  RFC_WTR1605_CHILE_RP1_TIMING_TX_TX_RF_ON0,
  RFC_WTR1605_CHILE_RP1_TIMING_TX_RX_RF_ON0,
  RFC_WTR1605_CHILE_RP1_TIMING_ASM_TRIGGER,
  RFC_WTR1605_CHILE_RP1_TIMING_PAPM_TX_TX_TRIGGER,
  RFC_WTR1605_CHILE_RP1_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER,
  RFC_WTR1605_CHILE_RP1_TIMING_PA_TRIGGER,
  RFC_WTR1605_CHILE_RP1_TIMING_PAPM_OFF_TX_RX_TX_CTL,
  RFC_WTR1605_CHILE_RP1_TIMING_PAPM_TX_TX_CTL,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_01,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_00,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_02,
  RFC_WTR1605_CHILE_RP1_PA_ON_19,
  RFC_WTR1605_CHILE_RP1_PA_ON_06,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_03,
  RFC_WTR1605_CHILE_RP1_RX_ON0_alt,
  RFC_WTR1605_CHILE_RP1_RF_ON0,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_20,
 // RFC_WTR1605_CHILE_RP1_PA_ON_18,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_14,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_07,
  RFC_WTR1605_CHILE_RP1_PA0_R1,
  RFC_WTR1605_CHILE_RP1_PA1_R1_DEFAULT,
  RFC_WTR1605_CHILE_RP1_PA1_R2,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_12,
  RFC_WTR1605_CHILE_RP1_PA_ON_10,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05,
  RFC_WTR1605_CHILE_RP1_PA0_R0,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_24,
  RFC_WTR1605_CHILE_RP1_GPDATA0_1,
  RFC_WTR1605_CHILE_RP1_GPDATA0_0,
  RFC_WTR1605_CHILE_RP1_GPDATA1_1,
  RFC_WTR1605_CHILE_RP1_GPDATA1_0,
  RFC_WTR1605_CHILE_RP1_RFIC0_SSBI1,
  RFC_WTR1605_CHILE_RP1_RFIC0_SSBI2,
  RFC_WTR1605_CHILE_RP1_RFIC1_SSBI1,
  RFC_WTR1605_CHILE_RP1_RFIC1_SSBI2,
  RFC_WTR1605_CHILE_RP1_RFFE1_CLK,
  RFC_WTR1605_CHILE_RP1_RFFE1_DATA,
  RFC_WTR1605_CHILE_RP1_RFFE2_CLK,
  RFC_WTR1605_CHILE_RP1_RFFE2_DATA,
  RFC_WTR1605_CHILE_RP1_INTERNAL_GNSS_BLANK,
  RFC_WTR1605_CHILE_RP1_INTERNAL_GNSS_BLANK_CONCURRENCY,
  RFC_WTR1605_CHILE_RP1_EXT_GPS_LNA_EN,
  RFC_WTR1605_CHILE_RP1_TX_GTR_TH,
  RFC_WTR1605_CHILE_RP1_PA_IND,
  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_06,	/* Line <Add  RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_06 signal> <2014.11.12> <mickal.ma> */
  RFC_WTR1605_CHILE_RP1_SIG_NUM,
  RFC_WTR1605_CHILE_RP1_SIG_INVALID,
}wtr1605_chile_rp1_sig_type;


#ifdef __cplusplus

#include "rfc_common_data.h"

class rfc_wtr1605_chile_rp1_cmn_ag:public rfc_common_data
{
  public:
    uint32 sig_info_table_get(rfc_signal_info_type **rfc_info_table);
    rfc_device_cfg_info_type* get_device_cfg( void );
    boolean get_logical_path_config(rfm_devices_configuration_type* dev_cfg);
    boolean get_cmn_properties(rfc_cmn_properties_type **ptr);
    boolean get_asd_device_info( rfc_asd_cfg_params_type *cfg, rfc_asdiv_config_info_type **ptr);
    boolean get_rfcard_data(void);
    static rfc_common_data * get_instance(rf_hw_type rf_hw);

  protected:
    rfc_wtr1605_chile_rp1_cmn_ag(rf_hw_type rf_hw);
};

#endif   /*  __cplusplus  */


#ifdef __cplusplus
}
#endif



#endif


