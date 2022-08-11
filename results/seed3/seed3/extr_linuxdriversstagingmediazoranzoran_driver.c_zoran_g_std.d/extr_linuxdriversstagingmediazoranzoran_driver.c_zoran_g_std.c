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
typedef  int /*<<< orphan*/  v4l2_std_id ;
struct zoran_fh {struct zoran* zr; } ;
struct zoran {int /*<<< orphan*/  norm; } ;
struct file {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int zoran_g_std(struct file *file, void *__fh, v4l2_std_id *std)
{
	struct zoran_fh *fh = __fh;
	struct zoran *zr = fh->zr;

	*std = zr->norm;
	return 0;
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
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * __fh;
          int _len_std0 = 1;
          int * std = (int *) malloc(_len_std0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_std0; _i0++) {
            std[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zoran_g_std(file,__fh,std);
          printf("%d\n", benchRet); 
          free(file);
          free(std);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * __fh;
          int _len_std0 = 65025;
          int * std = (int *) malloc(_len_std0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_std0; _i0++) {
            std[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zoran_g_std(file,__fh,std);
          printf("%d\n", benchRet); 
          free(file);
          free(std);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * __fh;
          int _len_std0 = 100;
          int * std = (int *) malloc(_len_std0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_std0; _i0++) {
            std[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zoran_g_std(file,__fh,std);
          printf("%d\n", benchRet); 
          free(file);
          free(std);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
