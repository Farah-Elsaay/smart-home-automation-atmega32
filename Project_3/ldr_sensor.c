/*
 * ldr_sensor.c
 *
 *  Created on: 5 Oct 2024
 *      Author: farah
 */

#include "ldr_sensor.h"
#include "adc.h"

/*
 * Description :
 * Function reads the LDR sensor value and returns the light intensity.
 */
uint16 LDR_getLightIntensity(void)
{
	uint8 intensity_value = 0;

	uint16 adc_value = 0;

	/* Read ADC channel where the temperature sensor is connected */
	adc_value = ADC_readChannel(LDR_SENSOR_CHANNEL_ID);

	/* Calculate the temperature from the ADC value*/
	intensity_value = (uint8)(((uint32)adc_value*LDR_SENSOR_MAX_LIGHT_INTENSITY *ADC_REF_VOLT_VALUE)/(ADC_MAXIMUM_VALUE*LDR_SENSOR_MAX_VOLT_VALUE));

	return intensity_value;
}

