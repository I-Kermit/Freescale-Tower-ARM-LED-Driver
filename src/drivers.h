/*
 * drivers.h
 *
 *  Created on: 4 Mar 2017
 *      Author: Peter Goddard
 */

#ifndef DRIVERS_H_
#define DRIVERS_H_

#include "Interface/IF_Gpio.h"
#include "Drivers/DVR_Led.h"
#include "HAL/HAL_Gpio.h"
#include "Interrupts/SysTick/INT_SysTick.h"

extern const gpio_driver_api_t freescale_m4_gpio_driver;
extern const led_driver_api_t freescale_m4_led_driver;
extern const timer_driver_api_t freescale_m4_timer_driver;

#endif /* DRIVERS_H_ */
