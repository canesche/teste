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
typedef  scalar_t__* felem ;

/* Variables and functions */
 scalar_t__* zero105 ; 

__attribute__((used)) static void felem_diff(felem out, const felem in)
{
    /*
     * In order to prevent underflow, we add 0 mod p before subtracting.
     */
    out[0] += zero105[0];
    out[1] += zero105[1];
    out[2] += zero105[2];
    out[3] += zero105[3];

    out[0] -= in[0];
    out[1] -= in[1];
    out[2] -= in[2];
    out[3] -= in[3];
}