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
struct scsi_pointer {char* ptr; int this_residual; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned char get_next_SCp_byte(struct scsi_pointer *SCp)
{
	char c = *SCp->ptr;

	SCp->ptr += 1;
	SCp->this_residual -= 1;

	return c;
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
          int _len_SCp0 = 1;
          struct scsi_pointer * SCp = (struct scsi_pointer *) malloc(_len_SCp0*sizeof(struct scsi_pointer));
          for(int _i0 = 0; _i0 < _len_SCp0; _i0++) {
              int _len_SCp__i0__ptr0 = 1;
          SCp[_i0].ptr = (char *) malloc(_len_SCp__i0__ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_SCp__i0__ptr0; _j0++) {
            SCp[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        SCp[_i0].this_residual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = get_next_SCp_byte(SCp);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_SCp0; _aux++) {
          free(SCp[_aux].ptr);
          }
          free(SCp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_SCp0 = 65025;
          struct scsi_pointer * SCp = (struct scsi_pointer *) malloc(_len_SCp0*sizeof(struct scsi_pointer));
          for(int _i0 = 0; _i0 < _len_SCp0; _i0++) {
              int _len_SCp__i0__ptr0 = 1;
          SCp[_i0].ptr = (char *) malloc(_len_SCp__i0__ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_SCp__i0__ptr0; _j0++) {
            SCp[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        SCp[_i0].this_residual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = get_next_SCp_byte(SCp);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_SCp0; _aux++) {
          free(SCp[_aux].ptr);
          }
          free(SCp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_SCp0 = 100;
          struct scsi_pointer * SCp = (struct scsi_pointer *) malloc(_len_SCp0*sizeof(struct scsi_pointer));
          for(int _i0 = 0; _i0 < _len_SCp0; _i0++) {
              int _len_SCp__i0__ptr0 = 1;
          SCp[_i0].ptr = (char *) malloc(_len_SCp__i0__ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_SCp__i0__ptr0; _j0++) {
            SCp[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        SCp[_i0].this_residual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = get_next_SCp_byte(SCp);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_SCp0; _aux++) {
          free(SCp[_aux].ptr);
          }
          free(SCp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
