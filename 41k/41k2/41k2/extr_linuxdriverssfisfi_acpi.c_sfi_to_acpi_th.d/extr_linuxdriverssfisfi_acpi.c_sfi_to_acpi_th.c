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
struct sfi_table_header {int dummy; } ;
struct acpi_table_header {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct acpi_table_header *sfi_to_acpi_th(
				struct sfi_table_header *th)
{
	return (struct acpi_table_header *)th;
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
          int _len_th0 = 1;
          struct sfi_table_header * th = (struct sfi_table_header *) malloc(_len_th0*sizeof(struct sfi_table_header));
          for(int _i0 = 0; _i0 < _len_th0; _i0++) {
            th[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct acpi_table_header * benchRet = sfi_to_acpi_th(th);
          printf("%d\n", (*benchRet).dummy);
          free(th);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_th0 = 65025;
          struct sfi_table_header * th = (struct sfi_table_header *) malloc(_len_th0*sizeof(struct sfi_table_header));
          for(int _i0 = 0; _i0 < _len_th0; _i0++) {
            th[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct acpi_table_header * benchRet = sfi_to_acpi_th(th);
          printf("%d\n", (*benchRet).dummy);
          free(th);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_th0 = 100;
          struct sfi_table_header * th = (struct sfi_table_header *) malloc(_len_th0*sizeof(struct sfi_table_header));
          for(int _i0 = 0; _i0 < _len_th0; _i0++) {
            th[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct acpi_table_header * benchRet = sfi_to_acpi_th(th);
          printf("%d\n", (*benchRet).dummy);
          free(th);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
