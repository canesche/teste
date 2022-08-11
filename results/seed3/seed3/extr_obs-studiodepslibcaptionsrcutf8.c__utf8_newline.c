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
typedef  char utf8_char_t ;

/* Variables and functions */

size_t _utf8_newline(const utf8_char_t* data)
{
    if ('\r' == data[0]) {
        return '\n' == data[1] ? 2 : 1; // windows/unix
    } else if ('\n' == data[0]) {
        return '\r' == data[1] ? 2 : 1; // riscos/macos
    } else {
        return 0;
    }
}