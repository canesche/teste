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
struct resource {int dummy; } ;
struct pcmcia_socket {unsigned int io_offset; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int static_find_io(struct pcmcia_socket *s, unsigned int attr,
			unsigned int *base, unsigned int num,
			unsigned int align, struct resource **parent)
{
	if (!s->io_offset)
		return -EINVAL;
	*base = s->io_offset | (*base & 0x0fff);
	*parent = NULL;

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
          unsigned int attr = 100;
          unsigned int num = 100;
          unsigned int align = 100;
          int _len_s0 = 1;
          struct pcmcia_socket * s = (struct pcmcia_socket *) malloc(_len_s0*sizeof(struct pcmcia_socket));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].io_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 1;
          unsigned int * base = (unsigned int *) malloc(_len_base0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 1;
          struct resource ** parent = (struct resource **) malloc(_len_parent0*sizeof(struct resource *));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            int _len_parent1 = 1;
            parent[_i0] = (struct resource *) malloc(_len_parent1*sizeof(struct resource));
            for(int _i1 = 0; _i1 < _len_parent1; _i1++) {
              parent[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = static_find_io(s,attr,base,num,align,parent);
          printf("%d\n", benchRet); 
          free(s);
          free(base);
          for(int i1 = 0; i1 < _len_parent0; i1++) {
            int _len_parent1 = 1;
              free(parent[i1]);
          }
          free(parent);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int attr = 255;
          unsigned int num = 255;
          unsigned int align = 255;
          int _len_s0 = 65025;
          struct pcmcia_socket * s = (struct pcmcia_socket *) malloc(_len_s0*sizeof(struct pcmcia_socket));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].io_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 65025;
          unsigned int * base = (unsigned int *) malloc(_len_base0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 65025;
          struct resource ** parent = (struct resource **) malloc(_len_parent0*sizeof(struct resource *));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            int _len_parent1 = 1;
            parent[_i0] = (struct resource *) malloc(_len_parent1*sizeof(struct resource));
            for(int _i1 = 0; _i1 < _len_parent1; _i1++) {
              parent[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = static_find_io(s,attr,base,num,align,parent);
          printf("%d\n", benchRet); 
          free(s);
          free(base);
          for(int i1 = 0; i1 < _len_parent0; i1++) {
            int _len_parent1 = 1;
              free(parent[i1]);
          }
          free(parent);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int attr = 10;
          unsigned int num = 10;
          unsigned int align = 10;
          int _len_s0 = 100;
          struct pcmcia_socket * s = (struct pcmcia_socket *) malloc(_len_s0*sizeof(struct pcmcia_socket));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].io_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 100;
          unsigned int * base = (unsigned int *) malloc(_len_base0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 100;
          struct resource ** parent = (struct resource **) malloc(_len_parent0*sizeof(struct resource *));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            int _len_parent1 = 1;
            parent[_i0] = (struct resource *) malloc(_len_parent1*sizeof(struct resource));
            for(int _i1 = 0; _i1 < _len_parent1; _i1++) {
              parent[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = static_find_io(s,attr,base,num,align,parent);
          printf("%d\n", benchRet); 
          free(s);
          free(base);
          for(int i1 = 0; i1 < _len_parent0; i1++) {
            int _len_parent1 = 1;
              free(parent[i1]);
          }
          free(parent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
