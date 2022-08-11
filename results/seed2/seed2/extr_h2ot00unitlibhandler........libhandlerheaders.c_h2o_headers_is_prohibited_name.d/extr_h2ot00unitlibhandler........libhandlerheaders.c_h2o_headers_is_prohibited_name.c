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
typedef  int /*<<< orphan*/  h2o_token_t ;

/* Variables and functions */
 int /*<<< orphan*/  const* H2O_TOKEN_CONNECTION ; 
 int /*<<< orphan*/  const* H2O_TOKEN_CONTENT_LENGTH ; 
 int /*<<< orphan*/  const* H2O_TOKEN_DATE ; 
 int /*<<< orphan*/  const* H2O_TOKEN_SERVER ; 
 int /*<<< orphan*/  const* H2O_TOKEN_TRANSFER_ENCODING ; 

int h2o_headers_is_prohibited_name(const h2o_token_t *token)
{
    /* prohibit connection-specific headers */
    if (token == H2O_TOKEN_CONNECTION || token == H2O_TOKEN_CONTENT_LENGTH || token == H2O_TOKEN_TRANSFER_ENCODING)
        return 1;
    /* prohibit headers added at protocol layer */
    if (token == H2O_TOKEN_DATE || token == H2O_TOKEN_SERVER)
        return 1;
    /* all others are permitted */
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
          int _len_token0 = 1;
          const int * token = (const int *) malloc(_len_token0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
            token[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h2o_headers_is_prohibited_name(token);
          printf("%d\n", benchRet); 
          free(token);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_token0 = 65025;
          const int * token = (const int *) malloc(_len_token0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
            token[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h2o_headers_is_prohibited_name(token);
          printf("%d\n", benchRet); 
          free(token);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_token0 = 100;
          const int * token = (const int *) malloc(_len_token0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_token0; _i0++) {
            token[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h2o_headers_is_prohibited_name(token);
          printf("%d\n", benchRet); 
          free(token);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
