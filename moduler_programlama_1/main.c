#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "motor.h"
#include "sensor.h"
#include "display.h"


/*
klima kontrol yazýlýmý için:
-ekran:sýcaklýk deðeri göstersin
-sensör:sýcaklýk ölçümü yapýyor
-motor: çalýþtýrýldýðýnda soðutma yapsýn
...
	ekran fonk:
	display_init()
	screen_power_on()
	screen_power_off()
	display_write_to_screen(int32_t num)

	sensör fonk:
	sensor_init()
	sensor_get_temp_value()

	motor fonk:
	motor_init()
	motor_on()
	motor_off()

	ANA YAZILIM:
	sýcaklýðý oku yazdýr
	girilen deðerin üstünde motor çalýþsýn
*/
void delay(void);


int main(int argc, char* argv[])
{
	//ilk baþlatma
	int32_t temp = 0;
	display_init();
	sensor_init();
	motor_init();
	display_power_on();
	while (1)
	{
		temp = sensot_get_temp_value();
		display_write_to_screen(temp);

		if (temp > 25)
		{
			motor_on();
		}
		else
		{
			motor_off();
		}
	}
	return 0;
}

void delay()
{
	int64_t t = 0;

	for (t = 0; t < 9999999999999999;t++)
	{

	}
}