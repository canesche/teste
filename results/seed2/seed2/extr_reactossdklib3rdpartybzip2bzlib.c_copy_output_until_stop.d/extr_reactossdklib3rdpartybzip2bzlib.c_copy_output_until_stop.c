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
struct TYPE_5__ {size_t state_out_pos; size_t numZ; TYPE_1__* strm; int /*<<< orphan*/ * zbits; } ;
struct TYPE_4__ {scalar_t__ avail_out; scalar_t__ total_out_lo32; int /*<<< orphan*/  total_out_hi32; int /*<<< orphan*/ * next_out; } ;
typedef  TYPE_2__ EState ;
typedef  scalar_t__ Bool ;

/* Variables and functions */
 scalar_t__ False ; 
 scalar_t__ True ; 

__attribute__((used)) static
Bool copy_output_until_stop ( EState* s )
{
   Bool progress_out = False;

   while (True) {

      /*-- no output space? --*/
      if (s->strm->avail_out == 0) break;

      /*-- block done? --*/
      if (s->state_out_pos >= s->numZ) break;

      progress_out = True;
      *(s->strm->next_out) = s->zbits[s->state_out_pos];
      s->state_out_pos++;
      s->strm->avail_out--;
      s->strm->next_out++;
      s->strm->total_out_lo32++;
      if (s->strm->total_out_lo32 == 0) s->strm->total_out_hi32++;
   }

   return progress_out;
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
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].state_out_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].numZ = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__strm0 = 1;
          s[_i0].strm = (struct TYPE_4__ *) malloc(_len_s__i0__strm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__strm0; _j0++) {
            s[_i0].strm->avail_out = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].strm->total_out_lo32 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].strm->total_out_hi32 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__strm_next_out0 = 1;
          s[_i0].strm->next_out = (int *) malloc(_len_s__i0__strm_next_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__strm_next_out0; _j0++) {
            s[_i0].strm->next_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__zbits0 = 1;
          s[_i0].zbits = (int *) malloc(_len_s__i0__zbits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__zbits0; _j0++) {
            s[_i0].zbits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = copy_output_until_stop(s);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].strm);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].zbits);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].state_out_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].numZ = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__strm0 = 1;
          s[_i0].strm = (struct TYPE_4__ *) malloc(_len_s__i0__strm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__strm0; _j0++) {
            s[_i0].strm->avail_out = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].strm->total_out_lo32 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].strm->total_out_hi32 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__strm_next_out0 = 1;
          s[_i0].strm->next_out = (int *) malloc(_len_s__i0__strm_next_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__strm_next_out0; _j0++) {
            s[_i0].strm->next_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__zbits0 = 1;
          s[_i0].zbits = (int *) malloc(_len_s__i0__zbits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__zbits0; _j0++) {
            s[_i0].zbits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = copy_output_until_stop(s);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].strm);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].zbits);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].state_out_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].numZ = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__strm0 = 1;
          s[_i0].strm = (struct TYPE_4__ *) malloc(_len_s__i0__strm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__strm0; _j0++) {
            s[_i0].strm->avail_out = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].strm->total_out_lo32 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].strm->total_out_hi32 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__strm_next_out0 = 1;
          s[_i0].strm->next_out = (int *) malloc(_len_s__i0__strm_next_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__strm_next_out0; _j0++) {
            s[_i0].strm->next_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__zbits0 = 1;
          s[_i0].zbits = (int *) malloc(_len_s__i0__zbits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__zbits0; _j0++) {
            s[_i0].zbits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = copy_output_until_stop(s);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].strm);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].zbits);
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
