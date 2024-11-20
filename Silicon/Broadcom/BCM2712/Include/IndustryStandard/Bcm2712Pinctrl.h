/** @file
 *
 *  Copyright (c) 2023, Mario Bălănică <mariobalanica02@gmail.com>
 *
 *  SPDX-License-Identifier: BSD-2-Clause-Patent
 *
 **/

#ifndef __BCM2712_PINCTRL_H__
#define __BCM2712_PINCTRL_H__

//
// Supported Alternate Pin Functions
//

//
// General Input/Output (GIO)
//
typedef enum {
  GIO_PIN0_ALT_BSC_M3 = 1,
  GIO_PIN0_ALT_VC_I2C0,
  GIO_PIN0_ALT_GPCLK0,
  GIO_PIN0_ALT_ENET0,
  GIO_PIN0_ALT_VC_PWM1,
  GIO_PIN0_ALT_VC_SPI0,
  GIO_PIN0_ALT_IR_IN,
} GIO_PIN0_ALT;

typedef enum {
  GIO_PIN1_ALT_BSC_M3 = 1,
  GIO_PIN1_ALT_VC_I2C0,
  GIO_PIN1_ALT_GPCLK1,
  GIO_PIN1_ALT_ENET0,
  GIO_PIN1_ALT_VC_PWM1,
  GIO_PIN1_ALT_SR_EDM_SENSE,
  GIO_PIN1_ALT_VC_SPI0,
  GIO_PIN1_ALT_VC_UART3,
} GIO_PIN1_ALT;

typedef enum {
  GIO_PIN2_ALT_PDM = 1,
  GIO_PIN2_ALT_I2S_IN,
  GIO_PIN2_ALT_GPCLK2,
  GIO_PIN2_ALT_VC_SPI4,
  GIO_PIN2_ALT_PKT,
  GIO_PIN2_ALT_VC_SPI0,
  GIO_PIN2_ALT_VC_UART3,
} GIO_PIN2_ALT;

typedef enum {
  GIO_PIN3_ALT_PDM = 1,
  GIO_PIN3_ALT_I2S_IN,
  GIO_PIN3_ALT_VC_SPI4,
  GIO_PIN3_ALT_PKT,
  GIO_PIN3_ALT_VC_SPI0,
  GIO_PIN3_ALT_VC_UART3,
} GIO_PIN3_ALT;

typedef enum {
  GIO_PIN4_ALT_PDM = 1,
  GIO_PIN4_ALT_I2S_IN,
  GIO_PIN4_ALT_ARM_JTAG,
  GIO_PIN4_ALT_VC_SPI4,
  GIO_PIN4_ALT_PKT,
  GIO_PIN4_ALT_VC_SPI0,
  GIO_PIN4_ALT_VC_UART3,
} GIO_PIN4_ALT;

typedef enum {
  GIO_PIN5_ALT_PDM = 1,
  GIO_PIN5_ALT_VC_I2C3,
  GIO_PIN5_ALT_ARM_JTAG,
  GIO_PIN5_ALT_SD_CARD_E,
  GIO_PIN5_ALT_VC_SPI4,
  GIO_PIN5_ALT_PKT,
  GIO_PIN5_ALT_VC_PCM,
  GIO_PIN5_ALT_VC_I2C5,
} GIO_PIN5_ALT;

typedef enum {
  GIO_PIN6_ALT_PDM = 1,
  GIO_PIN6_ALT_VC_I2C3,
  GIO_PIN6_ALT_ARM_JTAG,
  GIO_PIN6_ALT_SD_CARD_E,
  GIO_PIN6_ALT_VC_SPI4,
  GIO_PIN6_ALT_PKT,
  GIO_PIN6_ALT_VC_PCM,
  GIO_PIN6_ALT_VC_I2C5,
} GIO_PIN6_ALT;

typedef enum {
  GIO_PIN7_ALT_I2S_OUT = 1,
  GIO_PIN7_ALT_SPDIF_OUT,
  GIO_PIN7_ALT_ARM_JTAG,
  GIO_PIN7_ALT_SD_CARD_E,
  GIO_PIN7_ALT_VC_I2C3,
  GIO_PIN7_ALT_ENET0_RGMII,
  GIO_PIN7_ALT_VC_PCM,
  GIO_PIN7_ALT_VC_SPI4,
} GIO_PIN7_ALT;

