#include<stdio.h>
#include "main.h"
#include "usart.h"
#include "gpio.h"
#include "bsp_usart.h"
    uint8_t Receive_Data[8];
   void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
    HAL_UART_Receive_IT(huart, Receive_Data, 2);
    HAL_UART_Transmit_IT(huart, Receive_Data, 2);
   }