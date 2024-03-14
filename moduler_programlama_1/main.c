#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "motor.h"
#include "sensor.h"
#include "display.h"


/*
klima kontrol yaz�l�m� i�in:
-ekran:s�cakl�k de�eri g�stersin
-sens�r:s�cakl�k �l��m� yap�yor
-motor: �al��t�r�ld���nda so�utma yaps�n
...
	ekran fonk:
	display_init()
	screen_power_on()
	screen_power_off()
	display_write_to_screen(int32_t num)

	sens�r fonk:
	sensor_init()
	sensor_get_temp_value()

	motor fonk:
	motor_init()
	motor_on()
	motor_off()

	ANA YAZILIM:
	s�cakl��� oku yazd�r
	girilen de�erin �st�nde motor �al��s�n
*/
void delay(void);


int main(int argc, char* argv[])
{
	//ilk ba�latma
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