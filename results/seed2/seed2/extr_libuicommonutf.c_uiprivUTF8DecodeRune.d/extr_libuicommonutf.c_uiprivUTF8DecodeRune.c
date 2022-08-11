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
typedef  int uint8_t ;
typedef  int uint32_t ;

/* Variables and functions */
 int badrune ; 

const char *uiprivUTF8DecodeRune(const char *s, size_t nElem, uint32_t *rune)
{
	uint8_t b, c;
	uint8_t lowestAllowed, highestAllowed;
	size_t i, expected;
	int bad;

	b = (uint8_t) (*s);
	if (b < 0x80) {		// ASCII bytes represent themselves
		*rune = b;
		s++;
		return s;
	}
	// 0xC0 and 0xC1 cover 2-byte overlong equivalents
	// 0xF5 to 0xFD cover values > 0x10FFFF
	// 0xFE and 0xFF were never defined (always illegal)
	if (b < 0xC2 || b > 0xF4) {		// invalid
		*rune = badrune;
		s++;
		return s;
	}

	// this determines the range of allowed first continuation bytes
	lowestAllowed = 0x80;
	highestAllowed = 0xBF;
	switch (b) {
	case 0xE0:
		// disallow 3-byte overlong equivalents
		lowestAllowed = 0xA0;
		break;
	case 0xED:
		// disallow surrogate characters
		highestAllowed = 0x9F;
		break;
	case 0xF0:
		// disallow 4-byte overlong equivalents
		lowestAllowed = 0x90;
		break;
	case 0xF4:
		// disallow values > 0x10FFFF
		highestAllowed = 0x8F;
		break;
	}

	// and this determines how many continuation bytes are expected
	expected = 1;
	if (b >= 0xE0)
		expected++;
	if (b >= 0xF0)
		expected++;
	if (nElem != 0) {				// are there enough bytes?
		nElem--;
		if (nElem < expected) {	// nope
			*rune = badrune;
			s++;
			return s;
		}
	}

	// ensure that everything is correct
	// if not, **only** consume the initial byte
	bad = 0;
	for (i = 0; i < expected; i++) {
		c = (uint8_t) (s[1 + i]);
		if (c < lowestAllowed || c > highestAllowed) {
			bad = 1;
			break;
		}
		// the old lowestAllowed and highestAllowed is only for the first continuation byte
		lowestAllowed = 0x80;
		highestAllowed = 0xBF;
	}
	if (bad) {
		*rune = badrune;
		s++;
		return s;
	}

	// now do the topmost bits
	if (b < 0xE0)
		*rune = b & 0x1F;
	else if (b < 0xF0)
		*rune = b & 0x0F;
	else
		*rune = b & 0x07;
	s++;		// we can finally move on

	// now do the continuation bytes
	for (; expected; expected--) {
		c = (uint8_t) (*s);
		s++;
		c &= 0x3F;		// strip continuation bits
		*rune <<= 6;
		*rune |= c;
	}

	return s;
}


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
          unsigned long nElem = 100;
          int _len_s0 = 1;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rune0 = 1;
          int * rune = (int *) malloc(_len_rune0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rune0; _i0++) {
            rune[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = uiprivUTF8DecodeRune(s,nElem,rune);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(s);
          free(rune);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long nElem = 255;
          int _len_s0 = 65025;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rune0 = 65025;
          int * rune = (int *) malloc(_len_rune0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rune0; _i0++) {
            rune[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = uiprivUTF8DecodeRune(s,nElem,rune);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(s);
          free(rune);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long nElem = 10;
          int _len_s0 = 100;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rune0 = 100;
          int * rune = (int *) malloc(_len_rune0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rune0; _i0++) {
            rune[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = uiprivUTF8DecodeRune(s,nElem,rune);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(s);
          free(rune);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
