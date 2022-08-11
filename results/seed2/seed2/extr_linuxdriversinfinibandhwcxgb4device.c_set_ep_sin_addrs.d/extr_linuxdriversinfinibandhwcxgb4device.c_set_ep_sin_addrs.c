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
struct sockaddr_in {int dummy; } ;
struct iw_cm_id {int /*<<< orphan*/  remote_addr; int /*<<< orphan*/  local_addr; } ;
struct TYPE_2__ {int /*<<< orphan*/  remote_addr; int /*<<< orphan*/  local_addr; struct iw_cm_id* cm_id; } ;
struct c4iw_ep {TYPE_1__ com; } ;

/* Variables and functions */
 struct sockaddr_in zero_sin ; 

__attribute__((used)) static void set_ep_sin_addrs(struct c4iw_ep *ep,
			     struct sockaddr_in **lsin,
			     struct sockaddr_in **rsin,
			     struct sockaddr_in **m_lsin,
			     struct sockaddr_in **m_rsin)
{
	struct iw_cm_id *id = ep->com.cm_id;

	*m_lsin = (struct sockaddr_in *)&ep->com.local_addr;
	*m_rsin = (struct sockaddr_in *)&ep->com.remote_addr;
	if (id) {
		*lsin = (struct sockaddr_in *)&id->local_addr;
		*rsin = (struct sockaddr_in *)&id->remote_addr;
	} else {
		*lsin = &zero_sin;
		*rsin = &zero_sin;
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
          int _len_lsin0 = 1;
          struct sockaddr_in ** lsin = (struct sockaddr_in **) malloc(_len_lsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_lsin0; _i0++) {
            int _len_lsin1 = 1;
            lsin[_i0] = (struct sockaddr_in *) malloc(_len_lsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_lsin1; _i1++) {
              lsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rsin0 = 1;
          struct sockaddr_in ** rsin = (struct sockaddr_in **) malloc(_len_rsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_rsin0; _i0++) {
            int _len_rsin1 = 1;
            rsin[_i0] = (struct sockaddr_in *) malloc(_len_rsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_rsin1; _i1++) {
              rsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_lsin0 = 1;
          struct sockaddr_in ** m_lsin = (struct sockaddr_in **) malloc(_len_m_lsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_m_lsin0; _i0++) {
            int _len_m_lsin1 = 1;
            m_lsin[_i0] = (struct sockaddr_in *) malloc(_len_m_lsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_m_lsin1; _i1++) {
              m_lsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_rsin0 = 1;
          struct sockaddr_in ** m_rsin = (struct sockaddr_in **) malloc(_len_m_rsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_m_rsin0; _i0++) {
            int _len_m_rsin1 = 1;
            m_rsin[_i0] = (struct sockaddr_in *) malloc(_len_m_rsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_m_rsin1; _i1++) {
              m_rsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          set_ep_sin_addrs(ep,lsin,rsin,m_lsin,m_rsin);
          free(ep);
          for(int i1 = 0; i1 < _len_lsin0; i1++) {
            int _len_lsin1 = 1;
              free(lsin[i1]);
          }
          free(lsin);
          for(int i1 = 0; i1 < _len_rsin0; i1++) {
            int _len_rsin1 = 1;
              free(rsin[i1]);
          }
          free(rsin);
          for(int i1 = 0; i1 < _len_m_lsin0; i1++) {
            int _len_m_lsin1 = 1;
              free(m_lsin[i1]);
          }
          free(m_lsin);
          for(int i1 = 0; i1 < _len_m_rsin0; i1++) {
            int _len_m_rsin1 = 1;
              free(m_rsin[i1]);
          }
          free(m_rsin);
        
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
          int _len_lsin0 = 65025;
          struct sockaddr_in ** lsin = (struct sockaddr_in **) malloc(_len_lsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_lsin0; _i0++) {
            int _len_lsin1 = 1;
            lsin[_i0] = (struct sockaddr_in *) malloc(_len_lsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_lsin1; _i1++) {
              lsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rsin0 = 65025;
          struct sockaddr_in ** rsin = (struct sockaddr_in **) malloc(_len_rsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_rsin0; _i0++) {
            int _len_rsin1 = 1;
            rsin[_i0] = (struct sockaddr_in *) malloc(_len_rsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_rsin1; _i1++) {
              rsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_lsin0 = 65025;
          struct sockaddr_in ** m_lsin = (struct sockaddr_in **) malloc(_len_m_lsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_m_lsin0; _i0++) {
            int _len_m_lsin1 = 1;
            m_lsin[_i0] = (struct sockaddr_in *) malloc(_len_m_lsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_m_lsin1; _i1++) {
              m_lsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_rsin0 = 65025;
          struct sockaddr_in ** m_rsin = (struct sockaddr_in **) malloc(_len_m_rsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_m_rsin0; _i0++) {
            int _len_m_rsin1 = 1;
            m_rsin[_i0] = (struct sockaddr_in *) malloc(_len_m_rsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_m_rsin1; _i1++) {
              m_rsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          set_ep_sin_addrs(ep,lsin,rsin,m_lsin,m_rsin);
          free(ep);
          for(int i1 = 0; i1 < _len_lsin0; i1++) {
            int _len_lsin1 = 1;
              free(lsin[i1]);
          }
          free(lsin);
          for(int i1 = 0; i1 < _len_rsin0; i1++) {
            int _len_rsin1 = 1;
              free(rsin[i1]);
          }
          free(rsin);
          for(int i1 = 0; i1 < _len_m_lsin0; i1++) {
            int _len_m_lsin1 = 1;
              free(m_lsin[i1]);
          }
          free(m_lsin);
          for(int i1 = 0; i1 < _len_m_rsin0; i1++) {
            int _len_m_rsin1 = 1;
              free(m_rsin[i1]);
          }
          free(m_rsin);
        
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
          int _len_lsin0 = 100;
          struct sockaddr_in ** lsin = (struct sockaddr_in **) malloc(_len_lsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_lsin0; _i0++) {
            int _len_lsin1 = 1;
            lsin[_i0] = (struct sockaddr_in *) malloc(_len_lsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_lsin1; _i1++) {
              lsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rsin0 = 100;
          struct sockaddr_in ** rsin = (struct sockaddr_in **) malloc(_len_rsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_rsin0; _i0++) {
            int _len_rsin1 = 1;
            rsin[_i0] = (struct sockaddr_in *) malloc(_len_rsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_rsin1; _i1++) {
              rsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_lsin0 = 100;
          struct sockaddr_in ** m_lsin = (struct sockaddr_in **) malloc(_len_m_lsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_m_lsin0; _i0++) {
            int _len_m_lsin1 = 1;
            m_lsin[_i0] = (struct sockaddr_in *) malloc(_len_m_lsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_m_lsin1; _i1++) {
              m_lsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_rsin0 = 100;
          struct sockaddr_in ** m_rsin = (struct sockaddr_in **) malloc(_len_m_rsin0*sizeof(struct sockaddr_in *));
          for(int _i0 = 0; _i0 < _len_m_rsin0; _i0++) {
            int _len_m_rsin1 = 1;
            m_rsin[_i0] = (struct sockaddr_in *) malloc(_len_m_rsin1*sizeof(struct sockaddr_in));
            for(int _i1 = 0; _i1 < _len_m_rsin1; _i1++) {
              m_rsin[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          set_ep_sin_addrs(ep,lsin,rsin,m_lsin,m_rsin);
          free(ep);
          for(int i1 = 0; i1 < _len_lsin0; i1++) {
            int _len_lsin1 = 1;
              free(lsin[i1]);
          }
          free(lsin);
          for(int i1 = 0; i1 < _len_rsin0; i1++) {
            int _len_rsin1 = 1;
              free(rsin[i1]);
          }
          free(rsin);
          for(int i1 = 0; i1 < _len_m_lsin0; i1++) {
            int _len_m_lsin1 = 1;
              free(m_lsin[i1]);
          }
          free(m_lsin);
          for(int i1 = 0; i1 < _len_m_rsin0; i1++) {
            int _len_m_rsin1 = 1;
              free(m_rsin[i1]);
          }
          free(m_rsin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
