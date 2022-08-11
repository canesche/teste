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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int* data; } ;
struct TYPE_6__ {int data_type; int pkt_offset; } ;
typedef  TYPE_1__ IEC61937Context ;
typedef  TYPE_2__ AVPacket ;
typedef  TYPE_3__ AVFormatContext ;

/* Variables and functions */
 int AC3_FRAME_SIZE ; 
 int IEC61937_AC3 ; 

__attribute__((used)) static int spdif_header_ac3(AVFormatContext *s, AVPacket *pkt)
{
    IEC61937Context *ctx = s->priv_data;
    int bitstream_mode = pkt->data[5] & 0x7;

    ctx->data_type  = IEC61937_AC3 | (bitstream_mode << 8);
    ctx->pkt_offset = AC3_FRAME_SIZE << 2;
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
          int _len_s0 = 1;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->data_type = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].priv_data->pkt_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkt0 = 1;
          struct TYPE_7__ * pkt = (struct TYPE_7__ *) malloc(_len_pkt0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
              int _len_pkt__i0__data0 = 1;
          pkt[_i0].data = (int *) malloc(_len_pkt__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt__i0__data0; _j0++) {
            pkt[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = spdif_header_ac3(s,pkt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].data);
          }
          free(pkt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->data_type = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].priv_data->pkt_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkt0 = 65025;
          struct TYPE_7__ * pkt = (struct TYPE_7__ *) malloc(_len_pkt0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
              int _len_pkt__i0__data0 = 1;
          pkt[_i0].data = (int *) malloc(_len_pkt__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt__i0__data0; _j0++) {
            pkt[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = spdif_header_ac3(s,pkt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].data);
          }
          free(pkt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->data_type = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].priv_data->pkt_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkt0 = 100;
          struct TYPE_7__ * pkt = (struct TYPE_7__ *) malloc(_len_pkt0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
              int _len_pkt__i0__data0 = 1;
          pkt[_i0].data = (int *) malloc(_len_pkt__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt__i0__data0; _j0++) {
            pkt[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = spdif_header_ac3(s,pkt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].data);
          }
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
