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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct elfhdr {int dummy; } ;
struct elf_phdr {scalar_t__ p_type; int /*<<< orphan*/  p_memsz; int /*<<< orphan*/  p_filesz; int /*<<< orphan*/  p_paddr; int /*<<< orphan*/  p_offset; } ;
struct TYPE_2__ {int /*<<< orphan*/  cpu_notes_buf_size; int /*<<< orphan*/  cpu_notes_buf; } ;

/* Variables and functions */
 scalar_t__ PT_NOTE ; 
 TYPE_1__ fw_dump ; 

__attribute__((used)) static void fadump_update_elfcore_header(char *bufp)
{
	struct elfhdr *elf;
	struct elf_phdr *phdr;

	elf = (struct elfhdr *)bufp;
	bufp += sizeof(struct elfhdr);

	/* First note is a place holder for cpu notes info. */
	phdr = (struct elf_phdr *)bufp;

	if (phdr->p_type == PT_NOTE) {
		phdr->p_paddr = fw_dump.cpu_notes_buf;
		phdr->p_offset	= phdr->p_paddr;
		phdr->p_filesz	= fw_dump.cpu_notes_buf_size;
		phdr->p_memsz = fw_dump.cpu_notes_buf_size;
	}
	return;
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
          int _len_bufp0 = 1;
          char * bufp = (char *) malloc(_len_bufp0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_bufp0; _i0++) {
            bufp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fadump_update_elfcore_header(bufp);
          free(bufp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bufp0 = 65025;
          char * bufp = (char *) malloc(_len_bufp0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_bufp0; _i0++) {
            bufp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fadump_update_elfcore_header(bufp);
          free(bufp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bufp0 = 100;
          char * bufp = (char *) malloc(_len_bufp0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_bufp0; _i0++) {
            bufp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fadump_update_elfcore_header(bufp);
          free(bufp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
