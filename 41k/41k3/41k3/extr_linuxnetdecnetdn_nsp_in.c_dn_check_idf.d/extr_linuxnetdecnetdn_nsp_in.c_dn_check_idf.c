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

/* Variables and functions */

__attribute__((used)) static inline int dn_check_idf(unsigned char **pptr, int *len, unsigned char max, unsigned char follow_on)
{
	unsigned char *ptr = *pptr;
	unsigned char flen = *ptr++;

	(*len)--;
	if (flen > max)
		return -1;
	if ((flen + follow_on) > *len)
		return -1;

	*len -= flen;
	*pptr = ptr + flen;
	return 0;
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
          unsigned char max = 100;
          unsigned char follow_on = 100;
          int _len_pptr0 = 1;
          unsigned char ** pptr = (unsigned char **) malloc(_len_pptr0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_pptr0; _i0++) {
            int _len_pptr1 = 1;
            pptr[_i0] = (unsigned char *) malloc(_len_pptr1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_pptr1; _i1++) {
              pptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dn_check_idf(pptr,len,max,follow_on);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_pptr0; i1++) {
            int _len_pptr1 = 1;
              free(pptr[i1]);
          }
          free(pptr);
          free(len);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char max = 255;
          unsigned char follow_on = 255;
          int _len_pptr0 = 65025;
          unsigned char ** pptr = (unsigned char **) malloc(_len_pptr0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_pptr0; _i0++) {
            int _len_pptr1 = 1;
            pptr[_i0] = (unsigned char *) malloc(_len_pptr1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_pptr1; _i1++) {
              pptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 65025;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dn_check_idf(pptr,len,max,follow_on);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_pptr0; i1++) {
            int _len_pptr1 = 1;
              free(pptr[i1]);
          }
          free(pptr);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char max = 10;
          unsigned char follow_on = 10;
          int _len_pptr0 = 100;
          unsigned char ** pptr = (unsigned char **) malloc(_len_pptr0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_pptr0; _i0++) {
            int _len_pptr1 = 1;
            pptr[_i0] = (unsigned char *) malloc(_len_pptr1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_pptr1; _i1++) {
              pptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 100;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dn_check_idf(pptr,len,max,follow_on);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_pptr0; i1++) {
            int _len_pptr1 = 1;
              free(pptr[i1]);
          }
          free(pptr);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
