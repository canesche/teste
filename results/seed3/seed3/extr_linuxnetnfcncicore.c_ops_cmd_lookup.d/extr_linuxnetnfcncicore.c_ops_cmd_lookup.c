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
struct nci_driver_ops {scalar_t__ opcode; } ;
typedef  scalar_t__ __u16 ;

/* Variables and functions */

__attribute__((used)) static struct nci_driver_ops *ops_cmd_lookup(struct nci_driver_ops *ops,
					     size_t n_ops,
					     __u16 opcode)
{
	size_t i;
	struct nci_driver_ops *op;

	if (!ops || !n_ops)
		return NULL;

	for (i = 0; i < n_ops; i++) {
		op = &ops[i];
		if (op->opcode == opcode)
			return op;
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
          unsigned long n_ops = 100;
          long opcode = 100;
          int _len_ops0 = 1;
          struct nci_driver_ops * ops = (struct nci_driver_ops *) malloc(_len_ops0*sizeof(struct nci_driver_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nci_driver_ops * benchRet = ops_cmd_lookup(ops,n_ops,opcode);
          printf("%ld\n", (*benchRet).opcode);
          free(ops);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n_ops = 255;
          long opcode = 255;
          int _len_ops0 = 65025;
          struct nci_driver_ops * ops = (struct nci_driver_ops *) malloc(_len_ops0*sizeof(struct nci_driver_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nci_driver_ops * benchRet = ops_cmd_lookup(ops,n_ops,opcode);
          printf("%ld\n", (*benchRet).opcode);
          free(ops);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n_ops = 10;
          long opcode = 10;
          int _len_ops0 = 100;
          struct nci_driver_ops * ops = (struct nci_driver_ops *) malloc(_len_ops0*sizeof(struct nci_driver_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nci_driver_ops * benchRet = ops_cmd_lookup(ops,n_ops,opcode);
          printf("%ld\n", (*benchRet).opcode);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
