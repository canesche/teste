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
struct at24_data {int flags; struct at24_client* client; } ;
struct at24_client {int dummy; } ;

/* Variables and functions */
 int AT24_FLAG_ADDR16 ; 

__attribute__((used)) static struct at24_client *at24_translate_offset(struct at24_data *at24,
						 unsigned int *offset)
{
	unsigned int i;

	if (at24->flags & AT24_FLAG_ADDR16) {
		i = *offset >> 16;
		*offset &= 0xffff;
	} else {
		i = *offset >> 8;
		*offset &= 0xff;
	}

	return &at24->client[i];
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
          int _len_at240 = 1;
          struct at24_data * at24 = (struct at24_data *) malloc(_len_at240*sizeof(struct at24_data));
          for(int _i0 = 0; _i0 < _len_at240; _i0++) {
            at24[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_at24__i0__client0 = 1;
          at24[_i0].client = (struct at24_client *) malloc(_len_at24__i0__client0*sizeof(struct at24_client));
          for(int _j0 = 0; _j0 < _len_at24__i0__client0; _j0++) {
            at24[_i0].client->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_offset0 = 1;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct at24_client * benchRet = at24_translate_offset(at24,offset);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_at240; _aux++) {
          free(at24[_aux].client);
          }
          free(at24);
          free(offset);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_at240 = 65025;
          struct at24_data * at24 = (struct at24_data *) malloc(_len_at240*sizeof(struct at24_data));
          for(int _i0 = 0; _i0 < _len_at240; _i0++) {
            at24[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_at24__i0__client0 = 1;
          at24[_i0].client = (struct at24_client *) malloc(_len_at24__i0__client0*sizeof(struct at24_client));
          for(int _j0 = 0; _j0 < _len_at24__i0__client0; _j0++) {
            at24[_i0].client->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_offset0 = 65025;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct at24_client * benchRet = at24_translate_offset(at24,offset);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_at240; _aux++) {
          free(at24[_aux].client);
          }
          free(at24);
          free(offset);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_at240 = 100;
          struct at24_data * at24 = (struct at24_data *) malloc(_len_at240*sizeof(struct at24_data));
          for(int _i0 = 0; _i0 < _len_at240; _i0++) {
            at24[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_at24__i0__client0 = 1;
          at24[_i0].client = (struct at24_client *) malloc(_len_at24__i0__client0*sizeof(struct at24_client));
          for(int _j0 = 0; _j0 < _len_at24__i0__client0; _j0++) {
            at24[_i0].client->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_offset0 = 100;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct at24_client * benchRet = at24_translate_offset(at24,offset);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_at240; _aux++) {
          free(at24[_aux].client);
          }
          free(at24);
          free(offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
