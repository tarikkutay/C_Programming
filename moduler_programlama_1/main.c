#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


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

