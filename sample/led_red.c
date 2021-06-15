#include <rtthread.h>
#include <rtdevice.h>
#include "drv_common.h"

#define LED_PIN_RED GET_PIN(C, 15)

int led_red(void)
{
    rt_pin_mode(LED_PIN_RED, PIN_MODE_OUTPUT);

    rt_pin_write(LED_PIN_RED, !rt_pin_read(LED_PIN_RED));

    return RT_EOK;
}
MSH_CMD_EXPORT(led_red, control red led flip);
