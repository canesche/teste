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
struct n_tty_data {unsigned char* echo_buf; } ;

/* Variables and functions */
 int N_TTY_BUF_SIZE ; 

__attribute__((used)) static inline unsigned char *echo_buf_addr(struct n_tty_data *ldata, size_t i)
{
	return &ldata->echo_buf[i & (N_TTY_BUF_SIZE - 1)];
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
          unsigned long i = 100;
          int _len_ldata0 = 1;
          struct n_tty_data * ldata = (struct n_tty_data *) malloc(_len_ldata0*sizeof(struct n_tty_data));
          for(int _i0 = 0; _i0 < _len_ldata0; _i0++) {
              int _len_ldata__i0__echo_buf0 = 1;
          ldata[_i0].echo_buf = (unsigned char *) malloc(_len_ldata__i0__echo_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ldata__i0__echo_buf0; _j0++) {
            ldata[_i0].echo_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned char * benchRet = echo_buf_addr(ldata,i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_ldata0; _aux++) {
          free(ldata[_aux].echo_buf);
          }
          free(ldata);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long i = 255;
          int _len_ldata0 = 65025;
          struct n_tty_data * ldata = (struct n_tty_data *) malloc(_len_ldata0*sizeof(struct n_tty_data));
          for(int _i0 = 0; _i0 < _len_ldata0; _i0++) {
              int _len_ldata__i0__echo_buf0 = 1;
          ldata[_i0].echo_buf = (unsigned char *) malloc(_len_ldata__i0__echo_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ldata__i0__echo_buf0; _j0++) {
            ldata[_i0].echo_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned char * benchRet = echo_buf_addr(ldata,i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_ldata0; _aux++) {
          free(ldata[_aux].echo_buf);
          }
          free(ldata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long i = 10;
          int _len_ldata0 = 100;
          struct n_tty_data * ldata = (struct n_tty_data *) malloc(_len_ldata0*sizeof(struct n_tty_data));
          for(int _i0 = 0; _i0 < _len_ldata0; _i0++) {
              int _len_ldata__i0__echo_buf0 = 1;
          ldata[_i0].echo_buf = (unsigned char *) malloc(_len_ldata__i0__echo_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ldata__i0__echo_buf0; _j0++) {
            ldata[_i0].echo_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned char * benchRet = echo_buf_addr(ldata,i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_ldata0; _aux++) {
          free(ldata[_aux].echo_buf);
          }
          free(ldata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