typedef enum {
  GIO_PIN8_ALT_I2S_OUT = 1,
  GIO_PIN8_ALT_AUD_FS_CLK0,
  GIO_PIN8_ALT_ARM_JTAG,
  GIO_PIN8_ALT_SD_CARD_E,
  GIO_PIN8_ALT_VC_I2C3,
  GIO_PIN8_ALT_ENET0_MII,
  GIO_PIN8_ALT_VC_PCM,
  GIO_PIN8_ALT_VC_SPI4,
} GIO_PIN8_ALT;

typedef enum {
  GIO_PIN9_ALT_I2S_OUT = 1,
  GIO_PIN9_ALT_AUD_FS_CLK0,
  GIO_PIN9_ALT_ARM_JTAG,
  GIO_PIN9_ALT_SD_CARD_E,
  GIO_PIN9_ALT_ENET0_MII,
  GIO_PIN9_ALT_SD_CARD_C,
  GIO_PIN9_ALT_VC_SPI4,
} GIO_PIN9_ALT;

typedef enum {
  GIO_PIN10_ALT_BSC_M3 = 1,
  GIO_PIN10_ALT_MTSIF_ALT1,
  GIO_PIN10_ALT_I2S_IN,
  GIO_PIN10_ALT_I2S_OUT,
  GIO_PIN10_ALT_VC_SPI5,
  GIO_PIN10_ALT_ENET0_MII,
  GIO_PIN10_ALT_SD_CARD_C,
  GIO_PIN10_ALT_VC_SPI4,
} GIO_PIN10_ALT;

typedef enum {
  GIO_PIN11_ALT_BSC_M3 = 1,
  GIO_PIN11_ALT_MTSIF_ALT1,
  GIO_PIN11_ALT_I2S_IN,
  GIO_PIN11_ALT_I2S_OUT,
  GIO_PIN11_ALT_VC_SPI5,
  GIO_PIN11_ALT_ENET0_MII,
  GIO_PIN11_ALT_SD_CARD_C,
  GIO_PIN11_ALT_VC_SPI4,
} GIO_PIN11_ALT;

typedef enum {
  GIO_PIN12_ALT_SPI_S = 1,
  GIO_PIN12_ALT_MTSIF_ALT1,
  GIO_PIN12_ALT_I2S_IN,
  GIO_PIN12_ALT_I2S_OUT,
  GIO_PIN12_ALT_VC_SPI5,
  GIO_PIN12_ALT_VC_I2CSL,
  GIO_PIN12_ALT_SD0,
  GIO_PIN12_ALT_SD_CARD_D,
} GIO_PIN12_ALT;

typedef enum {
  GIO_PIN13_ALT_SPI_S = 1,
  GIO_PIN13_ALT_MTSIF_ALT1,
  GIO_PIN13_ALT_I2S_OUT,
  GIO_PIN13_ALT_USB_VBUS,
  GIO_PIN13_ALT_VC_SPI5,
  GIO_PIN13_ALT_VC_I2CSL,
  GIO_PIN13_ALT_SD0,
  GIO_PIN13_ALT_SD_CARD_D,
} GIO_PIN13_ALT;

typedef enum {
  GIO_PIN14_ALT_SPI_S = 1,
  GIO_PIN14_ALT_VC_I2CSL,
  GIO_PIN14_ALT_ENET0_RGMII,
  GIO_PIN14_ALT_ARM_JTAG,
  GIO_PIN14_ALT_VC_SPI5,
  GIO_PIN14_ALT_VC_PWM0,
  GIO_PIN14_ALT_VC_I2C4,
  GIO_PIN14_ALT_SD_CARD_D,
} GIO_PIN14_ALT;

typedef enum {
  GIO_PIN15_ALT_SPI_S = 1,
  GIO_PIN15_ALT_VC_I2CSL,
  GIO_PIN15_ALT_VC_SPI3,
  GIO_PIN15_ALT_ARM_JTAG,
  GIO_PIN15_ALT_VC_PWM0,
  GIO_PIN15_ALT_VC_I2C4,
  GIO_PIN15_ALT_GPCLK0,
} GIO_PIN15_ALT;

typedef enum {
  GIO_PIN16_ALT_SD_CARD_B = 1,
  GIO_PIN16_ALT_I2S_OUT,
  GIO_PIN16_ALT_VC_SPI3,
  GIO_PIN16_ALT_I2S_IN,
  GIO_PIN16_ALT_SD0,
  GIO_PIN16_ALT_ENET0_RGMII,
  GIO_PIN16_ALT_GPCLK1,
} GIO_PIN16_ALT;

