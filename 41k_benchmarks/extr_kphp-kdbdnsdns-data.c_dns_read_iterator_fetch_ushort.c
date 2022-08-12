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
struct TYPE_3__ {int avail_in; scalar_t__* rptr; } ;
typedef  TYPE_1__ dns_read_iterator_t ;

/* Variables and functions */

__attribute__((used)) static int dns_read_iterator_fetch_ushort (dns_read_iterator_t *B, unsigned short *res) {
  if (B->avail_in < 2) {
    return -1;
  }
  *res = (((int) B->rptr[0]) << 8) + (int) B->rptr[1];
  B->avail_in -= 2;
  B->rptr += 2;
  return 0;
}