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
typedef  char uint8_t ;
typedef  int uint16_t ;

/* Variables and functions */

uint16_t TEXT_deleteWhiteSpace(uint8_t *buf, uint16_t len) {
	int whiteSpaceCount=0;
	int i;
	// remove all whitespace
	for(i = 0; i < len; i++) {
		if(buf[i] == ' ' || buf[i] == '\t' || buf[i] == '\r' || buf[i] == '\n')
			whiteSpaceCount++;
		else
			buf[i-whiteSpaceCount] = buf[i];
	}
	return whiteSpaceCount;
}