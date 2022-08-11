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
struct TYPE_3__ {int /*<<< orphan*/ * db; int /*<<< orphan*/ * db_meth; } ;
typedef  TYPE_1__ X509V3_CTX ;
typedef  int /*<<< orphan*/  CONF ;

/* Variables and functions */
 int /*<<< orphan*/  nconf_method ; 

void X509V3_set_nconf(X509V3_CTX *ctx, CONF *conf)
{
    ctx->db_meth = &nconf_method;
    ctx->db = conf;
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
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__db0 = 1;
          ctx[_i0].db = (int *) malloc(_len_ctx__i0__db0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__db0; _j0++) {
            ctx[_i0].db[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__db_meth0 = 1;
          ctx[_i0].db_meth = (int *) malloc(_len_ctx__i0__db_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__db_meth0; _j0++) {
            ctx[_i0].db_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_conf0 = 1;
          int * conf = (int *) malloc(_len_conf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          X509V3_set_nconf(ctx,conf);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].db);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].db_meth);
          }
          free(ctx);
          free(conf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__db0 = 1;
          ctx[_i0].db = (int *) malloc(_len_ctx__i0__db0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__db0; _j0++) {
            ctx[_i0].db[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__db_meth0 = 1;
          ctx[_i0].db_meth = (int *) malloc(_len_ctx__i0__db_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__db_meth0; _j0++) {
            ctx[_i0].db_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_conf0 = 65025;
          int * conf = (int *) malloc(_len_conf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          X509V3_set_nconf(ctx,conf);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].db);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].db_meth);
          }
          free(ctx);
          free(conf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__db0 = 1;
          ctx[_i0].db = (int *) malloc(_len_ctx__i0__db0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__db0; _j0++) {
            ctx[_i0].db[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__db_meth0 = 1;
          ctx[_i0].db_meth = (int *) malloc(_len_ctx__i0__db_meth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__db_meth0; _j0++) {
            ctx[_i0].db_meth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_conf0 = 100;
          int * conf = (int *) malloc(_len_conf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          X509V3_set_nconf(ctx,conf);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].db);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].db_meth);
          }
          free(ctx);
          free(conf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
