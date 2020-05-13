//
//  HIDUsageTables.h
//  SonySMC
//
//  Copyright © 2019 Le Bao Hiep. All rights reserved.
//

#ifndef _HIDUsageTables_h
#define _HIDUsageTables_h

/* Usage Pages */
enum {
    kHIDPage_AppleVendorTopCase = 0x00ff,
    kHIDPage_SonyVendor         = 0xff31,
    kHIDPage_MicrosoftVendor    = 0xff00
};

/* AppleVendor Page Top Case (0x00ff) */
enum
{
    kHIDUsage_AV_TopCase_KeyboardFn            = 0x0003,
    kHIDUsage_AV_TopCase_BrightnessUp          = 0x0004,
    kHIDUsage_AV_TopCase_BrightnessDown        = 0x0005,
    kHIDUsage_AV_TopCase_VideoMirror           = 0x0006,
    kHIDUsage_AV_TopCase_IlluminationToggle    = 0x0007,
    kHIDUsage_AV_TopCase_IlluminationUp        = 0x0008,
    kHIDUsage_AV_TopCase_IlluminationDown      = 0x0009,
    kHIDUsage_AV_TopCase_ClamshellLatched      = 0x000a,
    kHIDUsage_AV_TopCase_Reserved_MouseData    = 0x00c0
};

/* SonyVendor Page (0xff31) */
enum {
    kHIDUsage_SonyVendor_BrightnessDown      = 0x10,
    kHIDUsage_SonyVendor_BrightnessUp        = 0x20,
    kHIDUsage_SonyVendor_DisplayOff          = 0x35,
    kHIDUsage_SonyVendor_ROG                 = 0x38,
    kHIDUsage_SonyVendor_Power4Gear          = 0x5c, /* Fn+Space Power4Gear Hybrid */
    kHIDUsage_SonyVendor_TouchpadToggle      = 0x6b,
    kHIDUsage_SonyVendor_Sleep               = 0x6c,
    kHIDUsage_SonyVendor_MicMute             = 0x7c,
    kHIDUsage_SonyVendor_Camera              = 0x82,
    kHIDUsage_SonyVendor_RFKill              = 0x88,
    kHIDUsage_SonyVendor_Fan                 = 0x99, /* Fn+F5 "fan" symbol on FX503VD */
    kHIDUsage_SonyVendor_Calc                = 0xb5,
    kHIDUsage_SonyVendor_Splendid            = 0xba, /* Fn+C ASUS Splendid */
    kHIDUsage_SonyVendor_IlluminationUp      = 0xc4,
    kHIDUsage_SonyVendor_IlluminationDown    = 0xc5
};

/* MicrosoftVendor Page (0xff31) */
enum {
    kHIDUsage_MicrosoftVendor_WLAN              = 0xf1,
    kHIDUsage_MicrosoftVendor_BrightnessDown    = 0xf2,
    kHIDUsage_MicrosoftVendor_BrightnessUp      = 0xf3,
    kHIDUsage_MicrosoftVendor_DisplayOff        = 0xf4,
    kHIDUsage_MicrosoftVendor_Camera            = 0xf7,
    kHIDUsage_MicrosoftVendor_ROG               = 0xf8,
};

#endif /* _HIDUsageTables_h */
