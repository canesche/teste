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
typedef  int uint32_t ;
typedef  int uint16_t ;
struct ether_header {int ether_type; int /*<<< orphan*/ * ether_dhost; } ;

/* Variables and functions */

__attribute__((used)) static uint32_t
ether_header_hash(struct ether_header * eh_p)
{
    uint32_t	h;

    /* get 32-bits from destination ether and ether type */
    h = (*((uint16_t *)&eh_p->ether_dhost[4]) << 16)
	| eh_p->ether_type;
    h ^= *((uint32_t *)&eh_p->ether_dhost[0]);
    return (h);
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
          int _len_eh_p0 = 1;
          struct ether_header * eh_p = (struct ether_header *) malloc(_len_eh_p0*sizeof(struct ether_header));
          for(int _i0 = 0; _i0 < _len_eh_p0; _i0++) {
            eh_p[_i0].ether_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eh_p__i0__ether_dhost0 = 1;
          eh_p[_i0].ether_dhost = (int *) malloc(_len_eh_p__i0__ether_dhost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_eh_p__i0__ether_dhost0; _j0++) {
            eh_p[_i0].ether_dhost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ether_header_hash(eh_p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_eh_p0; _aux++) {
          free(eh_p[_aux].ether_dhost);
          }
          free(eh_p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_eh_p0 = 65025;
          struct ether_header * eh_p = (struct ether_header *) malloc(_len_eh_p0*sizeof(struct ether_header));
          for(int _i0 = 0; _i0 < _len_eh_p0; _i0++) {
            eh_p[_i0].ether_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eh_p__i0__ether_dhost0 = 1;
          eh_p[_i0].ether_dhost = (int *) malloc(_len_eh_p__i0__ether_dhost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_eh_p__i0__ether_dhost0; _j0++) {
            eh_p[_i0].ether_dhost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ether_header_hash(eh_p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_eh_p0; _aux++) {
          free(eh_p[_aux].ether_dhost);
          }
          free(eh_p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_eh_p0 = 100;
          struct ether_header * eh_p = (struct ether_header *) malloc(_len_eh_p0*sizeof(struct ether_header));
          for(int _i0 = 0; _i0 < _len_eh_p0; _i0++) {
            eh_p[_i0].ether_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eh_p__i0__ether_dhost0 = 1;
          eh_p[_i0].ether_dhost = (int *) malloc(_len_eh_p__i0__ether_dhost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_eh_p__i0__ether_dhost0; _j0++) {
            eh_p[_i0].ether_dhost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ether_header_hash(eh_p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_eh_p0; _aux++) {
          free(eh_p[_aux].ether_dhost);
          }
          free(eh_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
