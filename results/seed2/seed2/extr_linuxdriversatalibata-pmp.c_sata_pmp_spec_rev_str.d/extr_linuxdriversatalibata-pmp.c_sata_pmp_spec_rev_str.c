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
typedef  int u32 ;

/* Variables and functions */
 size_t SATA_PMP_GSCR_REV ; 

__attribute__((used)) static const char *sata_pmp_spec_rev_str(const u32 *gscr)
{
	u32 rev = gscr[SATA_PMP_GSCR_REV];

	if (rev & (1 << 3))
		return "1.2";
	if (rev & (1 << 2))
		return "1.1";
	if (rev & (1 << 1))
		return "1.0";
	return "<unknown>";
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
          int _len_gscr0 = 1;
          const int * gscr = (const int *) malloc(_len_gscr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_gscr0; _i0++) {
            gscr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = sata_pmp_spec_rev_str(gscr);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(gscr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gscr0 = 65025;
          const int * gscr = (const int *) malloc(_len_gscr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_gscr0; _i0++) {
            gscr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = sata_pmp_spec_rev_str(gscr);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(gscr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gscr0 = 100;
          const int * gscr = (const int *) malloc(_len_gscr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_gscr0; _i0++) {
            gscr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = sata_pmp_spec_rev_str(gscr);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(gscr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
