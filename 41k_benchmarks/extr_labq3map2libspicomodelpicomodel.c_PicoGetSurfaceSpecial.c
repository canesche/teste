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
struct TYPE_3__ {int* special; } ;
typedef  TYPE_1__ picoSurface_t ;

/* Variables and functions */
 int PICO_MAX_SPECIAL ; 

int PicoGetSurfaceSpecial( picoSurface_t *surface, int num ){
	if ( surface == NULL || num < 0 || num >= PICO_MAX_SPECIAL ) {
		return 0;
	}
	return surface->special[ num ];
}