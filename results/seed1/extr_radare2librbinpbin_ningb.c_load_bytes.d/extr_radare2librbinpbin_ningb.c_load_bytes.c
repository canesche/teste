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
typedef  int /*<<< orphan*/  ut8 ;
typedef  int /*<<< orphan*/  ut64 ;
typedef  int /*<<< orphan*/  Sdb ;
typedef  int /*<<< orphan*/  RBinFile ;

/* Variables and functions */

__attribute__((used)) static bool load_bytes(RBinFile *bf, void **bin_obj, const ut8 *buf, ut64 sz, ut64 loadaddr, Sdb *sdb){
	return true;
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
          int sz = 100;
          int loadaddr = 100;
          int _len_bf0 = 1;
          int * bf = (int *) malloc(_len_bf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bf0; _i0++) {
            bf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bin_obj0 = 1;
          void ** bin_obj = (void **) malloc(_len_bin_obj0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_bin_obj0; _i0++) {
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sdb0 = 1;
          int * sdb = (int *) malloc(_len_sdb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sdb0; _i0++) {
            sdb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = load_bytes(bf,bin_obj,buf,sz,loadaddr,sdb);
          printf("%d\n", benchRet); 
          free(bf);
          for(int i1 = 0; i1 < _len_bin_obj0; i1++) {
            int _len_bin_obj1 = 1;
              }
          free(bin_obj);
          free(buf);
          free(sdb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sz = 255;
          int loadaddr = 255;
          int _len_bf0 = 65025;
          int * bf = (int *) malloc(_len_bf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bf0; _i0++) {
            bf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bin_obj0 = 65025;
          void ** bin_obj = (void **) malloc(_len_bin_obj0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_bin_obj0; _i0++) {
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sdb0 = 65025;
          int * sdb = (int *) malloc(_len_sdb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sdb0; _i0++) {
            sdb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = load_bytes(bf,bin_obj,buf,sz,loadaddr,sdb);
          printf("%d\n", benchRet); 
          free(bf);
          for(int i1 = 0; i1 < _len_bin_obj0; i1++) {
            int _len_bin_obj1 = 1;
              }
          free(bin_obj);
          free(buf);
          free(sdb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sz = 10;
          int loadaddr = 10;
          int _len_bf0 = 100;
          int * bf = (int *) malloc(_len_bf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bf0; _i0++) {
            bf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bin_obj0 = 100;
          void ** bin_obj = (void **) malloc(_len_bin_obj0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_bin_obj0; _i0++) {
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sdb0 = 100;
          int * sdb = (int *) malloc(_len_sdb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sdb0; _i0++) {
            sdb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = load_bytes(bf,bin_obj,buf,sz,loadaddr,sdb);
          printf("%d\n", benchRet); 
          free(bf);
          for(int i1 = 0; i1 < _len_bin_obj0; i1++) {
            int _len_bin_obj1 = 1;
              }
          free(bin_obj);
          free(buf);
          free(sdb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
