/* This file contains information specific to a particular node and may
 * be edited for each build
 *
 * Copyright (C) 2008 Kim Taylor <kmtaylor@gmx.com>
 *
 *	This program is free software; you can redistribute it and/or modify it
 *	under the terms of the GNU General Public License as published by the
 *	Free Software Foundation version 2 of the License.
 * 
 *	This program is distributed in the hope that it will be useful, but
 *	WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *	General Public License for more details.
 * 
 *	You should have received a copy of the GNU General Public License along
 *	with this program; if not, write to the Free Software Foundation, Inc.,
 *	675 Mass Ave, Cambridge, MA 02139, USA.
 */

/* A note on the AVR fuse bits. All nodes so far have been set to 0xDD. This
 * turns on the BOD, at 7.3728MHz */

#ifdef CONTROL_NODE
#define LOCAL_PACKET_BUF_SIZE	10
#define CLOCK_DIVISOR		clock_div_4
/* Node specific EIA-485 control signals */
#define TX_ENABLE		PORTD |= (1<<PD1)
#define TX_DISABLE		PORTD &= ~(1<<PD1)
#define BIT_BANG		1
#define MIDI_MANU_ID		0x7D
#define MIDI_DEV_ID		1
#define MIDI_NODE_ID		1
#endif

enum {
	TOGGLE_BUTTON,
	DELTA_MEASURE,
	GET_VIEW
};

enum {
	INC_BUTTON,
	VIEW_BUTTON,
	DEC_BUTTON,
	STOP_BUTTON,
	RESTART_BUTTON,
	RECORD_BUTTON,
	PLAY_BUTTON
};