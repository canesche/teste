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
struct ath10k {int dummy; } ;
typedef  enum ath10k_debug_mask { ____Placeholder_ath10k_debug_mask } ath10k_debug_mask ;

/* Variables and functions */

__attribute__((used)) static inline void ath10k_dbg_dump(struct ath10k *ar,
				   enum ath10k_debug_mask mask,
				   const char *msg, const char *prefix,
				   const void *buf, size_t len)
{
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
          enum ath10k_debug_mask mask = 0;
          unsigned long len = 100;
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 1;
          const char * msg = (const char *) malloc(_len_msg0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 1;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const void * buf = (const void *) malloc(_len_buf0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = 0;
          }
          ath10k_dbg_dump(ar,mask,msg,prefix,buf,len);
          free(ar);
          free(msg);
          free(prefix);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum ath10k_debug_mask mask = 0;
          unsigned long len = 255;
          int _len_ar0 = 65025;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 65025;
          const char * msg = (const char *) malloc(_len_msg0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 65025;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const void * buf = (const void *) malloc(_len_buf0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = 0;
          }
          ath10k_dbg_dump(ar,mask,msg,prefix,buf,len);
          free(ar);
          free(msg);
          free(prefix);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum ath10k_debug_mask mask = 0;
          unsigned long len = 10;
          int _len_ar0 = 100;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 100;
          const char * msg = (const char *) malloc(_len_msg0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 100;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const void * buf = (const void *) malloc(_len_buf0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = 0;
          }
          ath10k_dbg_dump(ar,mask,msg,prefix,buf,len);
          free(ar);
          free(msg);
          free(prefix);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
