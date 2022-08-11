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
struct ata_port {int flags; TYPE_1__* ops; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {scalar_t__ scr_read; } ;

/* Variables and functions */
 int ATA_FLAG_SATA ; 

int sata_scr_valid(struct ata_link *link)
{
	struct ata_port *ap = link->ap;

	return (ap->flags & ATA_FLAG_SATA) && ap->ops->scr_read;
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
          int _len_link0 = 1;
          struct ata_link * link = (struct ata_link *) malloc(_len_link0*sizeof(struct ata_link));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
              int _len_link__i0__ap0 = 1;
          link[_i0].ap = (struct ata_port *) malloc(_len_link__i0__ap0*sizeof(struct ata_port));
          for(int _j0 = 0; _j0 < _len_link__i0__ap0; _j0++) {
            link[_i0].ap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_link__i0__ap_ops0 = 1;
          link[_i0].ap->ops = (struct TYPE_2__ *) malloc(_len_link__i0__ap_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_link__i0__ap_ops0; _j0++) {
            link[_i0].ap->ops->scr_read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sata_scr_valid(link);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].ap);
          }
          free(link);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_link0 = 65025;
          struct ata_link * link = (struct ata_link *) malloc(_len_link0*sizeof(struct ata_link));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
              int _len_link__i0__ap0 = 1;
          link[_i0].ap = (struct ata_port *) malloc(_len_link__i0__ap0*sizeof(struct ata_port));
          for(int _j0 = 0; _j0 < _len_link__i0__ap0; _j0++) {
            link[_i0].ap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_link__i0__ap_ops0 = 1;
          link[_i0].ap->ops = (struct TYPE_2__ *) malloc(_len_link__i0__ap_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_link__i0__ap_ops0; _j0++) {
            link[_i0].ap->ops->scr_read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sata_scr_valid(link);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].ap);
          }
          free(link);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_link0 = 100;
          struct ata_link * link = (struct ata_link *) malloc(_len_link0*sizeof(struct ata_link));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
              int _len_link__i0__ap0 = 1;
          link[_i0].ap = (struct ata_port *) malloc(_len_link__i0__ap0*sizeof(struct ata_port));
          for(int _j0 = 0; _j0 < _len_link__i0__ap0; _j0++) {
            link[_i0].ap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_link__i0__ap_ops0 = 1;
          link[_i0].ap->ops = (struct TYPE_2__ *) malloc(_len_link__i0__ap_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_link__i0__ap_ops0; _j0++) {
            link[_i0].ap->ops->scr_read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sata_scr_valid(link);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].ap);
          }
          free(link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