typedef enum {
  GIO_PIN17_ALT_SD_CARD_B = 1,
  GIO_PIN17_ALT_I2S_OUT,
  GIO_PIN17_ALT_VC_SPI3,
  GIO_PIN17_ALT_I2S_IN,
  GIO_PIN17_ALT_EXT_SC_CLK,
  GIO_PIN17_ALT_SD0,
  GIO_PIN17_ALT_ENET0_RGMII,
  GIO_PIN17_ALT_GPCLK2,
} GIO_PIN17_ALT;

typedef enum {
  GIO_PIN18_ALT_SD_CARD_B = 1,
  GIO_PIN18_ALT_I2S_OUT,
  GIO_PIN18_ALT_VC_SPI3,
  GIO_PIN18_ALT_I2S_IN,
  GIO_PIN18_ALT_SD0,
  GIO_PIN18_ALT_ENET0_RGMII,
  GIO_PIN18_ALT_VC_PWM1,
} GIO_PIN18_ALT;

typedef enum {
  GIO_PIN19_ALT_SD_CARD_B = 1,
  GIO_PIN19_ALT_USB_PWR,
  GIO_PIN19_ALT_VC_SPI3,
  GIO_PIN19_ALT_PKT,
  GIO_PIN19_ALT_SPDIF_OUT,
  GIO_PIN19_ALT_SD0,
  GIO_PIN19_ALT_IR_IN,
  GIO_PIN19_ALT_VC_PWM1,
} GIO_PIN19_ALT;

typedef enum {
  GIO_PIN20_ALT_SD_CARD_B = 1,
  GIO_PIN20_ALT_UUI,
  GIO_PIN20_ALT_VC_UART0,
  GIO_PIN20_ALT_ARM_JTAG,
  GIO_PIN20_ALT_UART2,
  GIO_PIN20_ALT_USB_PWR,
  GIO_PIN20_ALT_VC_PCM,
  GIO_PIN20_ALT_VC_UART4,
} GIO_PIN20_ALT;

typedef enum {
  GIO_PIN21_ALT_USB_PWR = 1,
  GIO_PIN21_ALT_UUI,
  GIO_PIN21_ALT_VC_UART0,
  GIO_PIN21_ALT_ARM_JTAG,
  GIO_PIN21_ALT_UART2,
  GIO_PIN21_ALT_SD_CARD_B,
  GIO_PIN21_ALT_VC_PCM,
  GIO_PIN21_ALT_VC_UART4,
} GIO_PIN21_ALT;

typedef enum {
  GIO_PIN22_ALT_USB_PWR = 1,
  GIO_PIN22_ALT_ENET0,
  GIO_PIN22_ALT_VC_UART0,
  GIO_PIN22_ALT_MTSIF,
  GIO_PIN22_ALT_UART2,
  GIO_PIN22_ALT_USB_VBUS,
  GIO_PIN22_ALT_VC_PCM,
  GIO_PIN22_ALT_VC_I2C5,
} GIO_PIN22_ALT;

typedef enum {
  GIO_PIN23_ALT_USB_VBUS = 1,
  GIO_PIN23_ALT_ENET0,
  GIO_PIN23_ALT_VC_UART0,
  GIO_PIN23_ALT_MTSIF,
  GIO_PIN23_ALT_UART2,
  GIO_PIN23_ALT_I2S_OUT,
  GIO_PIN23_ALT_VC_PCM,
  GIO_PIN23_ALT_VC_I2C5,
} GIO_PIN23_ALT;

typedef enum {
  GIO_PIN24_ALT_MTSIF = 1,
  GIO_PIN24_ALT_PKT,
  GIO_PIN24_ALT_UART0,
  GIO_PIN24_ALT_ENET0_RGMII,
  GIO_PIN24_ALT_ENET0_RGMII_2,
  GIO_PIN24_ALT_VC_I2C4,
  GIO_PIN24_ALT_VC_UART3,
} GIO_PIN24_ALT;

typedef enum {
  GIO_PIN25_ALT_MTSIF = 1,
  GIO_PIN25_ALT_PKT,
  GIO_PIN25_ALT_SC0,
  GIO_PIN25_ALT_UART0,
  GIO_PIN25_ALT_ENET0_RGMII,
  GIO_PIN25_ALT_ENET0_RGMII_2,
  GIO_PIN25_ALT_VC_I2C4,
  GIO_PIN25_ALT_VC_UART3,
} GIO_PIN25_ALT;

