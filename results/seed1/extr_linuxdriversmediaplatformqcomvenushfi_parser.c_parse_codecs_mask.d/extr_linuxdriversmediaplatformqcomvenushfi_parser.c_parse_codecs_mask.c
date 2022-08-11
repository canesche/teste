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
typedef  int /*<<< orphan*/  u32 ;
struct hfi_codec_mask_supported {int /*<<< orphan*/  video_domains; int /*<<< orphan*/  codecs; } ;

/* Variables and functions */

__attribute__((used)) static void parse_codecs_mask(u32 *codecs, u32 *domain, void *data)
{
	struct hfi_codec_mask_supported *mask = data;

	*codecs = mask->codecs;
	*domain = mask->video_domains;
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
          int _len_codecs0 = 1;
          int * codecs = (int *) malloc(_len_codecs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_codecs0; _i0++) {
            codecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_domain0 = 1;
          int * domain = (int *) malloc(_len_domain0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_domain0; _i0++) {
            domain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          parse_codecs_mask(codecs,domain,data);
          free(codecs);
          free(domain);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_codecs0 = 65025;
          int * codecs = (int *) malloc(_len_codecs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_codecs0; _i0++) {
            codecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_domain0 = 65025;
          int * domain = (int *) malloc(_len_domain0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_domain0; _i0++) {
            domain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          parse_codecs_mask(codecs,domain,data);
          free(codecs);
          free(domain);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_codecs0 = 100;
          int * codecs = (int *) malloc(_len_codecs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_codecs0; _i0++) {
            codecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_domain0 = 100;
          int * domain = (int *) malloc(_len_domain0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_domain0; _i0++) {
            domain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          parse_codecs_mask(codecs,domain,data);
          free(codecs);
          free(domain);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
