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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct TYPE_3__ {int* low_nibble; int /*<<< orphan*/  srcptr; } ;
typedef  TYPE_1__ YopDecContext ;

/* Variables and functions */

__attribute__((used)) static uint8_t yop_get_next_nibble(YopDecContext *s)
{
    int ret;

    if (s->low_nibble) {
        ret           = *s->low_nibble & 0xf;
        s->low_nibble = NULL;
    }else {
        s->low_nibble = s->srcptr++;
        ret           = *s->low_nibble >> 4;
    }
    return ret;
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__low_nibble0 = 1;
          s[_i0].low_nibble = (int *) malloc(_len_s__i0__low_nibble0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__low_nibble0; _j0++) {
            s[_i0].low_nibble[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].srcptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = yop_get_next_nibble(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].low_nibble);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__low_nibble0 = 1;
          s[_i0].low_nibble = (int *) malloc(_len_s__i0__low_nibble0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__low_nibble0; _j0++) {
            s[_i0].low_nibble[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].srcptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = yop_get_next_nibble(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].low_nibble);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__low_nibble0 = 1;
          s[_i0].low_nibble = (int *) malloc(_len_s__i0__low_nibble0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__low_nibble0; _j0++) {
            s[_i0].low_nibble[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].srcptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = yop_get_next_nibble(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].low_nibble);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
