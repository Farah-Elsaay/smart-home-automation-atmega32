/*
 * buzzer.h
 *
 *  Created on: 5 Oct 2024
 *      Author: farah
 */

#ifndef BUZZER_H_
#define BUZZER_H_

#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define BUZZER_PORT_ID                 PORTD_ID
#define BUZZER_PIN_ID                  PIN3_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*
 * Description :
 * Initialises the buzzer pin direction and turn off the buzzer.
 */
void Buzzer_init(void);
/*
 * Description :
 * Activates the buzzer.
 */
void Buzzer_on(void);
/*
 * Description :
 * Deactivates the buzzer.
 */
void Buzzer_off(void);

#endif /* BUZZER_H_ */
