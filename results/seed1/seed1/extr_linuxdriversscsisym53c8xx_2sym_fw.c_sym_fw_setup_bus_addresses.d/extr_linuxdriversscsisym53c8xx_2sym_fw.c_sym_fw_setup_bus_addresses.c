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
typedef  scalar_t__ u_short ;
typedef  scalar_t__ u32 ;
struct sym_hcb {scalar_t__ scriptz_ba; int /*<<< orphan*/  fwz_bas; scalar_t__ scriptb_ba; int /*<<< orphan*/  fwb_bas; scalar_t__ scripta_ba; int /*<<< orphan*/  fwa_bas; } ;
struct sym_fw {scalar_t__ z_ofs; scalar_t__ b_ofs; scalar_t__ a_ofs; } ;

/* Variables and functions */

__attribute__((used)) static void 
sym_fw_setup_bus_addresses(struct sym_hcb *np, struct sym_fw *fw)
{
	u32 *pa;
	u_short *po;
	int i;

	/*
	 *  Build the bus address table for script A 
	 *  from the script A offset table.
	 */
	po = (u_short *) fw->a_ofs;
	pa = (u32 *) &np->fwa_bas;
	for (i = 0 ; i < sizeof(np->fwa_bas)/sizeof(u32) ; i++)
		pa[i] = np->scripta_ba + po[i];

	/*
	 *  Same for script B.
	 */
	po = (u_short *) fw->b_ofs;
	pa = (u32 *) &np->fwb_bas;
	for (i = 0 ; i < sizeof(np->fwb_bas)/sizeof(u32) ; i++)
		pa[i] = np->scriptb_ba + po[i];

	/*
	 *  Same for script Z.
	 */
	po = (u_short *) fw->z_ofs;
	pa = (u32 *) &np->fwz_bas;
	for (i = 0 ; i < sizeof(np->fwz_bas)/sizeof(u32) ; i++)
		pa[i] = np->scriptz_ba + po[i];
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
          int _len_np0 = 1;
          struct sym_hcb * np = (struct sym_hcb *) malloc(_len_np0*sizeof(struct sym_hcb));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].scriptz_ba = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].fwz_bas = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].scriptb_ba = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].fwb_bas = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].scripta_ba = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].fwa_bas = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw0 = 1;
          struct sym_fw * fw = (struct sym_fw *) malloc(_len_fw0*sizeof(struct sym_fw));
          for(int _i0 = 0; _i0 < _len_fw0; _i0++) {
            fw[_i0].z_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        fw[_i0].b_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        fw[_i0].a_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sym_fw_setup_bus_addresses(np,fw);
          free(np);
          free(fw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_np0 = 65025;
          struct sym_hcb * np = (struct sym_hcb *) malloc(_len_np0*sizeof(struct sym_hcb));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].scriptz_ba = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].fwz_bas = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].scriptb_ba = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].fwb_bas = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].scripta_ba = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].fwa_bas = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw0 = 65025;
          struct sym_fw * fw = (struct sym_fw *) malloc(_len_fw0*sizeof(struct sym_fw));
          for(int _i0 = 0; _i0 < _len_fw0; _i0++) {
            fw[_i0].z_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        fw[_i0].b_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        fw[_i0].a_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sym_fw_setup_bus_addresses(np,fw);
          free(np);
          free(fw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_np0 = 100;
          struct sym_hcb * np = (struct sym_hcb *) malloc(_len_np0*sizeof(struct sym_hcb));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].scriptz_ba = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].fwz_bas = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].scriptb_ba = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].fwb_bas = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].scripta_ba = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].fwa_bas = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw0 = 100;
          struct sym_fw * fw = (struct sym_fw *) malloc(_len_fw0*sizeof(struct sym_fw));
          for(int _i0 = 0; _i0 < _len_fw0; _i0++) {
            fw[_i0].z_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        fw[_i0].b_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        fw[_i0].a_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sym_fw_setup_bus_addresses(np,fw);
          free(np);
          free(fw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