typedef enum {
  GIO_PIN26_ALT_MTSIF = 1,
  GIO_PIN26_ALT_PKT,
  GIO_PIN26_ALT_SC0,
  GIO_PIN26_ALT_UART0,
  GIO_PIN26_ALT_ENET0_RGMII,
  GIO_PIN26_ALT_VC_UART4,
  GIO_PIN26_ALT_VC_SPI5,
} GIO_PIN26_ALT;

typedef enum {
  GIO_PIN27_ALT_MTSIF = 1,
  GIO_PIN27_ALT_PKT,
  GIO_PIN27_ALT_SC0,
  GIO_PIN27_ALT_UART0,
  GIO_PIN27_ALT_ENET0_RGMII,
  GIO_PIN27_ALT_VC_UART4,
  GIO_PIN27_ALT_VC_SPI5,
} GIO_PIN27_ALT;

typedef enum {
  GIO_PIN28_ALT_MTSIF = 1,
  GIO_PIN28_ALT_PKT,
  GIO_PIN28_ALT_SC0,
  GIO_PIN28_ALT_ENET0_RGMII,
  GIO_PIN28_ALT_VC_UART4,
  GIO_PIN28_ALT_VC_SPI5,
} GIO_PIN28_ALT;

typedef enum {
  GIO_PIN29_ALT_MTSIF = 1,
  GIO_PIN29_ALT_PKT,
  GIO_PIN29_ALT_SC0,
  GIO_PIN29_ALT_ENET0_RGMII,
  GIO_PIN29_ALT_VC_UART4,
  GIO_PIN29_ALT_VC_SPI5,
} GIO_PIN29_ALT;

typedef enum {
  GIO_PIN30_ALT_MTSIF = 1,
  GIO_PIN30_ALT_PKT,
  GIO_PIN30_ALT_SC0,
  GIO_PIN30_ALT_SD2,
  GIO_PIN30_ALT_ENET0_RGMII,
  GIO_PIN30_ALT_GPCLK0,
  GIO_PIN30_ALT_VC_PWM0,
} GIO_PIN30_ALT;

typedef enum {
  GIO_PIN31_ALT_MTSIF = 1,
  GIO_PIN31_ALT_PKT,
  GIO_PIN31_ALT_SC0,
  GIO_PIN31_ALT_SD2,
  GIO_PIN31_ALT_ENET0_RGMII,
  GIO_PIN31_ALT_VC_SPI3,
  GIO_PIN31_ALT_VC_PWM0,
} GIO_PIN31_ALT;

typedef enum {
  GIO_PIN32_ALT_MTSIF = 1,
  GIO_PIN32_ALT_PKT,
  GIO_PIN32_ALT_SC0,
  GIO_PIN32_ALT_SD2,
  GIO_PIN32_ALT_ENET0_RGMII,
  GIO_PIN32_ALT_VC_SPI3,
  GIO_PIN32_ALT_VC_UART3,
} GIO_PIN32_ALT;

typedef enum {
  GIO_PIN33_ALT_MTSIF = 1,
  GIO_PIN33_ALT_PKT,
  GIO_PIN33_ALT_SD2,
  GIO_PIN33_ALT_ENET0_RGMII,
  GIO_PIN33_ALT_VC_SPI3,
  GIO_PIN33_ALT_VC_UART3,
} GIO_PIN33_ALT;

typedef enum {
  GIO_PIN34_ALT_MTSIF = 1,
  GIO_PIN34_ALT_PKT,
  GIO_PIN34_ALT_EXT_SC_CLK,
  GIO_PIN34_ALT_SD2,
  GIO_PIN34_ALT_ENET0_RGMII,
  GIO_PIN34_ALT_VC_SPI3,
  GIO_PIN34_ALT_VC_I2C5,
} GIO_PIN34_ALT;

typedef enum {
  GIO_PIN35_ALT_MTSIF = 1,
  GIO_PIN35_ALT_PKT,
  GIO_PIN35_ALT_SD2,
  GIO_PIN35_ALT_ENET0_RGMII,
  GIO_PIN35_ALT_VC_SPI3,
  GIO_PIN35_ALT_VC_I2C5,
} GIO_PIN35_ALT;

typedef enum {
  GIO_PIN36_ALT_SD0 = 1,
  GIO_PIN36_ALT_MTSIF,
  GIO_PIN36_ALT_SC0,
  GIO_PIN36_ALT_I2S_IN,
  GIO_PIN36_ALT_VC_UART3,
  GIO_PIN36_ALT_VC_UART2,
} GIO_PIN36_ALT;

