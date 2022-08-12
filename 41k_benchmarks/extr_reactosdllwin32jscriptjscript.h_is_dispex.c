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
struct TYPE_3__ {int flags; } ;
typedef  TYPE_1__ vdisp_t ;
typedef  int BOOL ;

/* Variables and functions */
 int VDISP_DISPEX ; 

__attribute__((used)) static inline BOOL is_dispex(vdisp_t *vdisp)
{
    return (vdisp->flags & VDISP_DISPEX) != 0;
}