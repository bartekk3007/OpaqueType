#include <stdio.h>
#include "ads1248.h"

int main(void)
{
	int* dp = 4;
	ads1248_options_t* ads = ads1248_init(1, 2, 3, dp, 'e');
	ads1248_destroy(ads);

	ads1248_options_t* adsp;

	return 0;
}