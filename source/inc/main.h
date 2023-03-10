#ifndef _MAIN_H
#define _MAIN_H

#define GPIO_BASE 0x3F200000UL
#define LED_GPFSEL      GPIO_GPFSEL2
#define LED_GPFBIT      27
#define LED_GPSET       GPIO_GPSET0
#define LED_GPCLR       GPIO_GPCLR0
#define LED_GPIO_BIT    29
#define GPIO_GPFSEL0    0
#define GPIO_GPFSEL1    1
#define GPIO_GPFSEL2    2
#define GPIO_GPFSEL3    3
#define GPIO_GPFSEL4    4
#define GPIO_GPFSEL5    5
#define GPIO_GPSET0     7
#define GPIO_GPSET1     8
#define GPIO_GPCLR0     10
#define GPIO_GPCLR1     11
#define GPIO_GPLEV0     13
#define GPIO_GPLEV1     14
#define GPIO_GPEDS0     16
#define GPIO_GPEDS1     17
#define GPIO_GPREN0     19
#define GPIO_GPREN1     20
#define GPIO_GPFEN0     22
#define GPIO_GPFEN1     23
#define GPIO_GPHEN0     25
#define GPIO_GPHEN1     26
#define GPIO_GPLEN0     28
#define GPIO_GPLEN1     29
#define GPIO_GPAREN0    31
#define GPIO_GPAREN1    32
#define GPIO_GPAFEN0    34
#define GPIO_GPAFEN1    35
#define GPIO_GPPUD      37
#define GPIO_GPPUDCLK0  38
#define GPIO_GPPUDCLK1  39
volatile unsigned int* gpio;
volatile unsigned int tim;
int main(void) __attribute__((naked));
#endif
