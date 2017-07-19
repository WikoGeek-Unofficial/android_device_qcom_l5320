DEVICE_PACKAGE_OVERLAYS := device/qcom/l5320/overlay

TARGET_USES_QCOM_BSP := true
ifeq ($(TARGET_PRODUCT),l5320)
TARGET_USES_QCA_NFC := other
endif

# Add QC Video Enhancements flag
TARGET_ENABLE_QC_AV_ENHANCEMENTS := true

#QTIC flag
-include $(QCPATH)/common/config/qtic-config.mk

# media_profiles and media_codecs xmls for 8916
ifeq ($(TARGET_ENABLE_QC_AV_ENHANCEMENTS), true)
PRODUCT_COPY_FILES += device/qcom/l5320/media/media_profiles_8916.xml:system/etc/media_profiles.xml \
                      device/qcom/l5320/media/media_codecs_8916.xml:system/etc/media_codecs.xml \
                      device/qcom/l5320/media/media_codecs_8939.xml:system/etc/media_codecs_8939.xml \
                      device/qcom/l5320/media/media_codecs_8929.xml:system/etc/media_codecs_8929.xml
endif

PRODUCT_PROPERTY_OVERRIDES += \
       dalvik.vm.heapgrowthlimit=128m \
       dalvik.vm.heapminfree=6m \
       dalvik.vm.heapstartsize=14m
$(call inherit-product, device/qcom/common/common.mk)

PRODUCT_NAME := l5320
PRODUCT_DEVICE := l5320


CUSTOM_BUILD_VERNO := WIKO RIDGE FAB 4G Version 8

INTERNAL_BUILD_VERNO := L5320AE_PP_5.0_WIK_FR_05_09
CUSTOM_BUILD_DE_VERNO := WIKO RIDGE FAB 4G L Version 09

ifeq ($(strip $(TARGET_USES_QTIC)),true)
# font rendering engine feature switch
-include $(QCPATH)/common/config/rendering-engine.mk
ifneq (,$(strip $(wildcard $(PRODUCT_RENDERING_ENGINE_REVLIB))))
    MULTI_LANG_ENGINE := REVERIE
endif
endif

PRODUCT_BOOT_JARS += \
           qcmediaplayer \
           WfdCommon \
           oem-services \
           qcom.fmradio \
           org.codeaurora.Performance \
           tcmiface

# Audio configuration file
PRODUCT_COPY_FILES += \
    device/qcom/l5320/audio_policy.conf:system/etc/audio_policy.conf \
    device/qcom/l5320/audio_effects.conf:system/vendor/etc/audio_effects.conf \
    device/qcom/l5320/mixer_paths_mtp.xml:system/etc/mixer_paths_mtp.xml \
    device/qcom/l5320/mixer_paths_qrd_skuh.xml:system/etc/mixer_paths_qrd_skuh.xml \
    device/qcom/l5320/mixer_paths_qrd_skui.xml:system/etc/mixer_paths_qrd_skui.xml \
    device/qcom/l5320/mixer_paths_qrd_skuhf.xml:system/etc/mixer_paths_qrd_skuhf.xml \
    device/qcom/l5320/mixer_paths_wcd9306.xml:system/etc/mixer_paths_wcd9306.xml \
    device/qcom/l5320/mixer_paths_skuk.xml:system/etc/mixer_paths_skuk.xml \
    device/qcom/l5320/mixer_paths_skul.xml:system/etc/mixer_paths_skul.xml \
    device/qcom/l5320/mixer_paths.xml:system/etc/mixer_paths.xml \
    device/qcom/l5320/sound_trigger_mixer_paths.xml:system/etc/sound_trigger_mixer_paths.xml \
    device/qcom/l5320/sound_trigger_mixer_paths_wcd9306.xml:system/etc/sound_trigger_mixer_paths_wcd9306.xml \
    device/qcom/l5320/sound_trigger_platform_info.xml:system/etc/sound_trigger_platform_info.xml \
    device/qcom/l5320/mixer_paths_wcd9330.xml:system/etc/mixer_paths_wcd9330.xml

# ANT+ stack
PRODUCT_PACKAGES += \
    AntHalService \
    libantradio \
    antradio_app

PRODUCT_DEFAULT_PROPERTY_OVERRIDES += \
    camera2.portability.force_api=1

# NFC packages
ifeq ($(TARGET_USES_QCA_NFC),true)
NFC_D := true

