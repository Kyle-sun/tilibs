/*  libtifiles - TI File Format library
 *  Copyright (C) 2002-2003  Romain Lievin
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __TIFILES_DEFS73__
#define __TIFILES_DEFS73__

#include "stdints.h"

#define TI73_MAXTYPES 48

#define TI73_REAL   0x00
#define TI73_LIST   0x01
#define TI73_MATRX  0x02
#define TI73_EQU    0x03
#define TI73_STRNG  0x04
#define TI73_PRGM   0x05
#define TI73_ASM    0x06
#define TI73_PIC    0x07
#define TI73_GDB    0x08
#define TI73_CPLX   0x0C
#define TI73_WDW    0x0F
#define TI73_ZSTO   0x10
#define TI73_TAB    0x11
#define TI73_BKUP   0x13


#define TI73_DIR    0x19
#define TI73_AMS    0x23
#define TI73_APPL   0x24
#define TI73_IDLIST 0x26

// libtifiles: for internal use only, not exported !

extern const char *TI73_CONST[TI73_MAXTYPES + 1][4];

const char *ti73_byte2type(uint8_t data);
uint8_t ti73_type2byte(const char *s);
const char *ti73_byte2fext(uint8_t data);
uint8_t ti73_fext2byte(const char *s);

const char *ti73_byte2icon(uint8_t data);
const char *ti73_byte2desc(uint8_t data);

#endif
