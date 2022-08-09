/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2022 Harrison Chan (Xelus)
 * Copyright 2022 Pablo Ramirez <jp.ramangulo@gmail.com>
 * Copyright 2022 chent7
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "k7_rgb_optical_ansi.h"

#define XX NO_LED

/* ANSI keymap LEDs */
__attribute__ ((weak))
led_config_t g_led_config = {
    {
        {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14 },
        { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 },
        { 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, XX, 42, 43 },
        { 44, XX, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 },
        { 58, 59, 60, XX, XX, XX, 61, XX, XX, 62, 63, 64, 65, 66, 67 }
    },
    {
        {8,    6}, {22,   6}, {35,   6}, {49,   6}, {63,   6}, {77,   6}, {91,   6}, {105,  6}, {119,  6}, {133,  6}, {146,  6}, {160,  6}, {174,  6}, {195,  6},            {216,  6},
        {11,  19}, {29,  19}, {43,  19}, {56,  19}, {70,  19}, {84,  19}, {98,  19}, {112, 19}, {126, 19}, {140, 19}, {154, 19}, {168, 19}, {181, 19}, {199, 19},            {216, 19},
        {13,  31}, {32,  31}, {46,  31}, {60,  31}, {73,  31}, {87,  31}, {101, 31}, {115, 31}, {129, 31}, {143, 31}, {157, 31}, {171, 31},            {194, 31},            {216, 31},
        {17,  44},            {39,  44}, {53,  44}, {67,  44}, {81,  44}, {95,  44}, {108, 44}, {122, 44}, {136, 44}, {150, 44}, {164, 44},            {184, 44}, {202, 44}, {216, 44},
        {9,   56}, {27,  56}, {44,  56},                                  {95,  56},                                  {147, 56}, {161, 56}, {175, 56}, {189, 56}, {202, 56}, {216, 56}
    },
    {
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1, 4,
        1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4,
        1, 1, 1,          4,       1, 1, 1, 4, 4, 4
    }
};
