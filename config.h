// Copyright 2023 Ionuț Staicu (@iamntz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Split Defines */
#define MASTER_LEFT
// #define EE_HANDS

#define USE_SERIAL

#define SERIAL_USART_FULL_DUPLEX

#define SERIAL_USART_TX_PIN GP1
#define SERIAL_USART_RX_PIN GP0
#define SERIAL_USART_PIN_SWAP

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U


// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 150

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE
// #define SPLIT_HAND_PIN GP4
// #define USB_VBUS_PIN GP8

// #define I2C_DRIVER I2CD2
// #define I2C1_SDA_PIN GP10
// #define I2C1_SCL_PIN GP11
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */
/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
