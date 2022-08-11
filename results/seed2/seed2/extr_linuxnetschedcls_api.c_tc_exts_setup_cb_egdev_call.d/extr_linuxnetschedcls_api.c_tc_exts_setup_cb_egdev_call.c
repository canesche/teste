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
struct tcf_exts {int dummy; } ;
typedef  enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;

/* Variables and functions */

__attribute__((used)) static int tc_exts_setup_cb_egdev_call(struct tcf_exts *exts,
				       enum tc_setup_type type,
				       void *type_data, bool err_stop)
{
	int ok_count = 0;
#ifdef CONFIG_NET_CLS_ACT
	const struct tc_action *a;
	struct net_device *dev;
	int i, ret;

	if (!tcf_exts_has_actions(exts))
		return 0;

	for (i = 0; i < exts->nr_actions; i++) {
		a = exts->actions[i];
		if (!a->ops->get_dev)
			continue;
		dev = a->ops->get_dev(a);
		if (!dev)
			continue;
		ret = tc_setup_cb_egdev_call(dev, type, type_data, err_stop);
		a->ops->put_dev(dev);
		if (ret < 0)
			return ret;
		ok_count += ret;
	}
#endif
	return ok_count;
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
          enum tc_setup_type type = 0;
          int err_stop = 100;
          int _len_exts0 = 1;
          struct tcf_exts * exts = (struct tcf_exts *) malloc(_len_exts0*sizeof(struct tcf_exts));
          for(int _i0 = 0; _i0 < _len_exts0; _i0++) {
            exts[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * type_data;
          int benchRet = tc_exts_setup_cb_egdev_call(exts,type,type_data,err_stop);
          printf("%d\n", benchRet); 
          free(exts);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum tc_setup_type type = 0;
          int err_stop = 255;
          int _len_exts0 = 65025;
          struct tcf_exts * exts = (struct tcf_exts *) malloc(_len_exts0*sizeof(struct tcf_exts));
          for(int _i0 = 0; _i0 < _len_exts0; _i0++) {
            exts[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * type_data;
          int benchRet = tc_exts_setup_cb_egdev_call(exts,type,type_data,err_stop);
          printf("%d\n", benchRet); 
          free(exts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum tc_setup_type type = 0;
          int err_stop = 10;
          int _len_exts0 = 100;
          struct tcf_exts * exts = (struct tcf_exts *) malloc(_len_exts0*sizeof(struct tcf_exts));
          for(int _i0 = 0; _i0 < _len_exts0; _i0++) {
            exts[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * type_data;
          int benchRet = tc_exts_setup_cb_egdev_call(exts,type,type_data,err_stop);
          printf("%d\n", benchRet); 
          free(exts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
