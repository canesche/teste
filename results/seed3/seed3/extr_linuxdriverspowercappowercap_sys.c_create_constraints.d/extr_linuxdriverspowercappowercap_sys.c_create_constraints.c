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
       3            linked\n\
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
typedef  struct TYPE_16__   TYPE_8__ ;
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct powercap_zone_constraint_ops {scalar_t__ get_min_time_window_us; scalar_t__ get_max_time_window_us; scalar_t__ get_min_power_uw; scalar_t__ get_max_power_uw; scalar_t__ get_name; int /*<<< orphan*/  set_time_window_us; int /*<<< orphan*/  get_time_window_us; int /*<<< orphan*/  set_power_limit_uw; int /*<<< orphan*/  get_power_limit_uw; } ;
struct powercap_zone_constraint {struct powercap_zone_constraint_ops const* ops; int /*<<< orphan*/  id; } ;
struct powercap_zone {int zone_attr_count; int /*<<< orphan*/ ** zone_dev_attrs; int /*<<< orphan*/  const_id_cnt; struct powercap_zone_constraint* constraints; } ;
struct TYPE_15__ {int /*<<< orphan*/  attr; } ;
struct TYPE_14__ {int /*<<< orphan*/  attr; } ;
struct TYPE_13__ {int /*<<< orphan*/  attr; } ;
struct TYPE_12__ {int /*<<< orphan*/  attr; } ;
struct TYPE_11__ {int /*<<< orphan*/  attr; } ;
struct TYPE_10__ {int /*<<< orphan*/  attr; } ;
struct TYPE_9__ {int /*<<< orphan*/  attr; } ;
struct TYPE_16__ {TYPE_7__ min_time_window_attr; TYPE_6__ max_time_window_attr; TYPE_5__ min_power_attr; TYPE_4__ max_power_attr; TYPE_3__ name_attr; TYPE_2__ time_window_attr; TYPE_1__ power_limit_attr; } ;

/* Variables and functions */
 int EINVAL ; 
 TYPE_8__* constraint_attrs ; 

