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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* s6_words; } ;
typedef  TYPE_1__ IN6_ADDR ;

/* Variables and functions */

__attribute__((used)) static void init_ip6(IN6_ADDR* addr, const int src[8])
{
    unsigned int j;
    if (!src || src[0] == -1)
    {
        for (j = 0; j < 8; ++j)
            addr->s6_words[j] = 0xabab;
    }
    else
    {
        for (j = 0; j < 8; ++j)
            addr->s6_words[j] = src[j];
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
          int _len_addr0 = 1;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              int _len_addr__i0__s6_words0 = 1;
          addr[_i0].s6_words = (int *) malloc(_len_addr__i0__s6_words0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_addr__i0__s6_words0; _j0++) {
            addr[_i0].s6_words[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 8;
          int const* src = (int const*) malloc(_len_src0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_ip6(addr,src);
          for(int _aux = 0; _aux < _len_addr0; _aux++) {
          free(addr[_aux].s6_words);
          }
          free(addr);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_addr0 = 65025;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              int _len_addr__i0__s6_words0 = 1;
          addr[_i0].s6_words = (int *) malloc(_len_addr__i0__s6_words0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_addr__i0__s6_words0; _j0++) {
            addr[_i0].s6_words[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 65025;
          int const* src = (int const*) malloc(_len_src0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_ip6(addr,src);
          for(int _aux = 0; _aux < _len_addr0; _aux++) {
          free(addr[_aux].s6_words);
          }
          free(addr);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_addr0 = 100;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              int _len_addr__i0__s6_words0 = 1;
          addr[_i0].s6_words = (int *) malloc(_len_addr__i0__s6_words0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_addr__i0__s6_words0; _j0++) {
            addr[_i0].s6_words[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 100;
          int const* src = (int const*) malloc(_len_src0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_ip6(addr,src);
          for(int _aux = 0; _aux < _len_addr0; _aux++) {
          free(addr[_aux].s6_words);
          }
          free(addr);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
