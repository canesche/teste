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
typedef  int /*<<< orphan*/  u32 ;
struct s3fwrn5_fw_version {scalar_t__ major; scalar_t__ build1; scalar_t__ build2; } ;
struct TYPE_2__ {int /*<<< orphan*/  version; } ;
struct s3fwrn5_fw_info {TYPE_1__ fw; } ;

/* Variables and functions */

bool s3fwrn5_fw_check_version(struct s3fwrn5_fw_info *fw_info, u32 version)
{
	struct s3fwrn5_fw_version *new = (void *) &fw_info->fw.version;
	struct s3fwrn5_fw_version *old = (void *) &version;

	if (new->major > old->major)
		return true;
	if (new->build1 > old->build1)
		return true;
	if (new->build2 > old->build2)
		return true;

	return false;
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
          int version = 100;
          int _len_fw_info0 = 1;
          struct s3fwrn5_fw_info * fw_info = (struct s3fwrn5_fw_info *) malloc(_len_fw_info0*sizeof(struct s3fwrn5_fw_info));
          for(int _i0 = 0; _i0 < _len_fw_info0; _i0++) {
            fw_info[_i0].fw.version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s3fwrn5_fw_check_version(fw_info,version);
          printf("%d\n", benchRet); 
          free(fw_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int version = 255;
          int _len_fw_info0 = 65025;
          struct s3fwrn5_fw_info * fw_info = (struct s3fwrn5_fw_info *) malloc(_len_fw_info0*sizeof(struct s3fwrn5_fw_info));
          for(int _i0 = 0; _i0 < _len_fw_info0; _i0++) {
            fw_info[_i0].fw.version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s3fwrn5_fw_check_version(fw_info,version);
          printf("%d\n", benchRet); 
          free(fw_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int version = 10;
          int _len_fw_info0 = 100;
          struct s3fwrn5_fw_info * fw_info = (struct s3fwrn5_fw_info *) malloc(_len_fw_info0*sizeof(struct s3fwrn5_fw_info));
          for(int _i0 = 0; _i0 < _len_fw_info0; _i0++) {
            fw_info[_i0].fw.version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = s3fwrn5_fw_check_version(fw_info,version);
          printf("%d\n", benchRet); 
          free(fw_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
