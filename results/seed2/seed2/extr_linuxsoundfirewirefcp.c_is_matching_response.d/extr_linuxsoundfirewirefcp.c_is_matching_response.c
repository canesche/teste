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
typedef  scalar_t__ u8 ;
struct fcp_transaction {scalar_t__* response_buffer; unsigned int response_match_bytes; } ;

/* Variables and functions */

__attribute__((used)) static bool is_matching_response(struct fcp_transaction *transaction,
				 const void *response, size_t length)
{
	const u8 *p1, *p2;
	unsigned int mask, i;

	p1 = response;
	p2 = transaction->response_buffer;
	mask = transaction->response_match_bytes;

	for (i = 0; ; ++i) {
		if ((mask & 1) && p1[i] != p2[i])
			return false;
		mask >>= 1;
		if (!mask)
			return true;
		if (--length == 0)
			return false;
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
          unsigned long length = 100;
          int _len_transaction0 = 1;
          struct fcp_transaction * transaction = (struct fcp_transaction *) malloc(_len_transaction0*sizeof(struct fcp_transaction));
          for(int _i0 = 0; _i0 < _len_transaction0; _i0++) {
              int _len_transaction__i0__response_buffer0 = 1;
          transaction[_i0].response_buffer = (long *) malloc(_len_transaction__i0__response_buffer0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_transaction__i0__response_buffer0; _j0++) {
            transaction[_i0].response_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        transaction[_i0].response_match_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_response0 = 1;
          const void * response = (const void *) malloc(_len_response0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_response0; _i0++) {
            response[_i0] = 0;
          }
          int benchRet = is_matching_response(transaction,response,length);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_transaction0; _aux++) {
          free(transaction[_aux].response_buffer);
          }
          free(transaction);
          free(response);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long length = 255;
          int _len_transaction0 = 65025;
          struct fcp_transaction * transaction = (struct fcp_transaction *) malloc(_len_transaction0*sizeof(struct fcp_transaction));
          for(int _i0 = 0; _i0 < _len_transaction0; _i0++) {
              int _len_transaction__i0__response_buffer0 = 1;
          transaction[_i0].response_buffer = (long *) malloc(_len_transaction__i0__response_buffer0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_transaction__i0__response_buffer0; _j0++) {
            transaction[_i0].response_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        transaction[_i0].response_match_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_response0 = 65025;
          const void * response = (const void *) malloc(_len_response0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_response0; _i0++) {
            response[_i0] = 0;
          }
          int benchRet = is_matching_response(transaction,response,length);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_transaction0; _aux++) {
          free(transaction[_aux].response_buffer);
          }
          free(transaction);
          free(response);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long length = 10;
          int _len_transaction0 = 100;
          struct fcp_transaction * transaction = (struct fcp_transaction *) malloc(_len_transaction0*sizeof(struct fcp_transaction));
          for(int _i0 = 0; _i0 < _len_transaction0; _i0++) {
              int _len_transaction__i0__response_buffer0 = 1;
          transaction[_i0].response_buffer = (long *) malloc(_len_transaction__i0__response_buffer0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_transaction__i0__response_buffer0; _j0++) {
            transaction[_i0].response_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        transaction[_i0].response_match_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_response0 = 100;
          const void * response = (const void *) malloc(_len_response0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_response0; _i0++) {
            response[_i0] = 0;
          }
          int benchRet = is_matching_response(transaction,response,length);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_transaction0; _aux++) {
          free(transaction[_aux].response_buffer);
          }
          free(transaction);
          free(response);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
