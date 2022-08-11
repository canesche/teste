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
struct TYPE_3__ {int* state; } ;
typedef  TYPE_1__ PHP_TIGER_CTX ;

/* Variables and functions */

__attribute__((used)) static inline void TigerDigest(unsigned char *digest_str, unsigned int digest_len, PHP_TIGER_CTX *context)
{
	unsigned int i;

	for (i = 0; i < digest_len; ++i) {
		digest_str[i] = (unsigned char) ((context->state[i/8] >> (8 * (i%8))) & 0xff);
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
          unsigned int digest_len = 100;
          int _len_digest_str0 = 1;
          unsigned char * digest_str = (unsigned char *) malloc(_len_digest_str0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_digest_str0; _i0++) {
            digest_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context0 = 1;
          struct TYPE_3__ * context = (struct TYPE_3__ *) malloc(_len_context0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__state0 = 1;
          context[_i0].state = (int *) malloc(_len_context__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__state0; _j0++) {
            context[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          TigerDigest(digest_str,digest_len,context);
          free(digest_str);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].state);
          }
          free(context);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int digest_len = 255;
          int _len_digest_str0 = 65025;
          unsigned char * digest_str = (unsigned char *) malloc(_len_digest_str0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_digest_str0; _i0++) {
            digest_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context0 = 65025;
          struct TYPE_3__ * context = (struct TYPE_3__ *) malloc(_len_context0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__state0 = 1;
          context[_i0].state = (int *) malloc(_len_context__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__state0; _j0++) {
            context[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          TigerDigest(digest_str,digest_len,context);
          free(digest_str);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].state);
          }
          free(context);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int digest_len = 10;
          int _len_digest_str0 = 100;
          unsigned char * digest_str = (unsigned char *) malloc(_len_digest_str0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_digest_str0; _i0++) {
            digest_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context0 = 100;
          struct TYPE_3__ * context = (struct TYPE_3__ *) malloc(_len_context0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__state0 = 1;
          context[_i0].state = (int *) malloc(_len_context__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__state0; _j0++) {
            context[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          TigerDigest(digest_str,digest_len,context);
          free(digest_str);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].state);
          }
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
