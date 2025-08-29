/*
 * flame_sensor.c
 *
 *  Created on: 5 Oct 2024
 *      Author: farah
 */
#include"flame_sensor.h"
#include"gpio.h"
/*
 * Description :
 * Initialises the flame sensor pin direction.
 */
void FlameSensor_init(void)
{
	 GPIO_setupPinDirection( flame_sensor_PORT_ID, flame_sensor_PIN_ID , PIN_INPUT);
}
/*
 * Description :
 * Reads the value from the flame sensor and returns it.
 */
uint8 FlameSensor_getValue(void)
{
	return GPIO_readPin(flame_sensor_PORT_ID, flame_sensor_PIN_ID);
}
