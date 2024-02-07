#include "uart.h"
#define UAR0DR *((volatile unsigned int* )((unsigned int *)0x101f1000))

void uart_string(unsigned char *p){
	
	while (*p !='\0'){
		
		 UAR0DR=(unsigned int)(*p);
		 p++;
	}
}