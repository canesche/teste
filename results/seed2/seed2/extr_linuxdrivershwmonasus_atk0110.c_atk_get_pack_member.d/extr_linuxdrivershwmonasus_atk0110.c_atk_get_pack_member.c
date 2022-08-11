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
struct TYPE_2__ {union acpi_object* elements; } ;
union acpi_object {TYPE_1__ package; } ;
struct atk_data {int old_interface; } ;
typedef  enum atk_pack_member { ____Placeholder_atk_pack_member } atk_pack_member ;

/* Variables and functions */
#define  HWMON_PACK_ENABLE 132 
#define  HWMON_PACK_FLAGS 131 
#define  HWMON_PACK_LIMIT1 130 
#define  HWMON_PACK_LIMIT2 129 
#define  HWMON_PACK_NAME 128 
 int _HWMON_NEW_PACK_ENABLE ; 
 int _HWMON_NEW_PACK_FLAGS ; 
 int _HWMON_NEW_PACK_LIMIT1 ; 
 int _HWMON_NEW_PACK_LIMIT2 ; 
 int _HWMON_NEW_PACK_NAME ; 
 int _HWMON_OLD_PACK_ENABLE ; 
 int _HWMON_OLD_PACK_FLAGS ; 
 int _HWMON_OLD_PACK_LIMIT1 ; 
 int _HWMON_OLD_PACK_LIMIT2 ; 
 int _HWMON_OLD_PACK_NAME ; 

__attribute__((used)) static union acpi_object *atk_get_pack_member(struct atk_data *data,
						union acpi_object *pack,
						enum atk_pack_member m)
{
	bool old_if = data->old_interface;
	int offset;

	switch (m) {
	case HWMON_PACK_FLAGS:
		offset = old_if ? _HWMON_OLD_PACK_FLAGS : _HWMON_NEW_PACK_FLAGS;
		break;
	case HWMON_PACK_NAME:
		offset = old_if ? _HWMON_OLD_PACK_NAME : _HWMON_NEW_PACK_NAME;
		break;
	case HWMON_PACK_LIMIT1:
		offset = old_if ? _HWMON_OLD_PACK_LIMIT1 :
				  _HWMON_NEW_PACK_LIMIT1;
		break;
	case HWMON_PACK_LIMIT2:
		offset = old_if ? _HWMON_OLD_PACK_LIMIT2 :
				  _HWMON_NEW_PACK_LIMIT2;
		break;
	case HWMON_PACK_ENABLE:
		offset = old_if ? _HWMON_OLD_PACK_ENABLE :
				  _HWMON_NEW_PACK_ENABLE;
		break;
	default:
		return NULL;
	}

	return &pack->package.elements[offset];
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
          enum atk_pack_member m = 0;
          int _len_data0 = 1;
          struct atk_data * data = (struct atk_data *) malloc(_len_data0*sizeof(struct atk_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].old_interface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pack0 = 1;
          union acpi_object * pack = (union acpi_object *) malloc(_len_pack0*sizeof(union acpi_object));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
            pack[_i0] = 0;
          }
          union acpi_object * benchRet = atk_get_pack_member(data,pack,m);
          free(data);
          free(pack);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum atk_pack_member m = 0;
          int _len_data0 = 65025;
          struct atk_data * data = (struct atk_data *) malloc(_len_data0*sizeof(struct atk_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].old_interface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pack0 = 65025;
          union acpi_object * pack = (union acpi_object *) malloc(_len_pack0*sizeof(union acpi_object));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
            pack[_i0] = 0;
          }
          union acpi_object * benchRet = atk_get_pack_member(data,pack,m);
          free(data);
          free(pack);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum atk_pack_member m = 0;
          int _len_data0 = 100;
          struct atk_data * data = (struct atk_data *) malloc(_len_data0*sizeof(struct atk_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].old_interface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pack0 = 100;
          union acpi_object * pack = (union acpi_object *) malloc(_len_pack0*sizeof(union acpi_object));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
            pack[_i0] = 0;
          }
          union acpi_object * benchRet = atk_get_pack_member(data,pack,m);
          free(data);
          free(pack);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