typedef enum {
  GIO_PIN37_ALT_SD0 = 1,
  GIO_PIN37_ALT_MTSIF,
  GIO_PIN37_ALT_SC0,
  GIO_PIN37_ALT_VC_SPI0,
  GIO_PIN37_ALT_I2S_IN,
  GIO_PIN37_ALT_VC_UART3,
  GIO_PIN37_ALT_VC_UART2,
} GIO_PIN37_ALT;

typedef enum {
  GIO_PIN38_ALT_SD0 = 1,
  GIO_PIN38_ALT_MTSIF_ALT,
  GIO_PIN38_ALT_SC0,
  GIO_PIN38_ALT_VC_SPI0,
  GIO_PIN38_ALT_I2S_IN,
  GIO_PIN38_ALT_VC_UART3,
  GIO_PIN38_ALT_VC_UART2,
} GIO_PIN38_ALT;

typedef enum {
  GIO_PIN39_ALT_SD0 = 1,
  GIO_PIN39_ALT_MTSIF_ALT,
  GIO_PIN39_ALT_SC0,
  GIO_PIN39_ALT_VC_SPI0,
  GIO_PIN39_ALT_VC_UART3,
  GIO_PIN39_ALT_VC_UART2,
} GIO_PIN39_ALT;

typedef enum {
  GIO_PIN40_ALT_SD0 = 1,
  GIO_PIN40_ALT_MTSIF_ALT,
  GIO_PIN40_ALT_SC0,
  GIO_PIN40_ALT_VC_SPI0,
  GIO_PIN40_ALT_BSC_M3,
} GIO_PIN40_ALT;

typedef enum {
  GIO_PIN41_ALT_SD0 = 1,
  GIO_PIN41_ALT_MTSIF_ALT,
  GIO_PIN41_ALT_SC0,
  GIO_PIN41_ALT_VC_SPI0,
  GIO_PIN41_ALT_BSC_M3,
} GIO_PIN41_ALT;

typedef enum {
  GIO_PIN42_ALT_VC_SPI0 = 1,
  GIO_PIN42_ALT_MTSIF_ALT,
  GIO_PIN42_ALT_VC_I2C0,
  GIO_PIN42_ALT_SD_CARD_A,
  GIO_PIN42_ALT_MTSIF_ALT1,
  GIO_PIN42_ALT_ARM_JTAG,
  GIO_PIN42_ALT_PDM,
  GIO_PIN42_ALT_SPI_M,
} GIO_PIN42_ALT;

typedef enum {
  GIO_PIN43_ALT_VC_SPI0 = 1,
  GIO_PIN43_ALT_MTSIF_ALT,
  GIO_PIN43_ALT_VC_I2C0,
  GIO_PIN43_ALT_SD_CARD_A,
  GIO_PIN43_ALT_MTSIF_ALT1,
  GIO_PIN43_ALT_ARM_JTAG,
  GIO_PIN43_ALT_PDM,
  GIO_PIN43_ALT_SPI_M,
} GIO_PIN43_ALT;

typedef enum {
  GIO_PIN44_ALT_VC_SPI0 = 1,
  GIO_PIN44_ALT_MTSIF_ALT,
  GIO_PIN44_ALT_ENET0,
  GIO_PIN44_ALT_SD_CARD_A,
  GIO_PIN44_ALT_MTSIF_ALT1,
  GIO_PIN44_ALT_ARM_JTAG,
  GIO_PIN44_ALT_PDM,
  GIO_PIN44_ALT_SPI_M,
} GIO_PIN44_ALT;

typedef enum {
  GIO_PIN45_ALT_VC_SPI0 = 1,
  GIO_PIN45_ALT_MTSIF_ALT,
  GIO_PIN45_ALT_ENET0,
  GIO_PIN45_ALT_SD_CARD_A,
  GIO_PIN45_ALT_MTSIF_ALT1,
  GIO_PIN45_ALT_ARM_JTAG,
  GIO_PIN45_ALT_PDM,
  GIO_PIN45_ALT_SPI_M,
} GIO_PIN45_ALT;

typedef enum {
  GIO_PIN46_ALT_VC_SPI0 = 1,
  GIO_PIN46_ALT_MTSIF_ALT,
  GIO_PIN46_ALT_SD_CARD_A,
  GIO_PIN46_ALT_MTSIF_ALT1,
  GIO_PIN46_ALT_ARM_JTAG,
  GIO_PIN46_ALT_PDM,
  GIO_PIN46_ALT_SPI_M,
} GIO_PIN46_ALT;

