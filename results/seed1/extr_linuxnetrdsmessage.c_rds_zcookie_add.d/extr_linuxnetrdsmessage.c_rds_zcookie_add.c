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
typedef  int /*<<< orphan*/  u32 ;
struct rds_zcopy_cookies {int num; int /*<<< orphan*/ * cookies; } ;
struct rds_msg_zcopy_info {struct rds_zcopy_cookies zcookies; } ;

/* Variables and functions */
 int RDS_MAX_ZCOOKIES ; 

__attribute__((used)) static inline bool rds_zcookie_add(struct rds_msg_zcopy_info *info, u32 cookie)
{
	struct rds_zcopy_cookies *ck = &info->zcookies;
	int ncookies = ck->num;

	if (ncookies == RDS_MAX_ZCOOKIES)
		return false;
	ck->cookies[ncookies] = cookie;
	ck->num =  ++ncookies;
	return true;
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
          int cookie = 100;
          int _len_info0 = 1;
          struct rds_msg_zcopy_info * info = (struct rds_msg_zcopy_info *) malloc(_len_info0*sizeof(struct rds_msg_zcopy_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].zcookies.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__zcookies_cookies0 = 1;
          info[_i0].zcookies.cookies = (int *) malloc(_len_info__i0__zcookies_cookies0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__zcookies_cookies0; _j0++) {
            info[_i0].zcookies.cookies[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rds_zcookie_add(info,cookie);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cookie = 255;
          int _len_info0 = 65025;
          struct rds_msg_zcopy_info * info = (struct rds_msg_zcopy_info *) malloc(_len_info0*sizeof(struct rds_msg_zcopy_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].zcookies.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__zcookies_cookies0 = 1;
          info[_i0].zcookies.cookies = (int *) malloc(_len_info__i0__zcookies_cookies0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__zcookies_cookies0; _j0++) {
            info[_i0].zcookies.cookies[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rds_zcookie_add(info,cookie);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cookie = 10;
          int _len_info0 = 100;
          struct rds_msg_zcopy_info * info = (struct rds_msg_zcopy_info *) malloc(_len_info0*sizeof(struct rds_msg_zcopy_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].zcookies.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__zcookies_cookies0 = 1;
          info[_i0].zcookies.cookies = (int *) malloc(_len_info__i0__zcookies_cookies0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__zcookies_cookies0; _j0++) {
            info[_i0].zcookies.cookies[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rds_zcookie_add(info,cookie);
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
