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

/* Variables and functions */

int *intersect_lists (int *A, int *Ae, int *B, int *Be, int *D, int *De) {
  int x, *C = B;

  while (A < Ae) {
    x = *A++;
    if (x > 0) {
      while (B < Be && (unsigned) *B > (unsigned) x) B++;
      if (B == Be) continue;
      if (*B == x) {
	if (D < De) *D++ = x;
      }
    } else {
      while (C < Be && (unsigned) *C < (unsigned) x) C++;
      if (C == Be) continue;
      if (*C == x) {
	if (D < De) *D++ = x;
      }
    }
  }

  return D;
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
          int _len_A0 = 1;
          int * A = (int *) malloc(_len_A0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Ae0 = 1;
          int * Ae = (int *) malloc(_len_Ae0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Ae0; _i0++) {
            Ae[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_B0 = 1;
          int * B = (int *) malloc(_len_B0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Be0 = 1;
          int * Be = (int *) malloc(_len_Be0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Be0; _i0++) {
            Be[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_D0 = 1;
          int * D = (int *) malloc(_len_D0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_D0; _i0++) {
            D[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_De0 = 1;
          int * De = (int *) malloc(_len_De0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_De0; _i0++) {
            De[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = intersect_lists(A,Ae,B,Be,D,De);
          printf("%d\n", (*benchRet)); 
          free(A);
          free(Ae);
          free(B);
          free(Be);
          free(D);
          free(De);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_A0 = 65025;
          int * A = (int *) malloc(_len_A0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Ae0 = 65025;
          int * Ae = (int *) malloc(_len_Ae0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Ae0; _i0++) {
            Ae[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_B0 = 65025;
          int * B = (int *) malloc(_len_B0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Be0 = 65025;
          int * Be = (int *) malloc(_len_Be0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Be0; _i0++) {
            Be[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_D0 = 65025;
          int * D = (int *) malloc(_len_D0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_D0; _i0++) {
            D[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_De0 = 65025;
          int * De = (int *) malloc(_len_De0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_De0; _i0++) {
            De[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = intersect_lists(A,Ae,B,Be,D,De);
          printf("%d\n", (*benchRet)); 
          free(A);
          free(Ae);
          free(B);
          free(Be);
          free(D);
          free(De);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_A0 = 100;
          int * A = (int *) malloc(_len_A0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Ae0 = 100;
          int * Ae = (int *) malloc(_len_Ae0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Ae0; _i0++) {
            Ae[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_B0 = 100;
          int * B = (int *) malloc(_len_B0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Be0 = 100;
          int * Be = (int *) malloc(_len_Be0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Be0; _i0++) {
            Be[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_D0 = 100;
          int * D = (int *) malloc(_len_D0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_D0; _i0++) {
            D[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_De0 = 100;
          int * De = (int *) malloc(_len_De0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_De0; _i0++) {
            De[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = intersect_lists(A,Ae,B,Be,D,De);
          printf("%d\n", (*benchRet)); 
          free(A);
          free(Ae);
          free(B);
          free(Be);
          free(D);
          free(De);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
