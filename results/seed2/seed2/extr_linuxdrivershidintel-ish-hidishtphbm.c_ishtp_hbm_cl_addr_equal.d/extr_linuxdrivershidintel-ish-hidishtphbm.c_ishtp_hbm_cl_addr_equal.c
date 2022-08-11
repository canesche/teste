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
struct ishtp_hbm_cl_cmd {scalar_t__ host_addr; scalar_t__ fw_addr; } ;
struct ishtp_cl {scalar_t__ host_client_id; scalar_t__ fw_client_id; } ;

/* Variables and functions */

__attribute__((used)) static inline bool ishtp_hbm_cl_addr_equal(struct ishtp_cl *cl, void *buf)
{
	struct ishtp_hbm_cl_cmd *cmd = buf;

	return cl->host_client_id == cmd->host_addr &&
		cl->fw_client_id == cmd->fw_addr;
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
          int _len_cl0 = 1;
          struct ishtp_cl * cl = (struct ishtp_cl *) malloc(_len_cl0*sizeof(struct ishtp_cl));
          for(int _i0 = 0; _i0 < _len_cl0; _i0++) {
            cl[_i0].host_client_id = ((-2 * (next_i()%2)) + 1) * next_i();
        cl[_i0].fw_client_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * buf;
          int benchRet = ishtp_hbm_cl_addr_equal(cl,buf);
          printf("%d\n", benchRet); 
          free(cl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cl0 = 65025;
          struct ishtp_cl * cl = (struct ishtp_cl *) malloc(_len_cl0*sizeof(struct ishtp_cl));
          for(int _i0 = 0; _i0 < _len_cl0; _i0++) {
            cl[_i0].host_client_id = ((-2 * (next_i()%2)) + 1) * next_i();
        cl[_i0].fw_client_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * buf;
          int benchRet = ishtp_hbm_cl_addr_equal(cl,buf);
          printf("%d\n", benchRet); 
          free(cl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cl0 = 100;
          struct ishtp_cl * cl = (struct ishtp_cl *) malloc(_len_cl0*sizeof(struct ishtp_cl));
          for(int _i0 = 0; _i0 < _len_cl0; _i0++) {
            cl[_i0].host_client_id = ((-2 * (next_i()%2)) + 1) * next_i();
        cl[_i0].fw_client_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * buf;
          int benchRet = ishtp_hbm_cl_addr_equal(cl,buf);
          printf("%d\n", benchRet); 
          free(cl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
