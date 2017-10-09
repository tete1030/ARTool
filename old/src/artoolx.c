#include <stdio.h>

#define PR_EEP(_s, _val)						\
	do {								\
		len += scnprintf(buf + len, size - len, "%20s : %10d\n",\
				 _s, (_val));				\
	} while (0)

static u32 ar9003_dump_modal_eeprom(char *buf, u32 len, u32 size,
				    struct ar9300_modal_eep_header *modal_hdr)
{
	PR_EEP("Chain0 Ant. Control", le16_to_cpu(modal_hdr->antCtrlChain[0]));
	PR_EEP("Chain1 Ant. Control", le16_to_cpu(modal_hdr->antCtrlChain[1]));
	PR_EEP("Chain2 Ant. Control", le16_to_cpu(modal_hdr->antCtrlChain[2]));
	PR_EEP("Ant. Common Control", le32_to_cpu(modal_hdr->antCtrlCommon));
	PR_EEP("Ant. Common Control2", le32_to_cpu(modal_hdr->antCtrlCommon2));
	PR_EEP("Ant. Gain", modal_hdr->antennaGain);
	PR_EEP("Switch Settle", modal_hdr->switchSettling);
	PR_EEP("Chain0 xatten1DB", modal_hdr->xatten1DB[0]);
	PR_EEP("Chain1 xatten1DB", modal_hdr->xatten1DB[1]);
	PR_EEP("Chain2 xatten1DB", modal_hdr->xatten1DB[2]);
	PR_EEP("Chain0 xatten1Margin", modal_hdr->xatten1Margin[0]);
	PR_EEP("Chain1 xatten1Margin", modal_hdr->xatten1Margin[1]);
	PR_EEP("Chain2 xatten1Margin", modal_hdr->xatten1Margin[2]);
	PR_EEP("Temp Slope", modal_hdr->tempSlope);
	PR_EEP("Volt Slope", modal_hdr->voltSlope);
	PR_EEP("spur Channels0", modal_hdr->spurChans[0]);
	PR_EEP("spur Channels1", modal_hdr->spurChans[1]);
	PR_EEP("spur Channels2", modal_hdr->spurChans[2]);
	PR_EEP("spur Channels3", modal_hdr->spurChans[3]);
	PR_EEP("spur Channels4", modal_hdr->spurChans[4]);
	PR_EEP("Chain0 NF Threshold", modal_hdr->noiseFloorThreshCh[0]);
	PR_EEP("Chain1 NF Threshold", modal_hdr->noiseFloorThreshCh[1]);
	PR_EEP("Chain2 NF Threshold", modal_hdr->noiseFloorThreshCh[2]);
	PR_EEP("Quick Drop", modal_hdr->quick_drop);
	PR_EEP("txEndToXpaOff", modal_hdr->txEndToXpaOff);
	PR_EEP("xPA Bias Level", modal_hdr->xpaBiasLvl);
	PR_EEP("txFrameToDataStart", modal_hdr->txFrameToDataStart);
	PR_EEP("txFrameToPaOn", modal_hdr->txFrameToPaOn);
	PR_EEP("txFrameToXpaOn", modal_hdr->txFrameToXpaOn);
	PR_EEP("txClip", modal_hdr->txClip);
	PR_EEP("ADC Desired size", modal_hdr->adcDesiredSize);

	return len;
}

