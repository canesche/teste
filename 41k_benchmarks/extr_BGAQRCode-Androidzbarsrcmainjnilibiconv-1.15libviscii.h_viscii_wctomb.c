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
typedef  int ucs4_t ;
typedef  int /*<<< orphan*/  conv_t ;

/* Variables and functions */
 int RET_ILUNI ; 
 unsigned char* viscii_page00 ; 
 unsigned char* viscii_page1e ; 

__attribute__((used)) static int
viscii_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  unsigned char c = 0;
  if (wc < 0x0080 && (wc >= 0x0020 || (0x42100064 & (1 << wc)) == 0)) {
    *r = wc;
    return 1;
  }
  else if (wc >= 0x00c0 && wc < 0x01b8)
    c = viscii_page00[wc-0x00c0];
  else if (wc >= 0x1ea0 && wc < 0x1f00)
    c = viscii_page1e[wc-0x1ea0];
  if (c != 0) {
    *r = c;
    return 1;
  }
  return RET_ILUNI;
}