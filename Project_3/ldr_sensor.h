/*
 * ldr_sensor.h
 *
 *  Created on: 5 Oct 2024
 *      Author: farah
 */

#ifndef LDR_SENSOR_H_
#define LDR_SENSOR_H_


#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define LDR_SENSOR_CHANNEL_ID      0
#define LDR_SENSOR_MAX_VOLT_VALUE     2.56
#define LDR_SENSOR_MAX_LIGHT_INTENSITY   100

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function reads the LDR sensor value and returns the light intensity.
 */
uint16 LDR_getLightIntensity(void);

#endif /* LDR_SENSOR_H_ */
