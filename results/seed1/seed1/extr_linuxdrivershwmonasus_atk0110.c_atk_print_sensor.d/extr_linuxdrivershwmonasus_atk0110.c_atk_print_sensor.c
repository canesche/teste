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
typedef  union acpi_object {int dummy; } acpi_object ;
struct atk_data {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void atk_print_sensor(struct atk_data *data, union acpi_object *obj)
{
#ifdef DEBUG
	struct device *dev = &data->acpi_dev->dev;
	union acpi_object *flags;
	union acpi_object *name;
	union acpi_object *limit1;
	union acpi_object *limit2;
	union acpi_object *enable;
	char const *what;

	flags = atk_get_pack_member(data, obj, HWMON_PACK_FLAGS);
	name = atk_get_pack_member(data, obj, HWMON_PACK_NAME);
	limit1 = atk_get_pack_member(data, obj, HWMON_PACK_LIMIT1);
	limit2 = atk_get_pack_member(data, obj, HWMON_PACK_LIMIT2);
	enable = atk_get_pack_member(data, obj, HWMON_PACK_ENABLE);

	what = atk_sensor_type(flags);

	dev_dbg(dev, "%s: %#llx %s [%llu-%llu] %s\n", what,
			flags->integer.value,
			name->string.pointer,
			limit1->integer.value, limit2->integer.value,
			enable->integer.value ? "enabled" : "disabled");
#endif
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
          int _len_data0 = 1;
          struct atk_data * data = (struct atk_data *) malloc(_len_data0*sizeof(struct atk_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 1;
          union acpi_object * obj = (union acpi_object *) malloc(_len_obj0*sizeof(union acpi_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = 0;
          }
          atk_print_sensor(data,obj);
          free(data);
          free(obj);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_data0 = 65025;
          struct atk_data * data = (struct atk_data *) malloc(_len_data0*sizeof(struct atk_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 65025;
          union acpi_object * obj = (union acpi_object *) malloc(_len_obj0*sizeof(union acpi_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = 0;
          }
          atk_print_sensor(data,obj);
          free(data);
          free(obj);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_data0 = 100;
          struct atk_data * data = (struct atk_data *) malloc(_len_data0*sizeof(struct atk_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 100;
          union acpi_object * obj = (union acpi_object *) malloc(_len_obj0*sizeof(union acpi_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = 0;
          }
          atk_print_sensor(data,obj);
          free(data);
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