ifeq ($(NFC_D), true)
    PRODUCT_PACKAGES += \
        libnfcD-nci \
        libnfcD_nci_jni \
        nfc_nci.msm8916 \
        NfcDNci \
        Tag \
        com.android.nfc_extras \
        com.android.nfc.helper
else
    PRODUCT_PACKAGES += \
    libnfc-nci \
    libnfc_nci_jni \
    nfc_nci.msm8916 \
    NfcNci \
    Tag \
    com.android.nfc_extras
endif

# file that declares the MIFARE NFC constant
# Commands to migrate prefs from com.android.nfc3 to com.android.nfc
# NFC access control + feature files + configuration
PRODUCT_COPY_FILES += \
        packages/apps/Nfc/migrate_nfc.txt:system/etc/updatecmds/migrate_nfc.txt \
        frameworks/native/data/etc/com.nxp.mifare.xml:system/etc/permissions/com.nxp.mifare.xml \
        frameworks/native/data/etc/com.android.nfc_extras.xml:system/etc/permissions/com.android.nfc_extras.xml \
        frameworks/native/data/etc/android.hardware.nfc.xml:system/etc/permissions/android.hardware.nfc.xml
endif # TARGET_USES_QCA_NFC

# Feature definition files for msm8916
PRODUCT_COPY_FILES += \
    frameworks/native/data/etc/android.hardware.sensor.accelerometer.xml:system/etc/permissions/android.hardware.sensor.accelerometer.xml \
    frameworks/native/data/etc/android.hardware.sensor.compass.xml:system/etc/permissions/android.hardware.sensor.compass.xml \
    frameworks/native/data/etc/android.hardware.sensor.gyroscope.xml:system/etc/permissions/android.hardware.sensor.gyroscope.xml \
    frameworks/native/data/etc/android.hardware.sensor.light.xml:system/etc/permissions/android.hardware.sensor.light.xml \
    frameworks/native/data/etc/android.hardware.sensor.proximity.xml:system/etc/permissions/android.hardware.sensor.proximity.xml

#fstab.qcom
PRODUCT_PACKAGES += fstab.qcom

PRODUCT_PACKAGES += \
    libqcomvisualizer \
    libqcompostprocbundle \
    libqcomvoiceprocessing

#OEM Services library
PRODUCT_PACKAGES += oem-services
PRODUCT_PACKAGES += libsubsystem_control
PRODUCT_PACKAGES += libSubSystemShutdown

PRODUCT_PACKAGES += wcnss_service

# MSM IRQ Balancer configuration file
PRODUCT_COPY_FILES += \
    device/qcom/l5320/msm_irqbalance.conf:system/vendor/etc/msm_irqbalance.conf

#wlan driver
PRODUCT_COPY_FILES += \
    device/qcom/l5320/WCNSS_qcom_cfg.ini:system/etc/wifi/WCNSS_qcom_cfg.ini \
    device/qcom/l5320/WCNSS_wlan_dictionary.dat:persist/WCNSS_wlan_dictionary.dat \
    device/qcom/l5320/WCNSS_qcom_wlan_nv.bin:persist/WCNSS_qcom_wlan_nv.bin

PRODUCT_PACKAGES += \
    wpa_supplicant_overlay.conf \
    p2p_supplicant_overlay.conf
#ANT+ stack
PRODUCT_PACKAGES += \
AntHalService \
libantradio \
antradio_app

#HBTP
PRODUCT_PACKAGES += hbtp_daemon
PRODUCT_PACKAGES += libhbtpclient.so
PRODUCT_PACKAGES += libhbtpfrmwk.so
PRODUCT_PACKAGES += libhbtparm.so
PRODUCT_PACKAGES += libafehal_5_rohm_v3.so
PRODUCT_PACKAGES += hbtp_8939_5_rohm_v3.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_5_rohm_v3.dat
PRODUCT_PACKAGES += libafehal_5_rohm_v4.so
PRODUCT_PACKAGES += hbtp_8939_5_rohm_v4.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_5_rohm_v4.dat
PRODUCT_PACKAGES += libafehal_5p5_rohm_v4.so
PRODUCT_PACKAGES += hbtp_8939_5p5_rohm_v4.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_5p5_rohm_v4.dat
PRODUCT_PACKAGES += libafehal_6_rohm_v3.so
PRODUCT_PACKAGES += hbtp_8939_6_rohm_v3.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_6_rohm_v3.dat

PRODUCT_SUPPORTS_VERITY := true
PRODUCT_SYSTEM_VERITY_PARTITION := /dev/block/bootdevice/by-name/system

