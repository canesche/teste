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
typedef  int /*<<< orphan*/  u_char ;
typedef  int ngx_uint_t ;
typedef  int ngx_int_t ;
struct TYPE_4__ {size_t length; } ;
struct TYPE_5__ {TYPE_1__ state; } ;
typedef  TYPE_2__ ngx_http_v2_connection_t ;

/* Variables and functions */
 int NGX_AGAIN ; 
 int NGX_DECLINED ; 
 int NGX_ERROR ; 
 int NGX_HTTP_V2_INT_OCTETS ; 

__attribute__((used)) static ngx_int_t
ngx_http_v2_parse_int(ngx_http_v2_connection_t *h2c, u_char **pos, u_char *end,
    ngx_uint_t prefix)
{
    u_char      *start, *p;
    ngx_uint_t   value, octet, shift;

    start = *pos;
    p = start;

    value = *p++ & prefix;

    if (value != prefix) {
        if (h2c->state.length == 0) {
            return NGX_ERROR;
        }

        h2c->state.length--;

        *pos = p;
        return value;
    }

    if (end - start > NGX_HTTP_V2_INT_OCTETS) {
        end = start + NGX_HTTP_V2_INT_OCTETS;
    }

    for (shift = 0; p != end; shift += 7) {
        octet = *p++;

        value += (octet & 0x7f) << shift;

        if (octet < 128) {
            if ((size_t) (p - start) > h2c->state.length) {
                return NGX_ERROR;
            }

            h2c->state.length -= p - start;

            *pos = p;
            return value;
        }
    }

    if ((size_t) (end - start) >= h2c->state.length) {
        return NGX_ERROR;
    }

    if (end == start + NGX_HTTP_V2_INT_OCTETS) {
        return NGX_DECLINED;
    }

    return NGX_AGAIN;
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
          int prefix = 100;
          int _len_h2c0 = 1;
          struct TYPE_5__ * h2c = (struct TYPE_5__ *) malloc(_len_h2c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_h2c0; _i0++) {
            h2c[_i0].state.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 1;
          int ** pos = (int **) malloc(_len_pos0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            int _len_pos1 = 1;
            pos[_i0] = (int *) malloc(_len_pos1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pos1; _i1++) {
              pos[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end0 = 1;
          int * end = (int *) malloc(_len_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_v2_parse_int(h2c,pos,end,prefix);
          printf("%d\n", benchRet); 
          free(h2c);
          for(int i1 = 0; i1 < _len_pos0; i1++) {
            int _len_pos1 = 1;
              free(pos[i1]);
          }
          free(pos);
          free(end);
        
        break;
    }
    // big-arr
    case 1:
    {
          int prefix = 255;
          int _len_h2c0 = 65025;
          struct TYPE_5__ * h2c = (struct TYPE_5__ *) malloc(_len_h2c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_h2c0; _i0++) {
            h2c[_i0].state.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 65025;
          int ** pos = (int **) malloc(_len_pos0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            int _len_pos1 = 1;
            pos[_i0] = (int *) malloc(_len_pos1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pos1; _i1++) {
              pos[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end0 = 65025;
          int * end = (int *) malloc(_len_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_v2_parse_int(h2c,pos,end,prefix);
          printf("%d\n", benchRet); 
          free(h2c);
          for(int i1 = 0; i1 < _len_pos0; i1++) {
            int _len_pos1 = 1;
              free(pos[i1]);
          }
          free(pos);
          free(end);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int prefix = 10;
          int _len_h2c0 = 100;
          struct TYPE_5__ * h2c = (struct TYPE_5__ *) malloc(_len_h2c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_h2c0; _i0++) {
            h2c[_i0].state.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 100;
          int ** pos = (int **) malloc(_len_pos0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            int _len_pos1 = 1;
            pos[_i0] = (int *) malloc(_len_pos1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pos1; _i1++) {
              pos[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_end0 = 100;
          int * end = (int *) malloc(_len_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_v2_parse_int(h2c,pos,end,prefix);
          printf("%d\n", benchRet); 
          free(h2c);
          for(int i1 = 0; i1 < _len_pos0; i1++) {
            int _len_pos1 = 1;
              free(pos[i1]);
          }
          free(pos);
          free(end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