typedef enum {
  GIO_PIN47_ALT_ENET0 = 1,
  GIO_PIN47_ALT_MTSIF_ALT,
  GIO_PIN47_ALT_I2S_OUT,
  GIO_PIN47_ALT_MTSIF_ALT1,
  GIO_PIN47_ALT_ARM_JTAG,
} GIO_PIN47_ALT;

typedef enum {
  GIO_PIN48_ALT_SC0 = 1,
  GIO_PIN48_ALT_USB_PWR,
  GIO_PIN48_ALT_SPDIF_OUT,
  GIO_PIN48_ALT_MTSIF,
} GIO_PIN48_ALT;

typedef enum {
  GIO_PIN49_ALT_SC0 = 1,
  GIO_PIN49_ALT_USB_PWR,
  GIO_PIN49_ALT_AUD_FS_CLK0,
  GIO_PIN49_ALT_MTSIF,
} GIO_PIN49_ALT;

typedef enum {
  GIO_PIN50_ALT_SC0 = 1,
  GIO_PIN50_ALT_USB_VBUS,
  GIO_PIN50_ALT_SC0_2,
} GIO_PIN50_ALT;

typedef enum {
  GIO_PIN51_ALT_SC0 = 1,
  GIO_PIN51_ALT_ENET0,
  GIO_PIN51_ALT_SC0_2,
  GIO_PIN51_ALT_SR_EDM_SENSE,
} GIO_PIN51_ALT;

typedef enum {
  GIO_PIN52_ALT_SC0 = 1,
  GIO_PIN52_ALT_ENET0,
  GIO_PIN52_ALT_VC_PWM1,
} GIO_PIN52_ALT;

typedef enum {
  GIO_PIN53_ALT_SC0 = 1,
  GIO_PIN53_ALT_ENET0_RGMII,
  GIO_PIN53_ALT_EXT_SC_CLK,
} GIO_PIN53_ALT;

//
// General Input/Output Always ON (GIO AON)
//
typedef enum {
  GIO_AON_PIN0_ALT_IR_IN = 1,
  GIO_AON_PIN0_ALT_VC_SPI0,
  GIO_AON_PIN0_ALT_VC_UART3,
  GIO_AON_PIN0_ALT_VC_I2C3,
  GIO_AON_PIN0_ALT_TE0,
  GIO_AON_PIN0_ALT_VC_I2C0,
} GIO_AON_PIN0_ALT;

typedef enum {
  GIO_AON_PIN1_ALT_VC_PWM0 = 1,
  GIO_AON_PIN1_ALT_VC_SPI0,
  GIO_AON_PIN1_ALT_VC_UART3,
  GIO_AON_PIN1_ALT_VC_I2C3,
  GIO_AON_PIN1_ALT_TE1,
  GIO_AON_PIN1_ALT_AON_PWM,
  GIO_AON_PIN1_ALT_VC_I2C0,
  GIO_AON_PIN1_ALT_VC_PWM1,
} GIO_AON_PIN1_ALT;

typedef enum {
  GIO_AON_PIN2_ALT_VC_PWM0 = 1,
  GIO_AON_PIN2_ALT_VC_SPI0,
  GIO_AON_PIN2_ALT_VC_UART3,
  GIO_AON_PIN2_ALT_CTL_HDMI_5V,
  GIO_AON_PIN2_ALT_FL0,
  GIO_AON_PIN2_ALT_AON_PWM,
  GIO_AON_PIN2_ALT_IR_IN,
  GIO_AON_PIN2_ALT_VC_PWM1,
} GIO_AON_PIN2_ALT;

typedef enum {
  GIO_AON_PIN3_ALT_IR_IN = 1,
  GIO_AON_PIN3_ALT_VC_SPI0,
  GIO_AON_PIN3_ALT_VC_UART3,
  GIO_AON_PIN3_ALT_AON_FP_4SEC_RESETB,
  GIO_AON_PIN3_ALT_FL1,
  GIO_AON_PIN3_ALT_SD_CARD_G,
  GIO_AON_PIN3_ALT_AON_GPCLK,
} GIO_AON_PIN3_ALT;

