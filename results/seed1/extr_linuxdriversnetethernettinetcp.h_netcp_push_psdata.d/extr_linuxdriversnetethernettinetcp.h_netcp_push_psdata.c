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
struct netcp_packet {scalar_t__ psdata_len; int /*<<< orphan*/ * psdata; } ;

/* Variables and functions */
 scalar_t__ NETCP_PSDATA_LEN ; 

__attribute__((used)) static inline u32 *netcp_push_psdata(struct netcp_packet *p_info,
				     unsigned int bytes)
{
	u32 *buf;
	unsigned int words;

	if ((bytes & 0x03) != 0)
		return NULL;
	words = bytes >> 2;

	if ((p_info->psdata_len + words) > NETCP_PSDATA_LEN)
		return NULL;

	p_info->psdata_len += words;
	buf = &p_info->psdata[NETCP_PSDATA_LEN - p_info->psdata_len];
	return buf;
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
          unsigned int bytes = 100;
          int _len_p_info0 = 1;
          struct netcp_packet * p_info = (struct netcp_packet *) malloc(_len_p_info0*sizeof(struct netcp_packet));
          for(int _i0 = 0; _i0 < _len_p_info0; _i0++) {
            p_info[_i0].psdata_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p_info__i0__psdata0 = 1;
          p_info[_i0].psdata = (int *) malloc(_len_p_info__i0__psdata0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_info__i0__psdata0; _j0++) {
            p_info[_i0].psdata[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = netcp_push_psdata(p_info,bytes);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_p_info0; _aux++) {
          free(p_info[_aux].psdata);
          }
          free(p_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int bytes = 255;
          int _len_p_info0 = 65025;
          struct netcp_packet * p_info = (struct netcp_packet *) malloc(_len_p_info0*sizeof(struct netcp_packet));
          for(int _i0 = 0; _i0 < _len_p_info0; _i0++) {
            p_info[_i0].psdata_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p_info__i0__psdata0 = 1;
          p_info[_i0].psdata = (int *) malloc(_len_p_info__i0__psdata0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_info__i0__psdata0; _j0++) {
            p_info[_i0].psdata[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = netcp_push_psdata(p_info,bytes);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_p_info0; _aux++) {
          free(p_info[_aux].psdata);
          }
          free(p_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int bytes = 10;
          int _len_p_info0 = 100;
          struct netcp_packet * p_info = (struct netcp_packet *) malloc(_len_p_info0*sizeof(struct netcp_packet));
          for(int _i0 = 0; _i0 < _len_p_info0; _i0++) {
            p_info[_i0].psdata_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p_info__i0__psdata0 = 1;
          p_info[_i0].psdata = (int *) malloc(_len_p_info__i0__psdata0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_info__i0__psdata0; _j0++) {
            p_info[_i0].psdata[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = netcp_push_psdata(p_info,bytes);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_p_info0; _aux++) {
          free(p_info[_aux].psdata);
          }
          free(p_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
