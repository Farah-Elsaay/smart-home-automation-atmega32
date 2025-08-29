/*
 * flame_sensor.h
 *
 *  Created on: 5 Oct 2024
 *      Author: farah
 */

#ifndef FLAME_SENSOR_H_
#define FLAME_SENSOR_H_


#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define flame_sensor_PORT_ID                 PORTD_ID
#define flame_sensor_PIN_ID                  PIN2_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Initialises the flame sensor pin direction.
 */

void FlameSensor_init(void);

/*
 * Description :
 * Reads the value from the flame sensor and returns it.
 */
uint8 FlameSensor_getValue(void);

#endif /* FLAME_SENSOR_H_ */
