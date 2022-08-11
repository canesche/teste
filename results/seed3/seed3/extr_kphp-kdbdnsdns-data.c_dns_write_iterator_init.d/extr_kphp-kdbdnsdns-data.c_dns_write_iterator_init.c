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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned char* start; unsigned char* wptr; int olen; int avail_out; int /*<<< orphan*/  domain_buff; int /*<<< orphan*/  domain_wptr; scalar_t__ domains; } ;
typedef  TYPE_1__ dns_write_iterator_t ;

/* Variables and functions */

__attribute__((used)) static void dns_write_iterator_init (dns_write_iterator_t *B, unsigned char *out, int olen) {
  B->start = B->wptr = out;
  B->olen = B->avail_out = olen;
  B->domains = 0;
  B->domain_wptr = B->domain_buff;
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
          int olen = 100;
          int _len_B0 = 1;
          struct TYPE_3__ * B = (struct TYPE_3__ *) malloc(_len_B0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
              int _len_B__i0__start0 = 1;
          B[_i0].start = (unsigned char *) malloc(_len_B__i0__start0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_B__i0__start0; _j0++) {
            B[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_B__i0__wptr0 = 1;
          B[_i0].wptr = (unsigned char *) malloc(_len_B__i0__wptr0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_B__i0__wptr0; _j0++) {
            B[_i0].wptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        B[_i0].olen = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].avail_out = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].domain_buff = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].domain_wptr = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].domains = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          unsigned char * out = (unsigned char *) malloc(_len_out0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dns_write_iterator_init(B,out,olen);
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].start);
          }
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].wptr);
          }
          free(B);
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int olen = 255;
          int _len_B0 = 65025;
          struct TYPE_3__ * B = (struct TYPE_3__ *) malloc(_len_B0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
              int _len_B__i0__start0 = 1;
          B[_i0].start = (unsigned char *) malloc(_len_B__i0__start0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_B__i0__start0; _j0++) {
            B[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_B__i0__wptr0 = 1;
          B[_i0].wptr = (unsigned char *) malloc(_len_B__i0__wptr0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_B__i0__wptr0; _j0++) {
            B[_i0].wptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        B[_i0].olen = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].avail_out = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].domain_buff = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].domain_wptr = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].domains = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          unsigned char * out = (unsigned char *) malloc(_len_out0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dns_write_iterator_init(B,out,olen);
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].start);
          }
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].wptr);
          }
          free(B);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int olen = 10;
          int _len_B0 = 100;
          struct TYPE_3__ * B = (struct TYPE_3__ *) malloc(_len_B0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
              int _len_B__i0__start0 = 1;
          B[_i0].start = (unsigned char *) malloc(_len_B__i0__start0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_B__i0__start0; _j0++) {
            B[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_B__i0__wptr0 = 1;
          B[_i0].wptr = (unsigned char *) malloc(_len_B__i0__wptr0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_B__i0__wptr0; _j0++) {
            B[_i0].wptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        B[_i0].olen = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].avail_out = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].domain_buff = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].domain_wptr = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].domains = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          unsigned char * out = (unsigned char *) malloc(_len_out0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dns_write_iterator_init(B,out,olen);
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].start);
          }
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].wptr);
          }
          free(B);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
