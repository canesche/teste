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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ll ;
struct TYPE_3__ {int spam; int ham; } ;
struct TYPE_4__ {scalar_t__ h; TYPE_1__ val; } ;
typedef  TYPE_2__ entry_t ;

/* Variables and functions */
 int SPAM ; 

int bayes_local_get_count (char *b, ll word, int type) {
  int n = ((int *)b)[0];
  entry_t *a = (entry_t *)(b + sizeof (int));

  if (n == 0) {
    return 0;
  }

  int l = 0, r = n;
  while (l + 1 < r) {
    int m = l + ((r - l) >> 1);
    if (a[m].h > word) {
      r = m;
    } else {
      l = m;
    }
  }

  if (a[l].h != word)
    return 0;

  if (type == SPAM) {
    return a[l].val.spam;
  } else {
    return a[l].val.ham;
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
          long word = 100;
          int type = 100;
          int _len_b0 = 1;
          char * b = (char *) malloc(_len_b0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bayes_local_get_count(b,word,type);
          printf("%d\n", benchRet); 
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          long word = 255;
          int type = 255;
          int _len_b0 = 65025;
          char * b = (char *) malloc(_len_b0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bayes_local_get_count(b,word,type);
          printf("%d\n", benchRet); 
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long word = 10;
          int type = 10;
          int _len_b0 = 100;
          char * b = (char *) malloc(_len_b0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bayes_local_get_count(b,word,type);
          printf("%d\n", benchRet); 
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