typedef enum {
  GIO_AON_PIN4_ALT_GPCLK0 = 1,
  GIO_AON_PIN4_ALT_VC_SPI0,
  GIO_AON_PIN4_ALT_VC_I2CSL,
  GIO_AON_PIN4_ALT_AON_GPCLK,
  GIO_AON_PIN4_ALT_PM_LED_OUT,
  GIO_AON_PIN4_ALT_AON_PWM,
  GIO_AON_PIN4_ALT_SD_CARD_G,
  GIO_AON_PIN4_ALT_VC_PWM0,
} GIO_AON_PIN4_ALT;

typedef enum {
  GIO_AON_PIN5_ALT_GPCLK1 = 1,
  GIO_AON_PIN5_ALT_IR_IN,
  GIO_AON_PIN5_ALT_VC_I2CSL,
  GIO_AON_PIN5_ALT_CLK_OBSERVE,
  GIO_AON_PIN5_ALT_AON_PWM,
  GIO_AON_PIN5_ALT_SD_CARD_G,
  GIO_AON_PIN5_ALT_VC_PWM0,
} GIO_AON_PIN5_ALT;

typedef enum {
  GIO_AON_PIN6_ALT_UART1 = 1,
  GIO_AON_PIN6_ALT_VC_UART4,
  GIO_AON_PIN6_ALT_GPCLK2,
  GIO_AON_PIN6_ALT_CTL_HDMI_5V,
  GIO_AON_PIN6_ALT_VC_UART0,
  GIO_AON_PIN6_ALT_VC_SPI3,
} GIO_AON_PIN6_ALT;

typedef enum {
  GIO_AON_PIN7_ALT_UART1 = 1,
  GIO_AON_PIN7_ALT_VC_UART4,
  GIO_AON_PIN7_ALT_GPCLK0,
  GIO_AON_PIN7_ALT_AON_PWM,
  GIO_AON_PIN7_ALT_VC_UART0,
  GIO_AON_PIN7_ALT_VC_SPI3,
} GIO_AON_PIN7_ALT;

typedef enum {
  GIO_AON_PIN8_ALT_UART1 = 1,
  GIO_AON_PIN8_ALT_VC_UART4,
  GIO_AON_PIN8_ALT_VC_I2CSL,
  GIO_AON_PIN8_ALT_CTL_HDMI_5V,
  GIO_AON_PIN8_ALT_VC_UART0,
  GIO_AON_PIN8_ALT_VC_SPI3,
} GIO_AON_PIN8_ALT;

typedef enum {
  GIO_AON_PIN9_ALT_UART1 = 1,
  GIO_AON_PIN9_ALT_VC_UART4,
  GIO_AON_PIN9_ALT_VC_I2CSL,
  GIO_AON_PIN9_ALT_AON_PWM,
  GIO_AON_PIN9_ALT_VC_UART0,
  GIO_AON_PIN9_ALT_VC_SPI3,
} GIO_AON_PIN9_ALT;

typedef enum {
  GIO_AON_PIN10_ALT_TSIO = 1,
  GIO_AON_PIN10_ALT_CTL_HDMI_5V,
  GIO_AON_PIN10_ALT_SC0,
  GIO_AON_PIN10_ALT_SPDIF_OUT,
  GIO_AON_PIN10_ALT_VC_SPI5,
  GIO_AON_PIN10_ALT_USB_PWR,
  GIO_AON_PIN10_ALT_AON_GPCLK,
  GIO_AON_PIN10_ALT_SD_CARD_F,
} GIO_AON_PIN10_ALT;

typedef enum {
  GIO_AON_PIN11_ALT_TSIO = 1,
  GIO_AON_PIN11_ALT_UART0,
  GIO_AON_PIN11_ALT_SC0,
  GIO_AON_PIN11_ALT_AUD_FS_CLK0,
  GIO_AON_PIN11_ALT_VC_SPI5,
  GIO_AON_PIN11_ALT_USB_VBUS,
  GIO_AON_PIN11_ALT_VC_UART2,
  GIO_AON_PIN11_ALT_SD_CARD_F,
} GIO_AON_PIN11_ALT;

typedef enum {
  GIO_AON_PIN12_ALT_TSIO = 1,
  GIO_AON_PIN12_ALT_UART0,
  GIO_AON_PIN12_ALT_VC_UART0,
  GIO_AON_PIN12_ALT_TSIO_2,
  GIO_AON_PIN12_ALT_VC_SPI5,
  GIO_AON_PIN12_ALT_USB_PWR,
  GIO_AON_PIN12_ALT_VC_UART2,
  GIO_AON_PIN12_ALT_SD_CARD_F,
} GIO_AON_PIN12_ALT;

