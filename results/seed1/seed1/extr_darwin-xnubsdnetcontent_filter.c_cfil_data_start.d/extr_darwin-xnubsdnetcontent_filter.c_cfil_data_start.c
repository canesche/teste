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

/* Type definitions */
struct mbuf {int m_flags; struct mbuf* m_next; } ;

/* Variables and functions */
 int M_PKTHDR ; 

__attribute__((used)) static struct mbuf *
cfil_data_start(struct mbuf *m)
{
	struct mbuf *m0;

	// Locate the start of data
	for (m0 = m; m0 != NULL; m0 = m0->m_next) {
		if (m0->m_flags & M_PKTHDR)
			break;
	}
	return m0;
}


// ------------------------------------------------------------------------- //

struct mbuf *_allocate_m(int length, struct mbuf *aux_m[]) {
  struct mbuf *walker = (struct mbuf *)malloc(sizeof(struct mbuf));

  aux_m[0] = walker;
walker->m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->m_next = NULL;

  struct mbuf *head = walker;
  for(int i = 1; i < length; i++) {
    walker->m_next = (struct mbuf *)malloc(sizeof(struct mbuf));
    walker = walker->m_next;
    aux_m[i] = walker;
walker->m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->m_next = NULL;
  }

  return head;
}

void _delete_m(struct mbuf *aux_m[], int aux_m_size) {
  for(int i = 0; i < aux_m_size; i++) 
    if(aux_m[i])
      free(aux_m[i]);
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
          struct mbuf * aux_m[1];
          struct mbuf * m = _allocate_m(1, aux_m);
          struct mbuf * benchRet = cfil_data_start(m);
          printf("%d\n", (*benchRet).m_flags);
          _delete_m(aux_m, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct mbuf * aux_m[10000];
          struct mbuf * m = _allocate_m(10000, aux_m);
          struct mbuf * benchRet = cfil_data_start(m);
          printf("%d\n", (*benchRet).m_flags);
          _delete_m(aux_m, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
