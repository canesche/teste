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
typedef  int /*<<< orphan*/  JAVA_INT ;
typedef  int /*<<< orphan*/  JAVA_FLOAT ;

/* Variables and functions */

JAVA_INT java_lang_Float_floatToRawIntBits___float(JAVA_FLOAT n1)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Float_floatToRawIntBits___float]
    union {
        JAVA_FLOAT f;
        JAVA_INT   i;
    } u;
    
    u.f = n1;
    return u.i;
    //XMLVM_END_NATIVE
}