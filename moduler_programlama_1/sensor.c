#include "sensor.h"
#include <stdio.h>

int32_t temp_val[10] = { 12,32,4,35,5324,3,26,54,12,26 };

void sensor_init(void)
{
	printf("sensor init\n");
}
int32_t sensot_get_temp_value(void)
{
	static int32_t sayac = 0;
	int32_t temp = 0;
	temp = temp_val[sayac];
	sayac++;
	
	if (10 == sayac) {
		sayac = 0;
	}
	return temp;
}