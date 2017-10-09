# ARTool
Tool for Atheros ART partition editing

## struct ar9300_eeprom
| Size (byte)  | Type | Name | Description |
| :----------: | ---- | ---- | ------- |
| 1 | Unsigned Int | EEPROM Version | Eg: 0x02 |
| 1 | Unsigned Int | Template Version | Eg: 0x02 |
| 6 | Unsigned Int | MAC Address | Eg: 0x00 0x02 0x03 0x04 0x05 0x06 |
| 20 | Unsigned Int | Customer Data |  |
| | | | Base EEEPROM Header |
| 2 | Unsigned LE Int | Regulatory Domain 1 | length in bytes |
| 2 | Unsigned LE Int | Regulatory Domain 2 | length in bytes |
| 1 | 4 bit/4 bit | TX RX Mask | First 4 bit TX Mask, last 4 bit RX Mask |
| 1 | Unsigned Int | Operatoin Flags |  |
| 1 | Unsigned Int | EEP Misc |  |
| 1 | Unsigned Int | RF Silent |  |
| 1 | Unsigned Int | BlueTooth Options |  |
| 1 | Unsigned Int | Device Capabilities |  |
| 1 | Unsigned Int | Device Type |  |
| 1 | Signed Int | Power Table Offset |  |
| 1 | Unsigned Int | Params for tuning capabilities 1 | |
| 1 | Unsigned Int | Params for tuning capabilities 2 | |
| 1 | Unsigned Int | Feature Enable | bit 0 1 2 3 4 5 |
| 1 | Unsigned Int | Misc Configuratio |  |
| 1 | Unsigned Int | EEPROM write enable GPIO |  |
| 1 | Unsigned Int | WLAN disable GPIO |  |
| 1 | Unsigned Int | WLAN LED GPIO | |
| 1 | Unsigned Int | RX band select GPIO | |
| 1 | Unsigned Int | TX RX gain | |
| 4 | Unsigned LE Int | SW internal Regulator fields | |
| | | | Modal Header 2G |
| 4 | Unsigned LE Int | Antenna control common 1 |  |
| 4 | Unsigned LE Int | Antenna control common 2 |  |
| 2 | Unsigned LE Int | Antenna control chain 1 |  |
| 2 | Unsigned LE Int | Antenna control chain 2 | |
| 2 | Unsigned LE Int | Antenna control chain 3 | |
| 1 | Unsigned Int | X attenuation 1 db 1 | |
| 1 | Unsigned Int | X attenuation 1 db 2 | |
| 1 | Unsigned Int | X attenuation 1 db 3 | |
| 1 | Unsigned Int | X attenuation 1 margin 1 | |
| 1 | Unsigned Int | X attenuation 1 margin 2 | |
| 1 | Unsigned Int | X attenuation 1 margin 3 | |
| 1 | Signed Int | Temp Slope | |
| 1 | Signed Int | Volt Slope | |
| 1 | Unsigned Int | Spur Channel 1 | Spur channels in usual fbin coding format |
| 1 | Unsigned Int | Spur Channel 2 | Spur channels in usual fbin coding format |
| 1 | Unsigned Int | Spur Channel 3 | Spur channels in usual fbin coding format |
| 1 | Unsigned Int | Spur Channel 4 | Spur channels in usual fbin coding format |
| 1 | Unsigned Int | Spur Channel 5 | Spur channels in usual fbin coding format |
| 1 | Unsigned Int | Noise Floor Threshold Chain 1 | Check if the register is per chain |
| 1 | Unsigned Int | Noise Floor Threshold Chain 2 | Check if the register is per chain |
| 1 | Unsigned Int | Noise Floor Threshold Chain 3 | Check if the register is per chain |
| 11 | Unsigned Int | Reserved | |
| 1 | Signed Int | Quick drop | |
| 1 | Unsigned Int | X Pa Bias Level |  |
| 1 | Unsigned Int | TX frame to data start | |
| 1 | Unsigned Int | TX frame to Pa on | |
| 1 | Unsigned Int | TX Clip | |
| 1 | Signed Int | Antenna gain | |
| 1 | Unsigned Int | Switch settling | |
| 1 | Signed Int | ADC desired size | |
| 1 | Unsigned Int | TX end to x Pa off | |
| 1 | Unsigned Int | TX end to RX on | |
| 1 | Unsigned Int | Threshold 62 | |
| 4 | Unsigned Int | Papd rate mask High Throughput 20 | |
| 4 | Unsigned Int | Papd rate mask High Throughput 40 | |
| 3 | Unsigned Int | Switch Comspdt | |
| 1 | Unsigned Int | Xlna bias strength | |
| 1 | Unsigned Int | Future Modal 1 | |
| 1 | Unsigned Int | Future Modal 2 | |
| 1 | Unsigned Int | Future Modal 3 | |
| 1 | Unsigned Int | Future Modal 4 | |
| 1 | Unsigned Int | Future Modal 5 | |
| 1 | Unsigned Int | Future Modal 6 | |
| 1 | Unsigned Int | Future Modal 7 | |
| | | | Base Extension 1 |
| | | | |
| 1 | Unsigned Int | Cal Freq Pier 2G 1 | |
| 1 | Unsigned Int | Cal Freq Pier 2G 2 | |
| 1 | Unsigned Int | Cal Freq Pier 2G 3 | |
| | | | Cal data per freq op loop Chain 1 Pier 1 |
| | | | |
| | | | Cal data per freq op loop Chain 1 Pier 2 |
| | | | |
| | | | Cal data per freq op loop Chain 1 Pier 3 |
| | | | |
| | | | Cal data per freq op loop Chain 2 Pier 1 |
| | | | |
| | | | Cal data per freq op loop Chain 2 Pier 2 |
| | | | |
| | | | Cal data per freq op loop Chain 2 Pier 3 |
| | | | |
| | | | Cal data per freq op loop Chain 3 Pier 1 |
| | | | |
| | | | Cal data per freq op loop Chain 3 Pier 2 |
| | | | |
| | | | Cal data per freq op loop Chain 3 Pier 3 |
| | | | |
| 1 | Unsigned Int | Cal Target freq bin CCK 1 | |
| 1 | Unsigned Int | Cal Target freq bin CCK 2 | |
| 1 | Unsigned Int | TX end to RX on | |
| 1 | Unsigned Int | TX end to RX on | |

