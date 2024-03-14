#ifndef __DISPLAY_H
#define __DISPLAY_H
#include <stdint.h>
void display_init(void);
void screen_power_on(void);
void screen_power_off();
void display_write_to_screen(int32_t num);

#endif
