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
typedef  int u32 ;
struct setup_data {int len; unsigned long next; int /*<<< orphan*/  type; } ;
struct TYPE_2__ {unsigned long setup_data; } ;
struct boot_params {TYPE_1__ hdr; } ;
struct boot_e820_entry {int dummy; } ;
typedef  int /*<<< orphan*/  efi_status_t ;

/* Variables and functions */
 int /*<<< orphan*/  SETUP_E820_EXT ; 

__attribute__((used)) static void add_e820ext(struct boot_params *params,
			struct setup_data *e820ext, u32 nr_entries)
{
	struct setup_data *data;
	efi_status_t status;
	unsigned long size;

	e820ext->type = SETUP_E820_EXT;
	e820ext->len  = nr_entries * sizeof(struct boot_e820_entry);
	e820ext->next = 0;

	data = (struct setup_data *)(unsigned long)params->hdr.setup_data;

	while (data && data->next)
		data = (struct setup_data *)(unsigned long)data->next;

	if (data)
		data->next = (unsigned long)e820ext;
	else
		params->hdr.setup_data = (unsigned long)e820ext;
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
          int nr_entries = 100;
          int _len_params0 = 1;
          struct boot_params * params = (struct boot_params *) malloc(_len_params0*sizeof(struct boot_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].hdr.setup_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e820ext0 = 1;
          struct setup_data * e820ext = (struct setup_data *) malloc(_len_e820ext0*sizeof(struct setup_data));
          for(int _i0 = 0; _i0 < _len_e820ext0; _i0++) {
            e820ext[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        e820ext[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
        e820ext[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_e820ext(params,e820ext,nr_entries);
          free(params);
          free(e820ext);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nr_entries = 255;
          int _len_params0 = 65025;
          struct boot_params * params = (struct boot_params *) malloc(_len_params0*sizeof(struct boot_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].hdr.setup_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e820ext0 = 65025;
          struct setup_data * e820ext = (struct setup_data *) malloc(_len_e820ext0*sizeof(struct setup_data));
          for(int _i0 = 0; _i0 < _len_e820ext0; _i0++) {
            e820ext[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        e820ext[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
        e820ext[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_e820ext(params,e820ext,nr_entries);
          free(params);
          free(e820ext);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nr_entries = 10;
          int _len_params0 = 100;
          struct boot_params * params = (struct boot_params *) malloc(_len_params0*sizeof(struct boot_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].hdr.setup_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e820ext0 = 100;
          struct setup_data * e820ext = (struct setup_data *) malloc(_len_e820ext0*sizeof(struct setup_data));
          for(int _i0 = 0; _i0 < _len_e820ext0; _i0++) {
            e820ext[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        e820ext[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
        e820ext[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_e820ext(params,e820ext,nr_entries);
          free(params);
          free(e820ext);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
