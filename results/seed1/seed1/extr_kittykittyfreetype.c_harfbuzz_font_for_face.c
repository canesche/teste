#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  hb_font_t ;
struct TYPE_2__ {int /*<<< orphan*/ * harfbuzz_font; } ;
typedef  int /*<<< orphan*/  PyObject ;
typedef  TYPE_1__ Face ;

/* Variables and functions */

hb_font_t*
harfbuzz_font_for_face(PyObject *self) { return ((Face*)self)->harfbuzz_font; }