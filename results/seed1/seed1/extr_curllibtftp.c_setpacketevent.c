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
struct TYPE_3__ {unsigned char* data; } ;
typedef  TYPE_1__ tftp_packet_t ;

/* Variables and functions */

__attribute__((used)) static void setpacketevent(tftp_packet_t *packet, unsigned short num)
{
  packet->data[0] = (unsigned char)(num >> 8);
  packet->data[1] = (unsigned char)(num & 0xff);
}