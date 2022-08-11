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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {size_t e_shstrndx; unsigned int e_shnum; } ;
struct TYPE_4__ {int sh_name; } ;
struct TYPE_5__ {char* strtab; TYPE_1__ shdr; } ;

/* Variables and functions */
 unsigned int SHN_ABS ; 
 unsigned int SHN_COMMON ; 
 TYPE_3__ ehdr ; 
 TYPE_2__* secs ; 

__attribute__((used)) static const char *sec_name(unsigned shndx)
{
	const char *sec_strtab;
	const char *name;

	sec_strtab = secs[ehdr.e_shstrndx].strtab;
	if (shndx < ehdr.e_shnum)
		name = sec_strtab + secs[shndx].shdr.sh_name;
	else if (shndx == SHN_ABS)
		name = "ABSOLUTE";
	else if (shndx == SHN_COMMON)
		name = "COMMON";
	else
		name = "<noname>";
	return name;
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
          unsigned int shndx = 100;
          const char * benchRet = sec_name(shndx);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int shndx = 255;
          const char * benchRet = sec_name(shndx);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int shndx = 10;
          const char * benchRet = sec_name(shndx);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
