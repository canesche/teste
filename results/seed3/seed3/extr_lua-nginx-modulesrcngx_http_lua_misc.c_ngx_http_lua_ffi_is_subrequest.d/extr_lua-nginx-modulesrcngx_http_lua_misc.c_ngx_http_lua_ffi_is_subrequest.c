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
       3            linked\n\
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
typedef  scalar_t__ ngx_socket_t ;
struct TYPE_5__ {struct TYPE_5__* main; TYPE_1__* connection; } ;
typedef  TYPE_2__ ngx_http_request_t ;
struct TYPE_4__ {scalar_t__ fd; } ;

/* Variables and functions */
 int NGX_HTTP_LUA_FFI_BAD_CONTEXT ; 

int
ngx_http_lua_ffi_is_subrequest(ngx_http_request_t *r)
{
    if (r->connection->fd == (ngx_socket_t) -1) {
        return NGX_HTTP_LUA_FFI_BAD_CONTEXT;
    }

    return r != r->main;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_r(int length, struct TYPE_5__ *aux_r[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_r[0] = walker;
  walker->main = NULL;
  int _len_walker_connection0 = 1;
  walker->connection = (struct TYPE_4__ *) malloc(_len_walker_connection0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_connection0; _i0++) {
    walker->connection.fd = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->main = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->main;
    aux_r[i] = walker;
    walker->main = NULL;
  int _len_walker_connection0 = 1;
  walker->connection = (struct TYPE_4__ *) malloc(_len_walker_connection0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_connection0; _i0++) {
    walker->connection.fd = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_r(struct TYPE_5__ *aux_r[], int aux_r_size) {
  for(int i = 0; i < aux_r_size; i++) 
    if(aux_r[i])
      free(aux_r[i]);
}

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
          struct TYPE_5__ * aux_r[1];
          struct TYPE_5__ * r = _allocate_r(1, aux_r);
          int benchRet = ngx_http_lua_ffi_is_subrequest(r);
          printf("%d\n", benchRet); 
          _delete_r(aux_r, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_5__ * aux_r[10000];
          struct TYPE_5__ * r = _allocate_r(10000, aux_r);
          int benchRet = ngx_http_lua_ffi_is_subrequest(r);
          printf("%d\n", benchRet); 
          _delete_r(aux_r, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
