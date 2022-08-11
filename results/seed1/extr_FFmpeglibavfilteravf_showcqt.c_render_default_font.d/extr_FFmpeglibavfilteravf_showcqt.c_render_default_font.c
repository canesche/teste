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
struct TYPE_3__ {int** data; int* linesize; } ;
typedef  TYPE_1__ AVFrame ;

/* Variables and functions */
 int* avpriv_vga16_font ; 

__attribute__((used)) static int render_default_font(AVFrame *tmp)
{
    const char *str = "EF G A BC D ";
    int x, u, v, mask;
    uint8_t *data = tmp->data[0];
    int linesize = tmp->linesize[0];
    int width = 1920/2, height = 16;

    for (x = 0; x < width; x += width/10) {
        uint8_t *startptr = data + 4 * x;
        for (u = 0; u < 12; u++) {
            for (v = 0; v < height; v++) {
                uint8_t *p = startptr + v * linesize + height/2 * 4 * u;
                for (mask = 0x80; mask; mask >>= 1, p += 4) {
                    if (mask & avpriv_vga16_font[str[u] * 16 + v])
                        p[3] = 255;
                    else
                        p[3] = 0;
                }
            }
        }
    }

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
          int _len_tmp0 = 1;
          struct TYPE_3__ * tmp = (struct TYPE_3__ *) malloc(_len_tmp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tmp0; _i0++) {
              int _len_tmp__i0__data0 = 1;
          tmp[_i0].data = (int **) malloc(_len_tmp__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_tmp__i0__data0; _j0++) {
            int _len_tmp__i0__data1 = 1;
            tmp[_i0].data[_j0] = (int *) malloc(_len_tmp__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_tmp__i0__data1; _j1++) {
              tmp[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tmp__i0__linesize0 = 1;
          tmp[_i0].linesize = (int *) malloc(_len_tmp__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tmp__i0__linesize0; _j0++) {
            tmp[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = render_default_font(tmp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tmp0; _aux++) {
          free(*(tmp[_aux].data));
        free(tmp[_aux].data);
          }
          for(int _aux = 0; _aux < _len_tmp0; _aux++) {
          free(tmp[_aux].linesize);
          }
          free(tmp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tmp0 = 65025;
          struct TYPE_3__ * tmp = (struct TYPE_3__ *) malloc(_len_tmp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tmp0; _i0++) {
              int _len_tmp__i0__data0 = 1;
          tmp[_i0].data = (int **) malloc(_len_tmp__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_tmp__i0__data0; _j0++) {
            int _len_tmp__i0__data1 = 1;
            tmp[_i0].data[_j0] = (int *) malloc(_len_tmp__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_tmp__i0__data1; _j1++) {
              tmp[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tmp__i0__linesize0 = 1;
          tmp[_i0].linesize = (int *) malloc(_len_tmp__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tmp__i0__linesize0; _j0++) {
            tmp[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = render_default_font(tmp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tmp0; _aux++) {
          free(*(tmp[_aux].data));
        free(tmp[_aux].data);
          }
          for(int _aux = 0; _aux < _len_tmp0; _aux++) {
          free(tmp[_aux].linesize);
          }
          free(tmp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tmp0 = 100;
          struct TYPE_3__ * tmp = (struct TYPE_3__ *) malloc(_len_tmp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tmp0; _i0++) {
              int _len_tmp__i0__data0 = 1;
          tmp[_i0].data = (int **) malloc(_len_tmp__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_tmp__i0__data0; _j0++) {
            int _len_tmp__i0__data1 = 1;
            tmp[_i0].data[_j0] = (int *) malloc(_len_tmp__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_tmp__i0__data1; _j1++) {
              tmp[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tmp__i0__linesize0 = 1;
          tmp[_i0].linesize = (int *) malloc(_len_tmp__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tmp__i0__linesize0; _j0++) {
            tmp[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = render_default_font(tmp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tmp0; _aux++) {
          free(*(tmp[_aux].data));
        free(tmp[_aux].data);
          }
          for(int _aux = 0; _aux < _len_tmp0; _aux++) {
          free(tmp[_aux].linesize);
          }
          free(tmp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
