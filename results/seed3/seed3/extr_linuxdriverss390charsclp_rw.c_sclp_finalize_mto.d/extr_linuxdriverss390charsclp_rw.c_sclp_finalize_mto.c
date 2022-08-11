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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct sclp_buffer {struct msg_buf* current_msg; scalar_t__ current_length; int /*<<< orphan*/ * current_line; int /*<<< orphan*/  char_sum; int /*<<< orphan*/  messages; struct sccb_header* sccb; } ;
struct sccb_header {int /*<<< orphan*/  length; } ;
struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_6__ {int /*<<< orphan*/  length; } ;
struct TYPE_5__ {int /*<<< orphan*/  length; } ;
struct TYPE_7__ {TYPE_2__ mto; TYPE_1__ header; } ;
struct msg_buf {TYPE_4__ header; TYPE_3__ mdb; } ;

/* Variables and functions */

__attribute__((used)) static void
sclp_finalize_mto(struct sclp_buffer *buffer)
{
	struct sccb_header *sccb;
	struct msg_buf *msg;

	/*
	 * update values of sizes
	 * (SCCB, Event(Message) Buffer, Message Data Block)
	 */
	sccb = buffer->sccb;
	msg = buffer->current_msg;
	msg->header.length += buffer->current_length;
	msg->mdb.header.length += buffer->current_length;
	msg->mdb.mto.length += buffer->current_length;
	sccb->length += msg->header.length;

	/*
	 * count number of buffered messages (= number of Message Text
	 * Objects) and number of buffered characters
	 * for the SCCB currently used for buffering and at all
	 */
	buffer->messages++;
	buffer->char_sum += buffer->current_length;

	buffer->current_line = NULL;
	buffer->current_length = 0;
	buffer->current_msg = NULL;
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
          int _len_buffer0 = 1;
          struct sclp_buffer * buffer = (struct sclp_buffer *) malloc(_len_buffer0*sizeof(struct sclp_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__current_msg0 = 1;
          buffer[_i0].current_msg = (struct msg_buf *) malloc(_len_buffer__i0__current_msg0*sizeof(struct msg_buf));
          for(int _j0 = 0; _j0 < _len_buffer__i0__current_msg0; _j0++) {
            buffer[_i0].current_msg->header.length = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].current_msg->mdb.mto.length = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].current_msg->mdb.header.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        buffer[_i0].current_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buffer__i0__current_line0 = 1;
          buffer[_i0].current_line = (int *) malloc(_len_buffer__i0__current_line0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buffer__i0__current_line0; _j0++) {
            buffer[_i0].current_line[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        buffer[_i0].char_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].messages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buffer__i0__sccb0 = 1;
          buffer[_i0].sccb = (struct sccb_header *) malloc(_len_buffer__i0__sccb0*sizeof(struct sccb_header));
          for(int _j0 = 0; _j0 < _len_buffer__i0__sccb0; _j0++) {
            buffer[_i0].sccb->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sclp_finalize_mto(buffer);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].current_msg);
          }
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].current_line);
          }
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].sccb);
          }
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_buffer0 = 65025;
          struct sclp_buffer * buffer = (struct sclp_buffer *) malloc(_len_buffer0*sizeof(struct sclp_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__current_msg0 = 1;
          buffer[_i0].current_msg = (struct msg_buf *) malloc(_len_buffer__i0__current_msg0*sizeof(struct msg_buf));
          for(int _j0 = 0; _j0 < _len_buffer__i0__current_msg0; _j0++) {
            buffer[_i0].current_msg->header.length = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].current_msg->mdb.mto.length = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].current_msg->mdb.header.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        buffer[_i0].current_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buffer__i0__current_line0 = 1;
          buffer[_i0].current_line = (int *) malloc(_len_buffer__i0__current_line0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buffer__i0__current_line0; _j0++) {
            buffer[_i0].current_line[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        buffer[_i0].char_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].messages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buffer__i0__sccb0 = 1;
          buffer[_i0].sccb = (struct sccb_header *) malloc(_len_buffer__i0__sccb0*sizeof(struct sccb_header));
          for(int _j0 = 0; _j0 < _len_buffer__i0__sccb0; _j0++) {
            buffer[_i0].sccb->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sclp_finalize_mto(buffer);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].current_msg);
          }
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].current_line);
          }
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].sccb);
          }
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_buffer0 = 100;
          struct sclp_buffer * buffer = (struct sclp_buffer *) malloc(_len_buffer0*sizeof(struct sclp_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
              int _len_buffer__i0__current_msg0 = 1;
          buffer[_i0].current_msg = (struct msg_buf *) malloc(_len_buffer__i0__current_msg0*sizeof(struct msg_buf));
          for(int _j0 = 0; _j0 < _len_buffer__i0__current_msg0; _j0++) {
            buffer[_i0].current_msg->header.length = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].current_msg->mdb.mto.length = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].current_msg->mdb.header.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        buffer[_i0].current_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buffer__i0__current_line0 = 1;
          buffer[_i0].current_line = (int *) malloc(_len_buffer__i0__current_line0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buffer__i0__current_line0; _j0++) {
            buffer[_i0].current_line[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        buffer[_i0].char_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].messages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buffer__i0__sccb0 = 1;
          buffer[_i0].sccb = (struct sccb_header *) malloc(_len_buffer__i0__sccb0*sizeof(struct sccb_header));
          for(int _j0 = 0; _j0 < _len_buffer__i0__sccb0; _j0++) {
            buffer[_i0].sccb->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sclp_finalize_mto(buffer);
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].current_msg);
          }
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].current_line);
          }
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].sccb);
          }
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
