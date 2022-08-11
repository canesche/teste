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
struct pwc_dec1_private {int /*<<< orphan*/  version; } ;
struct pwc_device {int /*<<< orphan*/  release; struct pwc_dec1_private dec1; } ;

/* Variables and functions */

void pwc_dec1_init(struct pwc_device *pdev, const unsigned char *cmd)
{
	struct pwc_dec1_private *pdec = &pdev->dec1;

	pdec->version = pdev->release;
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
          int _len_pdev0 = 1;
          struct pwc_device * pdev = (struct pwc_device *) malloc(_len_pdev0*sizeof(struct pwc_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].release = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].dec1.version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          const unsigned char * cmd = (const unsigned char *) malloc(_len_cmd0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pwc_dec1_init(pdev,cmd);
          free(pdev);
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pdev0 = 65025;
          struct pwc_device * pdev = (struct pwc_device *) malloc(_len_pdev0*sizeof(struct pwc_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].release = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].dec1.version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 65025;
          const unsigned char * cmd = (const unsigned char *) malloc(_len_cmd0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pwc_dec1_init(pdev,cmd);
          free(pdev);
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pdev0 = 100;
          struct pwc_device * pdev = (struct pwc_device *) malloc(_len_pdev0*sizeof(struct pwc_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].release = ((-2 * (next_i()%2)) + 1) * next_i();
        pdev[_i0].dec1.version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 100;
          const unsigned char * cmd = (const unsigned char *) malloc(_len_cmd0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pwc_dec1_init(pdev,cmd);
          free(pdev);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
