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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int ngx_uint_t ;
struct TYPE_4__ {int ncaptures; int* captures; scalar_t__ ip; } ;
typedef  TYPE_1__ ngx_http_lua_script_engine_t ;
struct TYPE_5__ {int n; } ;
typedef  TYPE_2__ ngx_http_lua_script_capture_code_t ;

/* Variables and functions */

__attribute__((used)) static size_t
ngx_http_lua_script_copy_capture_len_code(ngx_http_lua_script_engine_t *e)
{
    int                                  *cap;
    ngx_uint_t                            n;
    ngx_http_lua_script_capture_code_t   *code;

    code = (ngx_http_lua_script_capture_code_t *) e->ip;

    e->ip += sizeof(ngx_http_lua_script_capture_code_t);

    n = code->n;

    if (n < e->ncaptures) {
        cap = e->captures;
        return cap[n + 1] - cap[n];
    }

    return 0;
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
          struct TYPE_4__ * e = (struct TYPE_4__ *) malloc(_len_e0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].ncaptures = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__captures0 = 1;
          e[_i0].captures = (int *) malloc(_len_e__i0__captures0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__captures0; _j0++) {
            e[_i0].captures[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        e[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ngx_http_lua_script_copy_capture_len_code(e);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].captures);
          }
          free(e);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_e0 = 65025;
          struct TYPE_4__ * e = (struct TYPE_4__ *) malloc(_len_e0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].ncaptures = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__captures0 = 1;
          e[_i0].captures = (int *) malloc(_len_e__i0__captures0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__captures0; _j0++) {
            e[_i0].captures[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        e[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ngx_http_lua_script_copy_capture_len_code(e);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].captures);
          }
          free(e);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_e0 = 100;
          struct TYPE_4__ * e = (struct TYPE_4__ *) malloc(_len_e0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].ncaptures = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__captures0 = 1;
          e[_i0].captures = (int *) malloc(_len_e__i0__captures0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__captures0; _j0++) {
            e[_i0].captures[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        e[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ngx_http_lua_script_copy_capture_len_code(e);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].captures);
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
