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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {size_t outgoingSequence; } ;
struct TYPE_8__ {TYPE_2__ netchan; TYPE_4__* frames; } ;
typedef  TYPE_3__ client_t ;
struct TYPE_9__ {int num_entities; int first_entity; } ;
typedef  TYPE_4__ clientSnapshot_t ;
struct TYPE_10__ {int numSnapshotEntities; TYPE_1__* snapshotEntities; TYPE_3__* clients; } ;
struct TYPE_6__ {int number; } ;

/* Variables and functions */
 size_t PACKET_MASK ; 
 TYPE_5__ svs ; 

int SV_BotGetSnapshotEntity( int client, int sequence ) {
	client_t			*cl;
	clientSnapshot_t	*frame;

	cl = &svs.clients[client];
	frame = &cl->frames[cl->netchan.outgoingSequence & PACKET_MASK];
	if (sequence < 0 || sequence >= frame->num_entities) {
		return -1;
	}
	return svs.snapshotEntities[(frame->first_entity + sequence) % svs.numSnapshotEntities].number;
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
          int client = 100;
          int sequence = 100;
          int benchRet = SV_BotGetSnapshotEntity(client,sequence);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int client = 255;
          int sequence = 255;
          int benchRet = SV_BotGetSnapshotEntity(client,sequence);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int client = 10;
          int sequence = 10;
          int benchRet = SV_BotGetSnapshotEntity(client,sequence);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
