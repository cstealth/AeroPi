#include "main.h"

int main(void)
{
  // Get GPIO Base Address
  gpio = (unsigned int*)GPIO_BASE;
  // Set the LED GPIO to output
  gpio[LED_GPFSEL] |= (1 << LED_GPFBIT);

  // Main Loop
  while(1)
  {
    // Ghetto Timer
    for(tim = 0; tim < 500000; tim++)
    {
      ;
    }

    // Set LED On (GPIO set low)
    gpio[LED_GPCLR] = (1 << LED_GPIO_BIT);

    // Ghetto Timer
    for(tim = 0; tim < 500000; tim++)
    {
      ;
    }

    // Set LED Off (GPIO set high)
    gpio[LED_GPSET] = (1 << LED_GPIO_BIT);
  }
}
