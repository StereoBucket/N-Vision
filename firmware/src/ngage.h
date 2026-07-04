/** @file ngage.h
 *
 *  PIO-based N-Gage LCD bus decoder.
 *
 *  Copyright (c) 2026, Michael Fitzmayer. All rights reserved.
 *  SPDX-License-Identifier: MIT
 *
 **/

#ifndef NGAGE_H
#define NGAGE_H

#define NGAGE_DISPLAY_WIDTH  176
#define NGAGE_DISPLAY_HEIGHT 208
#define NGAGE_BUFFER_WIDTH   (NGAGE_DISPLAY_WIDTH * 2)
#define NGAGE_BUFFER_SIZE    (NGAGE_DISPLAY_HEIGHT * NGAGE_BUFFER_WIDTH)

#include "ngage_lcd.h"

/* Single definition lives in ngage.c; written by the PIO decoder. */
extern char display_buffer_rgb565[];

void ngage_lcd_init(void);
void update_display_buffer(void);

#endif /* NGAGE_H */
