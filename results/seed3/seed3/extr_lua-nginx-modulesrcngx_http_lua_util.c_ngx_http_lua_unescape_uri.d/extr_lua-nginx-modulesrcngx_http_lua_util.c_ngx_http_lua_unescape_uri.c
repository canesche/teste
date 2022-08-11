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
typedef  char u_char ;
typedef  int ngx_uint_t ;

/* Variables and functions */
 int NGX_UNESCAPE_REDIRECT ; 
 int NGX_UNESCAPE_URI ; 

void
ngx_http_lua_unescape_uri(u_char **dst, u_char **src, size_t size,
    ngx_uint_t type)
{
    u_char  *d, *s, ch, c, decoded;
    enum {
        sw_usual = 0,
        sw_quoted,
        sw_quoted_second
    } state;

    d = *dst;
    s = *src;

    state = 0;
    decoded = 0;

    while (size--) {

        ch = *s++;

        switch (state) {
        case sw_usual:
            if (ch == '?'
                && (type & (NGX_UNESCAPE_URI|NGX_UNESCAPE_REDIRECT)))
            {
                *d++ = ch;
                goto done;
            }

            if (ch == '%') {
                state = sw_quoted;
                break;
            }

            if (ch == '+') {
                *d++ = ' ';
                break;
            }

            *d++ = ch;
            break;

        case sw_quoted:

            if (ch >= '0' && ch <= '9') {
                decoded = (u_char) (ch - '0');
                state = sw_quoted_second;
                break;
            }

            c = (u_char) (ch | 0x20);
            if (c >= 'a' && c <= 'f') {
                decoded = (u_char) (c - 'a' + 10);
                state = sw_quoted_second;
                break;
            }

            /* the invalid quoted character */

            state = sw_usual;

            *d++ = ch;

            break;

        case sw_quoted_second:

            state = sw_usual;

            if (ch >= '0' && ch <= '9') {
                ch = (u_char) ((decoded << 4) + ch - '0');

                if (type & NGX_UNESCAPE_REDIRECT) {
                    if (ch > '%' && ch < 0x7f) {
                        *d++ = ch;
                        break;
                    }

                    *d++ = '%'; *d++ = *(s - 2); *d++ = *(s - 1);
                    break;
                }

                *d++ = ch;

                break;
            }

            c = (u_char) (ch | 0x20);
            if (c >= 'a' && c <= 'f') {
                ch = (u_char) ((decoded << 4) + c - 'a' + 10);

                if (type & NGX_UNESCAPE_URI) {
                    if (ch == '?') {
                        *d++ = ch;
                        goto done;
                    }

                    *d++ = ch;
                    break;
                }

                if (type & NGX_UNESCAPE_REDIRECT) {
                    if (ch == '?') {
                        *d++ = ch;
                        goto done;
                    }

                    if (ch > '%' && ch < 0x7f) {
                        *d++ = ch;
                        break;
                    }

                    *d++ = '%'; *d++ = *(s - 2); *d++ = *(s - 1);
                    break;
                }

                *d++ = ch;

                break;
            }

            /* the invalid quoted character */

            break;
        }
    }

done:

    *dst = d;
    *src = s;
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
          unsigned long size = 100;
          int type = 100;
          int _len_dst0 = 1;
          char ** dst = (char **) malloc(_len_dst0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (char *) malloc(_len_dst1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src0 = 1;
          char ** src = (char **) malloc(_len_src0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (char *) malloc(_len_src1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ngx_http_lua_unescape_uri(dst,src,size,type);
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          int type = 255;
          int _len_dst0 = 65025;
          char ** dst = (char **) malloc(_len_dst0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (char *) malloc(_len_dst1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src0 = 65025;
          char ** src = (char **) malloc(_len_src0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (char *) malloc(_len_src1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ngx_http_lua_unescape_uri(dst,src,size,type);
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          int type = 10;
          int _len_dst0 = 100;
          char ** dst = (char **) malloc(_len_dst0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (char *) malloc(_len_dst1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src0 = 100;
          char ** src = (char **) malloc(_len_src0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (char *) malloc(_len_src1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ngx_http_lua_unescape_uri(dst,src,size,type);
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
