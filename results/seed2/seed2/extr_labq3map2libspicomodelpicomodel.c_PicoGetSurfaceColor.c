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
struct TYPE_3__ {int numColorArrays; int numVertexes; int /*<<< orphan*/ *** color; } ;
typedef  TYPE_1__ picoSurface_t ;
typedef  int /*<<< orphan*/  picoByte_t ;

/* Variables and functions */

picoByte_t *PicoGetSurfaceColor( picoSurface_t *surface, int array, int num ){
	if ( surface == NULL || array < 0 || array > surface->numColorArrays || num < 0 || num > surface->numVertexes ) {
		return NULL;
	}
	return surface->color[ array ][ num ];
}