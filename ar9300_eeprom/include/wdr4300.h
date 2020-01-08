#define WDR4300_WMAC_CALDATA_OFFSET 0x1000
#define WDR4300_PCIE_CALDATA_OFFSET 0x5000

const static struct default_detect_data wdr4310_v1_0_2050500271_rev1_3_data[AR9300_MAX_EEPROMS] = {
    {
        { 48, 0 },

        true,
        { FREQ2FBIN(2412, 1), FREQ2FBIN(2437, 1), FREQ2FBIN(2462, 1) },
        {
            { { 11, 0, 157, 0, 0, 0 }, { 11, 0, 158, 0, 0, 0 }, { 10, 0, 158, 0, 0, 0 } }, 
            { { 12, 0, 162, 0, 0, 0 }, { 13, 0, 162, 0, 0, 0 }, { 13, 0, 162, 0, 0, 0 } },
            { {  0, 0,   0, 0, 0, 0 }, {  0, 0,   0, 0, 0, 0 }, {  0, 0,   0, 0, 0, 0 } }
        },

        false,
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        {
            { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, 
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            {  { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            {  { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } }
        }
    },

    {
        { 72, 0 },

        false,
        { 0, 0, 0 },
        {
            { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } }
        },

        true,
        {
            FREQ2FBIN(5745, 0), FREQ2FBIN(5825, 0), FREQ2FBIN(5320, 0), FREQ2FBIN(5400, 0),
            FREQ2FBIN(5500, 0), FREQ2FBIN(5600, 0), FREQ2FBIN(5725, 0), FREQ2FBIN(5825, 0)
        },
        {
            { { -16, 0, 175, 0, 0, 0 }, { -22, 0, 177, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            { { -19, 0, 176, 0, 0, 0 }, { -25, 0, 177, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            { { -17, 0, 177, 0, 0, 0 }, { -24, 0, 177, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } }
        }
    },
};

const static struct ar9300_fixup wdr4310_v1_0_2050500271_rev1_3_fixup = {
    "Fix up calibration incomplete 5GHz, only works between 5745[149] and 5825[165]. Warning: fix up used inaccurate values (interpolated). Version 1.",

    false,
    { 0, 0, 0 },
    {
        { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } }
    },

    true,
    {
        FREQ2FBIN(5180, 0), FREQ2FBIN(5240, 0), FREQ2FBIN(5320, 0), FREQ2FBIN(5500, 0),
        FREQ2FBIN(5620, 0), FREQ2FBIN(5700, 0), FREQ2FBIN(5745, 0), FREQ2FBIN(5825, 0)
    },
    {
        { { -24, 0, 176, 0, 0, 0 }, { -19, 0, 176, 0, 0, 0 }, { -14, 0, 177, 0, 0, 0 }, { -10, 0, 176, 0, 0, 0 },
            { -10, 0, 177, 0, 0, 0 }, { -13, 0, 176, 0, 0, 0 }, { -16, 0, 175, 0, 0, 0 }, { -22, 0, 177, 0, 0, 0 } },
        { { -26, 0, 176, 0, 0, 0 }, { -21, 0, 177, 0, 0, 0 }, { -16, 0, 177, 0, 0, 0 }, { -12, 0, 177, 0, 0, 0 },
            { -12, 0, 176, 0, 0, 0 }, { -15, 0, 177, 0, 0, 0 }, { -19, 0, 176, 0, 0, 0 }, { -25, 0, 177, 0, 0, 0 } },
        { { -25, 0, 177, 0, 0, 0 }, { -20, 0, 177, 0, 0, 0 }, { -15, 0, 178, 0, 0, 0 }, { -11, 0, 177, 0, 0, 0 },
            { -11, 0, 178, 0, 0, 0 }, { -14, 0, 178, 0, 0, 0 }, { -17, 0, 177, 0, 0, 0 }, { -24, 0, 177, 0, 0, 0 } }
    }
};

const static struct default_detect_data wdr4310_v1_0_my_data[AR9300_MAX_EEPROMS] = {
    {
        { 48, 0 },

        true,
        { FREQ2FBIN(2412, 1), FREQ2FBIN(2437, 1), FREQ2FBIN(2462, 1) },
        {
            { { 13, 0, 153, 0, 0, 0 }, { 12, 0, 154, 0, 0, 0 }, { 10, 0, 154, 0, 0, 0 } }, 
            { { 17, 0, 157, 0, 0, 0 }, { 17, 0, 159, 0, 0, 0 }, { 16, 0, 159, 0, 0, 0 } },
            { {  0, 0,   0, 0, 0, 0 }, {  0, 0,   0, 0, 0, 0 }, {  0, 0,   0, 0, 0, 0 } }
        },

        false,
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        {
            { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, 
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            {  { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            {  { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } }
        }
    },

    {
        { 64, 0 },

        false,
        { 0, 0, 0 },
        {
            { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } }
        },

        true,
        {
            FREQ2FBIN(5745, 0), FREQ2FBIN(5825, 0), FREQ2FBIN(5320, 0), FREQ2FBIN(5400, 0),
            FREQ2FBIN(5500, 0), FREQ2FBIN(5600, 0), FREQ2FBIN(5725, 0), FREQ2FBIN(5825, 0)
        },
        {
            { { -6, 0, 156, 0, 0, 0 }, { -11, 0, 157, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            { { -9, 0, 157, 0, 0, 0 }, { -15, 0, 157, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } },
            { { -10, 0, 157, 0, 0, 0 }, { -14, 0, 157, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 } }
        }
    },
};

const static struct ar9300_revision wdr4310_v1_0_2050500271_rev1_3 = {
    "TL-WDR4310", "1.0", "2050500271", "1.3", &wdr4310_v1_0_2050500271_rev1_3_fixup, default_detect, &wdr4310_v1_0_2050500271_rev1_3_data
};

const static struct ar9300_revision wdr4310_v1_0_my = {
    "TL-WDR4310", "1.0", "my", "N/A", &wdr4310_v1_0_2050500271_rev1_3_fixup, default_detect, &wdr4310_v1_0_my_data
};

const static struct ar9300_detect wdr4300_detect = {
    "TL-WDR3600/4300/4310", { { WDR4300_WMAC_CALDATA_OFFSET, WDR4300_PCIE_CALDATA_OFFSET } }, { &wdr4310_v1_0_my, NULL }
};
