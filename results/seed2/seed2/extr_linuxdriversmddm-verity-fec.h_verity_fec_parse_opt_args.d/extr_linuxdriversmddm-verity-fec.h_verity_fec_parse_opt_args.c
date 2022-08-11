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
struct dm_verity {int dummy; } ;
struct dm_arg_set {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static inline int verity_fec_parse_opt_args(struct dm_arg_set *as,
					    struct dm_verity *v,
					    unsigned *argc,
					    const char *arg_name)
{
	return -EINVAL;
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
          int _len_as0 = 1;
          struct dm_arg_set * as = (struct dm_arg_set *) malloc(_len_as0*sizeof(struct dm_arg_set));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
            as[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 1;
          struct dm_verity * v = (struct dm_verity *) malloc(_len_v0*sizeof(struct dm_verity));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_argc0 = 1;
          unsigned int * argc = (unsigned int *) malloc(_len_argc0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_argc0; _i0++) {
            argc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg_name0 = 1;
          const char * arg_name = (const char *) malloc(_len_arg_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_arg_name0; _i0++) {
            arg_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = verity_fec_parse_opt_args(as,v,argc,arg_name);
          printf("%d\n", benchRet); 
          free(as);
          free(v);
          free(argc);
          free(arg_name);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_as0 = 65025;
          struct dm_arg_set * as = (struct dm_arg_set *) malloc(_len_as0*sizeof(struct dm_arg_set));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
            as[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 65025;
          struct dm_verity * v = (struct dm_verity *) malloc(_len_v0*sizeof(struct dm_verity));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_argc0 = 65025;
          unsigned int * argc = (unsigned int *) malloc(_len_argc0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_argc0; _i0++) {
            argc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg_name0 = 65025;
          const char * arg_name = (const char *) malloc(_len_arg_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_arg_name0; _i0++) {
            arg_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = verity_fec_parse_opt_args(as,v,argc,arg_name);
          printf("%d\n", benchRet); 
          free(as);
          free(v);
          free(argc);
          free(arg_name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_as0 = 100;
          struct dm_arg_set * as = (struct dm_arg_set *) malloc(_len_as0*sizeof(struct dm_arg_set));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
            as[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 100;
          struct dm_verity * v = (struct dm_verity *) malloc(_len_v0*sizeof(struct dm_verity));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_argc0 = 100;
          unsigned int * argc = (unsigned int *) malloc(_len_argc0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_argc0; _i0++) {
            argc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg_name0 = 100;
          const char * arg_name = (const char *) malloc(_len_arg_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_arg_name0; _i0++) {
            arg_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = verity_fec_parse_opt_args(as,v,argc,arg_name);
          printf("%d\n", benchRet); 
          free(as);
          free(v);
          free(argc);
          free(arg_name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
