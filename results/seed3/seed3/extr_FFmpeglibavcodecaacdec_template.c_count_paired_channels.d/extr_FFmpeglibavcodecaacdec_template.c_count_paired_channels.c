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

/* Variables and functions */
 int AAC_CHANNEL_FRONT ; 
 int AAC_CHANNEL_SIDE ; 
 int TYPE_CPE ; 

__attribute__((used)) static int count_paired_channels(uint8_t (*layout_map)[3], int tags, int pos,
                                 int *current)
{
    int num_pos_channels = 0;
    int first_cpe        = 0;
    int sce_parity       = 0;
    int i;
    for (i = *current; i < tags; i++) {
        if (layout_map[i][2] != pos)
            break;
        if (layout_map[i][0] == TYPE_CPE) {
            if (sce_parity) {
                if (pos == AAC_CHANNEL_FRONT && !first_cpe) {
                    sce_parity = 0;
                } else {
                    return -1;
                }
            }
            num_pos_channels += 2;
            first_cpe         = 1;
        } else {
            num_pos_channels++;
            sce_parity ^= 1;
        }
    }
    if (sce_parity &&
        ((pos == AAC_CHANNEL_FRONT && first_cpe) || pos == AAC_CHANNEL_SIDE))
        return -1;
    *current = i;
    return num_pos_channels;
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
          int tags = 100;
          int pos = 100;
          int _len_layout_map0 = 3;
          int (*)* layout_map = (int (*)*) malloc(_len_layout_map0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_layout_map0; _i0++) {
            int _len_layout_map1 = 1;
            layout_map[_i0] = (int ()*) malloc(_len_layout_map1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_layout_map1; _i1++) {
              layout_map[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_current0 = 1;
          int * current = (int *) malloc(_len_current0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_current0; _i0++) {
            current[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = count_paired_channels(layout_map,tags,pos,current);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_layout_map0; i1++) {
            int _len_layout_map1 = 1;
              free(layout_map[i1]);
          }
          free(layout_map);
          free(current);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tags = 255;
          int pos = 255;
          int _len_layout_map0 = 65025;
          int (*)* layout_map = (int (*)*) malloc(_len_layout_map0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_layout_map0; _i0++) {
            int _len_layout_map1 = 1;
            layout_map[_i0] = (int ()*) malloc(_len_layout_map1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_layout_map1; _i1++) {
              layout_map[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_current0 = 65025;
          int * current = (int *) malloc(_len_current0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_current0; _i0++) {
            current[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = count_paired_channels(layout_map,tags,pos,current);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_layout_map0; i1++) {
            int _len_layout_map1 = 1;
              free(layout_map[i1]);
          }
          free(layout_map);
          free(current);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tags = 10;
          int pos = 10;
          int _len_layout_map0 = 100;
          int (*)* layout_map = (int (*)*) malloc(_len_layout_map0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_layout_map0; _i0++) {
            int _len_layout_map1 = 1;
            layout_map[_i0] = (int ()*) malloc(_len_layout_map1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_layout_map1; _i1++) {
              layout_map[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_current0 = 100;
          int * current = (int *) malloc(_len_current0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_current0; _i0++) {
            current[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = count_paired_channels(layout_map,tags,pos,current);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_layout_map0; i1++) {
            int _len_layout_map1 = 1;
              free(layout_map[i1]);
          }
          free(layout_map);
          free(current);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
