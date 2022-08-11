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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  uint32_t ;
struct TYPE_4__ {scalar_t__ cacheval; scalar_t__ cachelen; int /*<<< orphan*/  bytes; int /*<<< orphan*/  const* position; } ;
struct TYPE_5__ {TYPE_1__ rb; } ;
typedef  TYPE_2__ OpusRangeCoder ;

/* Variables and functions */

void ff_opus_rc_dec_raw_init(OpusRangeCoder *rc, const uint8_t *rightend, uint32_t bytes)
{
    rc->rb.position = rightend;
    rc->rb.bytes    = bytes;
    rc->rb.cachelen = 0;
    rc->rb.cacheval = 0;
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
          int bytes = 100;
          int _len_rc0 = 1;
          struct TYPE_5__ * rc = (struct TYPE_5__ *) malloc(_len_rc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].rb.cacheval = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].rb.cachelen = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].rb.bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rc__i0__rb_position0 = 1;
          rc[_i0].rb.position = (const int *) malloc(_len_rc__i0__rb_position0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_rc__i0__rb_position0; _j0++) {
            rc[_i0].rb.position[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rightend0 = 1;
          const int * rightend = (const int *) malloc(_len_rightend0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_rightend0; _i0++) {
            rightend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_opus_rc_dec_raw_init(rc,rightend,bytes);
          free(rc);
          free(rightend);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bytes = 255;
          int _len_rc0 = 65025;
          struct TYPE_5__ * rc = (struct TYPE_5__ *) malloc(_len_rc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].rb.cacheval = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].rb.cachelen = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].rb.bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rc__i0__rb_position0 = 1;
          rc[_i0].rb.position = (const int *) malloc(_len_rc__i0__rb_position0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_rc__i0__rb_position0; _j0++) {
            rc[_i0].rb.position[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rightend0 = 65025;
          const int * rightend = (const int *) malloc(_len_rightend0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_rightend0; _i0++) {
            rightend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_opus_rc_dec_raw_init(rc,rightend,bytes);
          free(rc);
          free(rightend);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bytes = 10;
          int _len_rc0 = 100;
          struct TYPE_5__ * rc = (struct TYPE_5__ *) malloc(_len_rc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].rb.cacheval = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].rb.cachelen = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].rb.bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rc__i0__rb_position0 = 1;
          rc[_i0].rb.position = (const int *) malloc(_len_rc__i0__rb_position0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_rc__i0__rb_position0; _j0++) {
            rc[_i0].rb.position[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rightend0 = 100;
          const int * rightend = (const int *) malloc(_len_rightend0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_rightend0; _i0++) {
            rightend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_opus_rc_dec_raw_init(rc,rightend,bytes);
          free(rc);
          free(rightend);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
