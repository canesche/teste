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
 int MAX_GID ; 

char *lookup_name (char *D, int DL, int id, int *len, int max_len) {
  *len = 0;
  if (!D || DL < MAX_GID * 4 || id <= 0 || id >= MAX_GID) {
    return 0;
  }
  int x = ((int *) D)[id];
  if (x < MAX_GID * 4 || x + 4 > DL) {
    return 0;
  }
  int l = *((int *) (D + x));
  if ((unsigned) l > (unsigned) max_len || x + l + 5 > DL) {
    return 0;
  }
  *len = l;
  return D + x + 4;
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
          int DL = 100;
          int id = 100;
          int max_len = 100;
          int _len_D0 = 1;
          char * D = (char *) malloc(_len_D0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_D0; _i0++) {
            D[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = lookup_name(D,DL,id,len,max_len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(D);
          free(len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int DL = 255;
          int id = 255;
          int max_len = 255;
          int _len_D0 = 65025;
          char * D = (char *) malloc(_len_D0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_D0; _i0++) {
            D[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 65025;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = lookup_name(D,DL,id,len,max_len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(D);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int DL = 10;
          int id = 10;
          int max_len = 10;
          int _len_D0 = 100;
          char * D = (char *) malloc(_len_D0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_D0; _i0++) {
            D[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 100;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = lookup_name(D,DL,id,len,max_len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(D);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
