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
typedef  int u64 ;
struct acpi_generic_address {scalar_t__ space_id; int address; } ;
struct acpi_whea_header {scalar_t__ action; scalar_t__ instruction; struct acpi_generic_address register_region; } ;
struct acpi_einj_trigger {int entry_count; } ;

/* Variables and functions */
 scalar_t__ ACPI_ADR_SPACE_SYSTEM_MEMORY ; 
 scalar_t__ ACPI_EINJ_TRIGGER_ERROR ; 
 scalar_t__ ACPI_EINJ_WRITE_REGISTER_VALUE ; 

__attribute__((used)) static struct acpi_generic_address *einj_get_trigger_parameter_region(
	struct acpi_einj_trigger *trigger_tab, u64 param1, u64 param2)
{
	int i;
	struct acpi_whea_header *entry;

	entry = (struct acpi_whea_header *)
		((char *)trigger_tab + sizeof(struct acpi_einj_trigger));
	for (i = 0; i < trigger_tab->entry_count; i++) {
		if (entry->action == ACPI_EINJ_TRIGGER_ERROR &&
		entry->instruction <= ACPI_EINJ_WRITE_REGISTER_VALUE &&
		entry->register_region.space_id ==
			ACPI_ADR_SPACE_SYSTEM_MEMORY &&
		(entry->register_region.address & param2) == (param1 & param2))
			return &entry->register_region;
		entry++;
	}

	return NULL;
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
          int param1 = 100;
          int param2 = 100;
          int _len_trigger_tab0 = 1;
          struct acpi_einj_trigger * trigger_tab = (struct acpi_einj_trigger *) malloc(_len_trigger_tab0*sizeof(struct acpi_einj_trigger));
          for(int _i0 = 0; _i0 < _len_trigger_tab0; _i0++) {
            trigger_tab[_i0].entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct acpi_generic_address * benchRet = einj_get_trigger_parameter_region(trigger_tab,param1,param2);
          printf("%ld\n", (*benchRet).space_id);
          printf("%d\n", (*benchRet).address);
          free(trigger_tab);
        
        break;
    }
    // big-arr
    case 1:
    {
          int param1 = 255;
          int param2 = 255;
          int _len_trigger_tab0 = 65025;
          struct acpi_einj_trigger * trigger_tab = (struct acpi_einj_trigger *) malloc(_len_trigger_tab0*sizeof(struct acpi_einj_trigger));
          for(int _i0 = 0; _i0 < _len_trigger_tab0; _i0++) {
            trigger_tab[_i0].entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct acpi_generic_address * benchRet = einj_get_trigger_parameter_region(trigger_tab,param1,param2);
          printf("%ld\n", (*benchRet).space_id);
          printf("%d\n", (*benchRet).address);
          free(trigger_tab);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int param1 = 10;
          int param2 = 10;
          int _len_trigger_tab0 = 100;
          struct acpi_einj_trigger * trigger_tab = (struct acpi_einj_trigger *) malloc(_len_trigger_tab0*sizeof(struct acpi_einj_trigger));
          for(int _i0 = 0; _i0 < _len_trigger_tab0; _i0++) {
            trigger_tab[_i0].entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct acpi_generic_address * benchRet = einj_get_trigger_parameter_region(trigger_tab,param1,param2);
          printf("%ld\n", (*benchRet).space_id);
          printf("%d\n", (*benchRet).address);
          free(trigger_tab);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
