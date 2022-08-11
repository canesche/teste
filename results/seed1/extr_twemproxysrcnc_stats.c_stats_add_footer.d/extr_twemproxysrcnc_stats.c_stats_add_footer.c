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
typedef  char uint8_t ;
struct stats_buffer {scalar_t__ len; scalar_t__ size; char* data; } ;
struct stats {struct stats_buffer buf; } ;
typedef  int /*<<< orphan*/  rstatus_t ;

/* Variables and functions */
 int /*<<< orphan*/  NC_ERROR ; 
 int /*<<< orphan*/  NC_OK ; 

__attribute__((used)) static rstatus_t
stats_add_footer(struct stats *st)
{
    struct stats_buffer *buf;
    uint8_t *pos;

    buf = &st->buf;

    if (buf->len == buf->size) {
        return NC_ERROR;
    }

    /* overwrite the last byte and add a new byte */
    pos = buf->data + buf->len - 1;
    pos[0] = '}';
    pos[1] = '\n';
    buf->len += 1;

    return NC_OK;
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
          int _len_st0 = 1;
          struct stats * st = (struct stats *) malloc(_len_st0*sizeof(struct stats));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].buf.len = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].buf.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_st__i0__buf_data0 = 1;
          st[_i0].buf.data = (char *) malloc(_len_st__i0__buf_data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_st__i0__buf_data0; _j0++) {
            st[_i0].buf.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stats_add_footer(st);
          printf("%d\n", benchRet); 
          free(st);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_st0 = 65025;
          struct stats * st = (struct stats *) malloc(_len_st0*sizeof(struct stats));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].buf.len = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].buf.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_st__i0__buf_data0 = 1;
          st[_i0].buf.data = (char *) malloc(_len_st__i0__buf_data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_st__i0__buf_data0; _j0++) {
            st[_i0].buf.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stats_add_footer(st);
          printf("%d\n", benchRet); 
          free(st);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_st0 = 100;
          struct stats * st = (struct stats *) malloc(_len_st0*sizeof(struct stats));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].buf.len = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].buf.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_st__i0__buf_data0 = 1;
          st[_i0].buf.data = (char *) malloc(_len_st__i0__buf_data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_st__i0__buf_data0; _j0++) {
            st[_i0].buf.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stats_add_footer(st);
          printf("%d\n", benchRet); 
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
