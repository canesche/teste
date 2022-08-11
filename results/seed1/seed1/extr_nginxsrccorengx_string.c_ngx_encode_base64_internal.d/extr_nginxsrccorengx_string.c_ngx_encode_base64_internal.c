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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u_char ;
typedef  scalar_t__ ngx_uint_t ;
struct TYPE_4__ {size_t len; int* data; } ;
typedef  TYPE_1__ ngx_str_t ;

/* Variables and functions */

__attribute__((used)) static void
ngx_encode_base64_internal(ngx_str_t *dst, ngx_str_t *src, const u_char *basis,
    ngx_uint_t padding)
{
    u_char         *d, *s;
    size_t          len;

    len = src->len;
    s = src->data;
    d = dst->data;

    while (len > 2) {
        *d++ = basis[(s[0] >> 2) & 0x3f];
        *d++ = basis[((s[0] & 3) << 4) | (s[1] >> 4)];
        *d++ = basis[((s[1] & 0x0f) << 2) | (s[2] >> 6)];
        *d++ = basis[s[2] & 0x3f];

        s += 3;
        len -= 3;
    }

    if (len) {
        *d++ = basis[(s[0] >> 2) & 0x3f];

        if (len == 1) {
            *d++ = basis[(s[0] & 3) << 4];
            if (padding) {
                *d++ = '=';
            }

        } else {
            *d++ = basis[((s[0] & 3) << 4) | (s[1] >> 4)];
            *d++ = basis[(s[1] & 0x0f) << 2];
        }

        if (padding) {
            *d++ = '=';
        }
    }

    dst->len = d - dst->data;
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
          long padding = 100;
          int _len_dst0 = 1;
          struct TYPE_4__ * dst = (struct TYPE_4__ *) malloc(_len_dst0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__data0 = 1;
          dst[_i0].data = (int *) malloc(_len_dst__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__data0; _j0++) {
            dst[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 1;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_src__i0__data0 = 1;
          src[_i0].data = (int *) malloc(_len_src__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__data0; _j0++) {
            src[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_basis0 = 1;
          const int * basis = (const int *) malloc(_len_basis0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_basis0; _i0++) {
            basis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_encode_base64_internal(dst,src,basis,padding);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].data);
          }
          free(dst);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].data);
          }
          free(src);
          free(basis);
        
        break;
    }
    // big-arr
    case 1:
    {
          long padding = 255;
          int _len_dst0 = 65025;
          struct TYPE_4__ * dst = (struct TYPE_4__ *) malloc(_len_dst0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__data0 = 1;
          dst[_i0].data = (int *) malloc(_len_dst__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__data0; _j0++) {
            dst[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 65025;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_src__i0__data0 = 1;
          src[_i0].data = (int *) malloc(_len_src__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__data0; _j0++) {
            src[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_basis0 = 65025;
          const int * basis = (const int *) malloc(_len_basis0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_basis0; _i0++) {
            basis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_encode_base64_internal(dst,src,basis,padding);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].data);
          }
          free(dst);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].data);
          }
          free(src);
          free(basis);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long padding = 10;
          int _len_dst0 = 100;
          struct TYPE_4__ * dst = (struct TYPE_4__ *) malloc(_len_dst0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__data0 = 1;
          dst[_i0].data = (int *) malloc(_len_dst__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__data0; _j0++) {
            dst[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 100;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_src__i0__data0 = 1;
          src[_i0].data = (int *) malloc(_len_src__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__data0; _j0++) {
            src[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_basis0 = 100;
          const int * basis = (const int *) malloc(_len_basis0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_basis0; _i0++) {
            basis[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_encode_base64_internal(dst,src,basis,padding);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].data);
          }
          free(dst);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].data);
          }
          free(src);
          free(basis);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
