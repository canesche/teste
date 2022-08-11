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
typedef  void* uint16_t ;
struct magic_set {size_t bytes_max; void* elf_notes_max; void* elf_shnum_max; void* elf_phnum_max; void* name_max; void* indir_max; } ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
#define  MAGIC_PARAM_BYTES_MAX 134 
#define  MAGIC_PARAM_ELF_NOTES_MAX 133 
#define  MAGIC_PARAM_ELF_PHNUM_MAX 132 
#define  MAGIC_PARAM_ELF_SHNUM_MAX 131 
#define  MAGIC_PARAM_INDIR_MAX 130 
#define  MAGIC_PARAM_NAME_MAX 129 
#define  MAGIC_PARAM_REGEX_MAX 128 
 int /*<<< orphan*/  errno ; 

int
magic_setparam(struct magic_set *ms, int param, const void *val)
{
	switch (param) {
	case MAGIC_PARAM_INDIR_MAX:
		ms->indir_max = (uint16_t)*(const size_t *)val;
		return 0;
	case MAGIC_PARAM_NAME_MAX:
		ms->name_max = (uint16_t)*(const size_t *)val;
		return 0;
	case MAGIC_PARAM_ELF_PHNUM_MAX:
		ms->elf_phnum_max = (uint16_t)*(const size_t *)val;
		return 0;
	case MAGIC_PARAM_ELF_SHNUM_MAX:
		ms->elf_shnum_max = (uint16_t)*(const size_t *)val;
		return 0;
	case MAGIC_PARAM_ELF_NOTES_MAX:
		ms->elf_notes_max = (uint16_t)*(const size_t *)val;
		return 0;
	case MAGIC_PARAM_REGEX_MAX:
		ms->elf_notes_max = (uint16_t)*(const size_t *)val;
		return 0;
	case MAGIC_PARAM_BYTES_MAX:
		ms->bytes_max = *(const size_t *)val;
		return 0;
	default:
		errno = EINVAL;
		return -1;
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
          int param = 100;
          int _len_ms0 = 1;
          struct magic_set * ms = (struct magic_set *) malloc(_len_ms0*sizeof(struct magic_set));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
            ms[_i0].bytes_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 1;
          const void * val = (const void *) malloc(_len_val0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = magic_setparam(ms,param,val);
          printf("%d\n", benchRet); 
          free(ms);
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int param = 255;
          int _len_ms0 = 65025;
          struct magic_set * ms = (struct magic_set *) malloc(_len_ms0*sizeof(struct magic_set));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
            ms[_i0].bytes_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 65025;
          const void * val = (const void *) malloc(_len_val0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = magic_setparam(ms,param,val);
          printf("%d\n", benchRet); 
          free(ms);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int param = 10;
          int _len_ms0 = 100;
          struct magic_set * ms = (struct magic_set *) malloc(_len_ms0*sizeof(struct magic_set));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
            ms[_i0].bytes_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 100;
          const void * val = (const void *) malloc(_len_val0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = magic_setparam(ms,param,val);
          printf("%d\n", benchRet); 
          free(ms);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
