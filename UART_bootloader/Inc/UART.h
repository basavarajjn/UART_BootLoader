/*
 * UART.h
 *
 *  Created on: Nov 10, 2026
 *      Author: Insys
 */

#ifndef UART_H_
#define UART_H_


void UART_GPIO_Init(void);
void UART_Init(void);
void UART_Transmit_Char(uint8_t data);
void UART_Transmit_String(const char *str);
uint8_t UART_Receive_Data(void);

#endif /* UART_H_ */
