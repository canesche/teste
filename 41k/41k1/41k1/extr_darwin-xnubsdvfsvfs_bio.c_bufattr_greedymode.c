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
typedef  TYPE_1__* bufattr_t ;
struct TYPE_3__ {int ba_flags; } ;

/* Variables and functions */
 int BA_GREEDY_MODE ; 

int
bufattr_greedymode(bufattr_t bap) {
    if ( (bap->ba_flags & BA_GREEDY_MODE) )
        return 1;
    return 0;
}