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
struct ipv6_txoptions {scalar_t__ opt_flen; scalar_t__ opt_nflen; int /*<<< orphan*/  tot_len; int /*<<< orphan*/  dst1opt; int /*<<< orphan*/ * srcrt; int /*<<< orphan*/ * dst0opt; int /*<<< orphan*/ * hopopt; } ;
struct ip6_flowlabel {struct ipv6_txoptions* opt; } ;

/* Variables and functions */

struct ipv6_txoptions *fl6_merge_options(struct ipv6_txoptions *opt_space,
					 struct ip6_flowlabel *fl,
					 struct ipv6_txoptions *fopt)
{
	struct ipv6_txoptions *fl_opt = fl->opt;

	if (!fopt || fopt->opt_flen == 0)
		return fl_opt;

	if (fl_opt) {
		opt_space->hopopt = fl_opt->hopopt;
		opt_space->dst0opt = fl_opt->dst0opt;
		opt_space->srcrt = fl_opt->srcrt;
		opt_space->opt_nflen = fl_opt->opt_nflen;
	} else {
		if (fopt->opt_nflen == 0)
			return fopt;
		opt_space->hopopt = NULL;
		opt_space->dst0opt = NULL;
		opt_space->srcrt = NULL;
		opt_space->opt_nflen = 0;
	}
	opt_space->dst1opt = fopt->dst1opt;
	opt_space->opt_flen = fopt->opt_flen;
	opt_space->tot_len = fopt->tot_len;
	return opt_space;
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
          int _len_opt_space0 = 1;
          struct ipv6_txoptions * opt_space = (struct ipv6_txoptions *) malloc(_len_opt_space0*sizeof(struct ipv6_txoptions));
          for(int _i0 = 0; _i0 < _len_opt_space0; _i0++) {
            opt_space[_i0].opt_flen = ((-2 * (next_i()%2)) + 1) * next_i();
        opt_space[_i0].opt_nflen = ((-2 * (next_i()%2)) + 1) * next_i();
        opt_space[_i0].tot_len = ((-2 * (next_i()%2)) + 1) * next_i();
        opt_space[_i0].dst1opt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opt_space__i0__srcrt0 = 1;
          opt_space[_i0].srcrt = (int *) malloc(_len_opt_space__i0__srcrt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt_space__i0__srcrt0; _j0++) {
            opt_space[_i0].srcrt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opt_space__i0__dst0opt0 = 1;
          opt_space[_i0].dst0opt = (int *) malloc(_len_opt_space__i0__dst0opt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt_space__i0__dst0opt0; _j0++) {
            opt_space[_i0].dst0opt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opt_space__i0__hopopt0 = 1;
          opt_space[_i0].hopopt = (int *) malloc(_len_opt_space__i0__hopopt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt_space__i0__hopopt0; _j0++) {
            opt_space[_i0].hopopt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fl0 = 1;
          struct ip6_flowlabel * fl = (struct ip6_flowlabel *) malloc(_len_fl0*sizeof(struct ip6_flowlabel));
          for(int _i0 = 0; _i0 < _len_fl0; _i0++) {
              int _len_fl__i0__opt0 = 1;
          fl[_i0].opt = (struct ipv6_txoptions *) malloc(_len_fl__i0__opt0*sizeof(struct ipv6_txoptions));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt0; _j0++) {
            fl[_i0].opt->opt_flen = ((-2 * (next_i()%2)) + 1) * next_i();
        fl[_i0].opt->opt_nflen = ((-2 * (next_i()%2)) + 1) * next_i();
        fl[_i0].opt->tot_len = ((-2 * (next_i()%2)) + 1) * next_i();
        fl[_i0].opt->dst1opt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fl__i0__opt_srcrt0 = 1;
          fl[_i0].opt->srcrt = (int *) malloc(_len_fl__i0__opt_srcrt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt_srcrt0; _j0++) {
            fl[_i0].opt->srcrt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl__i0__opt_dst0opt0 = 1;
          fl[_i0].opt->dst0opt = (int *) malloc(_len_fl__i0__opt_dst0opt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt_dst0opt0; _j0++) {
            fl[_i0].opt->dst0opt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl__i0__opt_hopopt0 = 1;
          fl[_i0].opt->hopopt = (int *) malloc(_len_fl__i0__opt_hopopt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt_hopopt0; _j0++) {
            fl[_i0].opt->hopopt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_fopt0 = 1;
          struct ipv6_txoptions * fopt = (struct ipv6_txoptions *) malloc(_len_fopt0*sizeof(struct ipv6_txoptions));
          for(int _i0 = 0; _i0 < _len_fopt0; _i0++) {
            fopt[_i0].opt_flen = ((-2 * (next_i()%2)) + 1) * next_i();
        fopt[_i0].opt_nflen = ((-2 * (next_i()%2)) + 1) * next_i();
        fopt[_i0].tot_len = ((-2 * (next_i()%2)) + 1) * next_i();
        fopt[_i0].dst1opt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fopt__i0__srcrt0 = 1;
          fopt[_i0].srcrt = (int *) malloc(_len_fopt__i0__srcrt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fopt__i0__srcrt0; _j0++) {
            fopt[_i0].srcrt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fopt__i0__dst0opt0 = 1;
          fopt[_i0].dst0opt = (int *) malloc(_len_fopt__i0__dst0opt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fopt__i0__dst0opt0; _j0++) {
            fopt[_i0].dst0opt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fopt__i0__hopopt0 = 1;
          fopt[_i0].hopopt = (int *) malloc(_len_fopt__i0__hopopt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fopt__i0__hopopt0; _j0++) {
            fopt[_i0].hopopt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ipv6_txoptions * benchRet = fl6_merge_options(opt_space,fl,fopt);
          printf("%ld\n", (*benchRet).opt_flen);
          printf("%ld\n", (*benchRet).opt_nflen);
          printf("%d\n", (*benchRet).tot_len);
          printf("%d\n", (*benchRet).dst1opt);
          for(int _aux = 0; _aux < _len_opt_space0; _aux++) {
          free(opt_space[_aux].srcrt);
          }
          for(int _aux = 0; _aux < _len_opt_space0; _aux++) {
          free(opt_space[_aux].dst0opt);
          }
          for(int _aux = 0; _aux < _len_opt_space0; _aux++) {
          free(opt_space[_aux].hopopt);
          }
          free(opt_space);
          for(int _aux = 0; _aux < _len_fl0; _aux++) {
          free(fl[_aux].opt);
          }
          free(fl);
          for(int _aux = 0; _aux < _len_fopt0; _aux++) {
          free(fopt[_aux].srcrt);
          }
          for(int _aux = 0; _aux < _len_fopt0; _aux++) {
          free(fopt[_aux].dst0opt);
          }
          for(int _aux = 0; _aux < _len_fopt0; _aux++) {
          free(fopt[_aux].hopopt);
          }
          free(fopt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_opt_space0 = 65025;
          struct ipv6_txoptions * opt_space = (struct ipv6_txoptions *) malloc(_len_opt_space0*sizeof(struct ipv6_txoptions));
          for(int _i0 = 0; _i0 < _len_opt_space0; _i0++) {
            opt_space[_i0].opt_flen = ((-2 * (next_i()%2)) + 1) * next_i();
        opt_space[_i0].opt_nflen = ((-2 * (next_i()%2)) + 1) * next_i();
        opt_space[_i0].tot_len = ((-2 * (next_i()%2)) + 1) * next_i();
        opt_space[_i0].dst1opt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opt_space__i0__srcrt0 = 1;
          opt_space[_i0].srcrt = (int *) malloc(_len_opt_space__i0__srcrt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt_space__i0__srcrt0; _j0++) {
            opt_space[_i0].srcrt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opt_space__i0__dst0opt0 = 1;
          opt_space[_i0].dst0opt = (int *) malloc(_len_opt_space__i0__dst0opt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt_space__i0__dst0opt0; _j0++) {
            opt_space[_i0].dst0opt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opt_space__i0__hopopt0 = 1;
          opt_space[_i0].hopopt = (int *) malloc(_len_opt_space__i0__hopopt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt_space__i0__hopopt0; _j0++) {
            opt_space[_i0].hopopt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fl0 = 65025;
          struct ip6_flowlabel * fl = (struct ip6_flowlabel *) malloc(_len_fl0*sizeof(struct ip6_flowlabel));
          for(int _i0 = 0; _i0 < _len_fl0; _i0++) {
              int _len_fl__i0__opt0 = 1;
          fl[_i0].opt = (struct ipv6_txoptions *) malloc(_len_fl__i0__opt0*sizeof(struct ipv6_txoptions));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt0; _j0++) {
            fl[_i0].opt->opt_flen = ((-2 * (next_i()%2)) + 1) * next_i();
        fl[_i0].opt->opt_nflen = ((-2 * (next_i()%2)) + 1) * next_i();
        fl[_i0].opt->tot_len = ((-2 * (next_i()%2)) + 1) * next_i();
        fl[_i0].opt->dst1opt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fl__i0__opt_srcrt0 = 1;
          fl[_i0].opt->srcrt = (int *) malloc(_len_fl__i0__opt_srcrt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt_srcrt0; _j0++) {
            fl[_i0].opt->srcrt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl__i0__opt_dst0opt0 = 1;
          fl[_i0].opt->dst0opt = (int *) malloc(_len_fl__i0__opt_dst0opt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt_dst0opt0; _j0++) {
            fl[_i0].opt->dst0opt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl__i0__opt_hopopt0 = 1;
          fl[_i0].opt->hopopt = (int *) malloc(_len_fl__i0__opt_hopopt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt_hopopt0; _j0++) {
            fl[_i0].opt->hopopt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_fopt0 = 65025;
          struct ipv6_txoptions * fopt = (struct ipv6_txoptions *) malloc(_len_fopt0*sizeof(struct ipv6_txoptions));
          for(int _i0 = 0; _i0 < _len_fopt0; _i0++) {
            fopt[_i0].opt_flen = ((-2 * (next_i()%2)) + 1) * next_i();
        fopt[_i0].opt_nflen = ((-2 * (next_i()%2)) + 1) * next_i();
        fopt[_i0].tot_len = ((-2 * (next_i()%2)) + 1) * next_i();
        fopt[_i0].dst1opt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fopt__i0__srcrt0 = 1;
          fopt[_i0].srcrt = (int *) malloc(_len_fopt__i0__srcrt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fopt__i0__srcrt0; _j0++) {
            fopt[_i0].srcrt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fopt__i0__dst0opt0 = 1;
          fopt[_i0].dst0opt = (int *) malloc(_len_fopt__i0__dst0opt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fopt__i0__dst0opt0; _j0++) {
            fopt[_i0].dst0opt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fopt__i0__hopopt0 = 1;
          fopt[_i0].hopopt = (int *) malloc(_len_fopt__i0__hopopt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fopt__i0__hopopt0; _j0++) {
            fopt[_i0].hopopt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ipv6_txoptions * benchRet = fl6_merge_options(opt_space,fl,fopt);
          printf("%ld\n", (*benchRet).opt_flen);
          printf("%ld\n", (*benchRet).opt_nflen);
          printf("%d\n", (*benchRet).tot_len);
          printf("%d\n", (*benchRet).dst1opt);
          for(int _aux = 0; _aux < _len_opt_space0; _aux++) {
          free(opt_space[_aux].srcrt);
          }
          for(int _aux = 0; _aux < _len_opt_space0; _aux++) {
          free(opt_space[_aux].dst0opt);
          }
          for(int _aux = 0; _aux < _len_opt_space0; _aux++) {
          free(opt_space[_aux].hopopt);
          }
          free(opt_space);
          for(int _aux = 0; _aux < _len_fl0; _aux++) {
          free(fl[_aux].opt);
          }
          free(fl);
          for(int _aux = 0; _aux < _len_fopt0; _aux++) {
          free(fopt[_aux].srcrt);
          }
          for(int _aux = 0; _aux < _len_fopt0; _aux++) {
          free(fopt[_aux].dst0opt);
          }
          for(int _aux = 0; _aux < _len_fopt0; _aux++) {
          free(fopt[_aux].hopopt);
          }
          free(fopt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_opt_space0 = 100;
          struct ipv6_txoptions * opt_space = (struct ipv6_txoptions *) malloc(_len_opt_space0*sizeof(struct ipv6_txoptions));
          for(int _i0 = 0; _i0 < _len_opt_space0; _i0++) {
            opt_space[_i0].opt_flen = ((-2 * (next_i()%2)) + 1) * next_i();
        opt_space[_i0].opt_nflen = ((-2 * (next_i()%2)) + 1) * next_i();
        opt_space[_i0].tot_len = ((-2 * (next_i()%2)) + 1) * next_i();
        opt_space[_i0].dst1opt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opt_space__i0__srcrt0 = 1;
          opt_space[_i0].srcrt = (int *) malloc(_len_opt_space__i0__srcrt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt_space__i0__srcrt0; _j0++) {
            opt_space[_i0].srcrt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opt_space__i0__dst0opt0 = 1;
          opt_space[_i0].dst0opt = (int *) malloc(_len_opt_space__i0__dst0opt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt_space__i0__dst0opt0; _j0++) {
            opt_space[_i0].dst0opt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opt_space__i0__hopopt0 = 1;
          opt_space[_i0].hopopt = (int *) malloc(_len_opt_space__i0__hopopt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt_space__i0__hopopt0; _j0++) {
            opt_space[_i0].hopopt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fl0 = 100;
          struct ip6_flowlabel * fl = (struct ip6_flowlabel *) malloc(_len_fl0*sizeof(struct ip6_flowlabel));
          for(int _i0 = 0; _i0 < _len_fl0; _i0++) {
              int _len_fl__i0__opt0 = 1;
          fl[_i0].opt = (struct ipv6_txoptions *) malloc(_len_fl__i0__opt0*sizeof(struct ipv6_txoptions));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt0; _j0++) {
            fl[_i0].opt->opt_flen = ((-2 * (next_i()%2)) + 1) * next_i();
        fl[_i0].opt->opt_nflen = ((-2 * (next_i()%2)) + 1) * next_i();
        fl[_i0].opt->tot_len = ((-2 * (next_i()%2)) + 1) * next_i();
        fl[_i0].opt->dst1opt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fl__i0__opt_srcrt0 = 1;
          fl[_i0].opt->srcrt = (int *) malloc(_len_fl__i0__opt_srcrt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt_srcrt0; _j0++) {
            fl[_i0].opt->srcrt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl__i0__opt_dst0opt0 = 1;
          fl[_i0].opt->dst0opt = (int *) malloc(_len_fl__i0__opt_dst0opt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt_dst0opt0; _j0++) {
            fl[_i0].opt->dst0opt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl__i0__opt_hopopt0 = 1;
          fl[_i0].opt->hopopt = (int *) malloc(_len_fl__i0__opt_hopopt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fl__i0__opt_hopopt0; _j0++) {
            fl[_i0].opt->hopopt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_fopt0 = 100;
          struct ipv6_txoptions * fopt = (struct ipv6_txoptions *) malloc(_len_fopt0*sizeof(struct ipv6_txoptions));
          for(int _i0 = 0; _i0 < _len_fopt0; _i0++) {
            fopt[_i0].opt_flen = ((-2 * (next_i()%2)) + 1) * next_i();
        fopt[_i0].opt_nflen = ((-2 * (next_i()%2)) + 1) * next_i();
        fopt[_i0].tot_len = ((-2 * (next_i()%2)) + 1) * next_i();
        fopt[_i0].dst1opt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fopt__i0__srcrt0 = 1;
          fopt[_i0].srcrt = (int *) malloc(_len_fopt__i0__srcrt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fopt__i0__srcrt0; _j0++) {
            fopt[_i0].srcrt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fopt__i0__dst0opt0 = 1;
          fopt[_i0].dst0opt = (int *) malloc(_len_fopt__i0__dst0opt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fopt__i0__dst0opt0; _j0++) {
            fopt[_i0].dst0opt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fopt__i0__hopopt0 = 1;
          fopt[_i0].hopopt = (int *) malloc(_len_fopt__i0__hopopt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fopt__i0__hopopt0; _j0++) {
            fopt[_i0].hopopt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ipv6_txoptions * benchRet = fl6_merge_options(opt_space,fl,fopt);
          printf("%ld\n", (*benchRet).opt_flen);
          printf("%ld\n", (*benchRet).opt_nflen);
          printf("%d\n", (*benchRet).tot_len);
          printf("%d\n", (*benchRet).dst1opt);
          for(int _aux = 0; _aux < _len_opt_space0; _aux++) {
          free(opt_space[_aux].srcrt);
          }
          for(int _aux = 0; _aux < _len_opt_space0; _aux++) {
          free(opt_space[_aux].dst0opt);
          }
          for(int _aux = 0; _aux < _len_opt_space0; _aux++) {
          free(opt_space[_aux].hopopt);
          }
          free(opt_space);
          for(int _aux = 0; _aux < _len_fl0; _aux++) {
          free(fl[_aux].opt);
          }
          free(fl);
          for(int _aux = 0; _aux < _len_fopt0; _aux++) {
          free(fopt[_aux].srcrt);
          }
          for(int _aux = 0; _aux < _len_fopt0; _aux++) {
          free(fopt[_aux].dst0opt);
          }
          for(int _aux = 0; _aux < _len_fopt0; _aux++) {
          free(fopt[_aux].hopopt);
          }
          free(fopt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
