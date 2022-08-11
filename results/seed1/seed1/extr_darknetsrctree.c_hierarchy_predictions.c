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
struct TYPE_3__ {int* parent; int /*<<< orphan*/ * leaf; } ;
typedef  TYPE_1__ tree ;

/* Variables and functions */

void hierarchy_predictions(float *predictions, int n, tree *hier, int only_leaves, int stride)
{
    int j;
    for(j = 0; j < n; ++j){
        int parent = hier->parent[j];
        if(parent >= 0){
            predictions[j*stride] *= predictions[parent*stride]; 
        }
    }
    if(only_leaves){
        for(j = 0; j < n; ++j){
            if(!hier->leaf[j]) predictions[j*stride] = 0;
        }
    }
}