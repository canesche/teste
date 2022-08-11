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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct elf_info {unsigned long loadsize; unsigned long memsize; unsigned long elfoffset; } ;
struct TYPE_4__ {scalar_t__* e_ident; scalar_t__ e_type; scalar_t__ e_machine; scalar_t__ e_phnum; scalar_t__ e_phoff; } ;
struct TYPE_3__ {scalar_t__ p_type; scalar_t__ p_offset; scalar_t__ p_memsz; scalar_t__ p_filesz; } ;
typedef  TYPE_1__ Elf64_Phdr ;
typedef  TYPE_2__ Elf64_Ehdr ;

/* Variables and functions */
 size_t EI_CLASS ; 
 size_t EI_DATA ; 
 size_t EI_MAG0 ; 
 size_t EI_MAG1 ; 
 size_t EI_MAG2 ; 
 size_t EI_MAG3 ; 
 scalar_t__ ELFCLASS64 ; 
 scalar_t__ ELFDATA2LSB ; 
 scalar_t__ ELFMAG0 ; 
 scalar_t__ ELFMAG1 ; 
 scalar_t__ ELFMAG2 ; 
 scalar_t__ ELFMAG3 ; 
 scalar_t__ EM_PPC64 ; 
 scalar_t__ ET_DYN ; 
 scalar_t__ ET_EXEC ; 
 scalar_t__ PT_LOAD ; 

int parse_elf64(void *hdr, struct elf_info *info)
{
	Elf64_Ehdr *elf64 = hdr;
	Elf64_Phdr *elf64ph;
	unsigned int i;

	if (!(elf64->e_ident[EI_MAG0]  == ELFMAG0	&&
	      elf64->e_ident[EI_MAG1]  == ELFMAG1	&&
	      elf64->e_ident[EI_MAG2]  == ELFMAG2	&&
	      elf64->e_ident[EI_MAG3]  == ELFMAG3	&&
	      elf64->e_ident[EI_CLASS] == ELFCLASS64	&&
#ifdef __LITTLE_ENDIAN__
	      elf64->e_ident[EI_DATA]  == ELFDATA2LSB	&&
#else
	      elf64->e_ident[EI_DATA]  == ELFDATA2MSB	&&
#endif
	      (elf64->e_type            == ET_EXEC ||
	       elf64->e_type            == ET_DYN)	&&
	      elf64->e_machine         == EM_PPC64))
		return 0;

	elf64ph = (Elf64_Phdr *)((unsigned long)elf64 +
				 (unsigned long)elf64->e_phoff);
	for (i = 0; i < (unsigned int)elf64->e_phnum; i++, elf64ph++)
		if (elf64ph->p_type == PT_LOAD)
			break;
	if (i >= (unsigned int)elf64->e_phnum)
		return 0;

	info->loadsize = (unsigned long)elf64ph->p_filesz;
	info->memsize = (unsigned long)elf64ph->p_memsz;
	info->elfoffset = (unsigned long)elf64ph->p_offset;

	return 1;
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
          void * hdr;
          int _len_info0 = 1;
          struct elf_info * info = (struct elf_info *) malloc(_len_info0*sizeof(struct elf_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].loadsize = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].memsize = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].elfoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_elf64(hdr,info);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * hdr;
          int _len_info0 = 65025;
          struct elf_info * info = (struct elf_info *) malloc(_len_info0*sizeof(struct elf_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].loadsize = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].memsize = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].elfoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_elf64(hdr,info);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * hdr;
          int _len_info0 = 100;
          struct elf_info * info = (struct elf_info *) malloc(_len_info0*sizeof(struct elf_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].loadsize = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].memsize = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].elfoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_elf64(hdr,info);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
