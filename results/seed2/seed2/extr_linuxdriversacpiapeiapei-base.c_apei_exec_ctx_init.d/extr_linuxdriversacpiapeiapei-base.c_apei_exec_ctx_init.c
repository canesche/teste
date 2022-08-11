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
typedef  void* u32 ;
struct apei_exec_ins_type {int dummy; } ;
struct apei_exec_context {void* entries; struct acpi_whea_header* action_table; void* instructions; struct apei_exec_ins_type* ins_table; } ;
struct acpi_whea_header {int dummy; } ;

/* Variables and functions */

void apei_exec_ctx_init(struct apei_exec_context *ctx,
			struct apei_exec_ins_type *ins_table,
			u32 instructions,
			struct acpi_whea_header *action_table,
			u32 entries)
{
	ctx->ins_table = ins_table;
	ctx->instructions = instructions;
	ctx->action_table = action_table;
	ctx->entries = entries;
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
          int _len_ctx0 = 1;
          struct apei_exec_context * ctx = (struct apei_exec_context *) malloc(_len_ctx0*sizeof(struct apei_exec_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__action_table0 = 1;
          ctx[_i0].action_table = (struct acpi_whea_header *) malloc(_len_ctx__i0__action_table0*sizeof(struct acpi_whea_header));
          for(int _j0 = 0; _j0 < _len_ctx__i0__action_table0; _j0++) {
            ctx[_i0].action_table->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ins_table0 = 1;
          ctx[_i0].ins_table = (struct apei_exec_ins_type *) malloc(_len_ctx__i0__ins_table0*sizeof(struct apei_exec_ins_type));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ins_table0; _j0++) {
            ctx[_i0].ins_table->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ins_table0 = 1;
          struct apei_exec_ins_type * ins_table = (struct apei_exec_ins_type *) malloc(_len_ins_table0*sizeof(struct apei_exec_ins_type));
          for(int _i0 = 0; _i0 < _len_ins_table0; _i0++) {
            ins_table[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * instructions;
          int _len_action_table0 = 1;
          struct acpi_whea_header * action_table = (struct acpi_whea_header *) malloc(_len_action_table0*sizeof(struct acpi_whea_header));
          for(int _i0 = 0; _i0 < _len_action_table0; _i0++) {
            action_table[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * entries;
          apei_exec_ctx_init(ctx,ins_table,instructions,action_table,entries);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].action_table);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ins_table);
          }
          free(ctx);
          free(ins_table);
          free(action_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct apei_exec_context * ctx = (struct apei_exec_context *) malloc(_len_ctx0*sizeof(struct apei_exec_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__action_table0 = 1;
          ctx[_i0].action_table = (struct acpi_whea_header *) malloc(_len_ctx__i0__action_table0*sizeof(struct acpi_whea_header));
          for(int _j0 = 0; _j0 < _len_ctx__i0__action_table0; _j0++) {
            ctx[_i0].action_table->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ins_table0 = 1;
          ctx[_i0].ins_table = (struct apei_exec_ins_type *) malloc(_len_ctx__i0__ins_table0*sizeof(struct apei_exec_ins_type));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ins_table0; _j0++) {
            ctx[_i0].ins_table->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ins_table0 = 65025;
          struct apei_exec_ins_type * ins_table = (struct apei_exec_ins_type *) malloc(_len_ins_table0*sizeof(struct apei_exec_ins_type));
          for(int _i0 = 0; _i0 < _len_ins_table0; _i0++) {
            ins_table[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * instructions;
          int _len_action_table0 = 65025;
          struct acpi_whea_header * action_table = (struct acpi_whea_header *) malloc(_len_action_table0*sizeof(struct acpi_whea_header));
          for(int _i0 = 0; _i0 < _len_action_table0; _i0++) {
            action_table[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * entries;
          apei_exec_ctx_init(ctx,ins_table,instructions,action_table,entries);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].action_table);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ins_table);
          }
          free(ctx);
          free(ins_table);
          free(action_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct apei_exec_context * ctx = (struct apei_exec_context *) malloc(_len_ctx0*sizeof(struct apei_exec_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__action_table0 = 1;
          ctx[_i0].action_table = (struct acpi_whea_header *) malloc(_len_ctx__i0__action_table0*sizeof(struct acpi_whea_header));
          for(int _j0 = 0; _j0 < _len_ctx__i0__action_table0; _j0++) {
            ctx[_i0].action_table->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__ins_table0 = 1;
          ctx[_i0].ins_table = (struct apei_exec_ins_type *) malloc(_len_ctx__i0__ins_table0*sizeof(struct apei_exec_ins_type));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ins_table0; _j0++) {
            ctx[_i0].ins_table->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ins_table0 = 100;
          struct apei_exec_ins_type * ins_table = (struct apei_exec_ins_type *) malloc(_len_ins_table0*sizeof(struct apei_exec_ins_type));
          for(int _i0 = 0; _i0 < _len_ins_table0; _i0++) {
            ins_table[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * instructions;
          int _len_action_table0 = 100;
          struct acpi_whea_header * action_table = (struct acpi_whea_header *) malloc(_len_action_table0*sizeof(struct acpi_whea_header));
          for(int _i0 = 0; _i0 < _len_action_table0; _i0++) {
            action_table[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * entries;
          apei_exec_ctx_init(ctx,ins_table,instructions,action_table,entries);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].action_table);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ins_table);
          }
          free(ctx);
          free(ins_table);
          free(action_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
