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
struct seq_tab {size_t rows; void* data; size_t width; scalar_t__ skip_first; } ;
typedef  size_t loff_t ;

/* Variables and functions */

__attribute__((used)) static void *seq_tab_get_idx(struct seq_tab *tb, loff_t pos)
{
	pos -= tb->skip_first;
	return pos >= tb->rows ? NULL : &tb->data[pos * tb->width];
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
          unsigned long pos = 100;
          int _len_tb0 = 1;
          struct seq_tab * tb = (struct seq_tab *) malloc(_len_tb0*sizeof(struct seq_tab));
          for(int _i0 = 0; _i0 < _len_tb0; _i0++) {
            tb[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        tb[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        tb[_i0].skip_first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = seq_tab_get_idx(tb,pos);
          free(tb);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long pos = 255;
          int _len_tb0 = 65025;
          struct seq_tab * tb = (struct seq_tab *) malloc(_len_tb0*sizeof(struct seq_tab));
          for(int _i0 = 0; _i0 < _len_tb0; _i0++) {
            tb[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        tb[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        tb[_i0].skip_first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = seq_tab_get_idx(tb,pos);
          free(tb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long pos = 10;
          int _len_tb0 = 100;
          struct seq_tab * tb = (struct seq_tab *) malloc(_len_tb0*sizeof(struct seq_tab));
          for(int _i0 = 0; _i0 < _len_tb0; _i0++) {
            tb[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        tb[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        tb[_i0].skip_first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = seq_tab_get_idx(tb,pos);
          free(tb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
