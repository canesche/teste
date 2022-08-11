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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct net_device {int dummy; } ;
struct atalk_addr {scalar_t__ s_net; scalar_t__ s_node; } ;
struct TYPE_2__ {scalar_t__ s_net; scalar_t__ s_node; } ;
struct aarp_entry {struct aarp_entry* next; struct net_device* dev; TYPE_1__ target_addr; } ;

/* Variables and functions */

__attribute__((used)) static struct aarp_entry *__aarp_find_entry(struct aarp_entry *list,
					    struct net_device *dev,
					    struct atalk_addr *sat)
{
	while (list) {
		if (list->target_addr.s_net == sat->s_net &&
		    list->target_addr.s_node == sat->s_node &&
		    list->dev == dev)
			break;
		list = list->next;
	}

	return list;
}


// ------------------------------------------------------------------------- //

struct aarp_entry *_allocate_list(int length, struct aarp_entry *aux_list[]) {
  struct aarp_entry *walker = (struct aarp_entry *)malloc(sizeof(struct aarp_entry));

  aux_list[0] = walker;
  walker->next = NULL;
  int _len_walker_dev0 = 1;
  walker->dev = (struct net_device *) malloc(_len_walker_dev0*sizeof(struct net_device));
  for(int _i0 = 0; _i0 < _len_walker_dev0; _i0++) {
    walker->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
walker->target_addr.s_net = ((-2 * (next_i()%2)) + 1) * next_i();
walker->target_addr.s_node = ((-2 * (next_i()%2)) + 1) * next_i();

  struct aarp_entry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct aarp_entry *)malloc(sizeof(struct aarp_entry));
    walker = walker->next;
    aux_list[i] = walker;
    walker->next = NULL;
  int _len_walker_dev0 = 1;
  walker->dev = (struct net_device *) malloc(_len_walker_dev0*sizeof(struct net_device));
  for(int _i0 = 0; _i0 < _len_walker_dev0; _i0++) {
    walker->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
walker->target_addr.s_net = ((-2 * (next_i()%2)) + 1) * next_i();
walker->target_addr.s_node = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_list(struct aarp_entry *aux_list[], int aux_list_size) {
  for(int i = 0; i < aux_list_size; i++) 
    if(aux_list[i])
      free(aux_list[i]);
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
          struct aarp_entry * aux_list[1];
          struct aarp_entry * list = _allocate_list(1, aux_list);
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sat0 = 1;
          struct atalk_addr * sat = (struct atalk_addr *) malloc(_len_sat0*sizeof(struct atalk_addr));
          for(int _i0 = 0; _i0 < _len_sat0; _i0++) {
            sat[_i0].s_net = ((-2 * (next_i()%2)) + 1) * next_i();
        sat[_i0].s_node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct aarp_entry * benchRet = __aarp_find_entry(list,dev,sat);
          _delete_list(aux_list, 1);
          free(dev);
          free(sat);
        
        break;
    }
    // linked
    case 3:
    {
          struct aarp_entry * aux_list[10000];
          struct aarp_entry * list = _allocate_list(10000, aux_list);
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sat0 = 1;
          struct atalk_addr * sat = (struct atalk_addr *) malloc(_len_sat0*sizeof(struct atalk_addr));
          for(int _i0 = 0; _i0 < _len_sat0; _i0++) {
            sat[_i0].s_net = ((-2 * (next_i()%2)) + 1) * next_i();
        sat[_i0].s_node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct aarp_entry * benchRet = __aarp_find_entry(list,dev,sat);
          _delete_list(aux_list, 10000);
          free(dev);
          free(sat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