static u32 ath9k_hw_ar9003_dump_eeprom(struct ath_hw *ah, bool dump_base_hdr,
				       u8 *buf, u32 len, u32 size)
{
	struct ar9300_eeprom *eep = &ah->eeprom.ar9300_eep;
	struct ar9300_base_eep_hdr *pBase;

	if (!dump_base_hdr) {
		len += scnprintf(buf + len, size - len,
				 "%20s :\n", "2GHz modal Header");
		len = ar9003_dump_modal_eeprom(buf, len, size,
						&eep->modalHeader2G);
		len += scnprintf(buf + len, size - len,
				 "%20s :\n", "5GHz modal Header");
		len = ar9003_dump_modal_eeprom(buf, len, size,
						&eep->modalHeader5G);
		goto out;
	}

	pBase = &eep->baseEepHeader;

	PR_EEP("EEPROM Version", ah->eeprom.ar9300_eep.eepromVersion);
	PR_EEP("RegDomain1", le16_to_cpu(pBase->regDmn[0]));
	PR_EEP("RegDomain2", le16_to_cpu(pBase->regDmn[1]));
	PR_EEP("TX Mask", (pBase->txrxMask >> 4));
	PR_EEP("RX Mask", (pBase->txrxMask & 0x0f));
	PR_EEP("Allow 5GHz", !!(pBase->opCapFlags.opFlags &
				AR5416_OPFLAGS_11A));
	PR_EEP("Allow 2GHz", !!(pBase->opCapFlags.opFlags &
				AR5416_OPFLAGS_11G));
	PR_EEP("Disable 2GHz HT20", !!(pBase->opCapFlags.opFlags &
					AR5416_OPFLAGS_N_2G_HT20));
	PR_EEP("Disable 2GHz HT40", !!(pBase->opCapFlags.opFlags &
					AR5416_OPFLAGS_N_2G_HT40));
	PR_EEP("Disable 5Ghz HT20", !!(pBase->opCapFlags.opFlags &
					AR5416_OPFLAGS_N_5G_HT20));
	PR_EEP("Disable 5Ghz HT40", !!(pBase->opCapFlags.opFlags &
					AR5416_OPFLAGS_N_5G_HT40));
	PR_EEP("Big Endian", !!(pBase->opCapFlags.eepMisc &
				AR5416_EEPMISC_BIG_ENDIAN));
	PR_EEP("RF Silent", pBase->rfSilent);
	PR_EEP("BT option", pBase->blueToothOptions);
	PR_EEP("Device Cap", pBase->deviceCap);
	PR_EEP("Device Type", pBase->deviceType);
	PR_EEP("Power Table Offset", pBase->pwrTableOffset);
	PR_EEP("Tuning Caps1", pBase->params_for_tuning_caps[0]);
	PR_EEP("Tuning Caps2", pBase->params_for_tuning_caps[1]);
	PR_EEP("Enable Tx Temp Comp", !!(pBase->featureEnable & BIT(0)));
	PR_EEP("Enable Tx Volt Comp", !!(pBase->featureEnable & BIT(1)));
	PR_EEP("Enable fast clock", !!(pBase->featureEnable & BIT(2)));
	PR_EEP("Enable doubling", !!(pBase->featureEnable & BIT(3)));
	PR_EEP("Internal regulator", !!(pBase->featureEnable & BIT(4)));
	PR_EEP("Enable Paprd", !!(pBase->featureEnable & BIT(5)));
	PR_EEP("Driver Strength", !!(pBase->miscConfiguration & BIT(0)));
	PR_EEP("Quick Drop", !!(pBase->miscConfiguration & BIT(1)));
	PR_EEP("Chain mask Reduce", (pBase->miscConfiguration >> 0x3) & 0x1);
	PR_EEP("Write enable Gpio", pBase->eepromWriteEnableGpio);
	PR_EEP("WLAN Disable Gpio", pBase->wlanDisableGpio);
	PR_EEP("WLAN LED Gpio", pBase->wlanLedGpio);
	PR_EEP("Rx Band Select Gpio", pBase->rxBandSelectGpio);
	PR_EEP("Tx Gain", pBase->txrxgain >> 4);
	PR_EEP("Rx Gain", pBase->txrxgain & 0xf);
	PR_EEP("SW Reg", le32_to_cpu(pBase->swreg));

	len += scnprintf(buf + len, size - len, "%20s : %pM\n", "MacAddress",
			 ah->eeprom.ar9300_eep.macAddr);
out:
	if (len > size)
		len = size;

	return len;
}


int main(){
    puts("ciao");
    return 0;
}
