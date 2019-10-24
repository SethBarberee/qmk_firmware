#ifndef VELOCIKEY_H
#define VELOCIKEY_H

#include <stdint.h>
#include <stdbool.h>

#ifndef TYPING_SPEED_MAX_VALUE
#   define TYPING_SPEED_MAX_VALUE 200
#endif

bool    velocikey_enabled(void);
void    velocikey_toggle(void);
void    velocikey_accelerate(void);
void    velocikey_decelerate(void);
uint8_t velocikey_match_speed(uint8_t minValue, uint8_t maxValue);

#endif
