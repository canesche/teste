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
typedef  int byte ;

/* Variables and functions */
 int bloc ; 

void	Huff_putBit( int bit, byte *fout, int *offset) {
	bloc = *offset;
	if ((bloc&7) == 0) {
		fout[(bloc>>3)] = 0;
	}
	fout[(bloc>>3)] |= bit << (bloc&7);
	bloc++;
	*offset = bloc;
}