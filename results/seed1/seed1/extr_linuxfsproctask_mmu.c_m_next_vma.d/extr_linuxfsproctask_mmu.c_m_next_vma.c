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
struct vm_area_struct {scalar_t__ vm_next; } ;
struct proc_maps_private {struct vm_area_struct* tail_vma; } ;

/* Variables and functions */

__attribute__((used)) static struct vm_area_struct *
m_next_vma(struct proc_maps_private *priv, struct vm_area_struct *vma)
{
	if (vma == priv->tail_vma)
		return NULL;
	return vma->vm_next ?: priv->tail_vma;
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
          int _len_priv0 = 1;
          struct proc_maps_private * priv = (struct proc_maps_private *) malloc(_len_priv0*sizeof(struct proc_maps_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__tail_vma0 = 1;
          priv[_i0].tail_vma = (struct vm_area_struct *) malloc(_len_priv__i0__tail_vma0*sizeof(struct vm_area_struct));
          for(int _j0 = 0; _j0 < _len_priv__i0__tail_vma0; _j0++) {
            priv[_i0].tail_vma->vm_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].vm_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct vm_area_struct * benchRet = m_next_vma(priv,vma);
          printf("%ld\n", (*benchRet).vm_next);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].tail_vma);
          }
          free(priv);
          free(vma);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct proc_maps_private * priv = (struct proc_maps_private *) malloc(_len_priv0*sizeof(struct proc_maps_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__tail_vma0 = 1;
          priv[_i0].tail_vma = (struct vm_area_struct *) malloc(_len_priv__i0__tail_vma0*sizeof(struct vm_area_struct));
          for(int _j0 = 0; _j0 < _len_priv__i0__tail_vma0; _j0++) {
            priv[_i0].tail_vma->vm_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vma0 = 65025;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].vm_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct vm_area_struct * benchRet = m_next_vma(priv,vma);
          printf("%ld\n", (*benchRet).vm_next);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].tail_vma);
          }
          free(priv);
          free(vma);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct proc_maps_private * priv = (struct proc_maps_private *) malloc(_len_priv0*sizeof(struct proc_maps_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__tail_vma0 = 1;
          priv[_i0].tail_vma = (struct vm_area_struct *) malloc(_len_priv__i0__tail_vma0*sizeof(struct vm_area_struct));
          for(int _j0 = 0; _j0 < _len_priv__i0__tail_vma0; _j0++) {
            priv[_i0].tail_vma->vm_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vma0 = 100;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].vm_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct vm_area_struct * benchRet = m_next_vma(priv,vma);
          printf("%ld\n", (*benchRet).vm_next);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].tail_vma);
          }
          free(priv);
          free(vma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
