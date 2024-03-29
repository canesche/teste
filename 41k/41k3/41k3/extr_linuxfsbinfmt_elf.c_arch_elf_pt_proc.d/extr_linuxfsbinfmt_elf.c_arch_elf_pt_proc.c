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
struct file {int dummy; } ;
struct elfhdr {int dummy; } ;
struct elf_phdr {int dummy; } ;
struct arch_elf_state {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int arch_elf_pt_proc(struct elfhdr *ehdr,
				   struct elf_phdr *phdr,
				   struct file *elf, bool is_interp,
				   struct arch_elf_state *state)
{
	/* Dummy implementation, always proceed */
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
          int is_interp = 100;
          int _len_ehdr0 = 1;
          struct elfhdr * ehdr = (struct elfhdr *) malloc(_len_ehdr0*sizeof(struct elfhdr));
          for(int _i0 = 0; _i0 < _len_ehdr0; _i0++) {
            ehdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phdr0 = 1;
          struct elf_phdr * phdr = (struct elf_phdr *) malloc(_len_phdr0*sizeof(struct elf_phdr));
          for(int _i0 = 0; _i0 < _len_phdr0; _i0++) {
            phdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_elf0 = 1;
          struct file * elf = (struct file *) malloc(_len_elf0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_elf0; _i0++) {
            elf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          struct arch_elf_state * state = (struct arch_elf_state *) malloc(_len_state0*sizeof(struct arch_elf_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_elf_pt_proc(ehdr,phdr,elf,is_interp,state);
          printf("%d\n", benchRet); 
          free(ehdr);
          free(phdr);
          free(elf);
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int is_interp = 255;
          int _len_ehdr0 = 65025;
          struct elfhdr * ehdr = (struct elfhdr *) malloc(_len_ehdr0*sizeof(struct elfhdr));
          for(int _i0 = 0; _i0 < _len_ehdr0; _i0++) {
            ehdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phdr0 = 65025;
          struct elf_phdr * phdr = (struct elf_phdr *) malloc(_len_phdr0*sizeof(struct elf_phdr));
          for(int _i0 = 0; _i0 < _len_phdr0; _i0++) {
            phdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_elf0 = 65025;
          struct file * elf = (struct file *) malloc(_len_elf0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_elf0; _i0++) {
            elf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 65025;
          struct arch_elf_state * state = (struct arch_elf_state *) malloc(_len_state0*sizeof(struct arch_elf_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_elf_pt_proc(ehdr,phdr,elf,is_interp,state);
          printf("%d\n", benchRet); 
          free(ehdr);
          free(phdr);
          free(elf);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int is_interp = 10;
          int _len_ehdr0 = 100;
          struct elfhdr * ehdr = (struct elfhdr *) malloc(_len_ehdr0*sizeof(struct elfhdr));
          for(int _i0 = 0; _i0 < _len_ehdr0; _i0++) {
            ehdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phdr0 = 100;
          struct elf_phdr * phdr = (struct elf_phdr *) malloc(_len_phdr0*sizeof(struct elf_phdr));
          for(int _i0 = 0; _i0 < _len_phdr0; _i0++) {
            phdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_elf0 = 100;
          struct file * elf = (struct file *) malloc(_len_elf0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_elf0; _i0++) {
            elf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 100;
          struct arch_elf_state * state = (struct arch_elf_state *) malloc(_len_state0*sizeof(struct arch_elf_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_elf_pt_proc(ehdr,phdr,elf,is_interp,state);
          printf("%d\n", benchRet); 
          free(ehdr);
          free(phdr);
          free(elf);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
