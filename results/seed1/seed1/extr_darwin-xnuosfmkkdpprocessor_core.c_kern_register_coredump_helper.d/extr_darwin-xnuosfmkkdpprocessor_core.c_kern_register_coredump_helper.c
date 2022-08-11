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
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  kern_return_t ;
typedef  int /*<<< orphan*/  kern_coredump_callback_config ;
typedef  int /*<<< orphan*/  cpu_type_t ;
typedef  int /*<<< orphan*/  cpu_subtype_t ;
typedef  int /*<<< orphan*/  boolean_t ;

/* Variables and functions */
 int /*<<< orphan*/  KERN_NOT_SUPPORTED ; 

kern_return_t
kern_register_coredump_helper(int kern_coredump_config_vers, kern_coredump_callback_config *kc_callbacks, void* refcon,
				const char *core_description, boolean_t is64bit, uint32_t mh_magic,
				cpu_type_t cpu_type, cpu_subtype_t cpu_subtype)
{
#pragma unused(kern_coredump_config_vers, kc_callbacks, refcon, core_description, is64bit, mh_magic, cpu_type, cpu_subtype)
	return KERN_NOT_SUPPORTED;
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
          int kern_coredump_config_vers = 100;
          int is64bit = 100;
          int mh_magic = 100;
          int cpu_type = 100;
          int cpu_subtype = 100;
          int _len_kc_callbacks0 = 1;
          int * kc_callbacks = (int *) malloc(_len_kc_callbacks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kc_callbacks0; _i0++) {
            kc_callbacks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * refcon;
          int _len_core_description0 = 1;
          const char * core_description = (const char *) malloc(_len_core_description0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_core_description0; _i0++) {
            core_description[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kern_register_coredump_helper(kern_coredump_config_vers,kc_callbacks,refcon,core_description,is64bit,mh_magic,cpu_type,cpu_subtype);
          printf("%d\n", benchRet); 
          free(kc_callbacks);
          free(core_description);
        
        break;
    }
    // big-arr
    case 1:
    {
          int kern_coredump_config_vers = 255;
          int is64bit = 255;
          int mh_magic = 255;
          int cpu_type = 255;
          int cpu_subtype = 255;
          int _len_kc_callbacks0 = 65025;
          int * kc_callbacks = (int *) malloc(_len_kc_callbacks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kc_callbacks0; _i0++) {
            kc_callbacks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * refcon;
          int _len_core_description0 = 65025;
          const char * core_description = (const char *) malloc(_len_core_description0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_core_description0; _i0++) {
            core_description[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kern_register_coredump_helper(kern_coredump_config_vers,kc_callbacks,refcon,core_description,is64bit,mh_magic,cpu_type,cpu_subtype);
          printf("%d\n", benchRet); 
          free(kc_callbacks);
          free(core_description);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int kern_coredump_config_vers = 10;
          int is64bit = 10;
          int mh_magic = 10;
          int cpu_type = 10;
          int cpu_subtype = 10;
          int _len_kc_callbacks0 = 100;
          int * kc_callbacks = (int *) malloc(_len_kc_callbacks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kc_callbacks0; _i0++) {
            kc_callbacks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * refcon;
          int _len_core_description0 = 100;
          const char * core_description = (const char *) malloc(_len_core_description0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_core_description0; _i0++) {
            core_description[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kern_register_coredump_helper(kern_coredump_config_vers,kc_callbacks,refcon,core_description,is64bit,mh_magic,cpu_type,cpu_subtype);
          printf("%d\n", benchRet); 
          free(kc_callbacks);
          free(core_description);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