typedef enum {
  GIO_AON_PIN13_ALT_BSC_M1 = 1,
  GIO_AON_PIN13_ALT_UART0,
  GIO_AON_PIN13_ALT_VC_UART0,
  GIO_AON_PIN13_ALT_UUI,
  GIO_AON_PIN13_ALT_VC_SPI5,
  GIO_AON_PIN13_ALT_ARM_JTAG,
  GIO_AON_PIN13_ALT_VC_UART2,
  GIO_AON_PIN13_ALT_VC_I2C3,
} GIO_AON_PIN13_ALT;

typedef enum {
  GIO_AON_PIN14_ALT_BSC_M1 = 1,
  GIO_AON_PIN14_ALT_UART0,
  GIO_AON_PIN14_ALT_VC_UART0,
  GIO_AON_PIN14_ALT_UUI,
  GIO_AON_PIN14_ALT_VC_SPI5,
  GIO_AON_PIN14_ALT_ARM_JTAG,
  GIO_AON_PIN14_ALT_VC_UART2,
  GIO_AON_PIN14_ALT_VC_I2C3,
} GIO_AON_PIN14_ALT;

typedef enum {
  GIO_AON_PIN15_ALT_IR_IN = 1,
  GIO_AON_PIN15_ALT_AON_FP_4SEC_RESETB,
  GIO_AON_PIN15_ALT_VC_UART0,
  GIO_AON_PIN15_ALT_PM_LED_OUT,
  GIO_AON_PIN15_ALT_CTL_HDMI_5V,
  GIO_AON_PIN15_ALT_AON_PWM,
  GIO_AON_PIN15_ALT_AON_GPCLK,
} GIO_AON_PIN15_ALT;

typedef enum {
  GIO_AON_PIN16_ALT_AON_CPU_STANDBYB = 1,
  GIO_AON_PIN16_ALT_GPCLK0,
  GIO_AON_PIN16_ALT_PM_LED_OUT,
  GIO_AON_PIN16_ALT_CTL_HDMI_5V,
  GIO_AON_PIN16_ALT_VC_PWM0,
  GIO_AON_PIN16_ALT_USB_PWR,
  GIO_AON_PIN16_ALT_AUD_FS_CLK0,
} GIO_AON_PIN16_ALT;

typedef enum {
  GIO_AON_PIN17_ALT_HDMI_TX0_BSC = 1,
  GIO_AON_PIN17_ALT_HDMI_TX0_AUTO_I2C,
  GIO_AON_PIN17_ALT_BSC_M0,
  GIO_AON_PIN17_ALT_VC_I2C0,
} GIO_AON_PIN17_ALT;

typedef enum {
  GIO_AON_PIN18_ALT_HDMI_TX0_BSC = 1,
  GIO_AON_PIN18_ALT_HDMI_TX0_AUTO_I2C,
  GIO_AON_PIN18_ALT_BSC_M0,
  GIO_AON_PIN18_ALT_VC_I2C0,
} GIO_AON_PIN18_ALT;

typedef enum {
  GIO_AON_PIN19_ALT_HDMI_TX1_BSC = 1,
  GIO_AON_PIN19_ALT_HDMI_TX1_AUTO_I2C,
  GIO_AON_PIN19_ALT_BSC_M1,
  GIO_AON_PIN19_ALT_VC_I2C4,
  GIO_AON_PIN19_ALT_CTL_HDMI_5V,
} GIO_AON_PIN19_ALT;

typedef enum {
  GIO_AON_PIN20_ALT_HDMI_TX1_BSC = 1,
  GIO_AON_PIN20_ALT_HDMI_TX1_AUTO_I2C,
  GIO_AON_PIN20_ALT_BSC_M1,
  GIO_AON_PIN20_ALT_VC_I2C4,
} GIO_AON_PIN20_ALT;

typedef enum {
  GIO_AON_PIN21_ALT_AVS_PMU_BSC = 1,
  GIO_AON_PIN21_ALT_BSC_M2,
  GIO_AON_PIN21_ALT_VC_I2C5,
  GIO_AON_PIN21_ALT_CTL_HDMI_5V,
} GIO_AON_PIN21_ALT;

typedef enum {
  GIO_AON_PIN22_ALT_AVS_PMU_BSC = 1,
  GIO_AON_PIN22_ALT_BSC_M2,
  GIO_AON_PIN22_ALT_VC_I2C5,
} GIO_AON_PIN22_ALT;

#endif // __BCM2712_PINCTRL_H__
