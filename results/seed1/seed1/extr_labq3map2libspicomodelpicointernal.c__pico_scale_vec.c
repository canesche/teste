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
typedef  float* picoVec3_t ;

/* Variables and functions */

void _pico_scale_vec( picoVec3_t v, float scale, picoVec3_t dest ){
	dest[ 0 ] = v[ 0 ] * scale;
	dest[ 1 ] = v[ 1 ] * scale;
	dest[ 2 ] = v[ 2 ] * scale;
}