/*
 * Copyright (C) 2018 Koen Zandberg <koen@bergzand.net>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_dmn_meetstation
 * @{
 *
 * @file
 * @brief       Board specific configuration for the DMN Meetstation
 *
 * @author      Koen Zandberg <koen@bergzand.net>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    CCS811 gas sensor configuration
 * @{
 */
#ifndef CCS811_PARAM_I2C_DEV
#define CCS811_PARAM_I2C_DEV     (I2C_DEV(0))
#endif
#ifndef CCS811_PARAM_RESET_PIN
#define CCS811_PARAM_RESET_PIN   (GPIO_PIN(1, 1))
#endif
#ifndef CCS811_PARAM_WAKE_PIN
#define CCS811_PARAM_WAKE_PIN    (GPIO_PIN(1, 2))
#endif
#ifndef CCS811_PARAM_INT_PIN
#define CCS811_PARAM_INT_PIN     (GPIO_PIN(1, 3))
#endif
/** @} */

/**
 * @name    HDC1080 humidity and temperature sensor configuration
 * @{
 */
#ifndef HDC1000_I2C_ADDRESS
#define HDC1000_I2C_ADDRESS      (0x40)
#endif
/** @} */

/**
 * @brief   Initialize the platform
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
