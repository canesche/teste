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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct request_key_auth {int dummy; } ;
struct key_preparsed_payload {scalar_t__ data; } ;
struct TYPE_2__ {struct request_key_auth** data; } ;
struct key {TYPE_1__ payload; } ;

/* Variables and functions */

__attribute__((used)) static int request_key_auth_instantiate(struct key *key,
					struct key_preparsed_payload *prep)
{
	key->payload.data[0] = (struct request_key_auth *)prep->data;
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
          int _len_key0 = 1;
          struct key * key = (struct key *) malloc(_len_key0*sizeof(struct key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
              int _len_key__i0__payload_data0 = 1;
          key[_i0].payload.data = (struct request_key_auth **) malloc(_len_key__i0__payload_data0*sizeof(struct request_key_auth *));
          for(int _j0 = 0; _j0 < _len_key__i0__payload_data0; _j0++) {
            int _len_key__i0__payload_data1 = 1;
            key[_i0].payload.data[_j0] = (struct request_key_auth *) malloc(_len_key__i0__payload_data1*sizeof(struct request_key_auth));
            for(int _j1 = 0; _j1 < _len_key__i0__payload_data1; _j1++) {
              key[_i0].payload.data[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_prep0 = 1;
          struct key_preparsed_payload * prep = (struct key_preparsed_payload *) malloc(_len_prep0*sizeof(struct key_preparsed_payload));
          for(int _i0 = 0; _i0 < _len_prep0; _i0++) {
            prep[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = request_key_auth_instantiate(key,prep);
          printf("%d\n", benchRet); 
          free(key);
          free(prep);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_key0 = 65025;
          struct key * key = (struct key *) malloc(_len_key0*sizeof(struct key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
              int _len_key__i0__payload_data0 = 1;
          key[_i0].payload.data = (struct request_key_auth **) malloc(_len_key__i0__payload_data0*sizeof(struct request_key_auth *));
          for(int _j0 = 0; _j0 < _len_key__i0__payload_data0; _j0++) {
            int _len_key__i0__payload_data1 = 1;
            key[_i0].payload.data[_j0] = (struct request_key_auth *) malloc(_len_key__i0__payload_data1*sizeof(struct request_key_auth));
            for(int _j1 = 0; _j1 < _len_key__i0__payload_data1; _j1++) {
              key[_i0].payload.data[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_prep0 = 65025;
          struct key_preparsed_payload * prep = (struct key_preparsed_payload *) malloc(_len_prep0*sizeof(struct key_preparsed_payload));
          for(int _i0 = 0; _i0 < _len_prep0; _i0++) {
            prep[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = request_key_auth_instantiate(key,prep);
          printf("%d\n", benchRet); 
          free(key);
          free(prep);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_key0 = 100;
          struct key * key = (struct key *) malloc(_len_key0*sizeof(struct key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
              int _len_key__i0__payload_data0 = 1;
          key[_i0].payload.data = (struct request_key_auth **) malloc(_len_key__i0__payload_data0*sizeof(struct request_key_auth *));
          for(int _j0 = 0; _j0 < _len_key__i0__payload_data0; _j0++) {
            int _len_key__i0__payload_data1 = 1;
            key[_i0].payload.data[_j0] = (struct request_key_auth *) malloc(_len_key__i0__payload_data1*sizeof(struct request_key_auth));
            for(int _j1 = 0; _j1 < _len_key__i0__payload_data1; _j1++) {
              key[_i0].payload.data[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_prep0 = 100;
          struct key_preparsed_payload * prep = (struct key_preparsed_payload *) malloc(_len_prep0*sizeof(struct key_preparsed_payload));
          for(int _i0 = 0; _i0 < _len_prep0; _i0++) {
            prep[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = request_key_auth_instantiate(key,prep);
          printf("%d\n", benchRet); 
          free(key);
          free(prep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
