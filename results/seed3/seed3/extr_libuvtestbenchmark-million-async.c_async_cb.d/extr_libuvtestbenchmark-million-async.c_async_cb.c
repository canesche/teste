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
struct TYPE_4__ {struct TYPE_4__* data; } ;
typedef  TYPE_1__ uv_async_t ;
struct TYPE_5__ {int /*<<< orphan*/  async_events; } ;

/* Variables and functions */
 TYPE_2__* container ; 

__attribute__((used)) static void async_cb(uv_async_t* handle) {
  container->async_events++;
  handle->data = handle;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_handle(int length, struct TYPE_4__ *aux_handle[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_handle[0] = walker;
  walker->data = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->data = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->data;
    aux_handle[i] = walker;
    walker->data = NULL;
  }

  return head;
}

void _delete_handle(struct TYPE_4__ *aux_handle[], int aux_handle_size) {
  for(int i = 0; i < aux_handle_size; i++) 
    if(aux_handle[i])
      free(aux_handle[i]);
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
          struct TYPE_4__ * aux_handle[1];
          struct TYPE_4__ * handle = _allocate_handle(1, aux_handle);
          async_cb(handle);
          _delete_handle(aux_handle, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_handle[10000];
          struct TYPE_4__ * handle = _allocate_handle(10000, aux_handle);
          async_cb(handle);
          _delete_handle(aux_handle, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
