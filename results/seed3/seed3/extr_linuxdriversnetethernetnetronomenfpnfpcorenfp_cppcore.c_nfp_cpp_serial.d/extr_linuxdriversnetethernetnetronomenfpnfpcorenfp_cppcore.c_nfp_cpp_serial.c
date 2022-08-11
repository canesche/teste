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
typedef  int /*<<< orphan*/  u8 ;
struct nfp_cpp {int /*<<< orphan*/ * serial; } ;

/* Variables and functions */

int nfp_cpp_serial(struct nfp_cpp *cpp, const u8 **serial)
{
	*serial = &cpp->serial[0];
	return sizeof(cpp->serial);
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
          int _len_cpp0 = 1;
          struct nfp_cpp * cpp = (struct nfp_cpp *) malloc(_len_cpp0*sizeof(struct nfp_cpp));
          for(int _i0 = 0; _i0 < _len_cpp0; _i0++) {
              int _len_cpp__i0__serial0 = 1;
          cpp[_i0].serial = (int *) malloc(_len_cpp__i0__serial0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpp__i0__serial0; _j0++) {
            cpp[_i0].serial[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_serial0 = 1;
          const int ** serial = (const int **) malloc(_len_serial0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
            int _len_serial1 = 1;
            serial[_i0] = (const int *) malloc(_len_serial1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_serial1; _i1++) {
              serial[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = nfp_cpp_serial(cpp,serial);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cpp0; _aux++) {
          free(cpp[_aux].serial);
          }
          free(cpp);
          for(int i1 = 0; i1 < _len_serial0; i1++) {
            int _len_serial1 = 1;
              free(serial[i1]);
          }
          free(serial);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cpp0 = 65025;
          struct nfp_cpp * cpp = (struct nfp_cpp *) malloc(_len_cpp0*sizeof(struct nfp_cpp));
          for(int _i0 = 0; _i0 < _len_cpp0; _i0++) {
              int _len_cpp__i0__serial0 = 1;
          cpp[_i0].serial = (int *) malloc(_len_cpp__i0__serial0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpp__i0__serial0; _j0++) {
            cpp[_i0].serial[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_serial0 = 65025;
          const int ** serial = (const int **) malloc(_len_serial0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
            int _len_serial1 = 1;
            serial[_i0] = (const int *) malloc(_len_serial1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_serial1; _i1++) {
              serial[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = nfp_cpp_serial(cpp,serial);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cpp0; _aux++) {
          free(cpp[_aux].serial);
          }
          free(cpp);
          for(int i1 = 0; i1 < _len_serial0; i1++) {
            int _len_serial1 = 1;
              free(serial[i1]);
          }
          free(serial);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cpp0 = 100;
          struct nfp_cpp * cpp = (struct nfp_cpp *) malloc(_len_cpp0*sizeof(struct nfp_cpp));
          for(int _i0 = 0; _i0 < _len_cpp0; _i0++) {
              int _len_cpp__i0__serial0 = 1;
          cpp[_i0].serial = (int *) malloc(_len_cpp__i0__serial0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpp__i0__serial0; _j0++) {
            cpp[_i0].serial[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_serial0 = 100;
          const int ** serial = (const int **) malloc(_len_serial0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
            int _len_serial1 = 1;
            serial[_i0] = (const int *) malloc(_len_serial1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_serial1; _i1++) {
              serial[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = nfp_cpp_serial(cpp,serial);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cpp0; _aux++) {
          free(cpp[_aux].serial);
          }
          free(cpp);
          for(int i1 = 0; i1 < _len_serial0; i1++) {
            int _len_serial1 = 1;
              free(serial[i1]);
          }
          free(serial);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
