
#include "FreeRTOS/FreeRTOS.h"
#include "FreeRTOS/FreeRTOSConfig.h"
#include "FreeRTOS/task.h"
#include <avr/io.h>

void Task1(void* para)
{
	// UART_init();
	while (1)
	{
		// SendData(Data);
	}
}

void Task2(void* para)
{
	// SPI_init();
	while (1)
	{
		// SPI_SendData(Data);
	}
}


int main(){
	
	xTaskCreate(Task1,"Task1",200,NULL, 1,NULL);
	xTaskCreate(Task2,"Task2",200,NULL, 1,NULL);

	vTaskStartScheduler();
	while (1)
	{
	}
	
	return 0;
}



