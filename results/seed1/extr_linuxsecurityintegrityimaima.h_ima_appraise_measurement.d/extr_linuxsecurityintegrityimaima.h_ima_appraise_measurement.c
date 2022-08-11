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
struct integrity_iint_cache {int dummy; } ;
struct file {int dummy; } ;
struct evm_ima_xattr_data {int dummy; } ;
typedef  enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;

/* Variables and functions */
 int INTEGRITY_UNKNOWN ; 

__attribute__((used)) static inline int ima_appraise_measurement(enum ima_hooks func,
					   struct integrity_iint_cache *iint,
					   struct file *file,
					   const unsigned char *filename,
					   struct evm_ima_xattr_data *xattr_value,
					   int xattr_len)
{
	return INTEGRITY_UNKNOWN;
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
          enum ima_hooks func = 0;
          int xattr_len = 100;
          int _len_iint0 = 1;
          struct integrity_iint_cache * iint = (struct integrity_iint_cache *) malloc(_len_iint0*sizeof(struct integrity_iint_cache));
          for(int _i0 = 0; _i0 < _len_iint0; _i0++) {
            iint[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 1;
          const unsigned char * filename = (const unsigned char *) malloc(_len_filename0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xattr_value0 = 1;
          struct evm_ima_xattr_data * xattr_value = (struct evm_ima_xattr_data *) malloc(_len_xattr_value0*sizeof(struct evm_ima_xattr_data));
          for(int _i0 = 0; _i0 < _len_xattr_value0; _i0++) {
            xattr_value[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ima_appraise_measurement(func,iint,file,filename,xattr_value,xattr_len);
          printf("%d\n", benchRet); 
          free(iint);
          free(file);
          free(filename);
          free(xattr_value);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum ima_hooks func = 0;
          int xattr_len = 255;
          int _len_iint0 = 65025;
          struct integrity_iint_cache * iint = (struct integrity_iint_cache *) malloc(_len_iint0*sizeof(struct integrity_iint_cache));
          for(int _i0 = 0; _i0 < _len_iint0; _i0++) {
            iint[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 65025;
          const unsigned char * filename = (const unsigned char *) malloc(_len_filename0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xattr_value0 = 65025;
          struct evm_ima_xattr_data * xattr_value = (struct evm_ima_xattr_data *) malloc(_len_xattr_value0*sizeof(struct evm_ima_xattr_data));
          for(int _i0 = 0; _i0 < _len_xattr_value0; _i0++) {
            xattr_value[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ima_appraise_measurement(func,iint,file,filename,xattr_value,xattr_len);
          printf("%d\n", benchRet); 
          free(iint);
          free(file);
          free(filename);
          free(xattr_value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum ima_hooks func = 0;
          int xattr_len = 10;
          int _len_iint0 = 100;
          struct integrity_iint_cache * iint = (struct integrity_iint_cache *) malloc(_len_iint0*sizeof(struct integrity_iint_cache));
          for(int _i0 = 0; _i0 < _len_iint0; _i0++) {
            iint[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 100;
          const unsigned char * filename = (const unsigned char *) malloc(_len_filename0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xattr_value0 = 100;
          struct evm_ima_xattr_data * xattr_value = (struct evm_ima_xattr_data *) malloc(_len_xattr_value0*sizeof(struct evm_ima_xattr_data));
          for(int _i0 = 0; _i0 < _len_xattr_value0; _i0++) {
            xattr_value[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ima_appraise_measurement(func,iint,file,filename,xattr_value,xattr_len);
          printf("%d\n", benchRet); 
          free(iint);
          free(file);
          free(filename);
          free(xattr_value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
