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
struct attribute_group {int dummy; } ;
struct attribute {int dummy; } ;

/* Variables and functions */
 struct attribute** gvt_type_attrs ; 
 struct attribute_group** gvt_vgpu_type_groups ; 

__attribute__((used)) static bool intel_get_gvt_attrs(struct attribute ***type_attrs,
		struct attribute_group ***intel_vgpu_type_groups)
{
	*type_attrs = gvt_type_attrs;
	*intel_vgpu_type_groups = gvt_vgpu_type_groups;
	return true;
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
          int _len_type_attrs0 = 1;
          struct attribute *** type_attrs = (struct attribute ***) malloc(_len_type_attrs0*sizeof(struct attribute **));
          for(int _i0 = 0; _i0 < _len_type_attrs0; _i0++) {
            int _len_type_attrs1 = 1;
            type_attrs[_i0] = (struct attribute **) malloc(_len_type_attrs1*sizeof(struct attribute *));
            for(int _i1 = 0; _i1 < _len_type_attrs1; _i1++) {
              int _len_type_attrs2 = 1;
              type_attrs[_i0][_i1] = (struct attribute *) malloc(_len_type_attrs2*sizeof(struct attribute));
              for(int _i2 = 0; _i2 < _len_type_attrs2; _i2++) {
                type_attrs[_i0][_i1][_i2].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_intel_vgpu_type_groups0 = 1;
          struct attribute_group *** intel_vgpu_type_groups = (struct attribute_group ***) malloc(_len_intel_vgpu_type_groups0*sizeof(struct attribute_group **));
          for(int _i0 = 0; _i0 < _len_intel_vgpu_type_groups0; _i0++) {
            int _len_intel_vgpu_type_groups1 = 1;
            intel_vgpu_type_groups[_i0] = (struct attribute_group **) malloc(_len_intel_vgpu_type_groups1*sizeof(struct attribute_group *));
            for(int _i1 = 0; _i1 < _len_intel_vgpu_type_groups1; _i1++) {
              int _len_intel_vgpu_type_groups2 = 1;
              intel_vgpu_type_groups[_i0][_i1] = (struct attribute_group *) malloc(_len_intel_vgpu_type_groups2*sizeof(struct attribute_group));
              for(int _i2 = 0; _i2 < _len_intel_vgpu_type_groups2; _i2++) {
                intel_vgpu_type_groups[_i0][_i1][_i2].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int benchRet = intel_get_gvt_attrs(type_attrs,intel_vgpu_type_groups);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_type_attrs0; i1++) {
            int _len_type_attrs1 = 1;
              for(int i2 = 0; i2 < _len_type_attrs1; i2++) {
            int _len_type_attrs2 = 1;
              free(type_attrs[i1][i2]);
          }
          free(type_attrs[i1]);
          }
          free(type_attrs);
          for(int i1 = 0; i1 < _len_intel_vgpu_type_groups0; i1++) {
            int _len_intel_vgpu_type_groups1 = 1;
              for(int i2 = 0; i2 < _len_intel_vgpu_type_groups1; i2++) {
            int _len_intel_vgpu_type_groups2 = 1;
              free(intel_vgpu_type_groups[i1][i2]);
          }
          free(intel_vgpu_type_groups[i1]);
          }
          free(intel_vgpu_type_groups);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_type_attrs0 = 65025;
          struct attribute *** type_attrs = (struct attribute ***) malloc(_len_type_attrs0*sizeof(struct attribute **));
          for(int _i0 = 0; _i0 < _len_type_attrs0; _i0++) {
            int _len_type_attrs1 = 1;
            type_attrs[_i0] = (struct attribute **) malloc(_len_type_attrs1*sizeof(struct attribute *));
            for(int _i1 = 0; _i1 < _len_type_attrs1; _i1++) {
              int _len_type_attrs2 = 1;
              type_attrs[_i0][_i1] = (struct attribute *) malloc(_len_type_attrs2*sizeof(struct attribute));
              for(int _i2 = 0; _i2 < _len_type_attrs2; _i2++) {
                type_attrs[_i0][_i1][_i2].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_intel_vgpu_type_groups0 = 65025;
          struct attribute_group *** intel_vgpu_type_groups = (struct attribute_group ***) malloc(_len_intel_vgpu_type_groups0*sizeof(struct attribute_group **));
          for(int _i0 = 0; _i0 < _len_intel_vgpu_type_groups0; _i0++) {
            int _len_intel_vgpu_type_groups1 = 1;
            intel_vgpu_type_groups[_i0] = (struct attribute_group **) malloc(_len_intel_vgpu_type_groups1*sizeof(struct attribute_group *));
            for(int _i1 = 0; _i1 < _len_intel_vgpu_type_groups1; _i1++) {
              int _len_intel_vgpu_type_groups2 = 1;
              intel_vgpu_type_groups[_i0][_i1] = (struct attribute_group *) malloc(_len_intel_vgpu_type_groups2*sizeof(struct attribute_group));
              for(int _i2 = 0; _i2 < _len_intel_vgpu_type_groups2; _i2++) {
                intel_vgpu_type_groups[_i0][_i1][_i2].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int benchRet = intel_get_gvt_attrs(type_attrs,intel_vgpu_type_groups);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_type_attrs0; i1++) {
            int _len_type_attrs1 = 1;
              for(int i2 = 0; i2 < _len_type_attrs1; i2++) {
            int _len_type_attrs2 = 1;
              free(type_attrs[i1][i2]);
          }
          free(type_attrs[i1]);
          }
          free(type_attrs);
          for(int i1 = 0; i1 < _len_intel_vgpu_type_groups0; i1++) {
            int _len_intel_vgpu_type_groups1 = 1;
              for(int i2 = 0; i2 < _len_intel_vgpu_type_groups1; i2++) {
            int _len_intel_vgpu_type_groups2 = 1;
              free(intel_vgpu_type_groups[i1][i2]);
          }
          free(intel_vgpu_type_groups[i1]);
          }
          free(intel_vgpu_type_groups);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_type_attrs0 = 100;
          struct attribute *** type_attrs = (struct attribute ***) malloc(_len_type_attrs0*sizeof(struct attribute **));
          for(int _i0 = 0; _i0 < _len_type_attrs0; _i0++) {
            int _len_type_attrs1 = 1;
            type_attrs[_i0] = (struct attribute **) malloc(_len_type_attrs1*sizeof(struct attribute *));
            for(int _i1 = 0; _i1 < _len_type_attrs1; _i1++) {
              int _len_type_attrs2 = 1;
              type_attrs[_i0][_i1] = (struct attribute *) malloc(_len_type_attrs2*sizeof(struct attribute));
              for(int _i2 = 0; _i2 < _len_type_attrs2; _i2++) {
                type_attrs[_i0][_i1][_i2].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_intel_vgpu_type_groups0 = 100;
          struct attribute_group *** intel_vgpu_type_groups = (struct attribute_group ***) malloc(_len_intel_vgpu_type_groups0*sizeof(struct attribute_group **));
          for(int _i0 = 0; _i0 < _len_intel_vgpu_type_groups0; _i0++) {
            int _len_intel_vgpu_type_groups1 = 1;
            intel_vgpu_type_groups[_i0] = (struct attribute_group **) malloc(_len_intel_vgpu_type_groups1*sizeof(struct attribute_group *));
            for(int _i1 = 0; _i1 < _len_intel_vgpu_type_groups1; _i1++) {
              int _len_intel_vgpu_type_groups2 = 1;
              intel_vgpu_type_groups[_i0][_i1] = (struct attribute_group *) malloc(_len_intel_vgpu_type_groups2*sizeof(struct attribute_group));
              for(int _i2 = 0; _i2 < _len_intel_vgpu_type_groups2; _i2++) {
                intel_vgpu_type_groups[_i0][_i1][_i2].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int benchRet = intel_get_gvt_attrs(type_attrs,intel_vgpu_type_groups);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_type_attrs0; i1++) {
            int _len_type_attrs1 = 1;
              for(int i2 = 0; i2 < _len_type_attrs1; i2++) {
            int _len_type_attrs2 = 1;
              free(type_attrs[i1][i2]);
          }
          free(type_attrs[i1]);
          }
          free(type_attrs);
          for(int i1 = 0; i1 < _len_intel_vgpu_type_groups0; i1++) {
            int _len_intel_vgpu_type_groups1 = 1;
              for(int i2 = 0; i2 < _len_intel_vgpu_type_groups1; i2++) {
            int _len_intel_vgpu_type_groups2 = 1;
              free(intel_vgpu_type_groups[i1][i2]);
          }
          free(intel_vgpu_type_groups[i1]);
          }
          free(intel_vgpu_type_groups);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
