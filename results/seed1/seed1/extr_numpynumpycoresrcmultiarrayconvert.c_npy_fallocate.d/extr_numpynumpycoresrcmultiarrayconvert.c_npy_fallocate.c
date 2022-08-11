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
typedef  int /*<<< orphan*/  npy_intp ;
typedef  int /*<<< orphan*/  FILE ;

/* Variables and functions */

__attribute__((used)) static int
npy_fallocate(npy_intp nbytes, FILE * fp)
{
    /*
     * unknown behavior on non-linux so don't try it
     * we don't want explicit zeroing to happen
     */
#if defined(HAVE_FALLOCATE) && defined(__linux__)
    int r;
    /* small files not worth the system call */
    if (nbytes < 16 * 1024 * 1024) {
        return 0;
    }

    /* btrfs can take a while to allocate making release worthwhile */
    NPY_BEGIN_ALLOW_THREADS;
    /*
     * flush in case there might be some unexpected interactions between the
     * fallocate call and unwritten data in the descriptor
     */
    fflush(fp);
    /*
     * the flag "1" (=FALLOC_FL_KEEP_SIZE) is needed for the case of files
     * opened in append mode (issue #8329)
     */
    r = fallocate(fileno(fp), 1, npy_ftell(fp), nbytes);
    NPY_END_ALLOW_THREADS;

    /*
     * early exit on no space, other errors will also get found during fwrite
     */
    if (r == -1 && errno == ENOSPC) {
        PyErr_Format(PyExc_IOError, "Not enough free space to write "
                     "%"NPY_INTP_FMT" bytes", nbytes);
        return -1;
    }
#endif
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
          int nbytes = 100;
          int _len_fp0 = 1;
          int * fp = (int *) malloc(_len_fp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = npy_fallocate(nbytes,fp);
          printf("%d\n", benchRet); 
          free(fp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nbytes = 255;
          int _len_fp0 = 65025;
          int * fp = (int *) malloc(_len_fp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = npy_fallocate(nbytes,fp);
          printf("%d\n", benchRet); 
          free(fp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nbytes = 10;
          int _len_fp0 = 100;
          int * fp = (int *) malloc(_len_fp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = npy_fallocate(nbytes,fp);
          printf("%d\n", benchRet); 
          free(fp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
