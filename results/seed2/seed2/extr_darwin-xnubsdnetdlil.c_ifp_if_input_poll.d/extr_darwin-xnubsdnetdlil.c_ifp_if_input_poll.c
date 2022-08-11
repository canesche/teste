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
typedef  scalar_t__ u_int32_t ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
ifp_if_input_poll(struct ifnet *ifp, u_int32_t flags, u_int32_t max_cnt,
    struct mbuf **m_head, struct mbuf **m_tail, u_int32_t *cnt, u_int32_t *len)
{
#pragma unused(ifp, flags, max_cnt)
	if (m_head != NULL)
		*m_head = NULL;
	if (m_tail != NULL)
		*m_tail = NULL;
	if (cnt != NULL)
		*cnt = 0;
	if (len != NULL)
		*len = 0;
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
          long flags = 100;
          long max_cnt = 100;
          int _len_ifp0 = 1;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m_head0 = 1;
          struct mbuf ** m_head = (struct mbuf **) malloc(_len_m_head0*sizeof(struct mbuf *));
          for(int _i0 = 0; _i0 < _len_m_head0; _i0++) {
            int _len_m_head1 = 1;
            m_head[_i0] = (struct mbuf *) malloc(_len_m_head1*sizeof(struct mbuf));
            for(int _i1 = 0; _i1 < _len_m_head1; _i1++) {
              m_head[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_tail0 = 1;
          struct mbuf ** m_tail = (struct mbuf **) malloc(_len_m_tail0*sizeof(struct mbuf *));
          for(int _i0 = 0; _i0 < _len_m_tail0; _i0++) {
            int _len_m_tail1 = 1;
            m_tail[_i0] = (struct mbuf *) malloc(_len_m_tail1*sizeof(struct mbuf));
            for(int _i1 = 0; _i1 < _len_m_tail1; _i1++) {
              m_tail[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cnt0 = 1;
          long * cnt = (long *) malloc(_len_cnt0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_cnt0; _i0++) {
            cnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 1;
          long * len = (long *) malloc(_len_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ifp_if_input_poll(ifp,flags,max_cnt,m_head,m_tail,cnt,len);
          free(ifp);
          for(int i1 = 0; i1 < _len_m_head0; i1++) {
            int _len_m_head1 = 1;
              free(m_head[i1]);
          }
          free(m_head);
          for(int i1 = 0; i1 < _len_m_tail0; i1++) {
            int _len_m_tail1 = 1;
              free(m_tail[i1]);
          }
          free(m_tail);
          free(cnt);
          free(len);
        
        break;
    }
    // big-arr
    case 1:
    {
          long flags = 255;
          long max_cnt = 255;
          int _len_ifp0 = 65025;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m_head0 = 65025;
          struct mbuf ** m_head = (struct mbuf **) malloc(_len_m_head0*sizeof(struct mbuf *));
          for(int _i0 = 0; _i0 < _len_m_head0; _i0++) {
            int _len_m_head1 = 1;
            m_head[_i0] = (struct mbuf *) malloc(_len_m_head1*sizeof(struct mbuf));
            for(int _i1 = 0; _i1 < _len_m_head1; _i1++) {
              m_head[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_tail0 = 65025;
          struct mbuf ** m_tail = (struct mbuf **) malloc(_len_m_tail0*sizeof(struct mbuf *));
          for(int _i0 = 0; _i0 < _len_m_tail0; _i0++) {
            int _len_m_tail1 = 1;
            m_tail[_i0] = (struct mbuf *) malloc(_len_m_tail1*sizeof(struct mbuf));
            for(int _i1 = 0; _i1 < _len_m_tail1; _i1++) {
              m_tail[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cnt0 = 65025;
          long * cnt = (long *) malloc(_len_cnt0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_cnt0; _i0++) {
            cnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 65025;
          long * len = (long *) malloc(_len_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ifp_if_input_poll(ifp,flags,max_cnt,m_head,m_tail,cnt,len);
          free(ifp);
          for(int i1 = 0; i1 < _len_m_head0; i1++) {
            int _len_m_head1 = 1;
              free(m_head[i1]);
          }
          free(m_head);
          for(int i1 = 0; i1 < _len_m_tail0; i1++) {
            int _len_m_tail1 = 1;
              free(m_tail[i1]);
          }
          free(m_tail);
          free(cnt);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long flags = 10;
          long max_cnt = 10;
          int _len_ifp0 = 100;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m_head0 = 100;
          struct mbuf ** m_head = (struct mbuf **) malloc(_len_m_head0*sizeof(struct mbuf *));
          for(int _i0 = 0; _i0 < _len_m_head0; _i0++) {
            int _len_m_head1 = 1;
            m_head[_i0] = (struct mbuf *) malloc(_len_m_head1*sizeof(struct mbuf));
            for(int _i1 = 0; _i1 < _len_m_head1; _i1++) {
              m_head[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_m_tail0 = 100;
          struct mbuf ** m_tail = (struct mbuf **) malloc(_len_m_tail0*sizeof(struct mbuf *));
          for(int _i0 = 0; _i0 < _len_m_tail0; _i0++) {
            int _len_m_tail1 = 1;
            m_tail[_i0] = (struct mbuf *) malloc(_len_m_tail1*sizeof(struct mbuf));
            for(int _i1 = 0; _i1 < _len_m_tail1; _i1++) {
              m_tail[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cnt0 = 100;
          long * cnt = (long *) malloc(_len_cnt0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_cnt0; _i0++) {
            cnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 100;
          long * len = (long *) malloc(_len_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ifp_if_input_poll(ifp,flags,max_cnt,m_head,m_tail,cnt,len);
          free(ifp);
          for(int i1 = 0; i1 < _len_m_head0; i1++) {
            int _len_m_head1 = 1;
              free(m_head[i1]);
          }
          free(m_head);
          for(int i1 = 0; i1 < _len_m_tail0; i1++) {
            int _len_m_tail1 = 1;
              free(m_tail[i1]);
          }
          free(m_tail);
          free(cnt);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
