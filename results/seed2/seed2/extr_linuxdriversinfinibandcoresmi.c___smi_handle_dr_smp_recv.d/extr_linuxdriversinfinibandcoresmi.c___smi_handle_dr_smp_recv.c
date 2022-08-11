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
typedef  size_t u8 ;
typedef  enum smi_action { ____Placeholder_smi_action } smi_action ;

/* Variables and functions */
 int IB_SMI_DISCARD ; 
 int IB_SMI_HANDLE ; 
 size_t IB_SMP_MAX_PATH_HOPS ; 

__attribute__((used)) static enum smi_action __smi_handle_dr_smp_recv(bool is_switch, int port_num,
						int phys_port_cnt,
						u8 *hop_ptr, u8 hop_cnt,
						const u8 *initial_path,
						u8 *return_path,
						u8 direction,
						bool dr_dlid_is_permissive,
						bool dr_slid_is_permissive)
{
	/* See section 14.2.2.2, Vol 1 IB spec */
	/* C14-6 -- valid hop_cnt values are from 0 to 63 */
	if (hop_cnt >= IB_SMP_MAX_PATH_HOPS)
		return IB_SMI_DISCARD;

	if (!direction) {
		/* C14-9:1 -- sender should have incremented hop_ptr */
		if (hop_cnt && *hop_ptr == 0)
			return IB_SMI_DISCARD;

		/* C14-9:2 -- intermediate hop */
		if (*hop_ptr && *hop_ptr < hop_cnt) {
			if (!is_switch)
				return IB_SMI_DISCARD;

			return_path[*hop_ptr] = port_num;
			/* hop_ptr updated when sending */
			return (initial_path[*hop_ptr+1] <= phys_port_cnt ?
				IB_SMI_HANDLE : IB_SMI_DISCARD);
		}

		/* C14-9:3 -- We're at the end of the DR segment of path */
		if (*hop_ptr == hop_cnt) {
			if (hop_cnt)
				return_path[*hop_ptr] = port_num;
			/* hop_ptr updated when sending */

			return (is_switch ||
				dr_dlid_is_permissive ?
				IB_SMI_HANDLE : IB_SMI_DISCARD);
		}

		/* C14-9:4 -- hop_ptr = hop_cnt + 1 -> give to SMA/SM */
		/* C14-9:5 -- fail unreasonable hop pointer */
		return (*hop_ptr == hop_cnt + 1 ? IB_SMI_HANDLE : IB_SMI_DISCARD);

	} else {

		/* C14-13:1 */
		if (hop_cnt && *hop_ptr == hop_cnt + 1) {
			(*hop_ptr)--;
			return (return_path[*hop_ptr] ==
				port_num ? IB_SMI_HANDLE : IB_SMI_DISCARD);
		}

		/* C14-13:2 */
		if (2 <= *hop_ptr && *hop_ptr <= hop_cnt) {
			if (!is_switch)
				return IB_SMI_DISCARD;

			/* hop_ptr updated when sending */
			return (return_path[*hop_ptr-1] <= phys_port_cnt ?
				IB_SMI_HANDLE : IB_SMI_DISCARD);
		}

		/* C14-13:3 -- We're at the end of the DR segment of path */
		if (*hop_ptr == 1) {
			if (dr_slid_is_permissive) {
				/* giving SMP to SM - update hop_ptr */
				(*hop_ptr)--;
				return IB_SMI_HANDLE;
			}
			/* hop_ptr updated when sending */
			return (is_switch ? IB_SMI_HANDLE : IB_SMI_DISCARD);
		}

		/* C14-13:4 -- hop_ptr = 0 -> give to SM */
		/* C14-13:5 -- Check for unreasonable hop pointer */
		return (*hop_ptr == 0 ? IB_SMI_HANDLE : IB_SMI_DISCARD);
	}
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
          int is_switch = 100;
          int port_num = 100;
          int phys_port_cnt = 100;
          unsigned long hop_cnt = 100;
          unsigned long direction = 100;
          int dr_dlid_is_permissive = 100;
          int dr_slid_is_permissive = 100;
          int _len_hop_ptr0 = 1;
          unsigned long * hop_ptr = (unsigned long *) malloc(_len_hop_ptr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_hop_ptr0; _i0++) {
            hop_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_initial_path0 = 1;
          const unsigned long * initial_path = (const unsigned long *) malloc(_len_initial_path0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_initial_path0; _i0++) {
            initial_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_return_path0 = 1;
          unsigned long * return_path = (unsigned long *) malloc(_len_return_path0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_return_path0; _i0++) {
            return_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum smi_action benchRet = __smi_handle_dr_smp_recv(is_switch,port_num,phys_port_cnt,hop_ptr,hop_cnt,initial_path,return_path,direction,dr_dlid_is_permissive,dr_slid_is_permissive);
          free(hop_ptr);
          free(initial_path);
          free(return_path);
        
        break;
    }
    // big-arr
    case 1:
    {
          int is_switch = 255;
          int port_num = 255;
          int phys_port_cnt = 255;
          unsigned long hop_cnt = 255;
          unsigned long direction = 255;
          int dr_dlid_is_permissive = 255;
          int dr_slid_is_permissive = 255;
          int _len_hop_ptr0 = 65025;
          unsigned long * hop_ptr = (unsigned long *) malloc(_len_hop_ptr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_hop_ptr0; _i0++) {
            hop_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_initial_path0 = 65025;
          const unsigned long * initial_path = (const unsigned long *) malloc(_len_initial_path0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_initial_path0; _i0++) {
            initial_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_return_path0 = 65025;
          unsigned long * return_path = (unsigned long *) malloc(_len_return_path0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_return_path0; _i0++) {
            return_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum smi_action benchRet = __smi_handle_dr_smp_recv(is_switch,port_num,phys_port_cnt,hop_ptr,hop_cnt,initial_path,return_path,direction,dr_dlid_is_permissive,dr_slid_is_permissive);
          free(hop_ptr);
          free(initial_path);
          free(return_path);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int is_switch = 10;
          int port_num = 10;
          int phys_port_cnt = 10;
          unsigned long hop_cnt = 10;
          unsigned long direction = 10;
          int dr_dlid_is_permissive = 10;
          int dr_slid_is_permissive = 10;
          int _len_hop_ptr0 = 100;
          unsigned long * hop_ptr = (unsigned long *) malloc(_len_hop_ptr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_hop_ptr0; _i0++) {
            hop_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_initial_path0 = 100;
          const unsigned long * initial_path = (const unsigned long *) malloc(_len_initial_path0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_initial_path0; _i0++) {
            initial_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_return_path0 = 100;
          unsigned long * return_path = (unsigned long *) malloc(_len_return_path0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_return_path0; _i0++) {
            return_path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum smi_action benchRet = __smi_handle_dr_smp_recv(is_switch,port_num,phys_port_cnt,hop_ptr,hop_cnt,initial_path,return_path,direction,dr_dlid_is_permissive,dr_slid_is_permissive);
          free(hop_ptr);
          free(initial_path);
          free(return_path);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
