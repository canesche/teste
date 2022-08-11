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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  size_t ngx_uint_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_7__ {scalar_t__ connect_port_n; } ;
typedef  TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {TYPE_1__* allow_ports; scalar_t__ allow_port_all; } ;
typedef  TYPE_3__ ngx_http_proxy_connect_loc_conf_t ;
typedef  scalar_t__ in_port_t ;
struct TYPE_6__ {scalar_t__** elts; size_t nelts; } ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_HTTP_FORBIDDEN ; 
 int /*<<< orphan*/  NGX_OK ; 

__attribute__((used)) static ngx_int_t
ngx_http_proxy_connect_allow_handler(ngx_http_request_t *r,
    ngx_http_proxy_connect_loc_conf_t *plcf)
{
    ngx_uint_t  i, allow;
    in_port_t   (*ports)[2];

    allow = 0;

    if (plcf->allow_port_all) {
        allow = 1;

    } else if (plcf->allow_ports) {
        ports = plcf->allow_ports->elts;

        for (i = 0; i < plcf->allow_ports->nelts; i++) {
            /*
             * connect_port == port
             * OR
             * port <= connect_port <= eport
             */
            if ((ports[i][1] == 0 && r->connect_port_n == ports[i][0])
                || (ports[i][0] <= r->connect_port_n && r->connect_port_n <= ports[i][1]))
            {
                allow = 1;
                break;
            }
        }

    } else {
        if (r->connect_port_n == 443 || r->connect_port_n == 563) {
            allow = 1;
        }
    }

    if (allow == 0) {
        return NGX_HTTP_FORBIDDEN;
    }

    return NGX_OK;
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
          int _len_r0 = 1;
          struct TYPE_7__ * r = (struct TYPE_7__ *) malloc(_len_r0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].connect_port_n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plcf0 = 1;
          struct TYPE_8__ * plcf = (struct TYPE_8__ *) malloc(_len_plcf0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_plcf0; _i0++) {
              int _len_plcf__i0__allow_ports0 = 1;
          plcf[_i0].allow_ports = (struct TYPE_6__ *) malloc(_len_plcf__i0__allow_ports0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plcf__i0__allow_ports0; _j0++) {
              int _len_plcf__i0__allow_ports_elts0 = 1;
          plcf[_i0].allow_ports->elts = (long **) malloc(_len_plcf__i0__allow_ports_elts0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_plcf__i0__allow_ports_elts0; _j0++) {
            int _len_plcf__i0__allow_ports_elts1 = 1;
            plcf[_i0].allow_ports->elts[_j0] = (long *) malloc(_len_plcf__i0__allow_ports_elts1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_plcf__i0__allow_ports_elts1; _j1++) {
              plcf[_i0].allow_ports->elts[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        plcf[_i0].allow_ports->nelts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plcf[_i0].allow_port_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_proxy_connect_allow_handler(r,plcf);
          printf("%d\n", benchRet); 
          free(r);
          for(int _aux = 0; _aux < _len_plcf0; _aux++) {
          free(plcf[_aux].allow_ports);
          }
          free(plcf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_r0 = 65025;
          struct TYPE_7__ * r = (struct TYPE_7__ *) malloc(_len_r0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].connect_port_n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plcf0 = 65025;
          struct TYPE_8__ * plcf = (struct TYPE_8__ *) malloc(_len_plcf0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_plcf0; _i0++) {
              int _len_plcf__i0__allow_ports0 = 1;
          plcf[_i0].allow_ports = (struct TYPE_6__ *) malloc(_len_plcf__i0__allow_ports0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plcf__i0__allow_ports0; _j0++) {
              int _len_plcf__i0__allow_ports_elts0 = 1;
          plcf[_i0].allow_ports->elts = (long **) malloc(_len_plcf__i0__allow_ports_elts0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_plcf__i0__allow_ports_elts0; _j0++) {
            int _len_plcf__i0__allow_ports_elts1 = 1;
            plcf[_i0].allow_ports->elts[_j0] = (long *) malloc(_len_plcf__i0__allow_ports_elts1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_plcf__i0__allow_ports_elts1; _j1++) {
              plcf[_i0].allow_ports->elts[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        plcf[_i0].allow_ports->nelts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plcf[_i0].allow_port_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_proxy_connect_allow_handler(r,plcf);
          printf("%d\n", benchRet); 
          free(r);
          for(int _aux = 0; _aux < _len_plcf0; _aux++) {
          free(plcf[_aux].allow_ports);
          }
          free(plcf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_r0 = 100;
          struct TYPE_7__ * r = (struct TYPE_7__ *) malloc(_len_r0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].connect_port_n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plcf0 = 100;
          struct TYPE_8__ * plcf = (struct TYPE_8__ *) malloc(_len_plcf0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_plcf0; _i0++) {
              int _len_plcf__i0__allow_ports0 = 1;
          plcf[_i0].allow_ports = (struct TYPE_6__ *) malloc(_len_plcf__i0__allow_ports0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_plcf__i0__allow_ports0; _j0++) {
              int _len_plcf__i0__allow_ports_elts0 = 1;
          plcf[_i0].allow_ports->elts = (long **) malloc(_len_plcf__i0__allow_ports_elts0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_plcf__i0__allow_ports_elts0; _j0++) {
            int _len_plcf__i0__allow_ports_elts1 = 1;
            plcf[_i0].allow_ports->elts[_j0] = (long *) malloc(_len_plcf__i0__allow_ports_elts1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_plcf__i0__allow_ports_elts1; _j1++) {
              plcf[_i0].allow_ports->elts[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        plcf[_i0].allow_ports->nelts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        plcf[_i0].allow_port_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_proxy_connect_allow_handler(r,plcf);
          printf("%d\n", benchRet); 
          free(r);
          for(int _aux = 0; _aux < _len_plcf0; _aux++) {
          free(plcf[_aux].allow_ports);
          }
          free(plcf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
