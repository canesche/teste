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
struct sockaddr_in6 {int dummy; } ;
struct iw_cm_id {int /*<<< orphan*/  remote_addr; int /*<<< orphan*/  local_addr; } ;
struct TYPE_2__ {int /*<<< orphan*/  remote_addr; int /*<<< orphan*/  local_addr; struct iw_cm_id* cm_id; } ;
struct c4iw_ep {TYPE_1__ com; } ;

/* Variables and functions */
 struct sockaddr_in6 zero_sin6 ; 

__attribute__((used)) static void set_ep_sin6_addrs(struct c4iw_ep *ep,
			      struct sockaddr_in6 **lsin6,
			      struct sockaddr_in6 **rsin6,
			      struct sockaddr_in6 **m_lsin6,
			      struct sockaddr_in6 **m_rsin6)
{
	struct iw_cm_id *id = ep->com.cm_id;

	*m_lsin6 = (struct sockaddr_in6 *)&ep->com.local_addr;
	*m_rsin6 = (struct sockaddr_in6 *)&ep->com.remote_addr;
	if (id) {
		*lsin6 = (struct sockaddr_in6 *)&id->local_addr;
		*rsin6 = (struct sockaddr_in6 *)&id->remote_addr;
	} else {
		*lsin6 = &zero_sin6;
		*rsin6 = &zero_sin6;
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
          int _len_ep0 = 1;
          struct c4iw_ep * ep = (struct c4iw_ep *) malloc(_len_ep0*sizeof(struct c4iw_ep));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].com.remote_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].com.local_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__com_cm_id0 = 1;
          ep[_i0].com.cm_id = (struct iw_cm_id *) malloc(_len_ep__i0__com_cm_id0*sizeof(struct iw_cm_id));
          for(int _j0 = 0; _j0 < _len_ep__i0__com_cm_id0; _j0++) {
            ep[_i0].com.cm_id->remote_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].com.cm_id->local_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lsin60 = 1;
          struct sockaddr_in6 ** lsin6 = (struct sockaddr_in6 **) malloc(_len_lsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_lsin60; _i0++) {
            int _len_lsin61 = 1;
            lsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_lsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_lsin61; _i1++) {
              lsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rsin60 = 1;
          struct sockaddr_in6 ** rsin6 = (struct sockaddr_in6 **) malloc(_len_rsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_rsin60; _i0++) {
            int _len_rsin61 = 1;
            rsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_rsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_rsin61; _i1++) {
              rsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_lsin60 = 1;
          struct sockaddr_in6 ** m_lsin6 = (struct sockaddr_in6 **) malloc(_len_m_lsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_m_lsin60; _i0++) {
            int _len_m_lsin61 = 1;
            m_lsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_m_lsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_m_lsin61; _i1++) {
              m_lsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_rsin60 = 1;
          struct sockaddr_in6 ** m_rsin6 = (struct sockaddr_in6 **) malloc(_len_m_rsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_m_rsin60; _i0++) {
            int _len_m_rsin61 = 1;
            m_rsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_m_rsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_m_rsin61; _i1++) {
              m_rsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          set_ep_sin6_addrs(ep,lsin6,rsin6,m_lsin6,m_rsin6);
          free(ep);
          for(int i1 = 0; i1 < _len_lsin60; i1++) {
            int _len_lsin61 = 1;
              free(lsin6[i1]);
          }
          free(lsin6);
          for(int i1 = 0; i1 < _len_rsin60; i1++) {
            int _len_rsin61 = 1;
              free(rsin6[i1]);
          }
          free(rsin6);
          for(int i1 = 0; i1 < _len_m_lsin60; i1++) {
            int _len_m_lsin61 = 1;
              free(m_lsin6[i1]);
          }
          free(m_lsin6);
          for(int i1 = 0; i1 < _len_m_rsin60; i1++) {
            int _len_m_rsin61 = 1;
              free(m_rsin6[i1]);
          }
          free(m_rsin6);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ep0 = 65025;
          struct c4iw_ep * ep = (struct c4iw_ep *) malloc(_len_ep0*sizeof(struct c4iw_ep));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].com.remote_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].com.local_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__com_cm_id0 = 1;
          ep[_i0].com.cm_id = (struct iw_cm_id *) malloc(_len_ep__i0__com_cm_id0*sizeof(struct iw_cm_id));
          for(int _j0 = 0; _j0 < _len_ep__i0__com_cm_id0; _j0++) {
            ep[_i0].com.cm_id->remote_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].com.cm_id->local_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lsin60 = 65025;
          struct sockaddr_in6 ** lsin6 = (struct sockaddr_in6 **) malloc(_len_lsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_lsin60; _i0++) {
            int _len_lsin61 = 1;
            lsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_lsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_lsin61; _i1++) {
              lsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rsin60 = 65025;
          struct sockaddr_in6 ** rsin6 = (struct sockaddr_in6 **) malloc(_len_rsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_rsin60; _i0++) {
            int _len_rsin61 = 1;
            rsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_rsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_rsin61; _i1++) {
              rsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_lsin60 = 65025;
          struct sockaddr_in6 ** m_lsin6 = (struct sockaddr_in6 **) malloc(_len_m_lsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_m_lsin60; _i0++) {
            int _len_m_lsin61 = 1;
            m_lsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_m_lsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_m_lsin61; _i1++) {
              m_lsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_rsin60 = 65025;
          struct sockaddr_in6 ** m_rsin6 = (struct sockaddr_in6 **) malloc(_len_m_rsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_m_rsin60; _i0++) {
            int _len_m_rsin61 = 1;
            m_rsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_m_rsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_m_rsin61; _i1++) {
              m_rsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          set_ep_sin6_addrs(ep,lsin6,rsin6,m_lsin6,m_rsin6);
          free(ep);
          for(int i1 = 0; i1 < _len_lsin60; i1++) {
            int _len_lsin61 = 1;
              free(lsin6[i1]);
          }
          free(lsin6);
          for(int i1 = 0; i1 < _len_rsin60; i1++) {
            int _len_rsin61 = 1;
              free(rsin6[i1]);
          }
          free(rsin6);
          for(int i1 = 0; i1 < _len_m_lsin60; i1++) {
            int _len_m_lsin61 = 1;
              free(m_lsin6[i1]);
          }
          free(m_lsin6);
          for(int i1 = 0; i1 < _len_m_rsin60; i1++) {
            int _len_m_rsin61 = 1;
              free(m_rsin6[i1]);
          }
          free(m_rsin6);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ep0 = 100;
          struct c4iw_ep * ep = (struct c4iw_ep *) malloc(_len_ep0*sizeof(struct c4iw_ep));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].com.remote_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].com.local_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__com_cm_id0 = 1;
          ep[_i0].com.cm_id = (struct iw_cm_id *) malloc(_len_ep__i0__com_cm_id0*sizeof(struct iw_cm_id));
          for(int _j0 = 0; _j0 < _len_ep__i0__com_cm_id0; _j0++) {
            ep[_i0].com.cm_id->remote_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].com.cm_id->local_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lsin60 = 100;
          struct sockaddr_in6 ** lsin6 = (struct sockaddr_in6 **) malloc(_len_lsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_lsin60; _i0++) {
            int _len_lsin61 = 1;
            lsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_lsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_lsin61; _i1++) {
              lsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rsin60 = 100;
          struct sockaddr_in6 ** rsin6 = (struct sockaddr_in6 **) malloc(_len_rsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_rsin60; _i0++) {
            int _len_rsin61 = 1;
            rsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_rsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_rsin61; _i1++) {
              rsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_lsin60 = 100;
          struct sockaddr_in6 ** m_lsin6 = (struct sockaddr_in6 **) malloc(_len_m_lsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_m_lsin60; _i0++) {
            int _len_m_lsin61 = 1;
            m_lsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_m_lsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_m_lsin61; _i1++) {
              m_lsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_rsin60 = 100;
          struct sockaddr_in6 ** m_rsin6 = (struct sockaddr_in6 **) malloc(_len_m_rsin60*sizeof(struct sockaddr_in6 *));
          for(int _i0 = 0; _i0 < _len_m_rsin60; _i0++) {
            int _len_m_rsin61 = 1;
            m_rsin6[_i0] = (struct sockaddr_in6 *) malloc(_len_m_rsin61*sizeof(struct sockaddr_in6));
            for(int _i1 = 0; _i1 < _len_m_rsin61; _i1++) {
              m_rsin6[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          set_ep_sin6_addrs(ep,lsin6,rsin6,m_lsin6,m_rsin6);
          free(ep);
          for(int i1 = 0; i1 < _len_lsin60; i1++) {
            int _len_lsin61 = 1;
              free(lsin6[i1]);
          }
          free(lsin6);
          for(int i1 = 0; i1 < _len_rsin60; i1++) {
            int _len_rsin61 = 1;
              free(rsin6[i1]);
          }
          free(rsin6);
          for(int i1 = 0; i1 < _len_m_lsin60; i1++) {
            int _len_m_lsin61 = 1;
              free(m_lsin6[i1]);
          }
          free(m_lsin6);
          for(int i1 = 0; i1 < _len_m_rsin60; i1++) {
            int _len_m_rsin61 = 1;
              free(m_rsin6[i1]);
          }
          free(m_rsin6);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
