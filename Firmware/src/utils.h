#pragma once

#define BIT(x)              (1 << (x))

#define BIT_SET(x, b)       ((x) |= BIT(b))
#define BIT_CLR(x, b)       ((x) &= (~BIT(b)))
#define BIT_TOGGLE(x, b)    ((x) ^= BIT(b))
#define BIT_GET(x, b)       (((x) >> (b)) & 1)

#define ARRAY_SIZE(arr)     (sizeof(arr) / sizeof(arr[0]))
