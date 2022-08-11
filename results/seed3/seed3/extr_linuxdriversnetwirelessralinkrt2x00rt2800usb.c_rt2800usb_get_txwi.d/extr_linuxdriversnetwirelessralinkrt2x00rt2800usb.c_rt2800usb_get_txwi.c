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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct queue_entry {TYPE_2__* skb; TYPE_1__* queue; } ;
typedef  int /*<<< orphan*/  __le32 ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ qid; } ;

/* Variables and functions */
 scalar_t__ QID_BEACON ; 
 scalar_t__ TXINFO_DESC_SIZE ; 

__attribute__((used)) static __le32 *rt2800usb_get_txwi(struct queue_entry *entry)
{
	if (entry->queue->qid == QID_BEACON)
		return (__le32 *) (entry->skb->data);
	else
		return (__le32 *) (entry->skb->data + TXINFO_DESC_SIZE);
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
          int _len_entry0 = 1;
          struct queue_entry * entry = (struct queue_entry *) malloc(_len_entry0*sizeof(struct queue_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              int _len_entry__i0__skb0 = 1;
          entry[_i0].skb = (struct TYPE_4__ *) malloc(_len_entry__i0__skb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_entry__i0__skb0; _j0++) {
            entry[_i0].skb->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry__i0__queue0 = 1;
          entry[_i0].queue = (struct TYPE_3__ *) malloc(_len_entry__i0__queue0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_entry__i0__queue0; _j0++) {
            entry[_i0].queue->qid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = rt2800usb_get_txwi(entry);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].skb);
          }
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].queue);
          }
          free(entry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_entry0 = 65025;
          struct queue_entry * entry = (struct queue_entry *) malloc(_len_entry0*sizeof(struct queue_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              int _len_entry__i0__skb0 = 1;
          entry[_i0].skb = (struct TYPE_4__ *) malloc(_len_entry__i0__skb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_entry__i0__skb0; _j0++) {
            entry[_i0].skb->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry__i0__queue0 = 1;
          entry[_i0].queue = (struct TYPE_3__ *) malloc(_len_entry__i0__queue0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_entry__i0__queue0; _j0++) {
            entry[_i0].queue->qid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = rt2800usb_get_txwi(entry);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].skb);
          }
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].queue);
          }
          free(entry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_entry0 = 100;
          struct queue_entry * entry = (struct queue_entry *) malloc(_len_entry0*sizeof(struct queue_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              int _len_entry__i0__skb0 = 1;
          entry[_i0].skb = (struct TYPE_4__ *) malloc(_len_entry__i0__skb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_entry__i0__skb0; _j0++) {
            entry[_i0].skb->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry__i0__queue0 = 1;
          entry[_i0].queue = (struct TYPE_3__ *) malloc(_len_entry__i0__queue0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_entry__i0__queue0; _j0++) {
            entry[_i0].queue->qid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = rt2800usb_get_txwi(entry);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].skb);
          }
          for(int _aux = 0; _aux < _len_entry0; _aux++) {
          free(entry[_aux].queue);
          }
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
