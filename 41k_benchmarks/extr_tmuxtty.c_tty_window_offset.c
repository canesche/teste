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
typedef  int /*<<< orphan*/  u_int ;
struct tty {int oflag; int /*<<< orphan*/  osy; int /*<<< orphan*/  osx; int /*<<< orphan*/  ooy; int /*<<< orphan*/  oox; } ;

/* Variables and functions */

int
tty_window_offset(struct tty *tty, u_int *ox, u_int *oy, u_int *sx, u_int *sy)
{
	*ox = tty->oox;
	*oy = tty->ooy;
	*sx = tty->osx;
	*sy = tty->osy;

	return (tty->oflag);
}