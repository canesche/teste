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
typedef  int u8 ;
struct hid_field {int maxusage; TYPE_1__* usage; } ;
struct TYPE_2__ {int const hid; } ;

/* Variables and functions */
 int const HID_UP_PID ; 

__attribute__((used)) static int pidff_find_special_keys(int *keys, struct hid_field *fld,
				   const u8 *usagetable, int count)
{

	int i, j;
	int found = 0;

	for (i = 0; i < count; i++) {
		for (j = 0; j < fld->maxusage; j++) {
			if (fld->usage[j].hid == (HID_UP_PID | usagetable[i])) {
				keys[i] = j + 1;
				found++;
				break;
			}
		}
	}
	return found;
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
          int count = 100;
          int _len_keys0 = 1;
          int * keys = (int *) malloc(_len_keys0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_keys0; _i0++) {
            keys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fld0 = 1;
          struct hid_field * fld = (struct hid_field *) malloc(_len_fld0*sizeof(struct hid_field));
          for(int _i0 = 0; _i0 < _len_fld0; _i0++) {
            fld[_i0].maxusage = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fld__i0__usage0 = 1;
          fld[_i0].usage = (struct TYPE_2__ *) malloc(_len_fld__i0__usage0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fld__i0__usage0; _j0++) {
            fld[_i0].usage->hid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_usagetable0 = 1;
          const int * usagetable = (const int *) malloc(_len_usagetable0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_usagetable0; _i0++) {
            usagetable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pidff_find_special_keys(keys,fld,usagetable,count);
          printf("%d\n", benchRet); 
          free(keys);
          for(int _aux = 0; _aux < _len_fld0; _aux++) {
          free(fld[_aux].usage);
          }
          free(fld);
          free(usagetable);
        
        break;
    }
    // big-arr
    case 1:
    {
          int count = 255;
          int _len_keys0 = 65025;
          int * keys = (int *) malloc(_len_keys0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_keys0; _i0++) {
            keys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fld0 = 65025;
          struct hid_field * fld = (struct hid_field *) malloc(_len_fld0*sizeof(struct hid_field));
          for(int _i0 = 0; _i0 < _len_fld0; _i0++) {
            fld[_i0].maxusage = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fld__i0__usage0 = 1;
          fld[_i0].usage = (struct TYPE_2__ *) malloc(_len_fld__i0__usage0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fld__i0__usage0; _j0++) {
            fld[_i0].usage->hid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_usagetable0 = 65025;
          const int * usagetable = (const int *) malloc(_len_usagetable0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_usagetable0; _i0++) {
            usagetable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pidff_find_special_keys(keys,fld,usagetable,count);
          printf("%d\n", benchRet); 
          free(keys);
          for(int _aux = 0; _aux < _len_fld0; _aux++) {
          free(fld[_aux].usage);
          }
          free(fld);
          free(usagetable);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int count = 10;
          int _len_keys0 = 100;
          int * keys = (int *) malloc(_len_keys0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_keys0; _i0++) {
            keys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fld0 = 100;
          struct hid_field * fld = (struct hid_field *) malloc(_len_fld0*sizeof(struct hid_field));
          for(int _i0 = 0; _i0 < _len_fld0; _i0++) {
            fld[_i0].maxusage = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fld__i0__usage0 = 1;
          fld[_i0].usage = (struct TYPE_2__ *) malloc(_len_fld__i0__usage0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fld__i0__usage0; _j0++) {
            fld[_i0].usage->hid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_usagetable0 = 100;
          const int * usagetable = (const int *) malloc(_len_usagetable0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_usagetable0; _i0++) {
            usagetable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pidff_find_special_keys(keys,fld,usagetable,count);
          printf("%d\n", benchRet); 
          free(keys);
          for(int _aux = 0; _aux < _len_fld0; _aux++) {
          free(fld[_aux].usage);
          }
          free(fld);
          free(usagetable);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
