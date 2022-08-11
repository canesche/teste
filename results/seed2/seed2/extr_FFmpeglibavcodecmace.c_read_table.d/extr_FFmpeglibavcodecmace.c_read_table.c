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
typedef  int uint8_t ;
typedef  scalar_t__ int16_t ;
struct TYPE_5__ {int stride; int* tab1; scalar_t__* tab2; } ;
struct TYPE_4__ {int index; } ;
typedef  TYPE_1__ ChannelData ;

/* Variables and functions */
 TYPE_2__* tabs ; 

__attribute__((used)) static int16_t read_table(ChannelData *chd, uint8_t val, int tab_idx)
{
    int16_t current;

    if (val < tabs[tab_idx].stride)
        current = tabs[tab_idx].tab2[((chd->index & 0x7f0) >> 4) * tabs[tab_idx].stride + val];
    else
        current = - 1 - tabs[tab_idx].tab2[((chd->index & 0x7f0) >> 4)*tabs[tab_idx].stride + 2*tabs[tab_idx].stride-val-1];

    if (( chd->index += tabs[tab_idx].tab1[val]-(chd->index >> 5) ) < 0)
      chd->index = 0;

    return current;
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
          int val = 100;
          int tab_idx = 100;
          int _len_chd0 = 1;
          struct TYPE_4__ * chd = (struct TYPE_4__ *) malloc(_len_chd0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_chd0; _i0++) {
            chd[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = read_table(chd,val,tab_idx);
          printf("%ld\n", benchRet); 
          free(chd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int val = 255;
          int tab_idx = 255;
          int _len_chd0 = 65025;
          struct TYPE_4__ * chd = (struct TYPE_4__ *) malloc(_len_chd0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_chd0; _i0++) {
            chd[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = read_table(chd,val,tab_idx);
          printf("%ld\n", benchRet); 
          free(chd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int val = 10;
          int tab_idx = 10;
          int _len_chd0 = 100;
          struct TYPE_4__ * chd = (struct TYPE_4__ *) malloc(_len_chd0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_chd0; _i0++) {
            chd[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = read_table(chd,val,tab_idx);
          printf("%ld\n", benchRet); 
          free(chd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
