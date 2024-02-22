#include <stdint.h>
#include <stdlib.h>
#include "ads1248.h"

struct ads1248_options_t
{
    int pin_reset;
    int pin_drdy;
    int pin_start;
    volatile int* spi_module;
    char cs_id;
};

ads1248_options_t* ads1248_init(int a, int b, int c, int* d, char e)
{
    ads1248_options_t* ads = (ads1248_options_t*) malloc (sizeof(ads1248_options_t));
    ads->pin_reset = a;
    ads->pin_drdy = b;
    ads->pin_start = c;
    ads->spi_module = d;
    ads->cs_id = e;
    return ads;
}

void ads1248_destroy(ads1248_options_t* ads)
{
    free(ads);
}