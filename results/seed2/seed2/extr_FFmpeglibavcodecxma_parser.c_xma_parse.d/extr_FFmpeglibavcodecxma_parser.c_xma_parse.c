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
typedef  int uint8_t ;
struct TYPE_4__ {int skip_packets; } ;
typedef  TYPE_1__ XMAParserContext ;
struct TYPE_5__ {int duration; int key_frame; TYPE_1__* priv_data; } ;
typedef  TYPE_2__ AVCodecParserContext ;
typedef  int /*<<< orphan*/  AVCodecContext ;

/* Variables and functions */

__attribute__((used)) static int xma_parse(AVCodecParserContext *s1, AVCodecContext *avctx,
                     const uint8_t **poutbuf, int *poutbuf_size,
                     const uint8_t *buf, int buf_size)
{
    XMAParserContext *s = s1->priv_data;

    if (buf_size % 2048 == 0) {
        int duration = 0, packet, nb_packets = buf_size / 2048;

        for (packet = 0; packet < nb_packets; packet++) {
            if (s->skip_packets == 0) {
                duration += buf[packet * 2048] * 128;
                s->skip_packets = buf[packet * 2048 + 3] + 1;
            }
            s->skip_packets--;
        }

        s1->duration = duration;
        s1->key_frame = !!duration;
    }

    /* always return the full packet. this parser isn't doing any splitting or
       combining, only packet analysis */
    *poutbuf      = buf;
    *poutbuf_size = buf_size;
    return buf_size;
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
          int buf_size = 100;
          int _len_s10 = 1;
          struct TYPE_5__ * s1 = (struct TYPE_5__ *) malloc(_len_s10*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0].duration = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].key_frame = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s1__i0__priv_data0 = 1;
          s1[_i0].priv_data = (struct TYPE_4__ *) malloc(_len_s1__i0__priv_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s1__i0__priv_data0; _j0++) {
            s1[_i0].priv_data->skip_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_avctx0 = 1;
          int * avctx = (int *) malloc(_len_avctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_poutbuf0 = 1;
          const int ** poutbuf = (const int **) malloc(_len_poutbuf0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_poutbuf0; _i0++) {
            int _len_poutbuf1 = 1;
            poutbuf[_i0] = (const int *) malloc(_len_poutbuf1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_poutbuf1; _i1++) {
              poutbuf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_poutbuf_size0 = 1;
          int * poutbuf_size = (int *) malloc(_len_poutbuf_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_poutbuf_size0; _i0++) {
            poutbuf_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xma_parse(s1,avctx,poutbuf,poutbuf_size,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].priv_data);
          }
          free(s1);
          free(avctx);
          for(int i1 = 0; i1 < _len_poutbuf0; i1++) {
            int _len_poutbuf1 = 1;
              free(poutbuf[i1]);
          }
          free(poutbuf);
          free(poutbuf_size);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int buf_size = 255;
          int _len_s10 = 65025;
          struct TYPE_5__ * s1 = (struct TYPE_5__ *) malloc(_len_s10*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0].duration = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].key_frame = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s1__i0__priv_data0 = 1;
          s1[_i0].priv_data = (struct TYPE_4__ *) malloc(_len_s1__i0__priv_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s1__i0__priv_data0; _j0++) {
            s1[_i0].priv_data->skip_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_avctx0 = 65025;
          int * avctx = (int *) malloc(_len_avctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_poutbuf0 = 65025;
          const int ** poutbuf = (const int **) malloc(_len_poutbuf0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_poutbuf0; _i0++) {
            int _len_poutbuf1 = 1;
            poutbuf[_i0] = (const int *) malloc(_len_poutbuf1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_poutbuf1; _i1++) {
              poutbuf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_poutbuf_size0 = 65025;
          int * poutbuf_size = (int *) malloc(_len_poutbuf_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_poutbuf_size0; _i0++) {
            poutbuf_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xma_parse(s1,avctx,poutbuf,poutbuf_size,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].priv_data);
          }
          free(s1);
          free(avctx);
          for(int i1 = 0; i1 < _len_poutbuf0; i1++) {
            int _len_poutbuf1 = 1;
              free(poutbuf[i1]);
          }
          free(poutbuf);
          free(poutbuf_size);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int buf_size = 10;
          int _len_s10 = 100;
          struct TYPE_5__ * s1 = (struct TYPE_5__ *) malloc(_len_s10*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0].duration = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].key_frame = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s1__i0__priv_data0 = 1;
          s1[_i0].priv_data = (struct TYPE_4__ *) malloc(_len_s1__i0__priv_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s1__i0__priv_data0; _j0++) {
            s1[_i0].priv_data->skip_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_avctx0 = 100;
          int * avctx = (int *) malloc(_len_avctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_poutbuf0 = 100;
          const int ** poutbuf = (const int **) malloc(_len_poutbuf0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_poutbuf0; _i0++) {
            int _len_poutbuf1 = 1;
            poutbuf[_i0] = (const int *) malloc(_len_poutbuf1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_poutbuf1; _i1++) {
              poutbuf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_poutbuf_size0 = 100;
          int * poutbuf_size = (int *) malloc(_len_poutbuf_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_poutbuf_size0; _i0++) {
            poutbuf_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xma_parse(s1,avctx,poutbuf,poutbuf_size,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].priv_data);
          }
          free(s1);
          free(avctx);
          for(int i1 = 0; i1 < _len_poutbuf0; i1++) {
            int _len_poutbuf1 = 1;
              free(poutbuf[i1]);
          }
          free(poutbuf);
          free(poutbuf_size);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
