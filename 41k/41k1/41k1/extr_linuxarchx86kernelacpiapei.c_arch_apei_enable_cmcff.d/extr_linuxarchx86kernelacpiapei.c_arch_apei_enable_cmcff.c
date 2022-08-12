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
struct acpi_hest_header {int dummy; } ;

/* Variables and functions */

int arch_apei_enable_cmcff(struct acpi_hest_header *hest_hdr, void *data)
{
#ifdef CONFIG_X86_MCE
	int i;
	struct acpi_hest_ia_corrected *cmc;
	struct acpi_hest_ia_error_bank *mc_bank;

	cmc = (struct acpi_hest_ia_corrected *)hest_hdr;
	if (!cmc->enabled)
		return 0;

	/*
	 * We expect HEST to provide a list of MC banks that report errors
	 * in firmware first mode. Otherwise, return non-zero value to
	 * indicate that we are done parsing HEST.
	 */
	if (!(cmc->flags & ACPI_HEST_FIRMWARE_FIRST) ||
	    !cmc->num_hardware_banks)
		return 1;

	pr_info("HEST: Enabling Firmware First mode for corrected errors.\n");

	mc_bank = (struct acpi_hest_ia_error_bank *)(cmc + 1);
	for (i = 0; i < cmc->num_hardware_banks; i++, mc_bank++)
		mce_disable_bank(mc_bank->bank_number);
#endif
	return 1;
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
          int _len_hest_hdr0 = 1;
          struct acpi_hest_header * hest_hdr = (struct acpi_hest_header *) malloc(_len_hest_hdr0*sizeof(struct acpi_hest_header));
          for(int _i0 = 0; _i0 < _len_hest_hdr0; _i0++) {
            hest_hdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = arch_apei_enable_cmcff(hest_hdr,data);
          printf("%d\n", benchRet); 
          free(hest_hdr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hest_hdr0 = 65025;
          struct acpi_hest_header * hest_hdr = (struct acpi_hest_header *) malloc(_len_hest_hdr0*sizeof(struct acpi_hest_header));
          for(int _i0 = 0; _i0 < _len_hest_hdr0; _i0++) {
            hest_hdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = arch_apei_enable_cmcff(hest_hdr,data);
          printf("%d\n", benchRet); 
          free(hest_hdr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hest_hdr0 = 100;
          struct acpi_hest_header * hest_hdr = (struct acpi_hest_header *) malloc(_len_hest_hdr0*sizeof(struct acpi_hest_header));
          for(int _i0 = 0; _i0 < _len_hest_hdr0; _i0++) {
            hest_hdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = arch_apei_enable_cmcff(hest_hdr,data);
          printf("%d\n", benchRet); 
          free(hest_hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
