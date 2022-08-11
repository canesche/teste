#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {float* xyz; float* st; float* lightmap; int* color; } ;
typedef  TYPE_1__ srfVert_t ;

/* Variables and functions */

__attribute__((used)) static void LerpDrawVert( srfVert_t *a, srfVert_t *b, srfVert_t *out ) {
	out->xyz[0] = 0.5f * (a->xyz[0] + b->xyz[0]);
	out->xyz[1] = 0.5f * (a->xyz[1] + b->xyz[1]);
	out->xyz[2] = 0.5f * (a->xyz[2] + b->xyz[2]);

	out->st[0] = 0.5f * (a->st[0] + b->st[0]);
	out->st[1] = 0.5f * (a->st[1] + b->st[1]);

	out->lightmap[0] = 0.5f * (a->lightmap[0] + b->lightmap[0]);
	out->lightmap[1] = 0.5f * (a->lightmap[1] + b->lightmap[1]);

	out->color[0] = ((int)a->color[0] + (int)b->color[0]) >> 1;
	out->color[1] = ((int)a->color[1] + (int)b->color[1]) >> 1;
	out->color[2] = ((int)a->color[2] + (int)b->color[2]) >> 1;
	out->color[3] = ((int)a->color[3] + (int)b->color[3]) >> 1;
}