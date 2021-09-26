#include "config.h"
#include "stm8s103f.h"

#include "utils.h"

#include "ts.h"
#include "ws_led.h"

/* -------------------------------------------------------------------------- */

static uint32_t seq[] = COLOR_SEQ;

/* -------------------------------------------------------------------------- */

void main()
{
    ts_init();
    ws_led_init();

    IRQ_ENABLE;

    uint16_t _btn_log = 0xFFFF;

    uint8_t on = 0;

    uint32_t divider = 0;

    for(;;)
    {
        if (divider == 100)
        {
            divider = 0;
            for (uint32_t i = 0; i < WS_LED_NUMBER; ++i)
            {
                uint32_t idx = (i + on) % ARRAY_SIZE(seq);
                ws_led_send(seq[idx]);
            }
            on = (on + 1) % ARRAY_SIZE(seq);
        }
        ++divider;

        delay_ms(1);
    }
}

/* -------------------------------------------------------------------------- */

static void _trap_irq(void) __trap
{

}

static void _tli_irq(void) __interrupt(0)
{

}

static void _awu_irq(void) __interrupt(1)
{

}

static void _clk_irq(void) __interrupt(2)
{

}

static void _exti0_irq(void) __interrupt(3)
{

}

static void _exti1_irq(void) __interrupt(4)
{

}

static void _exti2_irq(void) __interrupt(5)
{

}

void _exti3_irq(void) __interrupt(6)
{

}

static void _exti4_irq(void) __interrupt(7)
{

}

static void _spi_irq(void) __interrupt(10)
{

}

static void _tim1_irq(void) __interrupt(11)
{

}

static void _tim1_cc_irq(void) __interrupt(12)
{

}

static void _tim2_irq(void) __interrupt(13)
{

}

static void _tim2_cc_irq(void) __interrupt(14)
{

}

static void _uart1_tx_irq(void) __interrupt(17)
{

}

static void _uart1_rx_irq(void) __interrupt(18)
{

}

static void _i2c_irq(void) __interrupt(19)
{

}

static void _adc1_irq(void) __interrupt(22)
{

}

void _tim4_irq(void) __interrupt(23)
{
    /*
    TIM4.sr.u8 = 0;
    ++_ts;
    */
   ts_tick();
}

static void _flash_irq(void) __interrupt(24)
{

}
