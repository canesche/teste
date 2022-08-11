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
struct acpi_lpat_conversion_table {int lpat_count; struct acpi_lpat* lpat; } ;
struct acpi_lpat {int raw; int temp; } ;

/* Variables and functions */
 int ENOENT ; 

int acpi_lpat_raw_to_temp(struct acpi_lpat_conversion_table *lpat_table,
			  int raw)
{
	int i, delta_temp, delta_raw, temp;
	struct acpi_lpat *lpat = lpat_table->lpat;

	for (i = 0; i < lpat_table->lpat_count - 1; i++) {
		if ((raw >= lpat[i].raw && raw <= lpat[i+1].raw) ||
		    (raw <= lpat[i].raw && raw >= lpat[i+1].raw))
			break;
	}

	if (i == lpat_table->lpat_count - 1)
		return -ENOENT;

	delta_temp = lpat[i+1].temp - lpat[i].temp;
	delta_raw = lpat[i+1].raw - lpat[i].raw;
	temp = lpat[i].temp + (raw - lpat[i].raw) * delta_temp / delta_raw;

	return temp;
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
          int raw = 100;
          int _len_lpat_table0 = 1;
          struct acpi_lpat_conversion_table * lpat_table = (struct acpi_lpat_conversion_table *) malloc(_len_lpat_table0*sizeof(struct acpi_lpat_conversion_table));
          for(int _i0 = 0; _i0 < _len_lpat_table0; _i0++) {
            lpat_table[_i0].lpat_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lpat_table__i0__lpat0 = 1;
          lpat_table[_i0].lpat = (struct acpi_lpat *) malloc(_len_lpat_table__i0__lpat0*sizeof(struct acpi_lpat));
          for(int _j0 = 0; _j0 < _len_lpat_table__i0__lpat0; _j0++) {
            lpat_table[_i0].lpat->raw = ((-2 * (next_i()%2)) + 1) * next_i();
        lpat_table[_i0].lpat->temp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = acpi_lpat_raw_to_temp(lpat_table,raw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lpat_table0; _aux++) {
          free(lpat_table[_aux].lpat);
          }
          free(lpat_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int raw = 255;
          int _len_lpat_table0 = 65025;
          struct acpi_lpat_conversion_table * lpat_table = (struct acpi_lpat_conversion_table *) malloc(_len_lpat_table0*sizeof(struct acpi_lpat_conversion_table));
          for(int _i0 = 0; _i0 < _len_lpat_table0; _i0++) {
            lpat_table[_i0].lpat_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lpat_table__i0__lpat0 = 1;
          lpat_table[_i0].lpat = (struct acpi_lpat *) malloc(_len_lpat_table__i0__lpat0*sizeof(struct acpi_lpat));
          for(int _j0 = 0; _j0 < _len_lpat_table__i0__lpat0; _j0++) {
            lpat_table[_i0].lpat->raw = ((-2 * (next_i()%2)) + 1) * next_i();
        lpat_table[_i0].lpat->temp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = acpi_lpat_raw_to_temp(lpat_table,raw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lpat_table0; _aux++) {
          free(lpat_table[_aux].lpat);
          }
          free(lpat_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int raw = 10;
          int _len_lpat_table0 = 100;
          struct acpi_lpat_conversion_table * lpat_table = (struct acpi_lpat_conversion_table *) malloc(_len_lpat_table0*sizeof(struct acpi_lpat_conversion_table));
          for(int _i0 = 0; _i0 < _len_lpat_table0; _i0++) {
            lpat_table[_i0].lpat_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lpat_table__i0__lpat0 = 1;
          lpat_table[_i0].lpat = (struct acpi_lpat *) malloc(_len_lpat_table__i0__lpat0*sizeof(struct acpi_lpat));
          for(int _j0 = 0; _j0 < _len_lpat_table__i0__lpat0; _j0++) {
            lpat_table[_i0].lpat->raw = ((-2 * (next_i()%2)) + 1) * next_i();
        lpat_table[_i0].lpat->temp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = acpi_lpat_raw_to_temp(lpat_table,raw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lpat_table0; _aux++) {
          free(lpat_table[_aux].lpat);
          }
          free(lpat_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
