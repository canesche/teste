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
typedef  size_t uint8_t ;
struct TYPE_2__ {int /*<<< orphan*/  pin; int /*<<< orphan*/  GPIOx; } ;

/* Variables and functions */
 size_t DEBUGPIN_NUM ; 
 int /*<<< orphan*/  GPIO_SetBits (int /*<<< orphan*/ ,int /*<<< orphan*/ ) ; 
 int /*<<< orphan*/  assert (int) ; 
 TYPE_1__* pins_debug ; 

inline void DEBUGPIN_High(uint8_t index) {
    assert(index < DEBUGPIN_NUM);
    GPIO_SetBits(pins_debug[index].GPIOx, pins_debug[index].pin);
}