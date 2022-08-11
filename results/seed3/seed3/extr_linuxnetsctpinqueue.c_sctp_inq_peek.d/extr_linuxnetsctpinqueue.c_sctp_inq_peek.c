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

/* Type definitions */
struct sctp_inq {struct sctp_chunk* in_progress; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {scalar_t__ chunk_end; scalar_t__ pdiscard; scalar_t__ end_of_packet; scalar_t__ singleton; } ;

/* Variables and functions */

struct sctp_chunkhdr *sctp_inq_peek(struct sctp_inq *queue)
{
	struct sctp_chunk *chunk;
	struct sctp_chunkhdr *ch = NULL;

	chunk = queue->in_progress;
	/* If there is no more chunks in this packet, say so */
	if (chunk->singleton ||
	    chunk->end_of_packet ||
	    chunk->pdiscard)
		    return NULL;

	ch = (struct sctp_chunkhdr *)chunk->chunk_end;

	return ch;
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
          int _len_queue0 = 1;
          struct sctp_inq * queue = (struct sctp_inq *) malloc(_len_queue0*sizeof(struct sctp_inq));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
              int _len_queue__i0__in_progress0 = 1;
          queue[_i0].in_progress = (struct sctp_chunk *) malloc(_len_queue__i0__in_progress0*sizeof(struct sctp_chunk));
          for(int _j0 = 0; _j0 < _len_queue__i0__in_progress0; _j0++) {
            queue[_i0].in_progress->chunk_end = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].in_progress->pdiscard = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].in_progress->end_of_packet = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].in_progress->singleton = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sctp_chunkhdr * benchRet = sctp_inq_peek(queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(queue[_aux].in_progress);
          }
          free(queue);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_queue0 = 65025;
          struct sctp_inq * queue = (struct sctp_inq *) malloc(_len_queue0*sizeof(struct sctp_inq));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
              int _len_queue__i0__in_progress0 = 1;
          queue[_i0].in_progress = (struct sctp_chunk *) malloc(_len_queue__i0__in_progress0*sizeof(struct sctp_chunk));
          for(int _j0 = 0; _j0 < _len_queue__i0__in_progress0; _j0++) {
            queue[_i0].in_progress->chunk_end = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].in_progress->pdiscard = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].in_progress->end_of_packet = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].in_progress->singleton = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sctp_chunkhdr * benchRet = sctp_inq_peek(queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(queue[_aux].in_progress);
          }
          free(queue);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_queue0 = 100;
          struct sctp_inq * queue = (struct sctp_inq *) malloc(_len_queue0*sizeof(struct sctp_inq));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
              int _len_queue__i0__in_progress0 = 1;
          queue[_i0].in_progress = (struct sctp_chunk *) malloc(_len_queue__i0__in_progress0*sizeof(struct sctp_chunk));
          for(int _j0 = 0; _j0 < _len_queue__i0__in_progress0; _j0++) {
            queue[_i0].in_progress->chunk_end = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].in_progress->pdiscard = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].in_progress->end_of_packet = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].in_progress->singleton = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sctp_chunkhdr * benchRet = sctp_inq_peek(queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(queue[_aux].in_progress);
          }
          free(queue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
