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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ flags; int /*<<< orphan*/ * cmd_defns; int /*<<< orphan*/ * load_pubkey; int /*<<< orphan*/ * load_privkey; int /*<<< orphan*/ * ctrl; int /*<<< orphan*/ * finish; int /*<<< orphan*/ * init; int /*<<< orphan*/ * destroy; int /*<<< orphan*/ * digests; int /*<<< orphan*/ * ciphers; int /*<<< orphan*/ * rand_meth; int /*<<< orphan*/ * dh_meth; int /*<<< orphan*/ * dsa_meth; int /*<<< orphan*/ * rsa_meth; int /*<<< orphan*/ * name; int /*<<< orphan*/ * id; } ;
typedef  TYPE_1__ ENGINE ;

/* Variables and functions */

void engine_set_all_null(ENGINE *e)
{
    e->id = NULL;
    e->name = NULL;
    e->rsa_meth = NULL;
    e->dsa_meth = NULL;
    e->dh_meth = NULL;
    e->rand_meth = NULL;
    e->ciphers = NULL;
    e->digests = NULL;
    e->destroy = NULL;
    e->init = NULL;
    e->finish = NULL;
    e->ctrl = NULL;
    e->load_privkey = NULL;
    e->load_pubkey = NULL;
    e->cmd_defns = NULL;
    e->flags = 0;
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
          int _len_e0 = 1;
          struct TYPE_3__ * e = (struct TYPE_3__ *) malloc(_len_e0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__cmd_defns0 = 1;
          e[_i0].cmd_defns = (int *) malloc(_len_e__i0__cmd_defns0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__cmd_defns0; _j0++) {
            e[_i0].cmd_defns[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__load_pubkey0 = 1;
          e[_i0].load_pubkey = (int *) malloc(_len_e__i0__load_pubkey0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__load_pubkey0; _j0++) {
            e[_i0].load_pubkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__load_privkey0 = 1;
          e[_i0].load_privkey = (int *) malloc(_len_e__i0__load_privkey0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__load_privkey0; _j0++) {
            e[_i0].load_privkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__ctrl0 = 1;
          e[_i0].ctrl = (int *) malloc(_len_e__i0__ctrl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__ctrl0; _j0++) {
            e[_i0].ctrl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__finish0 = 1;
          e[_i0].finish = (int *) malloc(_len_e__i0__finish0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__finish0; _j0++) {
            e[_i0].finish[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__init0 = 1;
          e[_i0].init = (int *) malloc(_len_e__i0__init0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__init0; _j0++) {
            e[_i0].init[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__destroy0 = 1;
          e[_i0].destroy = (int *) malloc(_len_e__i0__destroy0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__destroy0; _j0++) {
            e[_i0].destroy[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__digests0 = 1;
          e[_i0].digests = (int *) malloc(_len_e__i0__digests0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__digests0; _j0++) {
            e[_i0].digests[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__ciphers0 = 1;
          e[_i0].ciphers = (int *) malloc(_len_e__i0__ciphers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__ciphers0; _j0++) {
            e[_i0].ciphers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__rand_meth0 = 1;
          e[_i0].rand_meth = (int *) malloc(_len_e__i0__rand_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__rand_meth0; _j0++) {
            e[_i0].rand_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__dh_meth0 = 1;
          e[_i0].dh_meth = (int *) malloc(_len_e__i0__dh_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__dh_meth0; _j0++) {
            e[_i0].dh_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__dsa_meth0 = 1;
          e[_i0].dsa_meth = (int *) malloc(_len_e__i0__dsa_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__dsa_meth0; _j0++) {
            e[_i0].dsa_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__rsa_meth0 = 1;
          e[_i0].rsa_meth = (int *) malloc(_len_e__i0__rsa_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__rsa_meth0; _j0++) {
            e[_i0].rsa_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__name0 = 1;
          e[_i0].name = (int *) malloc(_len_e__i0__name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__name0; _j0++) {
            e[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__id0 = 1;
          e[_i0].id = (int *) malloc(_len_e__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__id0; _j0++) {
            e[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          engine_set_all_null(e);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].cmd_defns);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].load_pubkey);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].load_privkey);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].ctrl);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].finish);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].init);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].destroy);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].digests);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].ciphers);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].rand_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].dh_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].dsa_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].rsa_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].name);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].id);
          }
          free(e);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_e0 = 65025;
          struct TYPE_3__ * e = (struct TYPE_3__ *) malloc(_len_e0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__cmd_defns0 = 1;
          e[_i0].cmd_defns = (int *) malloc(_len_e__i0__cmd_defns0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__cmd_defns0; _j0++) {
            e[_i0].cmd_defns[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__load_pubkey0 = 1;
          e[_i0].load_pubkey = (int *) malloc(_len_e__i0__load_pubkey0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__load_pubkey0; _j0++) {
            e[_i0].load_pubkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__load_privkey0 = 1;
          e[_i0].load_privkey = (int *) malloc(_len_e__i0__load_privkey0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__load_privkey0; _j0++) {
            e[_i0].load_privkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__ctrl0 = 1;
          e[_i0].ctrl = (int *) malloc(_len_e__i0__ctrl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__ctrl0; _j0++) {
            e[_i0].ctrl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__finish0 = 1;
          e[_i0].finish = (int *) malloc(_len_e__i0__finish0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__finish0; _j0++) {
            e[_i0].finish[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__init0 = 1;
          e[_i0].init = (int *) malloc(_len_e__i0__init0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__init0; _j0++) {
            e[_i0].init[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__destroy0 = 1;
          e[_i0].destroy = (int *) malloc(_len_e__i0__destroy0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__destroy0; _j0++) {
            e[_i0].destroy[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__digests0 = 1;
          e[_i0].digests = (int *) malloc(_len_e__i0__digests0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__digests0; _j0++) {
            e[_i0].digests[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__ciphers0 = 1;
          e[_i0].ciphers = (int *) malloc(_len_e__i0__ciphers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__ciphers0; _j0++) {
            e[_i0].ciphers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__rand_meth0 = 1;
          e[_i0].rand_meth = (int *) malloc(_len_e__i0__rand_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__rand_meth0; _j0++) {
            e[_i0].rand_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__dh_meth0 = 1;
          e[_i0].dh_meth = (int *) malloc(_len_e__i0__dh_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__dh_meth0; _j0++) {
            e[_i0].dh_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__dsa_meth0 = 1;
          e[_i0].dsa_meth = (int *) malloc(_len_e__i0__dsa_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__dsa_meth0; _j0++) {
            e[_i0].dsa_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__rsa_meth0 = 1;
          e[_i0].rsa_meth = (int *) malloc(_len_e__i0__rsa_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__rsa_meth0; _j0++) {
            e[_i0].rsa_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__name0 = 1;
          e[_i0].name = (int *) malloc(_len_e__i0__name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__name0; _j0++) {
            e[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__id0 = 1;
          e[_i0].id = (int *) malloc(_len_e__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__id0; _j0++) {
            e[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          engine_set_all_null(e);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].cmd_defns);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].load_pubkey);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].load_privkey);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].ctrl);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].finish);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].init);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].destroy);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].digests);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].ciphers);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].rand_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].dh_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].dsa_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].rsa_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].name);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].id);
          }
          free(e);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_e0 = 100;
          struct TYPE_3__ * e = (struct TYPE_3__ *) malloc(_len_e0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__cmd_defns0 = 1;
          e[_i0].cmd_defns = (int *) malloc(_len_e__i0__cmd_defns0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__cmd_defns0; _j0++) {
            e[_i0].cmd_defns[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__load_pubkey0 = 1;
          e[_i0].load_pubkey = (int *) malloc(_len_e__i0__load_pubkey0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__load_pubkey0; _j0++) {
            e[_i0].load_pubkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__load_privkey0 = 1;
          e[_i0].load_privkey = (int *) malloc(_len_e__i0__load_privkey0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__load_privkey0; _j0++) {
            e[_i0].load_privkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__ctrl0 = 1;
          e[_i0].ctrl = (int *) malloc(_len_e__i0__ctrl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__ctrl0; _j0++) {
            e[_i0].ctrl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__finish0 = 1;
          e[_i0].finish = (int *) malloc(_len_e__i0__finish0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__finish0; _j0++) {
            e[_i0].finish[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__init0 = 1;
          e[_i0].init = (int *) malloc(_len_e__i0__init0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__init0; _j0++) {
            e[_i0].init[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__destroy0 = 1;
          e[_i0].destroy = (int *) malloc(_len_e__i0__destroy0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__destroy0; _j0++) {
            e[_i0].destroy[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__digests0 = 1;
          e[_i0].digests = (int *) malloc(_len_e__i0__digests0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__digests0; _j0++) {
            e[_i0].digests[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__ciphers0 = 1;
          e[_i0].ciphers = (int *) malloc(_len_e__i0__ciphers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__ciphers0; _j0++) {
            e[_i0].ciphers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__rand_meth0 = 1;
          e[_i0].rand_meth = (int *) malloc(_len_e__i0__rand_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__rand_meth0; _j0++) {
            e[_i0].rand_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__dh_meth0 = 1;
          e[_i0].dh_meth = (int *) malloc(_len_e__i0__dh_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__dh_meth0; _j0++) {
            e[_i0].dh_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__dsa_meth0 = 1;
          e[_i0].dsa_meth = (int *) malloc(_len_e__i0__dsa_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__dsa_meth0; _j0++) {
            e[_i0].dsa_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__rsa_meth0 = 1;
          e[_i0].rsa_meth = (int *) malloc(_len_e__i0__rsa_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__rsa_meth0; _j0++) {
            e[_i0].rsa_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__name0 = 1;
          e[_i0].name = (int *) malloc(_len_e__i0__name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__name0; _j0++) {
            e[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__id0 = 1;
          e[_i0].id = (int *) malloc(_len_e__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__id0; _j0++) {
            e[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          engine_set_all_null(e);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].cmd_defns);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].load_pubkey);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].load_privkey);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].ctrl);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].finish);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].init);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].destroy);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].digests);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].ciphers);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].rand_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].dh_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].dsa_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].rsa_meth);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].name);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].id);
          }
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
