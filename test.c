#include "includes.h"

sbit LED1=P0^0;

void flash()
{
	LED1=~LED1;
}

void main()
{
	SystemInit();
	BasicTimerAdd(500000,0,flash);
	while(1)
	{
		IdleProcess();
	}
}

