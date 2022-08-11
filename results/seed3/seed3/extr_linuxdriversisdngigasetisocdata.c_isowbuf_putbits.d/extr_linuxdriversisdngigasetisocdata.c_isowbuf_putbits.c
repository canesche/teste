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
typedef  int u32 ;
struct isowbuf_t {int write; int wbits; int* data; } ;

/* Variables and functions */
 int BAS_OUTBUFSIZE ; 

__attribute__((used)) static inline void isowbuf_putbits(struct isowbuf_t *iwb, u32 data, int nbits)
{
	int write = iwb->write;
	data <<= iwb->wbits;
	data |= iwb->data[write];
	nbits += iwb->wbits;
	while (nbits >= 8) {
		iwb->data[write++] = data & 0xff;
		write %= BAS_OUTBUFSIZE;
		data >>= 8;
		nbits -= 8;
	}
	iwb->wbits = nbits;
	iwb->data[write] = data & 0xff;
	iwb->write = write;
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
          int data = 100;
          int nbits = 100;
          int _len_iwb0 = 1;
          struct isowbuf_t * iwb = (struct isowbuf_t *) malloc(_len_iwb0*sizeof(struct isowbuf_t));
          for(int _i0 = 0; _i0 < _len_iwb0; _i0++) {
            iwb[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
        iwb[_i0].wbits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iwb__i0__data0 = 1;
          iwb[_i0].data = (int *) malloc(_len_iwb__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iwb__i0__data0; _j0++) {
            iwb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isowbuf_putbits(iwb,data,nbits);
          for(int _aux = 0; _aux < _len_iwb0; _aux++) {
          free(iwb[_aux].data);
          }
          free(iwb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int data = 255;
          int nbits = 255;
          int _len_iwb0 = 65025;
          struct isowbuf_t * iwb = (struct isowbuf_t *) malloc(_len_iwb0*sizeof(struct isowbuf_t));
          for(int _i0 = 0; _i0 < _len_iwb0; _i0++) {
            iwb[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
        iwb[_i0].wbits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iwb__i0__data0 = 1;
          iwb[_i0].data = (int *) malloc(_len_iwb__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iwb__i0__data0; _j0++) {
            iwb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isowbuf_putbits(iwb,data,nbits);
          for(int _aux = 0; _aux < _len_iwb0; _aux++) {
          free(iwb[_aux].data);
          }
          free(iwb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int data = 10;
          int nbits = 10;
          int _len_iwb0 = 100;
          struct isowbuf_t * iwb = (struct isowbuf_t *) malloc(_len_iwb0*sizeof(struct isowbuf_t));
          for(int _i0 = 0; _i0 < _len_iwb0; _i0++) {
            iwb[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
        iwb[_i0].wbits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iwb__i0__data0 = 1;
          iwb[_i0].data = (int *) malloc(_len_iwb__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iwb__i0__data0; _j0++) {
            iwb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isowbuf_putbits(iwb,data,nbits);
          for(int _aux = 0; _aux < _len_iwb0; _aux++) {
          free(iwb[_aux].data);
          }
          free(iwb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
