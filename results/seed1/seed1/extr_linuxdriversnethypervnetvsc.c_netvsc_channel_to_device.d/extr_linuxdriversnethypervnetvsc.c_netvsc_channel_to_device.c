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
struct vmbus_channel {struct hv_device* device_obj; struct vmbus_channel* primary_channel; } ;
struct hv_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct hv_device *netvsc_channel_to_device(struct vmbus_channel *channel)
{
	struct vmbus_channel *primary = channel->primary_channel;

	return primary ? primary->device_obj : channel->device_obj;
}


// ------------------------------------------------------------------------- //

struct vmbus_channel *_allocate_channel(int length, struct vmbus_channel *aux_channel[]) {
  struct vmbus_channel *walker = (struct vmbus_channel *)malloc(sizeof(struct vmbus_channel));

  aux_channel[0] = walker;
  int _len_walker_device_obj0 = 1;
  walker->device_obj = (struct hv_device *) malloc(_len_walker_device_obj0*sizeof(struct hv_device));
  for(int _i0 = 0; _i0 < _len_walker_device_obj0; _i0++) {
    walker->device_obj.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  walker->primary_channel = NULL;

  struct vmbus_channel *head = walker;
  for(int i = 1; i < length; i++) {
    walker->primary_channel = (struct vmbus_channel *)malloc(sizeof(struct vmbus_channel));
    walker = walker->primary_channel;
    aux_channel[i] = walker;
  int _len_walker_device_obj0 = 1;
  walker->device_obj = (struct hv_device *) malloc(_len_walker_device_obj0*sizeof(struct hv_device));
  for(int _i0 = 0; _i0 < _len_walker_device_obj0; _i0++) {
    walker->device_obj.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
  }
    walker->primary_channel = NULL;
  }

  return head;
}

void _delete_channel(struct vmbus_channel *aux_channel[], int aux_channel_size) {
  for(int i = 0; i < aux_channel_size; i++) 
    if(aux_channel[i])
      free(aux_channel[i]);
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
          struct vmbus_channel * aux_channel[1];
          struct vmbus_channel * channel = _allocate_channel(1, aux_channel);
          struct hv_device * benchRet = netvsc_channel_to_device(channel);
          printf("%d\n", (*benchRet).dummy);
          _delete_channel(aux_channel, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct vmbus_channel * aux_channel[10000];
          struct vmbus_channel * channel = _allocate_channel(10000, aux_channel);
          struct hv_device * benchRet = netvsc_channel_to_device(channel);
          printf("%d\n", (*benchRet).dummy);
          _delete_channel(aux_channel, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
