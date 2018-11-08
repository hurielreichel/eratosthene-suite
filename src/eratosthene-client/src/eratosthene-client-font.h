/*
 *  eratosthene-suite - client
 *
 *      Nils Hamel - nils.hamel@bluewin.ch
 *      Copyright (c) 2016-2018 DHLAB, EPFL
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

    /*! \file   eratosthene-client-font.h
     *  \author Nils Hamel <nils.hamel@bluewin.ch>
     *
     *  eratosthene-suite - client - font
     */

/*
    header - inclusion guard
 */

    # ifndef __ER_CLIENT_FONT__
    # define __ER_CLIENT_FONT__

/*
    header - C/C++ compatibility
 */

    # ifdef __cplusplus
    extern "C" {
    # endif

/*
    header - internal includes
 */

    # include "eratosthene-client-common.h"

/*
    header - external includes
 */

/*
    header - preprocessor definitions
 */

    /* define font */
    # define ER_FONT_ERATOSTHENE { 7, 17, 128, { \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x04, 0x05, 0x40, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x08, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x05, 0xe0, 0x00, 0x30, 0x10, 0x08,\
    0x04, 0x00, 0x00, 0x00, 0x00, 0x40, 0x1c, 0x06, 0x87, 0x03, 0xf1, 0x71,\
    0x7c, 0x1c, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x8e, 0x87, 0xe3,\
    0xf1, 0xf9, 0x38, 0x22, 0x04, 0x42, 0x22, 0x10, 0x89, 0x38, 0x1e, 0x8e,\
    0x87, 0xe3, 0x13, 0x89, 0x44, 0x22, 0x91, 0x8f, 0x21, 0xc0, 0x50, 0x00,\
    0x08, 0x80, 0x00, 0x00, 0x02, 0x60, 0x00, 0x02, 0x00, 0x40, 0x80, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x81, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x80, 0x52,\
    0x91, 0x48, 0x00, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x20, 0x22, 0x84,\
    0x48, 0x84, 0x10, 0x88, 0x40, 0x22, 0x11, 0x00, 0x00, 0x01, 0x10, 0x44,\
    0x1e, 0x91, 0x48, 0x24, 0x12, 0x08, 0x44, 0x22, 0x04, 0x42, 0x22, 0xb0,\
    0x99, 0x44, 0x22, 0x91, 0x48, 0x84, 0x10, 0x89, 0x44, 0x22, 0x11, 0x88,\
    0x40, 0x80, 0x88, 0x00, 0x10, 0x80, 0x00, 0x00, 0x02, 0x10, 0x00, 0x02,\
    0x00, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x04, 0x80, 0x52, 0xa8, 0x48, 0x00, 0x04, 0x08, 0x02, 0x00, 0x00,\
    0x00, 0x20, 0x22, 0x04, 0x08, 0x84, 0x10, 0x08, 0x40, 0x22, 0x11, 0x00,\
    0x80, 0x00, 0x20, 0x44, 0x21, 0x91, 0x48, 0x20, 0x12, 0x08, 0x04, 0x22,\
    0x04, 0x42, 0x21, 0x50, 0x99, 0x44, 0x22, 0x91, 0x48, 0x80, 0x10, 0x89,\
    0x44, 0x14, 0x0a, 0x84, 0x40, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,\
    0x02, 0x10, 0x00, 0x02, 0x04, 0x42, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xc0, 0x57, 0x50, 0x30, 0x00, 0x04,\
    0x08, 0x07, 0x01, 0x00, 0x00, 0x10, 0x22, 0x04, 0x04, 0x44, 0xf0, 0x08,\
    0x20, 0x22, 0x11, 0x02, 0x41, 0xf0, 0x41, 0x40, 0x2d, 0x91, 0x48, 0x20,\
    0x12, 0x08, 0x04, 0x22, 0x04, 0x42, 0x21, 0x10, 0xa9, 0x44, 0x22, 0x91,\
    0x48, 0x80, 0x10, 0x89, 0x54, 0x14, 0x0a, 0x84, 0x80, 0x80, 0x00, 0x00,\
    0x00, 0x80, 0x00, 0x00, 0x02, 0x10, 0x00, 0x02, 0x00, 0x40, 0x80, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,\
    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x80, 0xf2,\
    0x40, 0x38, 0x00, 0x04, 0x08, 0x02, 0x01, 0x00, 0x00, 0x10, 0x22, 0x04,\
    0x02, 0x42, 0x00, 0xf9, 0x20, 0x1c, 0x1e, 0x00, 0x20, 0x00, 0x80, 0x20,\
    0x25, 0x9f, 0x47, 0x20, 0xf2, 0x78, 0x04, 0x3e, 0x04, 0xc2, 0x20, 0x10,\
    0xa9, 0x44, 0x1e, 0x91, 0xc7, 0x83, 0x10, 0x51, 0x28, 0x08, 0x04, 0x82,\
    0x80, 0x80, 0x00, 0x00, 0x00, 0x8e, 0x87, 0xc3, 0xf3, 0x30, 0x78, 0x1a,\
    0x04, 0x42, 0x82, 0xb0, 0x78, 0x44, 0x1e, 0x9e, 0x86, 0xc7, 0x11, 0x89,\
    0x44, 0x22, 0x91, 0x0f, 0x81, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x04, 0x80, 0x42, 0x21, 0x44, 0x00, 0x04, 0x08, 0xc5, 0x07, 0xf0,\
    0x01, 0x08, 0x22, 0x04, 0x01, 0x24, 0x01, 0x89, 0x10, 0x22, 0x10, 0x00,\
    0x40, 0xf0, 0x41, 0x10, 0x39, 0x91, 0x48, 0x20, 0x12, 0x08, 0x74, 0x22,\
    0x04, 0x42, 0x21, 0x10, 0xa9, 0x44, 0x02, 0x91, 0x08, 0x84, 0x10, 0x51,\
    0x28, 0x14, 0x04, 0x81, 0x00, 0x81, 0x00, 0x00, 0x00, 0x91, 0x48, 0x24,\
    0x12, 0x11, 0x44, 0x26, 0x04, 0x42, 0x81, 0x50, 0x89, 0x44, 0x22, 0x91,\
    0x41, 0x80, 0x10, 0x89, 0x44, 0x14, 0x11, 0x84, 0x80, 0x80, 0xa8, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x80, 0x42, 0xa1, 0x44, 0x00, 0x04,\
    0x08, 0x00, 0x01, 0x00, 0x00, 0x08, 0x22, 0x84, 0x00, 0xe4, 0x03, 0x89,\
    0x10, 0x22, 0x10, 0x00, 0x80, 0x00, 0x20, 0x10, 0x01, 0x91, 0x48, 0x20,\
    0x12, 0x08, 0x44, 0x22, 0x04, 0x42, 0x21, 0x10, 0xc9, 0x44, 0x02, 0x91,\
    0x08, 0x84, 0x10, 0x51, 0x28, 0x14, 0x04, 0x81, 0x00, 0x81, 0x00, 0x00,\
    0x00, 0x91, 0x48, 0x20, 0xf2, 0x11, 0x44, 0x22, 0x04, 0xc2, 0x80, 0x50,\
    0x89, 0x44, 0x22, 0x91, 0x80, 0x83, 0x10, 0x51, 0x54, 0x08, 0x11, 0x82,\
    0x80, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x57,\
    0x51, 0xa5, 0x00, 0x04, 0x08, 0x00, 0x81, 0x00, 0x00, 0x04, 0x22, 0x84,\
    0x40, 0x04, 0x11, 0x89, 0x08, 0x22, 0x11, 0x02, 0x01, 0x01, 0x10, 0x00,\
    0x1e, 0x91, 0x48, 0x24, 0x12, 0x08, 0x44, 0x22, 0x04, 0x41, 0x22, 0x10,\
    0xc9, 0x44, 0x02, 0x91, 0x08, 0x84, 0x10, 0x51, 0x28, 0x22, 0x84, 0x80,\
    0x00, 0x82, 0x00, 0x00, 0x00, 0x91, 0x48, 0x24, 0x12, 0x10, 0x44, 0x22,\
    0x04, 0x42, 0x81, 0x50, 0x89, 0x44, 0x22, 0x91, 0x00, 0x84, 0x10, 0x51,\
    0x54, 0x14, 0x11, 0x81, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x04, 0x80, 0xe2, 0x90, 0x98, 0x00, 0x08, 0x04, 0x00, 0x40, 0x00,\
    0x10, 0x04, 0x1c, 0x84, 0x8f, 0x03, 0xe1, 0x70, 0x08, 0x1c, 0x0e, 0x80,\
    0x00, 0x00, 0x00, 0x10, 0x00, 0x91, 0x87, 0xe3, 0xf1, 0x09, 0x38, 0x22,\
    0x04, 0x41, 0xe2, 0x13, 0x89, 0x38, 0x02, 0x8e, 0xc8, 0x83, 0xe0, 0x20,\
    0x28, 0x22, 0x84, 0x8f, 0x01, 0xc2, 0x00, 0x00, 0x00, 0x1e, 0x87, 0xc3,\
    0xe1, 0x10, 0x78, 0x22, 0x04, 0x42, 0x82, 0x50, 0x89, 0x38, 0x1e, 0x9e,\
    0xc0, 0x03, 0xe1, 0x20, 0x28, 0x22, 0x9e, 0x0f, 0x81, 0x40, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x42, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00,\
    0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,\
    0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00,\
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x38, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x10,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x38,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x10, 0x81, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x81,\
    0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x81, 0x40, 0x20, 0x10, 0x08, 0x04,\
    0x02, 0x81, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, } }

