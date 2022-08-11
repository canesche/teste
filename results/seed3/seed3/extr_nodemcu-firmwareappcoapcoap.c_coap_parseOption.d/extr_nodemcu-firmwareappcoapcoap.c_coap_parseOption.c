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
typedef  size_t uint8_t ;
typedef  int uint16_t ;
struct TYPE_4__ {size_t const* p; int len; } ;
struct TYPE_5__ {int num; TYPE_1__ buf; } ;
typedef  TYPE_2__ coap_option_t ;

/* Variables and functions */
 int COAP_ERR_OPTION_DELTA_INVALID ; 
 int COAP_ERR_OPTION_LEN_INVALID ; 
 int COAP_ERR_OPTION_TOO_BIG ; 
 int COAP_ERR_OPTION_TOO_SHORT_FOR_HEADER ; 

int coap_parseOption(coap_option_t *option, uint16_t *running_delta, const uint8_t **buf, size_t buflen)
{
    const uint8_t *p = *buf;
    uint8_t headlen = 1;
    uint16_t len, delta;

    if (buflen < headlen) // too small
        return COAP_ERR_OPTION_TOO_SHORT_FOR_HEADER;

    delta = (p[0] & 0xF0) >> 4;
    len = p[0] & 0x0F;

    // These are untested and may be buggy
    if (delta == 13)
    {
        headlen++;
        if (buflen < headlen)
            return COAP_ERR_OPTION_TOO_SHORT_FOR_HEADER;
        delta = p[1] + 13;
        p++;
    }
    else
    if (delta == 14)
    {
        headlen += 2;
        if (buflen < headlen)
            return COAP_ERR_OPTION_TOO_SHORT_FOR_HEADER;
        delta = ((p[1] << 8) | p[2]) + 269;
        p+=2;
    }
    else
    if (delta == 15)
        return COAP_ERR_OPTION_DELTA_INVALID;

    if (len == 13)
    {
        headlen++;
        if (buflen < headlen)
            return COAP_ERR_OPTION_TOO_SHORT_FOR_HEADER;
        len = p[1] + 13;
        p++;
    }
    else
    if (len == 14)
    {
        headlen += 2;
        if (buflen < headlen)
            return COAP_ERR_OPTION_TOO_SHORT_FOR_HEADER;
        len = ((p[1] << 8) | p[2]) + 269;
        p+=2;
    }
    else
    if (len == 15)
        return COAP_ERR_OPTION_LEN_INVALID;

    if ((p + 1 + len) > (*buf + buflen))
        return COAP_ERR_OPTION_TOO_BIG;

    //printf("option num=%d\n", delta + *running_delta);
    option->num = delta + *running_delta;
    option->buf.p = p+1;
    option->buf.len = len;
    //coap_dump(p+1, len, false);

    // advance buf
    *buf = p + 1 + len;
    *running_delta += delta;

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
          unsigned long buflen = 100;
          int _len_option0 = 1;
          struct TYPE_5__ * option = (struct TYPE_5__ *) malloc(_len_option0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_option0; _i0++) {
            option[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_option__i0__buf_p0 = 1;
          option[_i0].buf.p = (const unsigned long *) malloc(_len_option__i0__buf_p0*sizeof(const unsigned long));
          for(int _j0 = 0; _j0 < _len_option__i0__buf_p0; _j0++) {
            option[_i0].buf.p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        option[_i0].buf.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_running_delta0 = 1;
          int * running_delta = (int *) malloc(_len_running_delta0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_running_delta0; _i0++) {
            running_delta[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const unsigned long ** buf = (const unsigned long **) malloc(_len_buf0*sizeof(const unsigned long *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            int _len_buf1 = 1;
            buf[_i0] = (const unsigned long *) malloc(_len_buf1*sizeof(const unsigned long));
            for(int _i1 = 0; _i1 < _len_buf1; _i1++) {
              buf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = coap_parseOption(option,running_delta,buf,buflen);
          printf("%d\n", benchRet); 
          free(option);
          free(running_delta);
          for(int i1 = 0; i1 < _len_buf0; i1++) {
            int _len_buf1 = 1;
              free(buf[i1]);
          }
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long buflen = 255;
          int _len_option0 = 65025;
          struct TYPE_5__ * option = (struct TYPE_5__ *) malloc(_len_option0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_option0; _i0++) {
            option[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_option__i0__buf_p0 = 1;
          option[_i0].buf.p = (const unsigned long *) malloc(_len_option__i0__buf_p0*sizeof(const unsigned long));
          for(int _j0 = 0; _j0 < _len_option__i0__buf_p0; _j0++) {
            option[_i0].buf.p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        option[_i0].buf.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_running_delta0 = 65025;
          int * running_delta = (int *) malloc(_len_running_delta0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_running_delta0; _i0++) {
            running_delta[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const unsigned long ** buf = (const unsigned long **) malloc(_len_buf0*sizeof(const unsigned long *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            int _len_buf1 = 1;
            buf[_i0] = (const unsigned long *) malloc(_len_buf1*sizeof(const unsigned long));
            for(int _i1 = 0; _i1 < _len_buf1; _i1++) {
              buf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = coap_parseOption(option,running_delta,buf,buflen);
          printf("%d\n", benchRet); 
          free(option);
          free(running_delta);
          for(int i1 = 0; i1 < _len_buf0; i1++) {
            int _len_buf1 = 1;
              free(buf[i1]);
          }
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long buflen = 10;
          int _len_option0 = 100;
          struct TYPE_5__ * option = (struct TYPE_5__ *) malloc(_len_option0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_option0; _i0++) {
            option[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_option__i0__buf_p0 = 1;
          option[_i0].buf.p = (const unsigned long *) malloc(_len_option__i0__buf_p0*sizeof(const unsigned long));
          for(int _j0 = 0; _j0 < _len_option__i0__buf_p0; _j0++) {
            option[_i0].buf.p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        option[_i0].buf.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_running_delta0 = 100;
          int * running_delta = (int *) malloc(_len_running_delta0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_running_delta0; _i0++) {
            running_delta[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const unsigned long ** buf = (const unsigned long **) malloc(_len_buf0*sizeof(const unsigned long *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            int _len_buf1 = 1;
            buf[_i0] = (const unsigned long *) malloc(_len_buf1*sizeof(const unsigned long));
            for(int _i1 = 0; _i1 < _len_buf1; _i1++) {
              buf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = coap_parseOption(option,running_delta,buf,buflen);
          printf("%d\n", benchRet); 
          free(option);
          free(running_delta);
          for(int i1 = 0; i1 < _len_buf0; i1++) {
            int _len_buf1 = 1;
              free(buf[i1]);
          }
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
