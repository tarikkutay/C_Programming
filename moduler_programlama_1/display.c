#include <stdio.h>
#include "display.h"



void display_init(void) {
	printf("display init\n");
}
void display_power_on(void) {
	printf("display power on\n");
}
void display_power_off() {
	printf("diplay power off\n");
}
void display_write_to_screen(int32_t num) {
	printf("sicaklik: %d\n",num);
}
