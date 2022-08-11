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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* frame; } ;
struct TYPE_4__ {int* linesize; } ;
typedef  TYPE_2__ SeqVideoContext ;

/* Variables and functions */

__attribute__((used)) static const unsigned char *seq_decode_op3(SeqVideoContext *seq,
                                           const unsigned char *src,
                                           const unsigned char *src_end,
                                           unsigned char *dst)
{
    int pos, offset;

    do {
        if (src_end - src < 2)
            return NULL;
        pos = *src++;
        offset = ((pos >> 3) & 7) * seq->frame->linesize[0] + (pos & 7);
        dst[offset] = *src++;
    } while (!(pos & 0x80));

    return src;
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
          int _len_seq0 = 1;
          struct TYPE_5__ * seq = (struct TYPE_5__ *) malloc(_len_seq0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_seq0; _i0++) {
              int _len_seq__i0__frame0 = 1;
          seq[_i0].frame = (struct TYPE_4__ *) malloc(_len_seq__i0__frame0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_seq__i0__frame0; _j0++) {
              int _len_seq__i0__frame_linesize0 = 1;
          seq[_i0].frame->linesize = (int *) malloc(_len_seq__i0__frame_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_seq__i0__frame_linesize0; _j0++) {
            seq[_i0].frame->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_src0 = 1;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_end0 = 1;
          const unsigned char * src_end = (const unsigned char *) malloc(_len_src_end0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src_end0; _i0++) {
            src_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          unsigned char * dst = (unsigned char *) malloc(_len_dst0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const unsigned char * benchRet = seq_decode_op3(seq,src,src_end,dst);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_seq0; _aux++) {
          free(seq[_aux].frame);
          }
          free(seq);
          free(src);
          free(src_end);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_seq0 = 65025;
          struct TYPE_5__ * seq = (struct TYPE_5__ *) malloc(_len_seq0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_seq0; _i0++) {
              int _len_seq__i0__frame0 = 1;
          seq[_i0].frame = (struct TYPE_4__ *) malloc(_len_seq__i0__frame0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_seq__i0__frame0; _j0++) {
              int _len_seq__i0__frame_linesize0 = 1;
          seq[_i0].frame->linesize = (int *) malloc(_len_seq__i0__frame_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_seq__i0__frame_linesize0; _j0++) {
            seq[_i0].frame->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_src0 = 65025;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_end0 = 65025;
          const unsigned char * src_end = (const unsigned char *) malloc(_len_src_end0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src_end0; _i0++) {
            src_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          unsigned char * dst = (unsigned char *) malloc(_len_dst0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const unsigned char * benchRet = seq_decode_op3(seq,src,src_end,dst);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_seq0; _aux++) {
          free(seq[_aux].frame);
          }
          free(seq);
          free(src);
          free(src_end);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_seq0 = 100;
          struct TYPE_5__ * seq = (struct TYPE_5__ *) malloc(_len_seq0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_seq0; _i0++) {
              int _len_seq__i0__frame0 = 1;
          seq[_i0].frame = (struct TYPE_4__ *) malloc(_len_seq__i0__frame0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_seq__i0__frame0; _j0++) {
              int _len_seq__i0__frame_linesize0 = 1;
          seq[_i0].frame->linesize = (int *) malloc(_len_seq__i0__frame_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_seq__i0__frame_linesize0; _j0++) {
            seq[_i0].frame->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_src0 = 100;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_end0 = 100;
          const unsigned char * src_end = (const unsigned char *) malloc(_len_src_end0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src_end0; _i0++) {
            src_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          unsigned char * dst = (unsigned char *) malloc(_len_dst0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const unsigned char * benchRet = seq_decode_op3(seq,src,src_end,dst);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_seq0; _aux++) {
          free(seq[_aux].frame);
          }
          free(seq);
          free(src);
          free(src_end);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
