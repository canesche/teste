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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  scalar_t__ uint16_t ;
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void threshold16(const uint8_t *iin, const uint8_t *tthreshold,
                        const uint8_t *ffirst, const uint8_t *ssecond,
                        uint8_t *oout,
                        ptrdiff_t ilinesize, ptrdiff_t tlinesize,
                        ptrdiff_t flinesize, ptrdiff_t slinesize,
                        ptrdiff_t olinesize,
                        int w, int h)
{
    const uint16_t *in = (const uint16_t *)iin;
    const uint16_t *threshold = (const uint16_t *)tthreshold;
    const uint16_t *min = (const uint16_t *)ffirst;
    const uint16_t *max = (const uint16_t *)ssecond;
    uint16_t *out = (uint16_t *)oout;
    int x, y;

    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            out[x] = in[x] < threshold[x] ? min[x] : max[x];
        }

        in        += ilinesize / 2;
        threshold += tlinesize / 2;
        min       += flinesize / 2;
        max       += slinesize / 2;
        out       += olinesize / 2;
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
          int ilinesize = 100;
          int tlinesize = 100;
          int flinesize = 100;
          int slinesize = 100;
          int olinesize = 100;
          int w = 100;
          int h = 100;
          int _len_iin0 = 1;
          const int * iin = (const int *) malloc(_len_iin0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_iin0; _i0++) {
            iin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tthreshold0 = 1;
          const int * tthreshold = (const int *) malloc(_len_tthreshold0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tthreshold0; _i0++) {
            tthreshold[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ffirst0 = 1;
          const int * ffirst = (const int *) malloc(_len_ffirst0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ffirst0; _i0++) {
            ffirst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssecond0 = 1;
          const int * ssecond = (const int *) malloc(_len_ssecond0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ssecond0; _i0++) {
            ssecond[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_oout0 = 1;
          int * oout = (int *) malloc(_len_oout0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_oout0; _i0++) {
            oout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          threshold16(iin,tthreshold,ffirst,ssecond,oout,ilinesize,tlinesize,flinesize,slinesize,olinesize,w,h);
          free(iin);
          free(tthreshold);
          free(ffirst);
          free(ssecond);
          free(oout);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ilinesize = 255;
          int tlinesize = 255;
          int flinesize = 255;
          int slinesize = 255;
          int olinesize = 255;
          int w = 255;
          int h = 255;
          int _len_iin0 = 65025;
          const int * iin = (const int *) malloc(_len_iin0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_iin0; _i0++) {
            iin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tthreshold0 = 65025;
          const int * tthreshold = (const int *) malloc(_len_tthreshold0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tthreshold0; _i0++) {
            tthreshold[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ffirst0 = 65025;
          const int * ffirst = (const int *) malloc(_len_ffirst0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ffirst0; _i0++) {
            ffirst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssecond0 = 65025;
          const int * ssecond = (const int *) malloc(_len_ssecond0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ssecond0; _i0++) {
            ssecond[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_oout0 = 65025;
          int * oout = (int *) malloc(_len_oout0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_oout0; _i0++) {
            oout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          threshold16(iin,tthreshold,ffirst,ssecond,oout,ilinesize,tlinesize,flinesize,slinesize,olinesize,w,h);
          free(iin);
          free(tthreshold);
          free(ffirst);
          free(ssecond);
          free(oout);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ilinesize = 10;
          int tlinesize = 10;
          int flinesize = 10;
          int slinesize = 10;
          int olinesize = 10;
          int w = 10;
          int h = 10;
          int _len_iin0 = 100;
          const int * iin = (const int *) malloc(_len_iin0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_iin0; _i0++) {
            iin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tthreshold0 = 100;
          const int * tthreshold = (const int *) malloc(_len_tthreshold0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_tthreshold0; _i0++) {
            tthreshold[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ffirst0 = 100;
          const int * ffirst = (const int *) malloc(_len_ffirst0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ffirst0; _i0++) {
            ffirst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssecond0 = 100;
          const int * ssecond = (const int *) malloc(_len_ssecond0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ssecond0; _i0++) {
            ssecond[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_oout0 = 100;
          int * oout = (int *) malloc(_len_oout0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_oout0; _i0++) {
            oout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          threshold16(iin,tthreshold,ffirst,ssecond,oout,ilinesize,tlinesize,flinesize,slinesize,olinesize,w,h);
          free(iin);
          free(tthreshold);
          free(ffirst);
          free(ssecond);
          free(oout);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