__attribute__((used)) static int create_constraints(struct powercap_zone *power_zone,
			int nr_constraints,
			const struct powercap_zone_constraint_ops *const_ops)
{
	int i;
	int ret = 0;
	int count;
	struct powercap_zone_constraint *pconst;

	if (!power_zone || !const_ops || !const_ops->get_power_limit_uw ||
					!const_ops->set_power_limit_uw ||
					!const_ops->get_time_window_us ||
					!const_ops->set_time_window_us)
		return -EINVAL;

	count = power_zone->zone_attr_count;
	for (i = 0; i < nr_constraints; ++i) {
		pconst = &power_zone->constraints[i];
		pconst->ops = const_ops;
		pconst->id = power_zone->const_id_cnt;
		power_zone->const_id_cnt++;
		power_zone->zone_dev_attrs[count++] =
				&constraint_attrs[i].power_limit_attr.attr;
		power_zone->zone_dev_attrs[count++] =
				&constraint_attrs[i].time_window_attr.attr;
		if (pconst->ops->get_name)
			power_zone->zone_dev_attrs[count++] =
				&constraint_attrs[i].name_attr.attr;
		if (pconst->ops->get_max_power_uw)
			power_zone->zone_dev_attrs[count++] =
				&constraint_attrs[i].max_power_attr.attr;
		if (pconst->ops->get_min_power_uw)
			power_zone->zone_dev_attrs[count++] =
				&constraint_attrs[i].min_power_attr.attr;
		if (pconst->ops->get_max_time_window_us)
			power_zone->zone_dev_attrs[count++] =
				&constraint_attrs[i].max_time_window_attr.attr;
		if (pconst->ops->get_min_time_window_us)
			power_zone->zone_dev_attrs[count++] =
				&constraint_attrs[i].min_time_window_attr.attr;
	}
	power_zone->zone_attr_count = count;

	return ret;
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
          int nr_constraints = 100;
          int _len_power_zone0 = 1;
          struct powercap_zone * power_zone = (struct powercap_zone *) malloc(_len_power_zone0*sizeof(struct powercap_zone));
          for(int _i0 = 0; _i0 < _len_power_zone0; _i0++) {
            power_zone[_i0].zone_attr_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_power_zone__i0__zone_dev_attrs0 = 1;
          power_zone[_i0].zone_dev_attrs = (int **) malloc(_len_power_zone__i0__zone_dev_attrs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__zone_dev_attrs0; _j0++) {
            int _len_power_zone__i0__zone_dev_attrs1 = 1;
            power_zone[_i0].zone_dev_attrs[_j0] = (int *) malloc(_len_power_zone__i0__zone_dev_attrs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_power_zone__i0__zone_dev_attrs1; _j1++) {
              power_zone[_i0].zone_dev_attrs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        power_zone[_i0].const_id_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_power_zone__i0__constraints0 = 1;
          power_zone[_i0].constraints = (struct powercap_zone_constraint *) malloc(_len_power_zone__i0__constraints0*sizeof(struct powercap_zone_constraint));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__constraints0; _j0++) {
              int _len_power_zone__i0__constraints_ops0 = 1;
          power_zone[_i0].constraints->ops = (const struct powercap_zone_constraint_ops *) malloc(_len_power_zone__i0__constraints_ops0*sizeof(const struct powercap_zone_constraint_ops));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__constraints_ops0; _j0++) {
              }
        power_zone[_i0].constraints->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_const_ops0 = 1;
          const struct powercap_zone_constraint_ops * const_ops = (const struct powercap_zone_constraint_ops *) malloc(_len_const_ops0*sizeof(const struct powercap_zone_constraint_ops));
          for(int _i0 = 0; _i0 < _len_const_ops0; _i0++) {
              }
          int benchRet = create_constraints(power_zone,nr_constraints,const_ops);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_power_zone0; _aux++) {
          free(*(power_zone[_aux].zone_dev_attrs));
        free(power_zone[_aux].zone_dev_attrs);
          }
          for(int _aux = 0; _aux < _len_power_zone0; _aux++) {
          free(power_zone[_aux].constraints);
          }
          free(power_zone);
          free(const_ops);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nr_constraints = 255;
          int _len_power_zone0 = 65025;
          struct powercap_zone * power_zone = (struct powercap_zone *) malloc(_len_power_zone0*sizeof(struct powercap_zone));
          for(int _i0 = 0; _i0 < _len_power_zone0; _i0++) {
            power_zone[_i0].zone_attr_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_power_zone__i0__zone_dev_attrs0 = 1;
          power_zone[_i0].zone_dev_attrs = (int **) malloc(_len_power_zone__i0__zone_dev_attrs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__zone_dev_attrs0; _j0++) {
            int _len_power_zone__i0__zone_dev_attrs1 = 1;
            power_zone[_i0].zone_dev_attrs[_j0] = (int *) malloc(_len_power_zone__i0__zone_dev_attrs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_power_zone__i0__zone_dev_attrs1; _j1++) {
              power_zone[_i0].zone_dev_attrs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        power_zone[_i0].const_id_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_power_zone__i0__constraints0 = 1;
          power_zone[_i0].constraints = (struct powercap_zone_constraint *) malloc(_len_power_zone__i0__constraints0*sizeof(struct powercap_zone_constraint));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__constraints0; _j0++) {
              int _len_power_zone__i0__constraints_ops0 = 1;
          power_zone[_i0].constraints->ops = (const struct powercap_zone_constraint_ops *) malloc(_len_power_zone__i0__constraints_ops0*sizeof(const struct powercap_zone_constraint_ops));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__constraints_ops0; _j0++) {
              }
        power_zone[_i0].constraints->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_const_ops0 = 65025;
          const struct powercap_zone_constraint_ops * const_ops = (const struct powercap_zone_constraint_ops *) malloc(_len_const_ops0*sizeof(const struct powercap_zone_constraint_ops));
          for(int _i0 = 0; _i0 < _len_const_ops0; _i0++) {
              }
          int benchRet = create_constraints(power_zone,nr_constraints,const_ops);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_power_zone0; _aux++) {
          free(*(power_zone[_aux].zone_dev_attrs));
        free(power_zone[_aux].zone_dev_attrs);
          }
          for(int _aux = 0; _aux < _len_power_zone0; _aux++) {
          free(power_zone[_aux].constraints);
          }
          free(power_zone);
          free(const_ops);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nr_constraints = 10;
          int _len_power_zone0 = 100;
          struct powercap_zone * power_zone = (struct powercap_zone *) malloc(_len_power_zone0*sizeof(struct powercap_zone));
          for(int _i0 = 0; _i0 < _len_power_zone0; _i0++) {
            power_zone[_i0].zone_attr_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_power_zone__i0__zone_dev_attrs0 = 1;
          power_zone[_i0].zone_dev_attrs = (int **) malloc(_len_power_zone__i0__zone_dev_attrs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__zone_dev_attrs0; _j0++) {
            int _len_power_zone__i0__zone_dev_attrs1 = 1;
            power_zone[_i0].zone_dev_attrs[_j0] = (int *) malloc(_len_power_zone__i0__zone_dev_attrs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_power_zone__i0__zone_dev_attrs1; _j1++) {
              power_zone[_i0].zone_dev_attrs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        power_zone[_i0].const_id_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_power_zone__i0__constraints0 = 1;
          power_zone[_i0].constraints = (struct powercap_zone_constraint *) malloc(_len_power_zone__i0__constraints0*sizeof(struct powercap_zone_constraint));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__constraints0; _j0++) {
              int _len_power_zone__i0__constraints_ops0 = 1;
          power_zone[_i0].constraints->ops = (const struct powercap_zone_constraint_ops *) malloc(_len_power_zone__i0__constraints_ops0*sizeof(const struct powercap_zone_constraint_ops));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__constraints_ops0; _j0++) {
              }
        power_zone[_i0].constraints->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_const_ops0 = 100;
          const struct powercap_zone_constraint_ops * const_ops = (const struct powercap_zone_constraint_ops *) malloc(_len_const_ops0*sizeof(const struct powercap_zone_constraint_ops));
          for(int _i0 = 0; _i0 < _len_const_ops0; _i0++) {
              }
          int benchRet = create_constraints(power_zone,nr_constraints,const_ops);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_power_zone0; _aux++) {
          free(*(power_zone[_aux].zone_dev_attrs));
        free(power_zone[_aux].zone_dev_attrs);
          }
          for(int _aux = 0; _aux < _len_power_zone0; _aux++) {
          free(power_zone[_aux].constraints);
          }
          free(power_zone);
          free(const_ops);
        
        break;
    }
    // linked
    case 3:
    {
          int nr_constraints = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_power_zone0 = 1;
          struct powercap_zone * power_zone = (struct powercap_zone *) malloc(_len_power_zone0*sizeof(struct powercap_zone));
          for(int _i0 = 0; _i0 < _len_power_zone0; _i0++) {
            power_zone[_i0].zone_attr_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_power_zone__i0__zone_dev_attrs0 = 1;
          power_zone[_i0].zone_dev_attrs = (int **) malloc(_len_power_zone__i0__zone_dev_attrs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__zone_dev_attrs0; _j0++) {
            int _len_power_zone__i0__zone_dev_attrs1 = 1;
            power_zone[_i0].zone_dev_attrs[_j0] = (int *) malloc(_len_power_zone__i0__zone_dev_attrs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_power_zone__i0__zone_dev_attrs1; _j1++) {
              power_zone[_i0].zone_dev_attrs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        power_zone[_i0].const_id_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_power_zone__i0__constraints0 = 1;
          power_zone[_i0].constraints = (struct powercap_zone_constraint *) malloc(_len_power_zone__i0__constraints0*sizeof(struct powercap_zone_constraint));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__constraints0; _j0++) {
              int _len_power_zone__i0__constraints_ops0 = 1;
          power_zone[_i0].constraints->ops = (const struct powercap_zone_constraint_ops *) malloc(_len_power_zone__i0__constraints_ops0*sizeof(const struct powercap_zone_constraint_ops));
          for(int _j0 = 0; _j0 < _len_power_zone__i0__constraints_ops0; _j0++) {
              }
        power_zone[_i0].constraints->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_const_ops0 = 1;
          const struct powercap_zone_constraint_ops * const_ops = (const struct powercap_zone_constraint_ops *) malloc(_len_const_ops0*sizeof(const struct powercap_zone_constraint_ops));
          for(int _i0 = 0; _i0 < _len_const_ops0; _i0++) {
              }
          int benchRet = create_constraints(power_zone,nr_constraints,const_ops);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_power_zone0; _aux++) {
          free(*(power_zone[_aux].zone_dev_attrs));
        free(power_zone[_aux].zone_dev_attrs);
          }
          for(int _aux = 0; _aux < _len_power_zone0; _aux++) {
          free(power_zone[_aux].constraints);
          }
          free(power_zone);
          free(const_ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
