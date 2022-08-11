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
struct TYPE_3__ {int numleafbrushes; int firstleafbrush; } ;
typedef  TYPE_1__ sin_dleaf_t ;

/* Variables and functions */
 int* brushmodelnumbers ; 
 int* dbrushleafnums ; 
 int* sin_dleafbrushes ; 
 TYPE_1__* sin_dleafs ; 

void Sin_SetLeafBrushesModelNumbers(int leafnum, int modelnum)
{
	int i, brushnum;
	sin_dleaf_t *leaf;

	leaf = &sin_dleafs[leafnum];
	for (i = 0; i < leaf->numleafbrushes; i++)
	{
		brushnum = sin_dleafbrushes[leaf->firstleafbrush + i];
		brushmodelnumbers[brushnum] = modelnum;
		dbrushleafnums[brushnum] = leafnum;
	} //end for
}