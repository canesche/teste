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
typedef  int /*<<< orphan*/  u8 ;
struct vmbuspipe_hdr {int dummy; } ;
struct icmsg_negotiate {int icframe_vercnt; int icmsg_vercnt; TYPE_1__* icversion_data; } ;
struct icmsg_hdr {int icmsgsize; } ;
struct TYPE_2__ {int major; int minor; } ;

/* Variables and functions */

bool vmbus_prep_negotiate_resp(struct icmsg_hdr *icmsghdrp,
				u8 *buf, const int *fw_version, int fw_vercnt,
				const int *srv_version, int srv_vercnt,
				int *nego_fw_version, int *nego_srv_version)
{
	int icframe_major, icframe_minor;
	int icmsg_major, icmsg_minor;
	int fw_major, fw_minor;
	int srv_major, srv_minor;
	int i, j;
	bool found_match = false;
	struct icmsg_negotiate *negop;

	icmsghdrp->icmsgsize = 0x10;
	negop = (struct icmsg_negotiate *)&buf[
		sizeof(struct vmbuspipe_hdr) +
		sizeof(struct icmsg_hdr)];

	icframe_major = negop->icframe_vercnt;
	icframe_minor = 0;

	icmsg_major = negop->icmsg_vercnt;
	icmsg_minor = 0;

	/*
	 * Select the framework version number we will
	 * support.
	 */

	for (i = 0; i < fw_vercnt; i++) {
		fw_major = (fw_version[i] >> 16);
		fw_minor = (fw_version[i] & 0xFFFF);

		for (j = 0; j < negop->icframe_vercnt; j++) {
			if ((negop->icversion_data[j].major == fw_major) &&
			    (negop->icversion_data[j].minor == fw_minor)) {
				icframe_major = negop->icversion_data[j].major;
				icframe_minor = negop->icversion_data[j].minor;
				found_match = true;
				break;
			}
		}

		if (found_match)
			break;
	}

	if (!found_match)
		goto fw_error;

	found_match = false;

	for (i = 0; i < srv_vercnt; i++) {
		srv_major = (srv_version[i] >> 16);
		srv_minor = (srv_version[i] & 0xFFFF);

		for (j = negop->icframe_vercnt;
			(j < negop->icframe_vercnt + negop->icmsg_vercnt);
			j++) {

			if ((negop->icversion_data[j].major == srv_major) &&
				(negop->icversion_data[j].minor == srv_minor)) {

				icmsg_major = negop->icversion_data[j].major;
				icmsg_minor = negop->icversion_data[j].minor;
				found_match = true;
				break;
			}
		}

		if (found_match)
			break;
	}

	/*
	 * Respond with the framework and service
	 * version numbers we can support.
	 */

fw_error:
	if (!found_match) {
		negop->icframe_vercnt = 0;
		negop->icmsg_vercnt = 0;
	} else {
		negop->icframe_vercnt = 1;
		negop->icmsg_vercnt = 1;
	}

	if (nego_fw_version)
		*nego_fw_version = (icframe_major << 16) | icframe_minor;

	if (nego_srv_version)
		*nego_srv_version = (icmsg_major << 16) | icmsg_minor;

	negop->icversion_data[0].major = icframe_major;
	negop->icversion_data[0].minor = icframe_minor;
	negop->icversion_data[1].major = icmsg_major;
	negop->icversion_data[1].minor = icmsg_minor;
	return found_match;
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
          int fw_vercnt = 100;
          int srv_vercnt = 100;
          int _len_icmsghdrp0 = 1;
          struct icmsg_hdr * icmsghdrp = (struct icmsg_hdr *) malloc(_len_icmsghdrp0*sizeof(struct icmsg_hdr));
          for(int _i0 = 0; _i0 < _len_icmsghdrp0; _i0++) {
            icmsghdrp[_i0].icmsgsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw_version0 = 1;
          const int * fw_version = (const int *) malloc(_len_fw_version0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fw_version0; _i0++) {
            fw_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srv_version0 = 1;
          const int * srv_version = (const int *) malloc(_len_srv_version0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srv_version0; _i0++) {
            srv_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nego_fw_version0 = 1;
          int * nego_fw_version = (int *) malloc(_len_nego_fw_version0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nego_fw_version0; _i0++) {
            nego_fw_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nego_srv_version0 = 1;
          int * nego_srv_version = (int *) malloc(_len_nego_srv_version0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nego_srv_version0; _i0++) {
            nego_srv_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmbus_prep_negotiate_resp(icmsghdrp,buf,fw_version,fw_vercnt,srv_version,srv_vercnt,nego_fw_version,nego_srv_version);
          printf("%d\n", benchRet); 
          free(icmsghdrp);
          free(buf);
          free(fw_version);
          free(srv_version);
          free(nego_fw_version);
          free(nego_srv_version);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fw_vercnt = 255;
          int srv_vercnt = 255;
          int _len_icmsghdrp0 = 65025;
          struct icmsg_hdr * icmsghdrp = (struct icmsg_hdr *) malloc(_len_icmsghdrp0*sizeof(struct icmsg_hdr));
          for(int _i0 = 0; _i0 < _len_icmsghdrp0; _i0++) {
            icmsghdrp[_i0].icmsgsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw_version0 = 65025;
          const int * fw_version = (const int *) malloc(_len_fw_version0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fw_version0; _i0++) {
            fw_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srv_version0 = 65025;
          const int * srv_version = (const int *) malloc(_len_srv_version0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srv_version0; _i0++) {
            srv_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nego_fw_version0 = 65025;
          int * nego_fw_version = (int *) malloc(_len_nego_fw_version0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nego_fw_version0; _i0++) {
            nego_fw_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nego_srv_version0 = 65025;
          int * nego_srv_version = (int *) malloc(_len_nego_srv_version0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nego_srv_version0; _i0++) {
            nego_srv_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmbus_prep_negotiate_resp(icmsghdrp,buf,fw_version,fw_vercnt,srv_version,srv_vercnt,nego_fw_version,nego_srv_version);
          printf("%d\n", benchRet); 
          free(icmsghdrp);
          free(buf);
          free(fw_version);
          free(srv_version);
          free(nego_fw_version);
          free(nego_srv_version);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fw_vercnt = 10;
          int srv_vercnt = 10;
          int _len_icmsghdrp0 = 100;
          struct icmsg_hdr * icmsghdrp = (struct icmsg_hdr *) malloc(_len_icmsghdrp0*sizeof(struct icmsg_hdr));
          for(int _i0 = 0; _i0 < _len_icmsghdrp0; _i0++) {
            icmsghdrp[_i0].icmsgsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw_version0 = 100;
          const int * fw_version = (const int *) malloc(_len_fw_version0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fw_version0; _i0++) {
            fw_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srv_version0 = 100;
          const int * srv_version = (const int *) malloc(_len_srv_version0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srv_version0; _i0++) {
            srv_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nego_fw_version0 = 100;
          int * nego_fw_version = (int *) malloc(_len_nego_fw_version0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nego_fw_version0; _i0++) {
            nego_fw_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nego_srv_version0 = 100;
          int * nego_srv_version = (int *) malloc(_len_nego_srv_version0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nego_srv_version0; _i0++) {
            nego_srv_version[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmbus_prep_negotiate_resp(icmsghdrp,buf,fw_version,fw_vercnt,srv_version,srv_vercnt,nego_fw_version,nego_srv_version);
          printf("%d\n", benchRet); 
          free(icmsghdrp);
          free(buf);
          free(fw_version);
          free(srv_version);
          free(nego_fw_version);
          free(nego_srv_version);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
