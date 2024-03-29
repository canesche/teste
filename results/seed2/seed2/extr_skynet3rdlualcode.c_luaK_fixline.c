#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int pc; TYPE_2__* f; } ;
struct TYPE_6__ {TYPE_1__* sp; } ;
struct TYPE_5__ {int* lineinfo; } ;
typedef  TYPE_3__ FuncState ;

/* Variables and functions */

void luaK_fixline (FuncState *fs, int line) {
  fs->f->sp->lineinfo[fs->pc - 1] = line;
}