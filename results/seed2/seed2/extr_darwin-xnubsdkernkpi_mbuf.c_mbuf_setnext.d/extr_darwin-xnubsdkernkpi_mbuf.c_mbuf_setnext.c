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
typedef  TYPE_1__* mbuf_t ;
typedef  int /*<<< orphan*/  errno_t ;
struct TYPE_4__ {scalar_t__ m_type; struct TYPE_4__* m_next; int /*<<< orphan*/ * m_nextpkt; } ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 scalar_t__ MT_FREE ; 

errno_t
mbuf_setnext(mbuf_t mbuf, mbuf_t next)
{
	if (next && ((next)->m_nextpkt != NULL ||
	    (next)->m_type == MT_FREE))
		return (EINVAL);
	mbuf->m_next = next;

	return (0);
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_mbuf(int length, struct TYPE_4__ *aux_mbuf[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_mbuf[0] = walker;
walker->m_type = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->m_next = NULL;
  int _len_walker_m_nextpkt0 = 1;
  walker->m_nextpkt = (int *) malloc(_len_walker_m_nextpkt0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_m_nextpkt0; _i0++) {
    walker->m_nextpkt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->m_next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->m_next;
    aux_mbuf[i] = walker;
walker->m_type = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->m_next = NULL;
  int _len_walker_m_nextpkt0 = 1;
  walker->m_nextpkt = (int *) malloc(_len_walker_m_nextpkt0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_m_nextpkt0; _i0++) {
    walker->m_nextpkt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_mbuf(struct TYPE_4__ *aux_mbuf[], int aux_mbuf_size) {
  for(int i = 0; i < aux_mbuf_size; i++) 
    if(aux_mbuf[i])
      free(aux_mbuf[i]);
}

struct TYPE_4__ *_allocate_next(int length, struct TYPE_4__ *aux_next[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_next[0] = walker;
walker->m_type = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->m_next = NULL;
  int _len_walker_m_nextpkt0 = 1;
  walker->m_nextpkt = (int *) malloc(_len_walker_m_nextpkt0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_m_nextpkt0; _i0++) {
    walker->m_nextpkt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->m_next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->m_next;
    aux_next[i] = walker;
walker->m_type = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->m_next = NULL;
  int _len_walker_m_nextpkt0 = 1;
  walker->m_nextpkt = (int *) malloc(_len_walker_m_nextpkt0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_m_nextpkt0; _i0++) {
    walker->m_nextpkt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_next(struct TYPE_4__ *aux_next[], int aux_next_size) {
  for(int i = 0; i < aux_next_size; i++) 
    if(aux_next[i])
      free(aux_next[i]);
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
          struct TYPE_4__ * aux_mbuf[1];
          struct TYPE_4__ * mbuf = _allocate_mbuf(1, aux_mbuf);
          struct TYPE_4__ * aux_next[1];
          struct TYPE_4__ * next = _allocate_next(1, aux_next);
          int benchRet = mbuf_setnext(mbuf,next);
          printf("%d\n", benchRet); 
          _delete_mbuf(aux_mbuf, 1);
          _delete_next(aux_next, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct TYPE_4__ * aux_mbuf[10000];
          struct TYPE_4__ * mbuf = _allocate_mbuf(10000, aux_mbuf);
          struct TYPE_4__ * aux_next[10000];
          struct TYPE_4__ * next = _allocate_next(10000, aux_next);
          int benchRet = mbuf_setnext(mbuf,next);
          printf("%d\n", benchRet); 
          _delete_mbuf(aux_mbuf, 10000);
          _delete_next(aux_next, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
