// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  int ut16 ;
typedef  int /*<<< orphan*/  PicBaselineOpcode ;

/* Variables and functions */
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_ADDWF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_ANDLW ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_ANDWF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_BCF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_BSF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_BTFSC ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_BTFSS ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_CALL ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_CLRF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_CLRW ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_CLRWDT ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_COMF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_DECF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_DECFSZ ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_GOTO ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_INCF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_INCFSZ ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_INVALID ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_IORLW ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_IORWF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_MOVF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_MOVLB ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_MOVLW ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_MOVWF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_NOP ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_OPTION ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_RETFIE ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_RETLW ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_RETURN ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_RLF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_RRF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_SLEEP ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_SUBWF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_SWAPF ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_TRIS ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_XORLW ; 
 int /*<<< orphan*/  PIC_BASELINE_OPCODE_XORWF ; 

PicBaselineOpcode pic_baseline_get_opcode(ut16 instr) {
	if (instr & 0xf000) {
		return PIC_BASELINE_OPCODE_INVALID;
	}

	switch ((instr >> 6) & 0x3f) { // first 6 bits
	case 0x7: // 0b000111
		return PIC_BASELINE_OPCODE_ADDWF;
	case 0x5: // 0b000101
		return PIC_BASELINE_OPCODE_ANDWF;
	case 0x1: // 0b000001
		if (instr & (1 << 5)) {
			return PIC_BASELINE_OPCODE_CLRF;
		}
		if ((instr & 0x1f) == 0) { // last 5 bits
			return PIC_BASELINE_OPCODE_CLRW;
		}
		return PIC_BASELINE_OPCODE_INVALID;
	case 0x9: // 0b001001
		return PIC_BASELINE_OPCODE_COMF;
	case 0x3: // 0b000011
		return PIC_BASELINE_OPCODE_DECF;
	case 0xb: // 0b001011
		return PIC_BASELINE_OPCODE_DECFSZ;
	case 0xa: // 0b001010
		return PIC_BASELINE_OPCODE_INCF;
	case 0xf: // 0b001111
		return PIC_BASELINE_OPCODE_INCFSZ;
	case 0x4: // 0b000100
		return PIC_BASELINE_OPCODE_IORWF;
	case 0x8: // 0b001000
		return PIC_BASELINE_OPCODE_MOVF;
	case 0x0:
		if (instr & (1 << 5)) {
			return PIC_BASELINE_OPCODE_MOVWF;
		} else {
			switch (instr & 0x1f) { // last 5 bits
			case 0x0: // 0b00000
				return PIC_BASELINE_OPCODE_NOP;
			case 0x4: // 0b00100
				return PIC_BASELINE_OPCODE_CLRWDT;
			case 0x2: // 0b00010
				return PIC_BASELINE_OPCODE_OPTION;
			case 0x3: // 0b00011
				return PIC_BASELINE_OPCODE_SLEEP;
			case 0x1: // 0b00001
			case 0x5: // 0b00101
			case 0x6: // 0b00110
			case 0x7: // 0b00111
				return PIC_BASELINE_OPCODE_TRIS;
			case 0x10: // 0b10000
			case 0x11: // 0b10001
			case 0x12: // 0b10010
			case 0x13: // 0b10011
			case 0x14: // 0b10100
			case 0x15: // 0b10101
			case 0x16: // 0b10110
			case 0x17: // 0b10111
				return PIC_BASELINE_OPCODE_MOVLB;
			case 0x1e: // 0b11110
				return PIC_BASELINE_OPCODE_RETURN;
			case 0x1f: // 0b11111
				return PIC_BASELINE_OPCODE_RETFIE;
			default:
				return PIC_BASELINE_OPCODE_INVALID;
			}
		}
	case 0xd: // 0b001101
		return PIC_BASELINE_OPCODE_RLF;
	case 0xc: // 0b001100
		return PIC_BASELINE_OPCODE_RRF;
	case 0x2: // 0b000010
		return PIC_BASELINE_OPCODE_SUBWF;
	case 0xe: // 0b001110
		return PIC_BASELINE_OPCODE_SWAPF;
	case 0x6: // 0b000110
		return PIC_BASELINE_OPCODE_XORWF;
	case 0x10: // 0b010000
	case 0x11: // 0b010001
	case 0x12: // 0b010010
	case 0x13: // 0b010011
		return PIC_BASELINE_OPCODE_BCF;
	case 0x14: // 0b010100
	case 0x15: // 0b010101
	case 0x16: // 0b010110
	case 0x17: // 0b010111
		return PIC_BASELINE_OPCODE_BSF;
	case 0x18: // 0b011000
	case 0x19: // 0b011001
	case 0x1a: // 0b011010
	case 0x1b: // 0b011011
		return PIC_BASELINE_OPCODE_BTFSC;
	case 0x1c: // 0b011100
	case 0x1d: // 0b011101
	case 0x1e: // 0b011110
	case 0x1f: // 0b011111
		return PIC_BASELINE_OPCODE_BTFSS;
	case 0x38: // 0b111000
	case 0x39: // 0b111001
	case 0x3a: // 0b111010
	case 0x3b: // 0b111011
		return PIC_BASELINE_OPCODE_ANDLW;
	case 0x24: // 0b100100
	case 0x25: // 0b100101
	case 0x26: // 0b100110
	case 0x27: // 0b100111
		return PIC_BASELINE_OPCODE_CALL;
	case 0x28: // 0b101000
	case 0x29: // 0b101001
	case 0x2a: // 0b101010
	case 0x2b: // 0b101011
	case 0x2c: // 0b101100
	case 0x2d: // 0b101101
	case 0x2e: // 0b101110
	case 0x2f: // 0b101111
		return PIC_BASELINE_OPCODE_GOTO;
	case 0x34: // 0b110100
	case 0x35: // 0b110101
	case 0x36: // 0b110110
	case 0x37: // 0b110111
		return PIC_BASELINE_OPCODE_IORLW;
	case 0x30: // 0b110000
	case 0x31: // 0b110001
	case 0x32: // 0b110010
	case 0x33: // 0b110011
		return PIC_BASELINE_OPCODE_MOVLW;
	case 0x20: // 0b100000
	case 0x21: // 0b100001
	case 0x22: // 0b100010
	case 0x23: // 0b100011
		return PIC_BASELINE_OPCODE_RETLW;
	case 0x3c: // 0b111100
	case 0x3d: // 0b111101
	case 0x3e: // 0b111110
	case 0x3f: // 0b111111
		return PIC_BASELINE_OPCODE_XORLW;
	default:
		return PIC_BASELINE_OPCODE_INVALID;
	}
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int instr = 100;
          int benchRet = pic_baseline_get_opcode(instr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int instr = 255;
          int benchRet = pic_baseline_get_opcode(instr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int instr = 10;
          int benchRet = pic_baseline_get_opcode(instr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
