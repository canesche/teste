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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct sockaddr {int dummy; } ;
struct TYPE_6__ {TYPE_1__* url; } ;
typedef  TYPE_2__ ngx_rtmp_netcall_session_t ;
struct TYPE_7__ {int /*<<< orphan*/ * name; int /*<<< orphan*/  socklen; struct sockaddr* sockaddr; } ;
typedef  TYPE_3__ ngx_peer_connection_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_5__ {int /*<<< orphan*/  host; int /*<<< orphan*/  socklen; int /*<<< orphan*/  sockaddr; } ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_OK ; 

__attribute__((used)) static ngx_int_t
ngx_rtmp_netcall_get_peer(ngx_peer_connection_t *pc, void *data)
{
    ngx_rtmp_netcall_session_t   *cs = data;

    pc->sockaddr =(struct sockaddr *)&cs->url->sockaddr;
    pc->socklen = cs->url->socklen;
    pc->name = &cs->url->host;

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
          int _len_pc0 = 1;
          struct TYPE_7__ * pc = (struct TYPE_7__ *) malloc(_len_pc0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pc0; _i0++) {
              int _len_pc__i0__name0 = 1;
          pc[_i0].name = (int *) malloc(_len_pc__i0__name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pc__i0__name0; _j0++) {
            pc[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pc[_i0].socklen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pc__i0__sockaddr0 = 1;
          pc[_i0].sockaddr = (struct sockaddr *) malloc(_len_pc__i0__sockaddr0*sizeof(struct sockaddr));
          for(int _j0 = 0; _j0 < _len_pc__i0__sockaddr0; _j0++) {
            pc[_i0].sockaddr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          int benchRet = ngx_rtmp_netcall_get_peer(pc,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pc0; _aux++) {
          free(pc[_aux].name);
          }
          for(int _aux = 0; _aux < _len_pc0; _aux++) {
          free(pc[_aux].sockaddr);
          }
          free(pc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pc0 = 65025;
          struct TYPE_7__ * pc = (struct TYPE_7__ *) malloc(_len_pc0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pc0; _i0++) {
              int _len_pc__i0__name0 = 1;
          pc[_i0].name = (int *) malloc(_len_pc__i0__name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pc__i0__name0; _j0++) {
            pc[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pc[_i0].socklen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pc__i0__sockaddr0 = 1;
          pc[_i0].sockaddr = (struct sockaddr *) malloc(_len_pc__i0__sockaddr0*sizeof(struct sockaddr));
          for(int _j0 = 0; _j0 < _len_pc__i0__sockaddr0; _j0++) {
            pc[_i0].sockaddr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          int benchRet = ngx_rtmp_netcall_get_peer(pc,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pc0; _aux++) {
          free(pc[_aux].name);
          }
          for(int _aux = 0; _aux < _len_pc0; _aux++) {
          free(pc[_aux].sockaddr);
          }
          free(pc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pc0 = 100;
          struct TYPE_7__ * pc = (struct TYPE_7__ *) malloc(_len_pc0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pc0; _i0++) {
              int _len_pc__i0__name0 = 1;
          pc[_i0].name = (int *) malloc(_len_pc__i0__name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pc__i0__name0; _j0++) {
            pc[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pc[_i0].socklen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pc__i0__sockaddr0 = 1;
          pc[_i0].sockaddr = (struct sockaddr *) malloc(_len_pc__i0__sockaddr0*sizeof(struct sockaddr));
          for(int _j0 = 0; _j0 < _len_pc__i0__sockaddr0; _j0++) {
            pc[_i0].sockaddr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          int benchRet = ngx_rtmp_netcall_get_peer(pc,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pc0; _aux++) {
          free(pc[_aux].name);
          }
          for(int _aux = 0; _aux < _len_pc0; _aux++) {
          free(pc[_aux].sockaddr);
          }
          free(pc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
