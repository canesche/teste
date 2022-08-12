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
typedef  int ut32 ;
typedef  int st32 ;

/* Variables and functions */

st32 get_hashfunc_80(st32 arg1, st32 arg2) {
	st32 v2; 
	st32 v3; 
	st32 result; 

	v2 = arg2;
	v3 = v2 & 0x18180;
	if ( (ut32)v3 <= 0x8100 ) {
		if (v3 == 33024) {
			return 450;
		}
		if ( (ut32)v3 > 0x180 ) {
			if (v3 == 32768) {
				return 444;
			}
			if (v3 == 32896) {
				return 448;
			}
		} else {
			if (v3 == 384) {
				return 453;
			}
			if (!v3) {
				return 443;
			}
			if (v3 == 128) {
				return 445;
			}
			if (v3 == 256) {
				return 447;
			}
		}
		return arg1;
	}
	if ( (ut32)v3 <= 0x10100 ) {
		if (v3 == 65792) {
			return 455;
		}
		if (v3 == 33152) {
			return 454;
		}
		if (v3 == 65536) {
			return 446;
		}
		if (v3 == 65664) {
			return 449;
		}
		return arg1;
	}
	if ( v3 == 65920 ) {
		result = 452;
	} else {
		if (v3 != 98688) {
			return arg1;
		}
		result = 451;
	}
	return result;
}