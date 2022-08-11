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
typedef  int int8_t ;

/* Variables and functions */

__attribute__((used)) static void map_idx_20_to_34(int8_t *par_mapped, const int8_t *par, int full)
{
    if (full) {
        par_mapped[33] =  par[19];
        par_mapped[32] =  par[19];
        par_mapped[31] =  par[18];
        par_mapped[30] =  par[18];
        par_mapped[29] =  par[18];
        par_mapped[28] =  par[18];
        par_mapped[27] =  par[17];
        par_mapped[26] =  par[17];
        par_mapped[25] =  par[16];
        par_mapped[24] =  par[16];
        par_mapped[23] =  par[15];
        par_mapped[22] =  par[15];
        par_mapped[21] =  par[14];
        par_mapped[20] =  par[14];
        par_mapped[19] =  par[13];
        par_mapped[18] =  par[12];
        par_mapped[17] =  par[11];
    }
    par_mapped[16] =  par[10];
    par_mapped[15] =  par[ 9];
    par_mapped[14] =  par[ 9];
    par_mapped[13] =  par[ 8];
    par_mapped[12] =  par[ 8];
    par_mapped[11] =  par[ 7];
    par_mapped[10] =  par[ 6];
    par_mapped[ 9] =  par[ 5];
    par_mapped[ 8] =  par[ 5];
    par_mapped[ 7] =  par[ 4];
    par_mapped[ 6] =  par[ 4];
    par_mapped[ 5] =  par[ 3];
    par_mapped[ 4] = (par[ 2] + par[ 3]) / 2;
    par_mapped[ 3] =  par[ 2];
    par_mapped[ 2] =  par[ 1];
    par_mapped[ 1] = (par[ 0] + par[ 1]) / 2;
    par_mapped[ 0] =  par[ 0];
}