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

inline int check (long long *v, int vn, long long *u, int un) {
  int i, j;

  for (i = 0, j = 0; i < vn; i++) {
    while (j + 1 < un && u[j] < v[i]) {
      j++;
    }
    if (u[j] != v[i]) {
      return 0;
    }
  }
  return 1;
  /*
  for (i = 0; i < vn; i++) {
    int l = -1, r = un, c;
    while (l + 1 < r) {
      c = (l + r) / 2;
      if (u[c] <= v[i]) {
        l = i;
      } else {
        r = i;
      }
    }
    if (l == -1) {
      return 0;
    }
  }
  return 1;
  */
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
          int vn = 100;
          int un = 100;
          int _len_v0 = 1;
          long long * v = (long long *) malloc(_len_v0*sizeof(long long));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 1;
          long long * u = (long long *) malloc(_len_u0*sizeof(long long));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check(v,vn,u,un);
          printf("%d\n", benchRet); 
          free(v);
          free(u);
        
        break;
    }
    // big-arr
    case 1:
    {
          int vn = 255;
          int un = 255;
          int _len_v0 = 65025;
          long long * v = (long long *) malloc(_len_v0*sizeof(long long));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 65025;
          long long * u = (long long *) malloc(_len_u0*sizeof(long long));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check(v,vn,u,un);
          printf("%d\n", benchRet); 
          free(v);
          free(u);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vn = 10;
          int un = 10;
          int _len_v0 = 100;
          long long * v = (long long *) malloc(_len_v0*sizeof(long long));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 100;
          long long * u = (long long *) malloc(_len_u0*sizeof(long long));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check(v,vn,u,un);
          printf("%d\n", benchRet); 
          free(v);
          free(u);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
