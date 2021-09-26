#include "config.h"
#include "stm8s103f.h"

/* -------------------------------------------------------------------------- */

#define SET_LED_PIN_LOW      BIT_CLR(WS_LED_PORT.odr, WS_LED_PIN)
#define SET_LED_PIN_HIGH     BIT_SET(WS_LED_PORT.odr, WS_LED_PIN)

void ws_led_init(void)
{
    BIT_CLR(WS_LED_PORT.odr, WS_LED_PIN);
    BIT_SET(WS_LED_PORT.ddr, WS_LED_PIN);
    BIT_SET(WS_LED_PORT.cr1, WS_LED_PIN);
    BIT_SET(WS_LED_PORT.cr2, WS_LED_PIN);
}

/* -------------------------------------------------------------------------- */

void ws_led_send(uint32_t color)
{
    IRQ_DISABLE;
    for (uint8_t i = 0; i < 24; ++i)
    {
        if (color & 0x01)
        {
            SET_LED_PIN_HIGH;
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            SET_LED_PIN_LOW;
        }
        else
        {
            SET_LED_PIN_HIGH;
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            __asm__("NOP");
            SET_LED_PIN_LOW;
        }
        color = color >> 1;
    }
    IRQ_ENABLE;
}

/* -------------------------------------------------------------------------- */
