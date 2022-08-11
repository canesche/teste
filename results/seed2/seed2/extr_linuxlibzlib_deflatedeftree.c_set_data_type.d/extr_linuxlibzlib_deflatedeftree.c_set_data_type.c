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
struct TYPE_5__ {scalar_t__ data_type; TYPE_1__* dyn_ltree; } ;
typedef  TYPE_2__ deflate_state ;
struct TYPE_4__ {scalar_t__ Freq; } ;
typedef  scalar_t__ Byte ;

/* Variables and functions */
 int LITERALS ; 
 scalar_t__ Z_ASCII ; 
 scalar_t__ Z_BINARY ; 

__attribute__((used)) static void set_data_type(
	deflate_state *s
)
{
    int n = 0;
    unsigned ascii_freq = 0;
    unsigned bin_freq = 0;
    while (n < 7)        bin_freq += s->dyn_ltree[n++].Freq;
    while (n < 128)    ascii_freq += s->dyn_ltree[n++].Freq;
    while (n < LITERALS) bin_freq += s->dyn_ltree[n++].Freq;
    s->data_type = (Byte)(bin_freq > (ascii_freq >> 2) ? Z_BINARY : Z_ASCII);
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
            s[_i0].data_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__dyn_ltree0 = 1;
          s[_i0].dyn_ltree = (struct TYPE_4__ *) malloc(_len_s__i0__dyn_ltree0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__dyn_ltree0; _j0++) {
            s[_i0].dyn_ltree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_data_type(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dyn_ltree);
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
            s[_i0].data_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__dyn_ltree0 = 1;
          s[_i0].dyn_ltree = (struct TYPE_4__ *) malloc(_len_s__i0__dyn_ltree0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__dyn_ltree0; _j0++) {
            s[_i0].dyn_ltree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_data_type(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dyn_ltree);
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
            s[_i0].data_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__dyn_ltree0 = 1;
          s[_i0].dyn_ltree = (struct TYPE_4__ *) malloc(_len_s__i0__dyn_ltree0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__dyn_ltree0; _j0++) {
            s[_i0].dyn_ltree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_data_type(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dyn_ltree);
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
