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
typedef  scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ free; scalar_t__ size; } ;
typedef  TYPE_1__ FIFO_Data_TypeDef ;

/* Variables and functions */

uint16_t FIFO_available(FIFO_Data_TypeDef *inStruct) {
	return inStruct->size - inStruct->free;
}