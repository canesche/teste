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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct hid_report {int maxfield; TYPE_2__** field; } ;
struct hid_device {TYPE_1__* report_enum; } ;
struct TYPE_4__ {unsigned int application; } ;
struct TYPE_3__ {struct hid_report** report_id_hash; } ;

/* Variables and functions */
 unsigned int HID_UP_MSVENDOR ; 
 unsigned int HID_USAGE_PAGE ; 

__attribute__((used)) static int rmi_check_valid_report_id(struct hid_device *hdev, unsigned type,
		unsigned id, struct hid_report **report)
{
	int i;

	*report = hdev->report_enum[type].report_id_hash[id];
	if (*report) {
		for (i = 0; i < (*report)->maxfield; i++) {
			unsigned app = (*report)->field[i]->application;
			if ((app & HID_USAGE_PAGE) >= HID_UP_MSVENDOR)
				return 1;
		}
	}

	return 0;
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
          unsigned int type = 100;
          unsigned int id = 100;
          int _len_hdev0 = 1;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              int _len_hdev__i0__report_enum0 = 1;
          hdev[_i0].report_enum = (struct TYPE_3__ *) malloc(_len_hdev__i0__report_enum0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdev__i0__report_enum0; _j0++) {
              int _len_hdev__i0__report_enum_report_id_hash0 = 1;
          hdev[_i0].report_enum->report_id_hash = (struct hid_report **) malloc(_len_hdev__i0__report_enum_report_id_hash0*sizeof(struct hid_report *));
          for(int _j0 = 0; _j0 < _len_hdev__i0__report_enum_report_id_hash0; _j0++) {
            int _len_hdev__i0__report_enum_report_id_hash1 = 1;
            hdev[_i0].report_enum->report_id_hash[_j0] = (struct hid_report *) malloc(_len_hdev__i0__report_enum_report_id_hash1*sizeof(struct hid_report));
            for(int _j1 = 0; _j1 < _len_hdev__i0__report_enum_report_id_hash1; _j1++) {
              hdev[_i0].report_enum->report_id_hash[_j0]->maxfield = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__report_enum_report_id_hash__j0__field0 = 1;
          hdev[_i0].report_enum->report_id_hash[_j0]->field = (struct TYPE_4__ **) malloc(_len_hdev__i0__report_enum_report_id_hash__j0__field0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_hdev__i0__report_enum_report_id_hash__j0__field0; _j0++) {
            int _len_hdev__i0__report_enum_report_id_hash__j0__field1 = 1;
            hdev[_i0].report_enum->report_id_hash[_j0]->field[_j0] = (struct TYPE_4__ *) malloc(_len_hdev__i0__report_enum_report_id_hash__j0__field1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_hdev__i0__report_enum_report_id_hash__j0__field1; _j1++) {
              hdev[_i0].report_enum->report_id_hash[_j0]->field[_j0]->application = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
          }
          }
          int _len_report0 = 1;
          struct hid_report ** report = (struct hid_report **) malloc(_len_report0*sizeof(struct hid_report *));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            int _len_report1 = 1;
            report[_i0] = (struct hid_report *) malloc(_len_report1*sizeof(struct hid_report));
            for(int _i1 = 0; _i1 < _len_report1; _i1++) {
              report[_i0][_i1].maxfield = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_report__i0___i1__field0 = 1;
          report[_i0][_i1].field = (struct TYPE_4__ **) malloc(_len_report__i0___i1__field0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_report__i0___i1__field0; _j0++) {
            int _len_report__i0___i1__field1 = 1;
            report[_i0][_i1].field[_j0] = (struct TYPE_4__ *) malloc(_len_report__i0___i1__field1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_report__i0___i1__field1; _j1++) {
              report[_i0][_i1].field[_j0]->application = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
          int benchRet = rmi_check_valid_report_id(hdev,type,id,report);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].report_enum);
          }
          free(hdev);
          for(int i1 = 0; i1 < _len_report0; i1++) {
            int _len_report1 = 1;
              for(int _aux = 0; _aux < _len_report1; _aux++) {
          free(*(report[_aux].field));
        free(report[_aux].field);
          }
          free(report[i1]);
          }
          free(report);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int type = 255;
          unsigned int id = 255;
          int _len_hdev0 = 65025;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              int _len_hdev__i0__report_enum0 = 1;
          hdev[_i0].report_enum = (struct TYPE_3__ *) malloc(_len_hdev__i0__report_enum0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdev__i0__report_enum0; _j0++) {
              int _len_hdev__i0__report_enum_report_id_hash0 = 1;
          hdev[_i0].report_enum->report_id_hash = (struct hid_report **) malloc(_len_hdev__i0__report_enum_report_id_hash0*sizeof(struct hid_report *));
          for(int _j0 = 0; _j0 < _len_hdev__i0__report_enum_report_id_hash0; _j0++) {
            int _len_hdev__i0__report_enum_report_id_hash1 = 1;
            hdev[_i0].report_enum->report_id_hash[_j0] = (struct hid_report *) malloc(_len_hdev__i0__report_enum_report_id_hash1*sizeof(struct hid_report));
            for(int _j1 = 0; _j1 < _len_hdev__i0__report_enum_report_id_hash1; _j1++) {
              hdev[_i0].report_enum->report_id_hash[_j0]->maxfield = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__report_enum_report_id_hash__j0__field0 = 1;
          hdev[_i0].report_enum->report_id_hash[_j0]->field = (struct TYPE_4__ **) malloc(_len_hdev__i0__report_enum_report_id_hash__j0__field0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_hdev__i0__report_enum_report_id_hash__j0__field0; _j0++) {
            int _len_hdev__i0__report_enum_report_id_hash__j0__field1 = 1;
            hdev[_i0].report_enum->report_id_hash[_j0]->field[_j0] = (struct TYPE_4__ *) malloc(_len_hdev__i0__report_enum_report_id_hash__j0__field1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_hdev__i0__report_enum_report_id_hash__j0__field1; _j1++) {
              hdev[_i0].report_enum->report_id_hash[_j0]->field[_j0]->application = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
          }
          }
          int _len_report0 = 65025;
          struct hid_report ** report = (struct hid_report **) malloc(_len_report0*sizeof(struct hid_report *));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            int _len_report1 = 1;
            report[_i0] = (struct hid_report *) malloc(_len_report1*sizeof(struct hid_report));
            for(int _i1 = 0; _i1 < _len_report1; _i1++) {
              report[_i0][_i1].maxfield = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_report__i0___i1__field0 = 1;
          report[_i0][_i1].field = (struct TYPE_4__ **) malloc(_len_report__i0___i1__field0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_report__i0___i1__field0; _j0++) {
            int _len_report__i0___i1__field1 = 1;
            report[_i0][_i1].field[_j0] = (struct TYPE_4__ *) malloc(_len_report__i0___i1__field1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_report__i0___i1__field1; _j1++) {
              report[_i0][_i1].field[_j0]->application = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
          int benchRet = rmi_check_valid_report_id(hdev,type,id,report);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].report_enum);
          }
          free(hdev);
          for(int i1 = 0; i1 < _len_report0; i1++) {
            int _len_report1 = 1;
              for(int _aux = 0; _aux < _len_report1; _aux++) {
          free(*(report[_aux].field));
        free(report[_aux].field);
          }
          free(report[i1]);
          }
          free(report);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int type = 10;
          unsigned int id = 10;
          int _len_hdev0 = 100;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              int _len_hdev__i0__report_enum0 = 1;
          hdev[_i0].report_enum = (struct TYPE_3__ *) malloc(_len_hdev__i0__report_enum0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hdev__i0__report_enum0; _j0++) {
              int _len_hdev__i0__report_enum_report_id_hash0 = 1;
          hdev[_i0].report_enum->report_id_hash = (struct hid_report **) malloc(_len_hdev__i0__report_enum_report_id_hash0*sizeof(struct hid_report *));
          for(int _j0 = 0; _j0 < _len_hdev__i0__report_enum_report_id_hash0; _j0++) {
            int _len_hdev__i0__report_enum_report_id_hash1 = 1;
            hdev[_i0].report_enum->report_id_hash[_j0] = (struct hid_report *) malloc(_len_hdev__i0__report_enum_report_id_hash1*sizeof(struct hid_report));
            for(int _j1 = 0; _j1 < _len_hdev__i0__report_enum_report_id_hash1; _j1++) {
              hdev[_i0].report_enum->report_id_hash[_j0]->maxfield = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__report_enum_report_id_hash__j0__field0 = 1;
          hdev[_i0].report_enum->report_id_hash[_j0]->field = (struct TYPE_4__ **) malloc(_len_hdev__i0__report_enum_report_id_hash__j0__field0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_hdev__i0__report_enum_report_id_hash__j0__field0; _j0++) {
            int _len_hdev__i0__report_enum_report_id_hash__j0__field1 = 1;
            hdev[_i0].report_enum->report_id_hash[_j0]->field[_j0] = (struct TYPE_4__ *) malloc(_len_hdev__i0__report_enum_report_id_hash__j0__field1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_hdev__i0__report_enum_report_id_hash__j0__field1; _j1++) {
              hdev[_i0].report_enum->report_id_hash[_j0]->field[_j0]->application = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
          }
          }
          int _len_report0 = 100;
          struct hid_report ** report = (struct hid_report **) malloc(_len_report0*sizeof(struct hid_report *));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            int _len_report1 = 1;
            report[_i0] = (struct hid_report *) malloc(_len_report1*sizeof(struct hid_report));
            for(int _i1 = 0; _i1 < _len_report1; _i1++) {
              report[_i0][_i1].maxfield = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_report__i0___i1__field0 = 1;
          report[_i0][_i1].field = (struct TYPE_4__ **) malloc(_len_report__i0___i1__field0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_report__i0___i1__field0; _j0++) {
            int _len_report__i0___i1__field1 = 1;
            report[_i0][_i1].field[_j0] = (struct TYPE_4__ *) malloc(_len_report__i0___i1__field1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_report__i0___i1__field1; _j1++) {
              report[_i0][_i1].field[_j0]->application = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
            }
          }
          int benchRet = rmi_check_valid_report_id(hdev,type,id,report);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].report_enum);
          }
          free(hdev);
          for(int i1 = 0; i1 < _len_report0; i1++) {
            int _len_report1 = 1;
              for(int _aux = 0; _aux < _len_report1; _aux++) {
          free(*(report[_aux].field));
        free(report[_aux].field);
          }
          free(report[i1]);
          }
          free(report);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
