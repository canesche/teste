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
struct aac_dev {size_t cardtype; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_2__ {char const* name; } ;

/* Variables and functions */
 TYPE_1__* aac_drivers ; 

__attribute__((used)) static const char *aac_info(struct Scsi_Host *shost)
{
	struct aac_dev *dev = (struct aac_dev *)shost->hostdata;
	return aac_drivers[dev->cardtype].name;
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
          int _len_shost0 = 1;
          struct Scsi_Host * shost = (struct Scsi_Host *) malloc(_len_shost0*sizeof(struct Scsi_Host));
          for(int _i0 = 0; _i0 < _len_shost0; _i0++) {
            shost[_i0].hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = aac_info(shost);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(shost);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_shost0 = 65025;
          struct Scsi_Host * shost = (struct Scsi_Host *) malloc(_len_shost0*sizeof(struct Scsi_Host));
          for(int _i0 = 0; _i0 < _len_shost0; _i0++) {
            shost[_i0].hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = aac_info(shost);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(shost);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_shost0 = 100;
          struct Scsi_Host * shost = (struct Scsi_Host *) malloc(_len_shost0*sizeof(struct Scsi_Host));
          for(int _i0 = 0; _i0 < _len_shost0; _i0++) {
            shost[_i0].hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = aac_info(shost);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(shost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
