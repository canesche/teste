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
typedef  int /*<<< orphan*/  AVStream ;
typedef  int /*<<< orphan*/  AVFormatContext ;

/* Variables and functions */

void ff_sdp_write_media(char *buff, int size, AVStream *st, int idx,
                        const char *dest_addr, const char *dest_type,
                        int port, int ttl, AVFormatContext *fmt)
{
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
          int size = 100;
          int idx = 100;
          int port = 100;
          int ttl = 100;
          int _len_buff0 = 1;
          char * buff = (char *) malloc(_len_buff0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buff0; _i0++) {
            buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st0 = 1;
          int * st = (int *) malloc(_len_st0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_addr0 = 1;
          const char * dest_addr = (const char *) malloc(_len_dest_addr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dest_addr0; _i0++) {
            dest_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_type0 = 1;
          const char * dest_type = (const char *) malloc(_len_dest_type0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dest_type0; _i0++) {
            dest_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fmt0 = 1;
          int * fmt = (int *) malloc(_len_fmt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_sdp_write_media(buff,size,st,idx,dest_addr,dest_type,port,ttl,fmt);
          free(buff);
          free(st);
          free(dest_addr);
          free(dest_type);
          free(fmt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int idx = 255;
          int port = 255;
          int ttl = 255;
          int _len_buff0 = 65025;
          char * buff = (char *) malloc(_len_buff0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buff0; _i0++) {
            buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st0 = 65025;
          int * st = (int *) malloc(_len_st0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_addr0 = 65025;
          const char * dest_addr = (const char *) malloc(_len_dest_addr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dest_addr0; _i0++) {
            dest_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_type0 = 65025;
          const char * dest_type = (const char *) malloc(_len_dest_type0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dest_type0; _i0++) {
            dest_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fmt0 = 65025;
          int * fmt = (int *) malloc(_len_fmt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_sdp_write_media(buff,size,st,idx,dest_addr,dest_type,port,ttl,fmt);
          free(buff);
          free(st);
          free(dest_addr);
          free(dest_type);
          free(fmt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int idx = 10;
          int port = 10;
          int ttl = 10;
          int _len_buff0 = 100;
          char * buff = (char *) malloc(_len_buff0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buff0; _i0++) {
            buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st0 = 100;
          int * st = (int *) malloc(_len_st0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_addr0 = 100;
          const char * dest_addr = (const char *) malloc(_len_dest_addr0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dest_addr0; _i0++) {
            dest_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_type0 = 100;
          const char * dest_type = (const char *) malloc(_len_dest_type0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dest_type0; _i0++) {
            dest_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fmt0 = 100;
          int * fmt = (int *) malloc(_len_fmt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_sdp_write_media(buff,size,st,idx,dest_addr,dest_type,port,ttl,fmt);
          free(buff);
          free(st);
          free(dest_addr);
          free(dest_type);
          free(fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
