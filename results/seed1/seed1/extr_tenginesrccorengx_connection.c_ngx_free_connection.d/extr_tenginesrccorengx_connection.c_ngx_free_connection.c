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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {size_t fd; struct TYPE_4__* data; } ;
typedef  TYPE_1__ ngx_connection_t ;
struct TYPE_5__ {TYPE_1__** files; int /*<<< orphan*/  free_connection_n; TYPE_1__* free_connections; } ;

/* Variables and functions */
 TYPE_3__* ngx_cycle ; 

void
ngx_free_connection(ngx_connection_t *c)
{
    c->data = ngx_cycle->free_connections;
    ngx_cycle->free_connections = c;
    ngx_cycle->free_connection_n++;

    if (ngx_cycle->files && ngx_cycle->files[c->fd] == c) {
        ngx_cycle->files[c->fd] = NULL;
    }
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_c(int length, struct TYPE_4__ *aux_c[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_c[0] = walker;
walker->fd = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->data = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->data = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->data;
    aux_c[i] = walker;
walker->fd = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->data = NULL;
  }

  return head;
}

void _delete_c(struct TYPE_4__ *aux_c[], int aux_c_size) {
  for(int i = 0; i < aux_c_size; i++) 
    if(aux_c[i])
      free(aux_c[i]);
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
          struct TYPE_4__ * aux_c[1];
          struct TYPE_4__ * c = _allocate_c(1, aux_c);
          ngx_free_connection(c);
          _delete_c(aux_c, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_c[10000];
          struct TYPE_4__ * c = _allocate_c(10000, aux_c);
          ngx_free_connection(c);
          _delete_c(aux_c, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
