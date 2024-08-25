void EXTI0_IRQHandler(void) ;
typedef volatile unsigned int vuint32_t ;
#include <stdint.h>
// RCC
#define APB2ENR_BASE 0x40021000
#define  APB2ENR  *(volatile uint32_t *)(APB2ENR_BASE + 0x18)
#define RCC_IOPAEN (1<<2)
//GPIO
#define GPIO_PA       0x40010800
#define  CRH      *(volatile uint32_t *)(GPIO_PA +0x04)
#define  CRL      *(volatile uint32_t *)(GPIO_PA +0x08)
#define  ODR      *(volatile uint32_t *)(GPIO_PA +0x0C)

#define GPIOA13     (1UL<<13)

 // EXIT

#define EXIT_BASE     0x40010400   // from memory map
#define  EXTI_IMR  *(volatile uint32_t *)(EXIT_BASE  + 0x00)  //Configure the mask bits of the 20 Interrupt lines (EXTI_IMR)
#define  EXTI_RTSR  *(volatile uint32_t *)(EXIT_BASE  + 0x08)  //Configure the Trigger Selection bits of the Interrupt lines (EXTI_RTSR and EXTI_FTSR)
#define  EXTI_PR  *(volatile uint32_t *)(EXIT_BASE  + 0x14)

//AFIO
#define AFIO_BASE     0x40010000
#define AFIO_EXTICR1   *(volatile uint32_t *)( AFIO_BASE + 0x08)

//NVIC
#define NVIC_eXTIE0   *(volatile uint32_t *)( 0xE000E100 + 0x00)

void clock_init() {
	// Enable gpio clock
	APB2ENR |=RCC_IOPAEN;
	//
	APB2ENR |=(1<<0);
}

void gpio_int(){
	CRH &= 0xFF0FFFFF;
	CRH |= 0x00200000;
	CRL |=(1<<2);

}


int main(void)
{

	clock_init();
	gpio_int();
	// configuration (x= 0 to 3)
	AFIO_EXTICR1=0;
	// Enable Rising Trigger
	EXTI_RTSR |= (1<<0);
	//Enable Exit Line 0 (mask 1)
	EXTI_IMR  |= (1<<0);

	NVIC_eXTIE0 |=(1<<6);
	while (1);
}

void EXTI0_IRQHandler(void)   {
	 // portA_pin0   -- rising  edge
	//toggle pin 13
	 ODR  ^= (1<<13);

	 // clear pending rquest for line 0
	 EXTI_PR |=(1<<0);


}
