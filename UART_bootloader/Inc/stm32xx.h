

#ifndef STM32XX_H_
#define STM32XX_H_




#include<stdint.h>

#define RCC_BASE_ADDR                  0x40023800
#define GPIOA_BASE_ADDR                0x40020000
#define GPIOB_BASE_ADDR                0x40020400
#define GPIOC_BASE_ADDR                0x40020800
#define GPIOD_BASE_ADDR                0x40020C00


#define ADC_BASE_ADDR                  0x40012000
#define USART1_BASE_ADDR               0x40011000
#define USART2_BASE_ADDR               0x40004400
#define USART3_BASE_ADDR               0x40004800


#define SYSTICK_BASE_ADDR              0xE000E010

typedef struct
{
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDER;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFR[2];
}GPIO_Regdef_t;

#define GPIOA                    ((GPIO_Regdef_t*)GPIOA_BASE_ADDR)
#define GPIOB                     ((GPIO_Regdef_t*)GPIOB_BASE_ADDR)
#define GPIOC                     ((GPIO_Regdef_t*)GPIOC_BASE_ADDR)
#define GPIOD                    ((GPIO_Regdef_t*)GPIOD_BASE_ADDR)


typedef struct
{
	volatile uint32_t SR;
	volatile uint32_t CR1;
	volatile uint32_t CR2;
	volatile uint32_t SMPR1;
	volatile uint32_t SMPR2;
	volatile uint32_t JOFR1;
	volatile uint32_t JOFR2;
	volatile uint32_t JOFR3;
	volatile uint32_t JOFR4;
	volatile uint32_t HTR;
	volatile uint32_t LTR;
	volatile uint32_t SQR1;
	volatile uint32_t SQR2;
	volatile uint32_t SQR3;
	volatile uint32_t JSQR;
	volatile uint32_t JDR1;
	volatile uint32_t JDR2;
	volatile uint32_t JDR3;
	volatile uint32_t JDR4;
	volatile uint32_t DR;
	volatile uint32_t CSR;
	volatile uint32_t CCR;
	volatile uint32_t CDR;
}ADC_Regdef_t;


#define ADC1                 ((ADC_Regdef_t*)ADC_BASE_ADDR)
#define ADC2                  ((ADC_Regdef_t*)ADC_BASE_ADDR)



typedef struct
{
	volatile uint32_t SR;
	volatile uint32_t DR;
	volatile uint32_t BRR;
	volatile uint32_t CR1;
	volatile uint32_t CR2;
	volatile uint32_t CR3;
	volatile uint32_t GTPR;

}USART_Regdef_t;

#define USART1                                 ((USART_Regdef_t*)USART1_BASE_ADDR)
#define USART2                                 ((USART_Regdef_t*)USART2_BASE_ADDR)
#define USART3                                ((USART_Regdef_t*)USART3_BASE_ADDR)



typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t PLLCFGR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t AHB1RSTR;
	volatile uint32_t AHB2RSTR;
	volatile uint32_t AHB3RSTR;
	volatile uint32_t RESERVED0;
	volatile uint32_t APB1RSTR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t RESERVED1[2];
	volatile uint32_t AHB1ENR;
	volatile uint32_t AHB2ENR;
	volatile uint32_t AHB3ENR;
	volatile uint32_t RESERVED2;
	volatile uint32_t APB1ENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t RESERVED3[2];
	volatile uint32_t AHB1LPENR;
	volatile uint32_t AHB2LPENR;
	volatile uint32_t AHB3LPENR;
	volatile uint32_t RESERVED4;
	volatile uint32_t APB1LPENR;
	volatile uint32_t APB2LPENR;
	volatile uint32_t RESERVED5[2];
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t RESERVED6[2];
	volatile uint32_t SSCGR;
	volatile uint32_t PLLISCFGR;
	volatile uint32_t PLLSAICFGR;
	volatile uint32_t DCKCFGR;
	volatile uint32_t CKGATENR;
	volatile uint32_t DCKCFGR2;



}RCC_Regdef_t;


#define RCC                  ((RCC_Regdef_t*)RCC_BASE_ADDR)



typedef struct
{
	volatile uint32_t CTRL;
	volatile uint32_t LOAD;
	volatile uint32_t VAL;
	volatile uint32_t CALIB;

}systic_regdef_t;


#define SysTick                     ((systic_regdef_t *)SYSTICK_BASE_ADDR)








#endif /* STM32XX_H_ */
