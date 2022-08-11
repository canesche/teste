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
struct sk_buff {unsigned char* data; } ;

/* Variables and functions */
#define  ROSE_CALL_ACCEPTED 133 
#define  ROSE_CALL_REQUEST 132 
#define  ROSE_CLEAR_CONFIRMATION 131 
#define  ROSE_CLEAR_REQUEST 130 
 unsigned char ROSE_DATA ; 
 unsigned char ROSE_D_BIT ; 
 int ROSE_ILLEGAL ; 
 unsigned char ROSE_M_BIT ; 
 unsigned char ROSE_Q_BIT ; 
#define  ROSE_RESET_CONFIRMATION 129 
#define  ROSE_RESET_REQUEST 128 
 unsigned char ROSE_RNR ; 
 unsigned char ROSE_RR ; 

int rose_decode(struct sk_buff *skb, int *ns, int *nr, int *q, int *d, int *m)
{
	unsigned char *frame;

	frame = skb->data;

	*ns = *nr = *q = *d = *m = 0;

	switch (frame[2]) {
	case ROSE_CALL_REQUEST:
	case ROSE_CALL_ACCEPTED:
	case ROSE_CLEAR_REQUEST:
	case ROSE_CLEAR_CONFIRMATION:
	case ROSE_RESET_REQUEST:
	case ROSE_RESET_CONFIRMATION:
		return frame[2];
	default:
		break;
	}

	if ((frame[2] & 0x1F) == ROSE_RR  ||
	    (frame[2] & 0x1F) == ROSE_RNR) {
		*nr = (frame[2] >> 5) & 0x07;
		return frame[2] & 0x1F;
	}

	if ((frame[2] & 0x01) == ROSE_DATA) {
		*q  = (frame[0] & ROSE_Q_BIT) == ROSE_Q_BIT;
		*d  = (frame[0] & ROSE_D_BIT) == ROSE_D_BIT;
		*m  = (frame[2] & ROSE_M_BIT) == ROSE_M_BIT;
		*nr = (frame[2] >> 5) & 0x07;
		*ns = (frame[2] >> 1) & 0x07;
		return ROSE_DATA;
	}

	return ROSE_ILLEGAL;
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
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              int _len_skb__i0__data0 = 1;
          skb[_i0].data = (unsigned char *) malloc(_len_skb__i0__data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_skb__i0__data0; _j0++) {
            skb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ns0 = 1;
          int * ns = (int *) malloc(_len_ns0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
            ns[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nr0 = 1;
          int * nr = (int *) malloc(_len_nr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nr0; _i0++) {
            nr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 1;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_d0 = 1;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 1;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rose_decode(skb,ns,nr,q,d,m);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].data);
          }
          free(skb);
          free(ns);
          free(nr);
          free(q);
          free(d);
          free(m);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              int _len_skb__i0__data0 = 1;
          skb[_i0].data = (unsigned char *) malloc(_len_skb__i0__data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_skb__i0__data0; _j0++) {
            skb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ns0 = 65025;
          int * ns = (int *) malloc(_len_ns0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
            ns[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nr0 = 65025;
          int * nr = (int *) malloc(_len_nr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nr0; _i0++) {
            nr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 65025;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_d0 = 65025;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 65025;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rose_decode(skb,ns,nr,q,d,m);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].data);
          }
          free(skb);
          free(ns);
          free(nr);
          free(q);
          free(d);
          free(m);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              int _len_skb__i0__data0 = 1;
          skb[_i0].data = (unsigned char *) malloc(_len_skb__i0__data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_skb__i0__data0; _j0++) {
            skb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ns0 = 100;
          int * ns = (int *) malloc(_len_ns0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
            ns[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nr0 = 100;
          int * nr = (int *) malloc(_len_nr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nr0; _i0++) {
            nr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 100;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_d0 = 100;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 100;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rose_decode(skb,ns,nr,q,d,m);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].data);
          }
          free(skb);
          free(ns);
          free(nr);
          free(q);
          free(d);
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
