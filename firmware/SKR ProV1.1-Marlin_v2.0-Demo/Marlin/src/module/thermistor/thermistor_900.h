/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// Epcos B57861S 104F 40 100K on Mendel90 bed, max temp 115
// R25 = 100 kOhm, beta25 = 4540 K, 4.7 kOhm pull-up, bed thermistor
// Data taken from Nophead Marlin 0.xx for Mendel90's Melzi
const short temptable_900[][2] PROGMEM = {
    { OV( 61),   200     }, // r=   300 adc=61.38
    { OV( 68),   195     }, // r=   336 adc=68.19
    { OV( 76),   190     }, // r=   376 adc=75.84
    { OV( 84),   185     }, // r=   423 adc=84.46
    { OV( 94),   180     }, // r=   476 adc=94.15
    { OV(105),   175     }, // r=   538 adc=105.06
    { OV(117),   170     }, // r=   609 adc=117.34
    { OV(131),   165     }, // r=   691 adc=131.13
    { OV(147),   160     }, // r=   786 adc=146.61
    { OV(164),   155     }, // r=   897 adc=163.95
    { OV(183),   150     }, // r=  1026 adc=183.33
    { OV(205),   145     }, // r=  1177 adc=204.93
    { OV(229),   140     }, // r=  1355 adc=228.90
    { OV(255),   135     }, // r=  1564 adc=255.39
    { OV(285),   130     }, // r=  1810 adc=284.48
    { OV(316),   125     }, // r=  2103 adc=316.24
    { OV(351),   120     }, // r=  2451 adc=350.62
    { OV(388),   115     }, // r=  2866 adc=387.52
    { OV(427),   110     }, // r=  3364 adc=426.72
    { OV(468),   105     }, // r=  3962 adc=467.90
    { OV(511),   100     }, // r=  4684 adc=510.63
    { OV(554),    95     }, // r=  5559 adc=554.35
    { OV(598),    90     }, // r=  6625 adc=598.45
    { OV(642),    85     }, // r=  7928 adc=642.25
    { OV(685),    80     }, // r=  9528 adc=685.06
    { OV(726),    75     }, // r= 11501 adc=726.23
    { OV(765),    70     }, // r= 13947 adc=765.15
    { OV(801),    65     }, // r= 16994 adc=801.36
    { OV(835),    60     }, // r= 20807 adc=834.50
    { OV(864),    55     }, // r= 25606 adc=864.35
    { OV(891),    50     }, // r= 31678 adc=890.83
    { OV(914),    45     }, // r= 39403 adc=913.98
    { OV(934),    40     }, // r= 49289 adc=933.94
    { OV(951),    35     }, // r= 62016 adc=950.93
    { OV(965),    30     }, // r= 78504 adc=965.21
    { OV(977),    25     }, // r=100000 adc=977.08
    { OV(987),    20     }, // r=128214 adc=986.83
    { OV(995),    15     }, // r=165504 adc=994.75
    { OV(1001),   10     }, // r=215143 adc=1001.13
    { OV(1006),    5     }, // r=281716 adc=1006.21
    { OV(1010),    0     }, // r=371694 adc=1010.23
};
