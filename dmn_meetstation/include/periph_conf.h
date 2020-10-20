/*
 * Copyright (C) 2018 Koen Zandberg <koen@bergzand.net>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_common_nrf52
 * @{
 *
 * @file
 * @brief       Peripheral configuration for the dmn meetstation
 *
 * @author      Koen Zandberg <koen@bergzand.net>
 *
 */

#ifndef PERIPH_CONF_H
#define PERIPH_CONF_H

#include "periph_cpu.h"
#include "cfg_clock_32_1.h"
#include "cfg_timer_default.h"
#include "cfg_rtt_default.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    UART configuration
 * @{
 */
static const uart_conf_t uart_config[] = {
    {
        .dev        = NRF_UARTE0,
        .rx_pin     = GPIO_PIN(0,21),
        .tx_pin     = GPIO_PIN(0,23),
        .irqn       = UARTE0_UART0_IRQn,
#ifdef MODULE_PERIPH_UART_HW_FC
        .rts_pin    = GPIO_UNDEF,
        .cts_pin    = GPIO_UNDEF,
#endif
    },
};
#define UART_0_ISR          (isr_uart0)

#define UART_NUMOF          (sizeof(uart_config) / sizeof(uart_config[0]))
/** @} */

/**
 * @name    SPI configuration
 * @{
 */
static const spi_conf_t spi_config[] = {
    {
        .dev  = NRF_SPIM0,
        .sclk = GPIO_PIN(0, 19),
        .mosi = GPIO_PIN(0, 12),
        .miso = GPIO_PIN(0, 7)
    }
};

#define SPI_NUMOF           (sizeof(spi_config) / sizeof(spi_config[0]))
/** @} */

/**
 * @name    I2C configuration
 * @{
 */
static const i2c_conf_t i2c_config[] = {
    {
        .dev = NRF_TWIM1,
        .scl = 5,
        .sda = 4,
        .speed = I2C_SPEED_NORMAL
    }
};
#define I2C_NUMOF           (sizeof(i2c_config) / sizeof(i2c_config[0]))
/** @} */

/**
 * @name   PWM configuration
 * @{
 */
static const pwm_conf_t pwm_config[] = {
    {
        NRF_PWM0,
        {
            GPIO_PIN(1, 4),
            GPIO_PIN(1, 9),
            GPIO_PIN(1, 10),
            GPIO_PIN(1, 13),
        }
    }
};
#define PWM_NUMOF           (sizeof(pwm_config) / sizeof(pwm_config[0]))
/** @} */

/**
 * @brief Enable the internal DC/DC converter
 */
#define NRF5X_ENABLE_DCDC


#ifdef __cplusplus
}
#endif

#endif /* PERIPH_CONF_H */
