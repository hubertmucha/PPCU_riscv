
#include "delay.h"
#include "gpio.h"

//static constexpr uint32_t led_mask{0xf};

#define TAB_SIZE 50


// SOS
static uint8_t tab0[TAB_SIZE] = {1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
// Hubert
static uint8_t tab1[TAB_SIZE] = {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0};
// Mucha
static uint8_t tab2[TAB_SIZE] = {1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0};


int main()
{
    while (true) {
        gpio.set_pin(0, 1);
        for (uint8_t i = 0; i < TAB_SIZE; ++i) { 
            gpio.set_pin(1, tab0[i]);
            gpio.set_pin(2, tab1[i]);
            gpio.set_pin(3, tab2[i]);
            mdelay(1000);
        }
        gpio.set_pin(0, 0);
        mdelay(1000);
    }
}