/*
    header - preprocessor macros
 */

/*
    header - type definition
 */

/*
    header - structures
 */

    /*! \struct er_font_struct
     *  \brief Font structure
     *
     *  This structure simply holds the bitmap definition of a font used on the
     *  client interface display. In addition to the font bitmap itself, the
     *  structure also holds the font fixed char width, the font height and the
     *  character count.
     *
     *  The font has to follows the ANSI char-set encoding standard. Usually,
     *  the used font only gives the graphical definition of the ASCII chars.
     *
     *  \var er_font_struct::ft_w
     *  Font characters fixed width, in bits/pixels
     *  \var er_font_struct::ft_h
     *  Font characters fixed height, in bits/pixels
     *  \var er_font_struct::ft_c
     *  Font character count, according to ANSI standard
     *  \var er_font_struct::ft_bits
     *  Array of the font bitmap
     */

    typedef struct er_font_struct {

        le_size_t ft_w;
        le_size_t ft_h;
        le_size_t ft_c;
        le_byte_t ft_bits[1904];

    } er_font_t;

/*
    header - function prototypes
 */

    /*! \brief accessor methods
     *
     *  This function returns the characters fixed width, in bits/pixels, of the
     *  provided font.
     *
     *  \param er_font Font structure
     *
     *  \return Returns the font characters width, in bits/pixels
     */

    le_size_t er_font_get_width( er_font_t const * const er_font );

    /*! \brief accessor methods
     *
     *  This function returns the characters fixed height, bits/in pixels, of
     *  the provided font.
     *
     *  \param er_font Font structure
     *
     *  \return Returns the font characters height, in bits/pixels
     */

    le_size_t er_font_get_height( er_font_t const * const er_font );

    /*! \brief accessor methods
     *
     *  This function returns the amount of characters contained in the provided
     *  font.
     *
     *  \param er_font Font structure
     *
     *  \return Returns the font characters count
     */

    le_size_t er_font_get_count( er_font_t const * const er_font );

    /*! \brief display methods
     *
     *  This function displays the provided string in the provided graphical
     *  buffer using the specified font. The properties of the strings and the
     *  graphical buffer have to be provided to the function.
     *
     *  The x and y coordinates of the string are the lower-left corner of the
     *  area on which the string is displayed. The graphical buffer is seen as
     *  a standard OpenGL graphical buffer that is reverse in terms of y. In
     *  addition, it is assumed to be in RGBA format.
     *
     *  This function draws the characters of the provided string in the alpha
     *  layer of the graphical buffer only, the color values being left
     *  unchanged.
     *
     *  \param er_font   Font structure
     *  \param er_string String to display
     *  \param er_length Length of the string
     *  \param er_value  String display alpha value
     *  \param er_buffer Pointer to the graphical buffer
     *  \param er_width  Width of the graphical buffer, in pixels
     *  \param er_height Height of the graphical buffer, in pixels
     *  \param er_x      String display area x-coordinate
     *  \param er_y      String display area y-coordinate
     */

    le_void_t er_font_display_string( er_font_t const * const er_font, le_char_t const * const er_string, le_size_t er_length, le_byte_t const er_value, le_byte_t * const er_buffer, le_size_t const er_width, le_size_t const er_height, le_size_t er_x, le_size_t er_y );

/*
    header - C/C++ compatibility
 */

    # ifdef __cplusplus
    }
    # endif

/*
    header - inclusion guard
 */

    # endif

