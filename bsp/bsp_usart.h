#ifndef BSP_USART_H
#define BSP_USART_H
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
extern uint8_t Receive_Data[8];
extern uint8_t res[8];
#endif 