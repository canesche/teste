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
typedef  int uint8_t ;
typedef  int uint32_t ;
struct TYPE_3__ {int first_gop_closed; } ;
typedef  TYPE_1__ GXFStreamContext ;

/* Variables and functions */

__attribute__((used)) static int gxf_parse_mpeg_frame(GXFStreamContext *sc, const uint8_t *buf, int size)
{
    uint32_t c=-1;
    int i;
    for(i=0; i<size-4 && c!=0x100; i++){
        c = (c<<8) + buf[i];
        if(c == 0x1B8 && sc->first_gop_closed == -1) /* GOP start code */
            sc->first_gop_closed= (buf[i+4]>>6)&1;
    }
    return (buf[i+1]>>3)&7;
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
          int _len_sc0 = 1;
          struct TYPE_3__ * sc = (struct TYPE_3__ *) malloc(_len_sc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].first_gop_closed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gxf_parse_mpeg_frame(sc,buf,size);
          printf("%d\n", benchRet); 
          free(sc);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int _len_sc0 = 65025;
          struct TYPE_3__ * sc = (struct TYPE_3__ *) malloc(_len_sc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].first_gop_closed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gxf_parse_mpeg_frame(sc,buf,size);
          printf("%d\n", benchRet); 
          free(sc);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int _len_sc0 = 100;
          struct TYPE_3__ * sc = (struct TYPE_3__ *) malloc(_len_sc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].first_gop_closed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gxf_parse_mpeg_frame(sc,buf,size);
          printf("%d\n", benchRet); 
          free(sc);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
