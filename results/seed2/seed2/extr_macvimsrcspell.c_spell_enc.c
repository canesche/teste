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
typedef  int /*<<< orphan*/  char_u ;

/* Variables and functions */

__attribute__((used)) static char_u *
spell_enc()
{

#ifdef FEAT_MBYTE
    if (STRLEN(p_enc) < 60 && STRCMP(p_enc, "iso-8859-15") != 0)
	return p_enc;
#endif
    return (char_u *)"latin1";
}