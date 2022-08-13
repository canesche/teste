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
typedef  int ut8 ;
typedef  int ut32 ;

/* Variables and functions */
 int RAsmLm32RegWMask ; 
 int RAsmLm32RegWShift ; 

__attribute__((used)) static ut8 extract_reg_w(ut32 instr_dword) {
	return (instr_dword & RAsmLm32RegWMask) >> RAsmLm32RegWShift;
}