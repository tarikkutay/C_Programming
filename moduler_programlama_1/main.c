#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


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

