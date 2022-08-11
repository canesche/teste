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
struct collection {int num; long long* A; } ;

/* Variables and functions */
 int MAX_C_NUM ; 

__attribute__((used)) static void cAdd (struct collection *C, int item, int owner) {
  long long x = (unsigned) item + (((long long) owner) << 32);
  int i;
  for (i = 0; i < C->num; i++) {
    if (C->A[i] == x) {
      return;
    }
  }
  if (C->num < MAX_C_NUM) {
    C->A[C->num++] = x;
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
          int item = 100;
          int owner = 100;
          int _len_C0 = 1;
          struct collection * C = (struct collection *) malloc(_len_C0*sizeof(struct collection));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_C__i0__A0 = 1;
          C[_i0].A = (long long *) malloc(_len_C__i0__A0*sizeof(long long));
          for(int _j0 = 0; _j0 < _len_C__i0__A0; _j0++) {
            C[_i0].A[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cAdd(C,item,owner);
          for(int _aux = 0; _aux < _len_C0; _aux++) {
          free(C[_aux].A);
          }
          free(C);
        
        break;
    }
    // big-arr
    case 1:
    {
          int item = 255;
          int owner = 255;
          int _len_C0 = 65025;
          struct collection * C = (struct collection *) malloc(_len_C0*sizeof(struct collection));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_C__i0__A0 = 1;
          C[_i0].A = (long long *) malloc(_len_C__i0__A0*sizeof(long long));
          for(int _j0 = 0; _j0 < _len_C__i0__A0; _j0++) {
            C[_i0].A[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cAdd(C,item,owner);
          for(int _aux = 0; _aux < _len_C0; _aux++) {
          free(C[_aux].A);
          }
          free(C);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int item = 10;
          int owner = 10;
          int _len_C0 = 100;
          struct collection * C = (struct collection *) malloc(_len_C0*sizeof(struct collection));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_C__i0__A0 = 1;
          C[_i0].A = (long long *) malloc(_len_C__i0__A0*sizeof(long long));
          for(int _j0 = 0; _j0 < _len_C__i0__A0; _j0++) {
            C[_i0].A[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cAdd(C,item,owner);
          for(int _aux = 0; _aux < _len_C0; _aux++) {
          free(C[_aux].A);
          }
          free(C);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
