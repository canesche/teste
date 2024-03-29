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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int typecnt; int charcnt; int leapcnt; int ttisstdcnt; int ttisgmtcnt; } ;
struct TYPE_5__ {TYPE_1__ _bit32; } ;
typedef  TYPE_2__ timelib_tzinfo ;
typedef  int /*<<< orphan*/  int32_t ;

/* Variables and functions */

__attribute__((used)) static void skip_32bit_types(const unsigned char **tzf, timelib_tzinfo *tz)
{
	/* Offset Types */
	*tzf += sizeof(unsigned char) * 6 * tz->_bit32.typecnt;

	/* Abbreviations */
	*tzf += sizeof(char) * tz->_bit32.charcnt;

	/* Leap seconds (only use in 'right/') format */
	if (tz->_bit32.leapcnt) {
		*tzf += sizeof(int32_t) * tz->_bit32.leapcnt * 2;
	}

	/* Standard/Wall Indicators (unused) */
	if (tz->_bit32.ttisstdcnt) {
		*tzf += sizeof(unsigned char) * tz->_bit32.ttisstdcnt;
	}

	/* UT/Local Time Indicators (unused) */
	if (tz->_bit32.ttisgmtcnt) {
		*tzf += sizeof(unsigned char) * tz->_bit32.ttisgmtcnt;
	}
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
          int _len_tzf0 = 1;
          const unsigned char ** tzf = (const unsigned char **) malloc(_len_tzf0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_tzf0; _i0++) {
            int _len_tzf1 = 1;
            tzf[_i0] = (const unsigned char *) malloc(_len_tzf1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_tzf1; _i1++) {
              tzf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tz0 = 1;
          struct TYPE_5__ * tz = (struct TYPE_5__ *) malloc(_len_tz0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
            tz[_i0]._bit32.typecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.charcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.leapcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.ttisstdcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.ttisgmtcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          skip_32bit_types(tzf,tz);
          for(int i1 = 0; i1 < _len_tzf0; i1++) {
            int _len_tzf1 = 1;
              free(tzf[i1]);
          }
          free(tzf);
          free(tz);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tzf0 = 65025;
          const unsigned char ** tzf = (const unsigned char **) malloc(_len_tzf0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_tzf0; _i0++) {
            int _len_tzf1 = 1;
            tzf[_i0] = (const unsigned char *) malloc(_len_tzf1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_tzf1; _i1++) {
              tzf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tz0 = 65025;
          struct TYPE_5__ * tz = (struct TYPE_5__ *) malloc(_len_tz0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
            tz[_i0]._bit32.typecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.charcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.leapcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.ttisstdcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.ttisgmtcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          skip_32bit_types(tzf,tz);
          for(int i1 = 0; i1 < _len_tzf0; i1++) {
            int _len_tzf1 = 1;
              free(tzf[i1]);
          }
          free(tzf);
          free(tz);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tzf0 = 100;
          const unsigned char ** tzf = (const unsigned char **) malloc(_len_tzf0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_tzf0; _i0++) {
            int _len_tzf1 = 1;
            tzf[_i0] = (const unsigned char *) malloc(_len_tzf1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_tzf1; _i1++) {
              tzf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tz0 = 100;
          struct TYPE_5__ * tz = (struct TYPE_5__ *) malloc(_len_tz0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
            tz[_i0]._bit32.typecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.charcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.leapcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.ttisstdcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0]._bit32.ttisgmtcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          skip_32bit_types(tzf,tz);
          for(int i1 = 0; i1 < _len_tzf0; i1++) {
            int _len_tzf1 = 1;
              free(tzf[i1]);
          }
          free(tzf);
          free(tz);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
