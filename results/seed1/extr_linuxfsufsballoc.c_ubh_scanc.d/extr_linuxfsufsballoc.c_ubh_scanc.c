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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ufs_sb_private_info {unsigned int s_fmask; unsigned int s_fshift; unsigned int s_fsize; } ;
struct ufs_buffer_head {TYPE_1__** bh; } ;
struct TYPE_2__ {unsigned char* b_data; } ;

/* Variables and functions */

__attribute__((used)) static unsigned ubh_scanc(struct ufs_sb_private_info *uspi,
			  struct ufs_buffer_head *ubh,
			  unsigned begin, unsigned size,
			  unsigned char *table, unsigned char mask)
{
	unsigned rest, offset;
	unsigned char *cp;
	

	offset = begin & ~uspi->s_fmask;
	begin >>= uspi->s_fshift;
	for (;;) {
		if ((offset + size) < uspi->s_fsize)
			rest = size;
		else
			rest = uspi->s_fsize - offset;
		size -= rest;
		cp = ubh->bh[begin]->b_data + offset;
		while ((table[*cp++] & mask) == 0 && --rest)
			;
		if (rest || !size)
			break;
		begin++;
		offset = 0;
	}
	return (size + rest);
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
          unsigned int begin = 100;
          unsigned int size = 100;
          unsigned char mask = 100;
          int _len_uspi0 = 1;
          struct ufs_sb_private_info * uspi = (struct ufs_sb_private_info *) malloc(_len_uspi0*sizeof(struct ufs_sb_private_info));
          for(int _i0 = 0; _i0 < _len_uspi0; _i0++) {
            uspi[_i0].s_fmask = ((-2 * (next_i()%2)) + 1) * next_i();
        uspi[_i0].s_fshift = ((-2 * (next_i()%2)) + 1) * next_i();
        uspi[_i0].s_fsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ubh0 = 1;
          struct ufs_buffer_head * ubh = (struct ufs_buffer_head *) malloc(_len_ubh0*sizeof(struct ufs_buffer_head));
          for(int _i0 = 0; _i0 < _len_ubh0; _i0++) {
              int _len_ubh__i0__bh0 = 1;
          ubh[_i0].bh = (struct TYPE_2__ **) malloc(_len_ubh__i0__bh0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_ubh__i0__bh0; _j0++) {
            int _len_ubh__i0__bh1 = 1;
            ubh[_i0].bh[_j0] = (struct TYPE_2__ *) malloc(_len_ubh__i0__bh1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_ubh__i0__bh1; _j1++) {
                int _len_ubh__i0__bh__j0__b_data0 = 1;
          ubh[_i0].bh[_j0]->b_data = (unsigned char *) malloc(_len_ubh__i0__bh__j0__b_data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ubh__i0__bh__j0__b_data0; _j0++) {
            ubh[_i0].bh[_j0]->b_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_table0 = 1;
          unsigned char * table = (unsigned char *) malloc(_len_table0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ubh_scanc(uspi,ubh,begin,size,table,mask);
          printf("%u\n", benchRet); 
          free(uspi);
          for(int _aux = 0; _aux < _len_ubh0; _aux++) {
          free(*(ubh[_aux].bh));
        free(ubh[_aux].bh);
          }
          free(ubh);
          free(table);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int begin = 255;
          unsigned int size = 255;
          unsigned char mask = 255;
          int _len_uspi0 = 65025;
          struct ufs_sb_private_info * uspi = (struct ufs_sb_private_info *) malloc(_len_uspi0*sizeof(struct ufs_sb_private_info));
          for(int _i0 = 0; _i0 < _len_uspi0; _i0++) {
            uspi[_i0].s_fmask = ((-2 * (next_i()%2)) + 1) * next_i();
        uspi[_i0].s_fshift = ((-2 * (next_i()%2)) + 1) * next_i();
        uspi[_i0].s_fsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ubh0 = 65025;
          struct ufs_buffer_head * ubh = (struct ufs_buffer_head *) malloc(_len_ubh0*sizeof(struct ufs_buffer_head));
          for(int _i0 = 0; _i0 < _len_ubh0; _i0++) {
              int _len_ubh__i0__bh0 = 1;
          ubh[_i0].bh = (struct TYPE_2__ **) malloc(_len_ubh__i0__bh0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_ubh__i0__bh0; _j0++) {
            int _len_ubh__i0__bh1 = 1;
            ubh[_i0].bh[_j0] = (struct TYPE_2__ *) malloc(_len_ubh__i0__bh1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_ubh__i0__bh1; _j1++) {
                int _len_ubh__i0__bh__j0__b_data0 = 1;
          ubh[_i0].bh[_j0]->b_data = (unsigned char *) malloc(_len_ubh__i0__bh__j0__b_data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ubh__i0__bh__j0__b_data0; _j0++) {
            ubh[_i0].bh[_j0]->b_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_table0 = 65025;
          unsigned char * table = (unsigned char *) malloc(_len_table0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ubh_scanc(uspi,ubh,begin,size,table,mask);
          printf("%u\n", benchRet); 
          free(uspi);
          for(int _aux = 0; _aux < _len_ubh0; _aux++) {
          free(*(ubh[_aux].bh));
        free(ubh[_aux].bh);
          }
          free(ubh);
          free(table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int begin = 10;
          unsigned int size = 10;
          unsigned char mask = 10;
          int _len_uspi0 = 100;
          struct ufs_sb_private_info * uspi = (struct ufs_sb_private_info *) malloc(_len_uspi0*sizeof(struct ufs_sb_private_info));
          for(int _i0 = 0; _i0 < _len_uspi0; _i0++) {
            uspi[_i0].s_fmask = ((-2 * (next_i()%2)) + 1) * next_i();
        uspi[_i0].s_fshift = ((-2 * (next_i()%2)) + 1) * next_i();
        uspi[_i0].s_fsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ubh0 = 100;
          struct ufs_buffer_head * ubh = (struct ufs_buffer_head *) malloc(_len_ubh0*sizeof(struct ufs_buffer_head));
          for(int _i0 = 0; _i0 < _len_ubh0; _i0++) {
              int _len_ubh__i0__bh0 = 1;
          ubh[_i0].bh = (struct TYPE_2__ **) malloc(_len_ubh__i0__bh0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_ubh__i0__bh0; _j0++) {
            int _len_ubh__i0__bh1 = 1;
            ubh[_i0].bh[_j0] = (struct TYPE_2__ *) malloc(_len_ubh__i0__bh1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_ubh__i0__bh1; _j1++) {
                int _len_ubh__i0__bh__j0__b_data0 = 1;
          ubh[_i0].bh[_j0]->b_data = (unsigned char *) malloc(_len_ubh__i0__bh__j0__b_data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ubh__i0__bh__j0__b_data0; _j0++) {
            ubh[_i0].bh[_j0]->b_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_table0 = 100;
          unsigned char * table = (unsigned char *) malloc(_len_table0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ubh_scanc(uspi,ubh,begin,size,table,mask);
          printf("%u\n", benchRet); 
          free(uspi);
          for(int _aux = 0; _aux < _len_ubh0; _aux++) {
          free(*(ubh[_aux].bh));
        free(ubh[_aux].bh);
          }
          free(ubh);
          free(table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
