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
struct pushpull {char* buf; unsigned int buflen; unsigned int ofs; unsigned int reserve; } ;

/* Variables and functions */

__attribute__((used)) static inline void init_pushpull(struct pushpull *pp, char *buf,
				 unsigned buflen, unsigned ofs,
				 unsigned reserve)
{
	pp->buf = buf;
	pp->buflen = buflen;
	pp->ofs = ofs;
	pp->reserve = reserve;
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
          unsigned int buflen = 100;
          unsigned int ofs = 100;
          unsigned int reserve = 100;
          int _len_pp0 = 1;
          struct pushpull * pp = (struct pushpull *) malloc(_len_pp0*sizeof(struct pushpull));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
              int _len_pp__i0__buf0 = 1;
          pp[_i0].buf = (char *) malloc(_len_pp__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_pp__i0__buf0; _j0++) {
            pp[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pp[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
        pp[_i0].ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        pp[_i0].reserve = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_pushpull(pp,buf,buflen,ofs,reserve);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].buf);
          }
          free(pp);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int buflen = 255;
          unsigned int ofs = 255;
          unsigned int reserve = 255;
          int _len_pp0 = 65025;
          struct pushpull * pp = (struct pushpull *) malloc(_len_pp0*sizeof(struct pushpull));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
              int _len_pp__i0__buf0 = 1;
          pp[_i0].buf = (char *) malloc(_len_pp__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_pp__i0__buf0; _j0++) {
            pp[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pp[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
        pp[_i0].ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        pp[_i0].reserve = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_pushpull(pp,buf,buflen,ofs,reserve);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].buf);
          }
          free(pp);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int buflen = 10;
          unsigned int ofs = 10;
          unsigned int reserve = 10;
          int _len_pp0 = 100;
          struct pushpull * pp = (struct pushpull *) malloc(_len_pp0*sizeof(struct pushpull));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
              int _len_pp__i0__buf0 = 1;
          pp[_i0].buf = (char *) malloc(_len_pp__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_pp__i0__buf0; _j0++) {
            pp[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pp[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
        pp[_i0].ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        pp[_i0].reserve = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_pushpull(pp,buf,buflen,ofs,reserve);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].buf);
          }
          free(pp);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
