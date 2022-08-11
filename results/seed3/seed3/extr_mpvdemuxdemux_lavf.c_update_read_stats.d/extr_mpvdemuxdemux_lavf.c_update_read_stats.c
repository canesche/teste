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
struct nested_stream {scalar_t__ last_bytes; TYPE_1__* id; } ;
struct demuxer {int /*<<< orphan*/  total_unbuffered_read_bytes; TYPE_2__* priv; } ;
struct TYPE_4__ {int num_nested; struct nested_stream* nested; } ;
typedef  TYPE_2__ lavf_priv_t ;
typedef  scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ bytes_read; } ;

/* Variables and functions */

__attribute__((used)) static void update_read_stats(struct demuxer *demuxer)
{
    lavf_priv_t *priv = demuxer->priv;

    for (int n = 0; n < priv->num_nested; n++) {
        struct nested_stream *nest = &priv->nested[n];

        int64_t cur = nest->id->bytes_read;
        int64_t new = cur - nest->last_bytes;
        nest->last_bytes = cur;
        demuxer->total_unbuffered_read_bytes += new;
    }
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
          int _len_demuxer0 = 1;
          struct demuxer * demuxer = (struct demuxer *) malloc(_len_demuxer0*sizeof(struct demuxer));
          for(int _i0 = 0; _i0 < _len_demuxer0; _i0++) {
            demuxer[_i0].total_unbuffered_read_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv0 = 1;
          demuxer[_i0].priv = (struct TYPE_4__ *) malloc(_len_demuxer__i0__priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv0; _j0++) {
            demuxer[_i0].priv->num_nested = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv_nested0 = 1;
          demuxer[_i0].priv->nested = (struct nested_stream *) malloc(_len_demuxer__i0__priv_nested0*sizeof(struct nested_stream));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_nested0; _j0++) {
            demuxer[_i0].priv->nested->last_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv_nested_id0 = 1;
          demuxer[_i0].priv->nested->id = (struct TYPE_3__ *) malloc(_len_demuxer__i0__priv_nested_id0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_nested_id0; _j0++) {
            demuxer[_i0].priv->nested->id->bytes_read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          update_read_stats(demuxer);
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].priv);
          }
          free(demuxer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_demuxer0 = 65025;
          struct demuxer * demuxer = (struct demuxer *) malloc(_len_demuxer0*sizeof(struct demuxer));
          for(int _i0 = 0; _i0 < _len_demuxer0; _i0++) {
            demuxer[_i0].total_unbuffered_read_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv0 = 1;
          demuxer[_i0].priv = (struct TYPE_4__ *) malloc(_len_demuxer__i0__priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv0; _j0++) {
            demuxer[_i0].priv->num_nested = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv_nested0 = 1;
          demuxer[_i0].priv->nested = (struct nested_stream *) malloc(_len_demuxer__i0__priv_nested0*sizeof(struct nested_stream));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_nested0; _j0++) {
            demuxer[_i0].priv->nested->last_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv_nested_id0 = 1;
          demuxer[_i0].priv->nested->id = (struct TYPE_3__ *) malloc(_len_demuxer__i0__priv_nested_id0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_nested_id0; _j0++) {
            demuxer[_i0].priv->nested->id->bytes_read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          update_read_stats(demuxer);
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].priv);
          }
          free(demuxer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_demuxer0 = 100;
          struct demuxer * demuxer = (struct demuxer *) malloc(_len_demuxer0*sizeof(struct demuxer));
          for(int _i0 = 0; _i0 < _len_demuxer0; _i0++) {
            demuxer[_i0].total_unbuffered_read_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv0 = 1;
          demuxer[_i0].priv = (struct TYPE_4__ *) malloc(_len_demuxer__i0__priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv0; _j0++) {
            demuxer[_i0].priv->num_nested = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv_nested0 = 1;
          demuxer[_i0].priv->nested = (struct nested_stream *) malloc(_len_demuxer__i0__priv_nested0*sizeof(struct nested_stream));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_nested0; _j0++) {
            demuxer[_i0].priv->nested->last_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__priv_nested_id0 = 1;
          demuxer[_i0].priv->nested->id = (struct TYPE_3__ *) malloc(_len_demuxer__i0__priv_nested_id0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__priv_nested_id0; _j0++) {
            demuxer[_i0].priv->nested->id->bytes_read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          update_read_stats(demuxer);
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].priv);
          }
          free(demuxer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
