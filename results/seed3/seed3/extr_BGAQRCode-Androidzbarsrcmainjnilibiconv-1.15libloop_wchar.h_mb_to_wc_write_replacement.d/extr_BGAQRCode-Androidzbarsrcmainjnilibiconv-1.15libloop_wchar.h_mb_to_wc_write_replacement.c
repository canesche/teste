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
typedef  int /*<<< orphan*/  wchar_t ;
struct mb_to_wc_fallback_locals {scalar_t__ l_errno; int l_outbytesleft; scalar_t__ l_outbuf; } ;

/* Variables and functions */
 scalar_t__ E2BIG ; 

__attribute__((used)) static void mb_to_wc_write_replacement (const wchar_t *buf, size_t buflen,
                                        void* callback_arg)
{
  struct mb_to_wc_fallback_locals * plocals =
    (struct mb_to_wc_fallback_locals *) callback_arg;
  /* Do nothing if already encountered an error in a previous call. */
  if (plocals->l_errno == 0) {
    /* Attempt to copy the passed buffer to the output buffer. */
    if (plocals->l_outbytesleft < sizeof(wchar_t)*buflen)
      plocals->l_errno = E2BIG;
    else {
      for (; buflen > 0; buf++, buflen--) {
        *(wchar_t*) plocals->l_outbuf = *buf;
        plocals->l_outbuf += sizeof(wchar_t);
        plocals->l_outbytesleft -= sizeof(wchar_t);
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
          unsigned long buflen = 100;
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * callback_arg;
          mb_to_wc_write_replacement(buf,buflen,callback_arg);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long buflen = 255;
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * callback_arg;
          mb_to_wc_write_replacement(buf,buflen,callback_arg);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long buflen = 10;
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * callback_arg;
          mb_to_wc_write_replacement(buf,buflen,callback_arg);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
