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
struct stub_entry {int dummy; } ;
struct TYPE_4__ {TYPE_1__* section; } ;
struct module {TYPE_2__ arch; } ;
struct TYPE_3__ {int stub_entries; } ;

/* Variables and functions */

unsigned int arch_mod_section_prepend(struct module *mod,
				      unsigned int section)
{
	/* size needed for all stubs of this section (including
	 * one additional for correct alignment of the stubs) */
	return (mod->arch.section[section].stub_entries + 1)
		* sizeof(struct stub_entry);
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
          unsigned int section = 100;
          int _len_mod0 = 1;
          struct module * mod = (struct module *) malloc(_len_mod0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_mod0; _i0++) {
              int _len_mod__i0__arch_section0 = 1;
          mod[_i0].arch.section = (struct TYPE_3__ *) malloc(_len_mod__i0__arch_section0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mod__i0__arch_section0; _j0++) {
            mod[_i0].arch.section->stub_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = arch_mod_section_prepend(mod,section);
          printf("%u\n", benchRet); 
          free(mod);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int section = 255;
          int _len_mod0 = 65025;
          struct module * mod = (struct module *) malloc(_len_mod0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_mod0; _i0++) {
              int _len_mod__i0__arch_section0 = 1;
          mod[_i0].arch.section = (struct TYPE_3__ *) malloc(_len_mod__i0__arch_section0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mod__i0__arch_section0; _j0++) {
            mod[_i0].arch.section->stub_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = arch_mod_section_prepend(mod,section);
          printf("%u\n", benchRet); 
          free(mod);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int section = 10;
          int _len_mod0 = 100;
          struct module * mod = (struct module *) malloc(_len_mod0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_mod0; _i0++) {
              int _len_mod__i0__arch_section0 = 1;
          mod[_i0].arch.section = (struct TYPE_3__ *) malloc(_len_mod__i0__arch_section0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mod__i0__arch_section0; _j0++) {
            mod[_i0].arch.section->stub_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = arch_mod_section_prepend(mod,section);
          printf("%u\n", benchRet); 
          free(mod);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
