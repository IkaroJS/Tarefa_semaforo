#include <stdio.h>
#include "pico/stdlib.h"

#define LED_RED 11
#define LED_YELLOW 12
#define LED_GREEN 13

volatile int state = 0; // Estado do semáforo

void init_Pin()
{
    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_put(LED_RED, false);

    gpio_init(LED_YELLOW);
    gpio_set_dir(LED_YELLOW, GPIO_OUT);
    gpio_put(LED_YELLOW, false);

    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_put(LED_GREEN, false);
}

bool repeating_timer_callback(struct repeating_timer *t)
{

    // Desliga todos os LEDs antes de mudar de estado
    gpio_put(LED_RED, false);
    gpio_put(LED_YELLOW, false);
    gpio_put(LED_GREEN, false);

    // Alterna os estados do semáforo
    if (state == 0)
    {
        gpio_put(LED_RED, true);
    }
    else if (state == 1)
    {
        gpio_put(LED_YELLOW, true);
    }
    else
    {
        gpio_put(LED_GREEN, true);
    }

    state = (state + 1) % 3;
    return true;
}

int main()
{
    stdio_init_all();
    init_Pin();
    
    struct repeating_timer timer;
    add_repeating_timer_ms(-3000, repeating_timer_callback, NULL, &timer);

    while (true)
    {
        printf("Emitindo sinal \n");
        sleep_ms(1000);        
    }
}