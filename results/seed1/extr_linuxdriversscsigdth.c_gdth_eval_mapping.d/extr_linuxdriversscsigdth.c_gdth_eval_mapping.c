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
typedef  int u32 ;

/* Variables and functions */
 int BIGHEADS ; 
 int BIGSECS ; 
 int HEADS ; 
 int MAXCYLS ; 
 int MEDHEADS ; 
 int MEDSECS ; 
 int SECS ; 

__attribute__((used)) static void gdth_eval_mapping(u32 size, u32 *cyls, int *heads, int *secs)
{
    *cyls = size /HEADS/SECS;
    if (*cyls <= MAXCYLS) {
        *heads = HEADS;
        *secs = SECS;
    } else {                                        /* too high for 64*32 */
        *cyls = size /MEDHEADS/MEDSECS;
        if (*cyls <= MAXCYLS) {
            *heads = MEDHEADS;
            *secs = MEDSECS;
        } else {                                    /* too high for 127*63 */
            *cyls = size /BIGHEADS/BIGSECS;
            *heads = BIGHEADS;
            *secs = BIGSECS;
        }
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
          int size = 100;
          int _len_cyls0 = 1;
          int * cyls = (int *) malloc(_len_cyls0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cyls0; _i0++) {
            cyls[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_heads0 = 1;
          int * heads = (int *) malloc(_len_heads0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_heads0; _i0++) {
            heads[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_secs0 = 1;
          int * secs = (int *) malloc(_len_secs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gdth_eval_mapping(size,cyls,heads,secs);
          free(cyls);
          free(heads);
          free(secs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int _len_cyls0 = 65025;
          int * cyls = (int *) malloc(_len_cyls0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cyls0; _i0++) {
            cyls[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_heads0 = 65025;
          int * heads = (int *) malloc(_len_heads0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_heads0; _i0++) {
            heads[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_secs0 = 65025;
          int * secs = (int *) malloc(_len_secs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gdth_eval_mapping(size,cyls,heads,secs);
          free(cyls);
          free(heads);
          free(secs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int _len_cyls0 = 100;
          int * cyls = (int *) malloc(_len_cyls0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cyls0; _i0++) {
            cyls[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_heads0 = 100;
          int * heads = (int *) malloc(_len_heads0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_heads0; _i0++) {
            heads[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_secs0 = 100;
          int * secs = (int *) malloc(_len_secs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gdth_eval_mapping(size,cyls,heads,secs);
          free(cyls);
          free(heads);
          free(secs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
