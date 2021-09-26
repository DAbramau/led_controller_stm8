#include "stm8s103f.h"

static volatile uint32_t _ts = 0;

/* -------------------------------------------------------------------------- */

void ts_init(void)
{
    /* init clock */
    CLK.ckdivr.cpudiv = 0;
    CLK.ckdivr.hsidiv = 0;

    TIM4.pscr.psc = 7;
    TIM4.arr = 124;
    TIM4.ier.uie = 1;
    TIM4.cr1.cen = 1;
}

/* -------------------------------------------------------------------------- */

uint32_t get_ts(void)
{
    uint32_t ts_1 = _ts;
    uint32_t ts_2 = _ts;

    while (ts_1 != ts_2)
    {
        ts_1 = ts_2;
        ts_2 = _ts;
    }

    return ts_1;
}

/* -------------------------------------------------------------------------- */

void delay_ms(uint32_t ms)
{
    uint32_t start_ts = get_ts();

    while ((get_ts() - start_ts) < ms);
}

/* -------------------------------------------------------------------------- */

void ts_tick(void)
{
    TIM4.sr.u8 = 0;
    ++_ts;
}

/* -------------------------------------------------------------------------- */
