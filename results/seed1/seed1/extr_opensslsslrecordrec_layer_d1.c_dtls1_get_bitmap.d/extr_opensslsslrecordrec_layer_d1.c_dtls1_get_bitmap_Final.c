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
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {TYPE_2__* d; } ;
struct TYPE_12__ {TYPE_3__ rlayer; } ;
struct TYPE_11__ {unsigned long epoch; scalar_t__ type; } ;
struct TYPE_8__ {scalar_t__ epoch; } ;
struct TYPE_9__ {unsigned long r_epoch; int /*<<< orphan*/  next_bitmap; TYPE_1__ unprocessed_rcds; int /*<<< orphan*/  bitmap; } ;
typedef  TYPE_4__ SSL3_RECORD ;
typedef  TYPE_5__ SSL ;
typedef  int /*<<< orphan*/  DTLS1_BITMAP ;

/* Variables and functions */
 scalar_t__ SSL3_RT_ALERT ; 
 scalar_t__ SSL3_RT_HANDSHAKE ; 

DTLS1_BITMAP *dtls1_get_bitmap(SSL *s, SSL3_RECORD *rr,
                               unsigned int *is_next_epoch)
{

    *is_next_epoch = 0;

    /* In current epoch, accept HM, CCS, DATA, & ALERT */
    if (rr->epoch == s->rlayer.d->r_epoch)
        return &s->rlayer.d->bitmap;

    /*
     * Only HM and ALERT messages can be from the next epoch and only if we
     * have already processed all of the unprocessed records from the last
     * epoch
     */
    else if (rr->epoch == (unsigned long)(s->rlayer.d->r_epoch + 1) &&
             s->rlayer.d->unprocessed_rcds.epoch != s->rlayer.d->r_epoch &&
             (rr->type == SSL3_RT_HANDSHAKE || rr->type == SSL3_RT_ALERT)) {
        *is_next_epoch = 1;
        return &s->rlayer.d->next_bitmap;
    }

    return NULL;
}


// ------------------------------------------------------------------------- //




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
          int _len_s0 = 1;
          struct TYPE_12__ * s = (struct TYPE_12__ *) malloc(_len_s0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__rlayer_d0 = 1;
          s[_i0].rlayer.d = (struct TYPE_9__ *) malloc(_len_s__i0__rlayer_d0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_s__i0__rlayer_d0; _j0++) {
            s[_i0].rlayer.d->r_epoch = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].rlayer.d->next_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].rlayer.d->unprocessed_rcds.epoch = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].rlayer.d->bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rr0 = 1;
          struct TYPE_11__ * rr = (struct TYPE_11__ *) malloc(_len_rr0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_rr0; _i0++) {
            rr[_i0].epoch = ((-2 * (next_i()%2)) + 1) * next_i();
        rr[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_is_next_epoch0 = 1;
          unsigned int * is_next_epoch = (unsigned int *) malloc(_len_is_next_epoch0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_is_next_epoch0; _i0++) {
            is_next_epoch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = dtls1_get_bitmap(s,rr,is_next_epoch);
          printf("%d\n", (*benchRet)); 
          free(s);
          free(rr);
          free(is_next_epoch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
