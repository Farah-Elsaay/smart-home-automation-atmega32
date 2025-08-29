/*
 * dc_motor.h
 *
 *  Created on: 5 Oct 2024
 *      Author: farah
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define IN1_PORT_ID                 PORTB_ID
#define IN1_PIN_ID                  PIN0_ID

#define IN2_PORT_ID                 PORTB_ID
#define IN2_PIN_ID                  PIN1_ID

#define ENABLE1_PORT_ID             PORTB_ID
#define ENABLE1_PIN_ID              PIN3_ID


/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/
typedef enum
{
	clockwise,anticlockwise,stop
}DcMotor_State;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*
 * Description :
 * Initialises the DC motor by setting the direction for the motor pins and stopping the
 * motor at the beginning
 */
void DcMotor_Init(void);
/*
 * Description :
 * Controls the motor's state (Clockwise/Anti-Clockwise/Stop) and adjusts the speed based
 * on the input duty cycle
 */
void DcMotor_Rotate(DcMotor_State state , uint8 speed);

#endif /* DC_MOTOR_H_ */
