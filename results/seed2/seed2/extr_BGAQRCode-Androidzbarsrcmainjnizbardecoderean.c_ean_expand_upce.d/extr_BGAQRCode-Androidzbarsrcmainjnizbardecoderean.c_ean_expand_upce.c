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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int* raw; } ;
typedef  TYPE_1__ ean_pass_t ;
struct TYPE_6__ {int* buf; } ;
typedef  TYPE_2__ ean_decoder_t ;

/* Variables and functions */

__attribute__((used)) static inline void ean_expand_upce (ean_decoder_t *ean,
                                    ean_pass_t *pass)
{
    int i = 0;
    unsigned char decode;
    /* parity encoded digit is checksum */
    ean->buf[12] = pass->raw[i++];

    decode = pass->raw[6] & 0xf;
    ean->buf[0] = 0;
    ean->buf[1] = 0;
    ean->buf[2] = pass->raw[i++] & 0xf;
    ean->buf[3] = pass->raw[i++] & 0xf;
    ean->buf[4] = (decode < 3) ? decode : pass->raw[i++] & 0xf;
    ean->buf[5] = (decode < 4) ? 0 : pass->raw[i++] & 0xf;
    ean->buf[6] = (decode < 5) ? 0 : pass->raw[i++] & 0xf;
    ean->buf[7] = 0;
    ean->buf[8] = 0;
    ean->buf[9] = (decode < 3) ? pass->raw[i++] & 0xf : 0;
    ean->buf[10] = (decode < 4) ? pass->raw[i++] & 0xf : 0;
    ean->buf[11] = (decode < 5) ? pass->raw[i] & 0xf : decode;
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
          int _len_ean0 = 1;
          struct TYPE_6__ * ean = (struct TYPE_6__ *) malloc(_len_ean0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ean0; _i0++) {
              int _len_ean__i0__buf0 = 1;
          ean[_i0].buf = (int *) malloc(_len_ean__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ean__i0__buf0; _j0++) {
            ean[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pass0 = 1;
          struct TYPE_5__ * pass = (struct TYPE_5__ *) malloc(_len_pass0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pass0; _i0++) {
              int _len_pass__i0__raw0 = 1;
          pass[_i0].raw = (int *) malloc(_len_pass__i0__raw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pass__i0__raw0; _j0++) {
            pass[_i0].raw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ean_expand_upce(ean,pass);
          for(int _aux = 0; _aux < _len_ean0; _aux++) {
          free(ean[_aux].buf);
          }
          free(ean);
          for(int _aux = 0; _aux < _len_pass0; _aux++) {
          free(pass[_aux].raw);
          }
          free(pass);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ean0 = 65025;
          struct TYPE_6__ * ean = (struct TYPE_6__ *) malloc(_len_ean0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ean0; _i0++) {
              int _len_ean__i0__buf0 = 1;
          ean[_i0].buf = (int *) malloc(_len_ean__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ean__i0__buf0; _j0++) {
            ean[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pass0 = 65025;
          struct TYPE_5__ * pass = (struct TYPE_5__ *) malloc(_len_pass0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pass0; _i0++) {
              int _len_pass__i0__raw0 = 1;
          pass[_i0].raw = (int *) malloc(_len_pass__i0__raw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pass__i0__raw0; _j0++) {
            pass[_i0].raw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ean_expand_upce(ean,pass);
          for(int _aux = 0; _aux < _len_ean0; _aux++) {
          free(ean[_aux].buf);
          }
          free(ean);
          for(int _aux = 0; _aux < _len_pass0; _aux++) {
          free(pass[_aux].raw);
          }
          free(pass);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ean0 = 100;
          struct TYPE_6__ * ean = (struct TYPE_6__ *) malloc(_len_ean0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ean0; _i0++) {
              int _len_ean__i0__buf0 = 1;
          ean[_i0].buf = (int *) malloc(_len_ean__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ean__i0__buf0; _j0++) {
            ean[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pass0 = 100;
          struct TYPE_5__ * pass = (struct TYPE_5__ *) malloc(_len_pass0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pass0; _i0++) {
              int _len_pass__i0__raw0 = 1;
          pass[_i0].raw = (int *) malloc(_len_pass__i0__raw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pass__i0__raw0; _j0++) {
            pass[_i0].raw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ean_expand_upce(ean,pass);
          for(int _aux = 0; _aux < _len_ean0; _aux++) {
          free(ean[_aux].buf);
          }
          free(ean);
          for(int _aux = 0; _aux < _len_pass0; _aux++) {
          free(pass[_aux].raw);
          }
          free(pass);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
