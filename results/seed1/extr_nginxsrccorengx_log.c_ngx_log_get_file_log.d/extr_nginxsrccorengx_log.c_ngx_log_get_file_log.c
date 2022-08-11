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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * file; struct TYPE_4__* next; } ;
typedef  TYPE_1__ ngx_log_t ;

/* Variables and functions */

ngx_log_t *
ngx_log_get_file_log(ngx_log_t *head)
{
    ngx_log_t  *log;

    for (log = head; log; log = log->next) {
        if (log->file != NULL) {
            return log;
        }
    }

    return NULL;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_head(int length, struct TYPE_4__ *aux_head[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_head[0] = walker;
  int _len_walker_file0 = 1;
  walker->file = (int *) malloc(_len_walker_file0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_file0; _i0++) {
    walker->file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_head[i] = walker;
  int _len_walker_file0 = 1;
  walker->file = (int *) malloc(_len_walker_file0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_file0; _i0++) {
    walker->file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->next = NULL;
  }

  return head;
}

void _delete_head(struct TYPE_4__ *aux_head[], int aux_head_size) {
  for(int i = 0; i < aux_head_size; i++) 
    if(aux_head[i])
      free(aux_head[i]);
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
          struct TYPE_4__ * aux_head[1];
          struct TYPE_4__ * head = _allocate_head(1, aux_head);
          struct TYPE_4__ * benchRet = ngx_log_get_file_log(head);
          _delete_head(aux_head, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_head[10000];
          struct TYPE_4__ * head = _allocate_head(10000, aux_head);
          struct TYPE_4__ * benchRet = ngx_log_get_file_log(head);
          _delete_head(aux_head, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
