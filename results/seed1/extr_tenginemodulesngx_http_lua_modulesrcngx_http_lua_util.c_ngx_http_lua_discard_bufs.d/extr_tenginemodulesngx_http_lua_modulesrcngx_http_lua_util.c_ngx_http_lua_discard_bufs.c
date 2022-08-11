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
typedef  int /*<<< orphan*/  ngx_pool_t ;
struct TYPE_5__ {TYPE_1__* buf; struct TYPE_5__* next; } ;
typedef  TYPE_2__ ngx_chain_t ;
struct TYPE_4__ {int /*<<< orphan*/  file_last; int /*<<< orphan*/  file_pos; int /*<<< orphan*/  last; int /*<<< orphan*/  pos; } ;

/* Variables and functions */

void
ngx_http_lua_discard_bufs(ngx_pool_t *pool, ngx_chain_t *in)
{
    ngx_chain_t         *cl;

    for (cl = in; cl; cl = cl->next) {
        cl->buf->pos = cl->buf->last;
        cl->buf->file_pos = cl->buf->file_last;
    }
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_in(int length, struct TYPE_5__ *aux_in[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_in[0] = walker;
  int _len_walker_buf0 = 1;
  walker->buf = (struct TYPE_4__ *) malloc(_len_walker_buf0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_buf0; _i0++) {
    walker->buf.file_last = ((-2 * (next_i()%2)) + 1) * next_i();
walker->buf.file_pos = ((-2 * (next_i()%2)) + 1) * next_i();
walker->buf.last = ((-2 * (next_i()%2)) + 1) * next_i();
walker->buf.pos = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->next = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_in[i] = walker;
  int _len_walker_buf0 = 1;
  walker->buf = (struct TYPE_4__ *) malloc(_len_walker_buf0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_buf0; _i0++) {
    walker->buf.file_last = ((-2 * (next_i()%2)) + 1) * next_i();
walker->buf.file_pos = ((-2 * (next_i()%2)) + 1) * next_i();
walker->buf.last = ((-2 * (next_i()%2)) + 1) * next_i();
walker->buf.pos = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->next = NULL;
  }

  return head;
}

void _delete_in(struct TYPE_5__ *aux_in[], int aux_in_size) {
  for(int i = 0; i < aux_in_size; i++) 
    if(aux_in[i])
      free(aux_in[i]);
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
          int _len_pool0 = 1;
          int * pool = (int *) malloc(_len_pool0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_5__ * aux_in[1];
          struct TYPE_5__ * in = _allocate_in(1, aux_in);
          ngx_http_lua_discard_bufs(pool,in);
          free(pool);
          _delete_in(aux_in, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_pool0 = 1;
          int * pool = (int *) malloc(_len_pool0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_5__ * aux_in[10000];
          struct TYPE_5__ * in = _allocate_in(10000, aux_in);
          ngx_http_lua_discard_bufs(pool,in);
          free(pool);
          _delete_in(aux_in, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
