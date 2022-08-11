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
typedef  int vli_type ;
typedef  int uint8_t ;
struct xz_dec {int pos; int vli; } ;
typedef  enum xz_ret { ____Placeholder_xz_ret } xz_ret ;

/* Variables and functions */
 int VLI_BYTES_MAX ; 
 int XZ_DATA_ERROR ; 
 int XZ_OK ; 
 int XZ_STREAM_END ; 

__attribute__((used)) static enum xz_ret dec_vli(struct xz_dec *s, const uint8_t *in,
			   size_t *in_pos, size_t in_size)
{
	uint8_t byte;

	if (s->pos == 0)
		s->vli = 0;

	while (*in_pos < in_size) {
		byte = in[*in_pos];
		++*in_pos;

		s->vli |= (vli_type)(byte & 0x7F) << s->pos;

		if ((byte & 0x80) == 0) {
			/* Don't allow non-minimal encodings. */
			if (byte == 0 && s->pos != 0)
				return XZ_DATA_ERROR;

			s->pos = 0;
			return XZ_STREAM_END;
		}

		s->pos += 7;
		if (s->pos == 7 * VLI_BYTES_MAX)
			return XZ_DATA_ERROR;
	}

	return XZ_OK;
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
          unsigned long in_size = 100;
          int _len_s0 = 1;
          struct xz_dec * s = (struct xz_dec *) malloc(_len_s0*sizeof(struct xz_dec));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].vli = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 1;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in_pos0 = 1;
          unsigned long * in_pos = (unsigned long *) malloc(_len_in_pos0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_in_pos0; _i0++) {
            in_pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum xz_ret benchRet = dec_vli(s,in,in_pos,in_size);
          free(s);
          free(in);
          free(in_pos);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long in_size = 255;
          int _len_s0 = 65025;
          struct xz_dec * s = (struct xz_dec *) malloc(_len_s0*sizeof(struct xz_dec));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].vli = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 65025;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in_pos0 = 65025;
          unsigned long * in_pos = (unsigned long *) malloc(_len_in_pos0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_in_pos0; _i0++) {
            in_pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum xz_ret benchRet = dec_vli(s,in,in_pos,in_size);
          free(s);
          free(in);
          free(in_pos);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long in_size = 10;
          int _len_s0 = 100;
          struct xz_dec * s = (struct xz_dec *) malloc(_len_s0*sizeof(struct xz_dec));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].vli = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 100;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in_pos0 = 100;
          unsigned long * in_pos = (unsigned long *) malloc(_len_in_pos0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_in_pos0; _i0++) {
            in_pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum xz_ret benchRet = dec_vli(s,in,in_pos,in_size);
          free(s);
          free(in);
          free(in_pos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
