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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__* e_ident; } ;
typedef  TYPE_1__ Elf64_Ehdr ;

/* Variables and functions */
 size_t EI_CLASS ; 
 scalar_t__ ELFCLASS64 ; 
 scalar_t__ PROG_START ; 
 scalar_t__ claim_base ; 

__attribute__((used)) static void of_image_hdr(const void *hdr)
{
	const Elf64_Ehdr *elf64 = hdr;

	if (elf64->e_ident[EI_CLASS] == ELFCLASS64) {
		/*
		 * Maintain a "magic" minimum address. This keeps some older
		 * firmware platforms running.
		 */
		if (claim_base < PROG_START)
			claim_base = PROG_START;
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
          int _len_hdr0 = 1;
          const void * hdr = (const void *) malloc(_len_hdr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = 0;
          }
          of_image_hdr(hdr);
          free(hdr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdr0 = 65025;
          const void * hdr = (const void *) malloc(_len_hdr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = 0;
          }
          of_image_hdr(hdr);
          free(hdr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdr0 = 100;
          const void * hdr = (const void *) malloc(_len_hdr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = 0;
          }
          of_image_hdr(hdr);
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
