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
typedef  int WK_word ;

/* Variables and functions */

__attribute__((used)) static WK_word*
WK_pack_2bits(WK_word* source_buf,
              WK_word* source_end,
	      WK_word* dest_buf) {

   WK_word* src_next = source_buf;
   WK_word* dest_next = dest_buf;
  
   while (src_next < source_end) {
      WK_word temp = src_next[0];
      temp |= (src_next[1] << 2);
      temp |= (src_next[2] << 4);
      temp |= (src_next[3] << 6);
    
      dest_next[0] = temp;
      dest_next++;     
      src_next += 4;
   }
  
   return dest_next;

}