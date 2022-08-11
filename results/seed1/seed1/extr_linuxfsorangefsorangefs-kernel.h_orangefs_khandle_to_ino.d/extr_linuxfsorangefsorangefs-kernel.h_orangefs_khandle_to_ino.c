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
struct orangefs_khandle {int* u; } ;
typedef  int /*<<< orphan*/  ino_t ;
typedef  int /*<<< orphan*/  __u64 ;

/* Variables and functions */

__attribute__((used)) static inline ino_t orangefs_khandle_to_ino(struct orangefs_khandle *khandle)
{
	union {
		unsigned char u[8];
		__u64 ino;
	} ihandle;

	ihandle.u[0] = khandle->u[0] ^ khandle->u[4];
	ihandle.u[1] = khandle->u[1] ^ khandle->u[5];
	ihandle.u[2] = khandle->u[2] ^ khandle->u[6];
	ihandle.u[3] = khandle->u[3] ^ khandle->u[7];
	ihandle.u[4] = khandle->u[12] ^ khandle->u[8];
	ihandle.u[5] = khandle->u[13] ^ khandle->u[9];
	ihandle.u[6] = khandle->u[14] ^ khandle->u[10];
	ihandle.u[7] = khandle->u[15] ^ khandle->u[11];

	return ihandle.ino;
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
          int _len_khandle0 = 1;
          struct orangefs_khandle * khandle = (struct orangefs_khandle *) malloc(_len_khandle0*sizeof(struct orangefs_khandle));
          for(int _i0 = 0; _i0 < _len_khandle0; _i0++) {
              int _len_khandle__i0__u0 = 1;
          khandle[_i0].u = (int *) malloc(_len_khandle__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_khandle__i0__u0; _j0++) {
            khandle[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = orangefs_khandle_to_ino(khandle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_khandle0; _aux++) {
          free(khandle[_aux].u);
          }
          free(khandle);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_khandle0 = 65025;
          struct orangefs_khandle * khandle = (struct orangefs_khandle *) malloc(_len_khandle0*sizeof(struct orangefs_khandle));
          for(int _i0 = 0; _i0 < _len_khandle0; _i0++) {
              int _len_khandle__i0__u0 = 1;
          khandle[_i0].u = (int *) malloc(_len_khandle__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_khandle__i0__u0; _j0++) {
            khandle[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = orangefs_khandle_to_ino(khandle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_khandle0; _aux++) {
          free(khandle[_aux].u);
          }
          free(khandle);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_khandle0 = 100;
          struct orangefs_khandle * khandle = (struct orangefs_khandle *) malloc(_len_khandle0*sizeof(struct orangefs_khandle));
          for(int _i0 = 0; _i0 < _len_khandle0; _i0++) {
              int _len_khandle__i0__u0 = 1;
          khandle[_i0].u = (int *) malloc(_len_khandle__i0__u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_khandle__i0__u0; _j0++) {
            khandle[_i0].u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = orangefs_khandle_to_ino(khandle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_khandle0; _aux++) {
          free(khandle[_aux].u);
          }
          free(khandle);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
