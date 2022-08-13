#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int RIR; } ;
typedef  TYPE_1__ CAN_FIFOMailBox_TypeDef ;

/* Variables and functions */
 int hyundai_camera_bus ; 
 scalar_t__ hyundai_giraffe_switch_2 ; 

__attribute__((used)) static int hyundai_fwd_hook(int bus_num, CAN_FIFOMailBox_TypeDef *to_fwd) {
  // forward cam to ccan and viceversa, except lkas cmd
  if ((bus_num == 0 || bus_num == hyundai_camera_bus) && hyundai_giraffe_switch_2) {

    if ((to_fwd->RIR>>21) == 832 && bus_num == hyundai_camera_bus) return -1;
    if (bus_num == 0) return hyundai_camera_bus;
    if (bus_num == hyundai_camera_bus) return 0;
  }
  return -1;
}