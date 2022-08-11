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
struct TYPE_2__ {double i; double l; double d; } ;
struct tl_scheme_object {int type; TYPE_1__ u; } ;

/* Variables and functions */
#define  tlso_double 130 
#define  tlso_int 129 
#define  tlso_long 128 

int tl_scheme_double_value (struct tl_scheme_object *O, double *value) {
  switch (O->type) {
    case tlso_int:
      *value = O->u.i;
      return 0;
    case tlso_long:
      *value = O->u.l;
      return 0;
    case tlso_double:
      *value = O->u.d;
      return 0;
    default:
    break;
  }
  return -1;
}