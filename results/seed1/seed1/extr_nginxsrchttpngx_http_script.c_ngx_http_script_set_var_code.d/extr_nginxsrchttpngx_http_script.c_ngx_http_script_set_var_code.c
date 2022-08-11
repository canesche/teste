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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {size_t index; } ;
typedef  TYPE_3__ ngx_http_script_var_code_t ;
struct TYPE_10__ {TYPE_2__* sp; TYPE_5__* request; scalar_t__ ip; } ;
typedef  TYPE_4__ ngx_http_script_engine_t ;
struct TYPE_11__ {TYPE_1__* variables; } ;
typedef  TYPE_5__ ngx_http_request_t ;
struct TYPE_8__ {int /*<<< orphan*/  data; int /*<<< orphan*/  len; } ;
struct TYPE_7__ {int valid; int /*<<< orphan*/  data; scalar_t__ not_found; scalar_t__ no_cacheable; int /*<<< orphan*/  len; } ;

/* Variables and functions */

void
ngx_http_script_set_var_code(ngx_http_script_engine_t *e)
{
    ngx_http_request_t          *r;
    ngx_http_script_var_code_t  *code;

    code = (ngx_http_script_var_code_t *) e->ip;

    e->ip += sizeof(ngx_http_script_var_code_t);

    r = e->request;

    e->sp--;

    r->variables[code->index].len = e->sp->len;
    r->variables[code->index].valid = 1;
    r->variables[code->index].no_cacheable = 0;
    r->variables[code->index].not_found = 0;
    r->variables[code->index].data = e->sp->data;

#if (NGX_DEBUG)
    {
    ngx_http_variable_t        *v;
    ngx_http_core_main_conf_t  *cmcf;

    cmcf = ngx_http_get_module_main_conf(r, ngx_http_core_module);

    v = cmcf->variables.elts;

    ngx_log_debug1(NGX_LOG_DEBUG_HTTP, e->request->connection->log, 0,
                   "http script set $%V", &v[code->index].name);
    }
#endif
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
          struct TYPE_10__ * e = (struct TYPE_10__ *) malloc(_len_e0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              int _len_e__i0__sp0 = 1;
          e[_i0].sp = (struct TYPE_8__ *) malloc(_len_e__i0__sp0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_e__i0__sp0; _j0++) {
            e[_i0].sp->data = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].sp->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__request0 = 1;
          e[_i0].request = (struct TYPE_11__ *) malloc(_len_e__i0__request0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_e__i0__request0; _j0++) {
              int _len_e__i0__request_variables0 = 1;
          e[_i0].request->variables = (struct TYPE_7__ *) malloc(_len_e__i0__request_variables0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_e__i0__request_variables0; _j0++) {
            e[_i0].request->variables->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->data = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        e[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_script_set_var_code(e);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].sp);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].request);
          }
          free(e);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_e0 = 65025;
          struct TYPE_10__ * e = (struct TYPE_10__ *) malloc(_len_e0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              int _len_e__i0__sp0 = 1;
          e[_i0].sp = (struct TYPE_8__ *) malloc(_len_e__i0__sp0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_e__i0__sp0; _j0++) {
            e[_i0].sp->data = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].sp->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__request0 = 1;
          e[_i0].request = (struct TYPE_11__ *) malloc(_len_e__i0__request0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_e__i0__request0; _j0++) {
              int _len_e__i0__request_variables0 = 1;
          e[_i0].request->variables = (struct TYPE_7__ *) malloc(_len_e__i0__request_variables0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_e__i0__request_variables0; _j0++) {
            e[_i0].request->variables->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->data = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        e[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_script_set_var_code(e);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].sp);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].request);
          }
          free(e);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_e0 = 100;
          struct TYPE_10__ * e = (struct TYPE_10__ *) malloc(_len_e0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              int _len_e__i0__sp0 = 1;
          e[_i0].sp = (struct TYPE_8__ *) malloc(_len_e__i0__sp0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_e__i0__sp0; _j0++) {
            e[_i0].sp->data = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].sp->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e__i0__request0 = 1;
          e[_i0].request = (struct TYPE_11__ *) malloc(_len_e__i0__request0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_e__i0__request0; _j0++) {
              int _len_e__i0__request_variables0 = 1;
          e[_i0].request->variables = (struct TYPE_7__ *) malloc(_len_e__i0__request_variables0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_e__i0__request_variables0; _j0++) {
            e[_i0].request->variables->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->data = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].request->variables->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        e[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_script_set_var_code(e);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].sp);
          }
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].request);
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
