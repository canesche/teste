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
struct nfs4_slot {int privileged; } ;
struct nfs4_sequence_res {struct nfs4_slot* sr_slot; } ;
struct nfs4_sequence_args {struct nfs4_slot* sa_slot; scalar_t__ sa_privileged; } ;

/* Variables and functions */

__attribute__((used)) static
void nfs4_sequence_attach_slot(struct nfs4_sequence_args *args,
		struct nfs4_sequence_res *res,
		struct nfs4_slot *slot)
{
	if (!slot)
		return;
	slot->privileged = args->sa_privileged ? 1 : 0;
	args->sa_slot = slot;

	res->sr_slot = slot;
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
          int _len_args0 = 1;
          struct nfs4_sequence_args * args = (struct nfs4_sequence_args *) malloc(_len_args0*sizeof(struct nfs4_sequence_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              int _len_args__i0__sa_slot0 = 1;
          args[_i0].sa_slot = (struct nfs4_slot *) malloc(_len_args__i0__sa_slot0*sizeof(struct nfs4_slot));
          for(int _j0 = 0; _j0 < _len_args__i0__sa_slot0; _j0++) {
            args[_i0].sa_slot->privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        args[_i0].sa_privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 1;
          struct nfs4_sequence_res * res = (struct nfs4_sequence_res *) malloc(_len_res0*sizeof(struct nfs4_sequence_res));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              int _len_res__i0__sr_slot0 = 1;
          res[_i0].sr_slot = (struct nfs4_slot *) malloc(_len_res__i0__sr_slot0*sizeof(struct nfs4_slot));
          for(int _j0 = 0; _j0 < _len_res__i0__sr_slot0; _j0++) {
            res[_i0].sr_slot->privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_slot0 = 1;
          struct nfs4_slot * slot = (struct nfs4_slot *) malloc(_len_slot0*sizeof(struct nfs4_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
            slot[_i0].privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs4_sequence_attach_slot(args,res,slot);
          for(int _aux = 0; _aux < _len_args0; _aux++) {
          free(args[_aux].sa_slot);
          }
          free(args);
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].sr_slot);
          }
          free(res);
          free(slot);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_args0 = 65025;
          struct nfs4_sequence_args * args = (struct nfs4_sequence_args *) malloc(_len_args0*sizeof(struct nfs4_sequence_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              int _len_args__i0__sa_slot0 = 1;
          args[_i0].sa_slot = (struct nfs4_slot *) malloc(_len_args__i0__sa_slot0*sizeof(struct nfs4_slot));
          for(int _j0 = 0; _j0 < _len_args__i0__sa_slot0; _j0++) {
            args[_i0].sa_slot->privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        args[_i0].sa_privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 65025;
          struct nfs4_sequence_res * res = (struct nfs4_sequence_res *) malloc(_len_res0*sizeof(struct nfs4_sequence_res));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              int _len_res__i0__sr_slot0 = 1;
          res[_i0].sr_slot = (struct nfs4_slot *) malloc(_len_res__i0__sr_slot0*sizeof(struct nfs4_slot));
          for(int _j0 = 0; _j0 < _len_res__i0__sr_slot0; _j0++) {
            res[_i0].sr_slot->privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_slot0 = 65025;
          struct nfs4_slot * slot = (struct nfs4_slot *) malloc(_len_slot0*sizeof(struct nfs4_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
            slot[_i0].privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs4_sequence_attach_slot(args,res,slot);
          for(int _aux = 0; _aux < _len_args0; _aux++) {
          free(args[_aux].sa_slot);
          }
          free(args);
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].sr_slot);
          }
          free(res);
          free(slot);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_args0 = 100;
          struct nfs4_sequence_args * args = (struct nfs4_sequence_args *) malloc(_len_args0*sizeof(struct nfs4_sequence_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              int _len_args__i0__sa_slot0 = 1;
          args[_i0].sa_slot = (struct nfs4_slot *) malloc(_len_args__i0__sa_slot0*sizeof(struct nfs4_slot));
          for(int _j0 = 0; _j0 < _len_args__i0__sa_slot0; _j0++) {
            args[_i0].sa_slot->privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        args[_i0].sa_privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 100;
          struct nfs4_sequence_res * res = (struct nfs4_sequence_res *) malloc(_len_res0*sizeof(struct nfs4_sequence_res));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              int _len_res__i0__sr_slot0 = 1;
          res[_i0].sr_slot = (struct nfs4_slot *) malloc(_len_res__i0__sr_slot0*sizeof(struct nfs4_slot));
          for(int _j0 = 0; _j0 < _len_res__i0__sr_slot0; _j0++) {
            res[_i0].sr_slot->privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_slot0 = 100;
          struct nfs4_slot * slot = (struct nfs4_slot *) malloc(_len_slot0*sizeof(struct nfs4_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
            slot[_i0].privileged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs4_sequence_attach_slot(args,res,slot);
          for(int _aux = 0; _aux < _len_args0; _aux++) {
          free(args[_aux].sa_slot);
          }
          free(args);
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].sr_slot);
          }
          free(res);
          free(slot);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
