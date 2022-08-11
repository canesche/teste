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
struct branch {int opcode; unsigned long delta; } ;

/* Variables and functions */

unsigned paravirt_patch_jmp(void *insnbuf, const void *target,
			    unsigned long addr, unsigned len)
{
	struct branch *b = insnbuf;
	unsigned long delta = (unsigned long)target - (addr+5);

	if (len < 5) {
#ifdef CONFIG_RETPOLINE
		WARN_ONCE(1, "Failing to patch indirect JMP in %ps\n", (void *)addr);
#endif
		return len;	/* call too long for patch site */
	}

	b->opcode = 0xe9;	/* jmp */
	b->delta = delta;

	return 5;
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
          unsigned long addr = 100;
          unsigned int len = 100;
          void * insnbuf;
          int _len_target0 = 1;
          const void * target = (const void *) malloc(_len_target0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = 0;
          }
          unsigned int benchRet = paravirt_patch_jmp(insnbuf,target,addr,len);
          printf("%u\n", benchRet); 
          free(target);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long addr = 255;
          unsigned int len = 255;
          void * insnbuf;
          int _len_target0 = 65025;
          const void * target = (const void *) malloc(_len_target0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = 0;
          }
          unsigned int benchRet = paravirt_patch_jmp(insnbuf,target,addr,len);
          printf("%u\n", benchRet); 
          free(target);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long addr = 10;
          unsigned int len = 10;
          void * insnbuf;
          int _len_target0 = 100;
          const void * target = (const void *) malloc(_len_target0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = 0;
          }
          unsigned int benchRet = paravirt_patch_jmp(insnbuf,target,addr,len);
          printf("%u\n", benchRet); 
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