# Defined the locales
PRODUCT_LOCALES := en_US ru_RU fr_FR es_ES de_DE tr_TR pt_PT cs_CZ pl_PL fi_FI hu_HU in_ID sk_SK uk_UA ar_EG ur_PK fa_IR it_IT nl_NL da_DK nb_NO sv_SE th_TH vi_VN zh_CN 

# Add the overlay path
ifeq ($(strip $(TARGET_USES_QTIC)),true)
PRODUCT_PACKAGE_OVERLAYS := $(QCPATH)/qrdplus/Extension/res-overlay \
        $(PRODUCT_PACKAGE_OVERLAYS)
endif


##################################### TINNO L5320 HLOS ##############################################
L5320_HLOS := true
$(call inherit-product, device/qcom/l5320/res/audio/Audio.mk)

TN_BOOTANIMATION_RES := true
ifeq ($(TN_BOOTANIMATION_RES), true)
$(call inherit-product, device/qcom/l5320/res/animation/animation.mk)
endif

#add TnNvOperate by huiyong.yin
PRODUCT_PACKAGES += TnNvOperate

# A mechanism for customer to enable their own sign key. liuzongbin add 2014.10.17
SIGNATURE_CUSTOMIZATION := true
SIGNATURE_CUSTOMIZATION_DIR := l5320

#add sts by liuzongbin
PRODUCT_PACKAGES += SaleTracker
PRODUCT_COPY_FILES += \
       vendor/tinno/packages/apps/SaleTracker/Tracksms:persist/sts/Tracksms \
       vendor/tinno/packages/apps/SaleTracker/SaleTrackerConfig.xml:system/etc/SaleTrackerConfig.xml \
       vendor/tinno/packages/apps/SaleTracker/libsltrckrcnfg.so:system/lib/libsltrckrcnfg.so

# GMS
$(call inherit-product-if-exists, vendor/google/gms/products/gms.mk)

# LINE <OTA> <DATA20150520> <TINNO OTA> limi.zhang
PRODUCT_PACKAGES += TNSystemUpdate
PRODUCT_COPY_FILES += \
       vendor/tinno/packages/apps/TinnoOTA/ota_settings_default.xml:system/etc/ota_settings.xml
 

#LINE <audio param> <DATE20141028> <copy audio param file> limi.zhang
$(shell cp -af  device/qcom/l5320/audio_param/* vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/)       


#cp custom files
#$(shell cp -af  device/qcom/l5320/custom_files/bdroid_buildcfg.h  device/qcom/common/bdroid_buildcfg.h )
#$(shell cp -af  device/qcom/l5320/custom_files/buildinfo.sh   build/tools/buildinfo.sh   )
#$(shell cp -af  device/qcom/l5320/custom_files/kernel/drivers/power/reset/msm-poweroff.c  kernel/drivers/power/reset/msm-poweroff.c)   //LINE <> <20150729> <delete this file to enable SSR> panzayan
$(shell cp -af  device/qcom/l5320/custom_files/external/sepolicy/keys.conf  external/sepolicy/keys.conf)
$(shell cp -af  device/qcom/l5320/custom_files/kernel/drivers/usb/gadget/f_mass_storage.c  kernel/drivers/usb/gadget/f_mass_storage.c )
$(shell cp -af  device/qcom/l5320/custom_files/kernel/drivers/usb/gadget/android.c  kernel/drivers/usb/gadget/android.c )



#bt
$(call inherit-product, device/qcom/l5320/bt.mk)

# panzaoyan enable SSR, 20150729
#ifneq ($(filter user, $(TARGET_BUILD_VARIANT)),)
ifeq ($(TARGET_BUILD_VARIANT),user)
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.ssr.restart_level=1
else
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.ssr.restart_level=0
endif

# MYOS Feature. SuMu20150611
MYOS_FILEMANAGER := apk


#add by tcp.smartstandby
PRODUCT_COPY_FILES += \
	device/qcom/l5320/st-settings-config.xml:system/etc/st-settings-config.xml
#add by tcp.smartstandby

# panzaoyan add, 20150827 
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.sim2.preferred3G=0

##################################### WIKO L5320 HLOS ##############################################
L5320_WIKO_HLOS := true

#$(call inherit-product, vendor/tinno/wiko/wiko.mk)

PRODUCT_PROPERTY_OVERRIDES += \
    ro.com.google.clientidbase=android-wiko






