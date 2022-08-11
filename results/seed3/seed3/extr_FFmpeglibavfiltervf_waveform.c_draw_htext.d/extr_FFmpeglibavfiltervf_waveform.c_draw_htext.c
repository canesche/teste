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
 int* avpriv_cga_font ; 

__attribute__((used)) static void draw_htext(AVFrame *out, int x, int y, float o1, float o2, const char *txt, const uint8_t color[4])
{
    const uint8_t *font;
    int font_height;
    int i, plane;

    font = avpriv_cga_font,   font_height =  8;

    for (plane = 0; plane < 4 && out->data[plane]; plane++) {
        for (i = 0; txt[i]; i++) {
            int char_y, mask;
            int v = color[plane];

            uint8_t *p = out->data[plane] + y * out->linesize[plane] + (x + i * 8);
            for (char_y = 0; char_y < font_height; char_y++) {
                for (mask = 0x80; mask; mask >>= 1) {
                    if (font[txt[i] * font_height + char_y] & mask)
                        p[0] = p[0] * o2 + v * o1;
                    p++;
                }
                p += out->linesize[plane] - 8;
            }
        }
    }
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
          int x = 100;
          int y = 100;
          float o1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float o2 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_out0 = 1;
          struct TYPE_3__ * out = (struct TYPE_3__ *) malloc(_len_out0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__data0 = 1;
          out[_i0].data = (int **) malloc(_len_out__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_out__i0__data0; _j0++) {
            int _len_out__i0__data1 = 1;
            out[_i0].data[_j0] = (int *) malloc(_len_out__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_out__i0__data1; _j1++) {
              out[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out__i0__linesize0 = 1;
          out[_i0].linesize = (int *) malloc(_len_out__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__linesize0; _j0++) {
            out[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_txt0 = 1;
          const char * txt = (const char *) malloc(_len_txt0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_txt0; _i0++) {
            txt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color0 = 4;
          int const* color = (int const*) malloc(_len_color0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          draw_htext(out,x,y,o1,o2,txt,color);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(*(out[_aux].data));
        free(out[_aux].data);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].linesize);
          }
          free(out);
          free(txt);
          free(color);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          float o1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float o2 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_out0 = 65025;
          struct TYPE_3__ * out = (struct TYPE_3__ *) malloc(_len_out0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__data0 = 1;
          out[_i0].data = (int **) malloc(_len_out__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_out__i0__data0; _j0++) {
            int _len_out__i0__data1 = 1;
            out[_i0].data[_j0] = (int *) malloc(_len_out__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_out__i0__data1; _j1++) {
              out[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out__i0__linesize0 = 1;
          out[_i0].linesize = (int *) malloc(_len_out__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__linesize0; _j0++) {
            out[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_txt0 = 65025;
          const char * txt = (const char *) malloc(_len_txt0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_txt0; _i0++) {
            txt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color0 = 65025;
          int const* color = (int const*) malloc(_len_color0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          draw_htext(out,x,y,o1,o2,txt,color);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(*(out[_aux].data));
        free(out[_aux].data);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].linesize);
          }
          free(out);
          free(txt);
          free(color);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          float o1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float o2 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_out0 = 100;
          struct TYPE_3__ * out = (struct TYPE_3__ *) malloc(_len_out0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__data0 = 1;
          out[_i0].data = (int **) malloc(_len_out__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_out__i0__data0; _j0++) {
            int _len_out__i0__data1 = 1;
            out[_i0].data[_j0] = (int *) malloc(_len_out__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_out__i0__data1; _j1++) {
              out[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out__i0__linesize0 = 1;
          out[_i0].linesize = (int *) malloc(_len_out__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__linesize0; _j0++) {
            out[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_txt0 = 100;
          const char * txt = (const char *) malloc(_len_txt0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_txt0; _i0++) {
            txt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color0 = 100;
          int const* color = (int const*) malloc(_len_color0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          draw_htext(out,x,y,o1,o2,txt,color);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(*(out[_aux].data));
        free(out[_aux].data);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].linesize);
          }
          free(out);
          free(txt);
          free(color);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
