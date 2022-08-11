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
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_3__ {int low; int range; int /*<<< orphan*/  const* bytestream; int /*<<< orphan*/  const* bytestream_end; int /*<<< orphan*/  const* bytestream_start; } ;
typedef  TYPE_1__ CABACContext ;

/* Variables and functions */
 int AVERROR_INVALIDDATA ; 
 int CABAC_BITS ; 

int ff_init_cabac_decoder(CABACContext *c, const uint8_t *buf, int buf_size){
    c->bytestream_start=
    c->bytestream= buf;
    c->bytestream_end= buf + buf_size;

#if CABAC_BITS == 16
    c->low =  (*c->bytestream++)<<18;
    c->low+=  (*c->bytestream++)<<10;
    // Keep our fetches on a 2-byte boundary as this should avoid ever having to
    // do unaligned loads if the compiler (or asm) optimises the double byte
    // load into a single instruction
    if(((uintptr_t)c->bytestream & 1) == 0) {
        c->low += (1 << 9);
    }
    else {
        c->low += ((*c->bytestream++) << 2) + 2;
    }
#else
    c->low =  (*c->bytestream++)<<10;
    c->low+= ((*c->bytestream++)<<2) + 2;
#endif
    c->range= 0x1FE;
    if ((c->range<<(CABAC_BITS+1)) < c->low)
        return AVERROR_INVALIDDATA;
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
          int buf_size = 100;
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__bytestream0 = 1;
          c[_i0].bytestream = (const int *) malloc(_len_c__i0__bytestream0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_c__i0__bytestream0; _j0++) {
            c[_i0].bytestream[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__bytestream_end0 = 1;
          c[_i0].bytestream_end = (const int *) malloc(_len_c__i0__bytestream_end0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_c__i0__bytestream_end0; _j0++) {
            c[_i0].bytestream_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__bytestream_start0 = 1;
          c[_i0].bytestream_start = (const int *) malloc(_len_c__i0__bytestream_start0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_c__i0__bytestream_start0; _j0++) {
            c[_i0].bytestream_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_init_cabac_decoder(c,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bytestream);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bytestream_end);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bytestream_start);
          }
          free(c);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int buf_size = 255;
          int _len_c0 = 65025;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__bytestream0 = 1;
          c[_i0].bytestream = (const int *) malloc(_len_c__i0__bytestream0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_c__i0__bytestream0; _j0++) {
            c[_i0].bytestream[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__bytestream_end0 = 1;
          c[_i0].bytestream_end = (const int *) malloc(_len_c__i0__bytestream_end0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_c__i0__bytestream_end0; _j0++) {
            c[_i0].bytestream_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__bytestream_start0 = 1;
          c[_i0].bytestream_start = (const int *) malloc(_len_c__i0__bytestream_start0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_c__i0__bytestream_start0; _j0++) {
            c[_i0].bytestream_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_init_cabac_decoder(c,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bytestream);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bytestream_end);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bytestream_start);
          }
          free(c);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int buf_size = 10;
          int _len_c0 = 100;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__bytestream0 = 1;
          c[_i0].bytestream = (const int *) malloc(_len_c__i0__bytestream0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_c__i0__bytestream0; _j0++) {
            c[_i0].bytestream[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__bytestream_end0 = 1;
          c[_i0].bytestream_end = (const int *) malloc(_len_c__i0__bytestream_end0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_c__i0__bytestream_end0; _j0++) {
            c[_i0].bytestream_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__bytestream_start0 = 1;
          c[_i0].bytestream_start = (const int *) malloc(_len_c__i0__bytestream_start0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_c__i0__bytestream_start0; _j0++) {
            c[_i0].bytestream_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_init_cabac_decoder(c,buf,buf_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bytestream);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bytestream_end);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bytestream_start);
          }
          free(c);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
