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
typedef  size_t mxwriter_prop ;
struct TYPE_3__ {int /*<<< orphan*/ * props; } ;
typedef  TYPE_1__ mxwriter ;
typedef  int /*<<< orphan*/  VARIANT_BOOL ;
typedef  int /*<<< orphan*/  HRESULT ;

/* Variables and functions */
 int /*<<< orphan*/  E_POINTER ; 
 int /*<<< orphan*/  S_OK ; 

__attribute__((used)) static HRESULT writer_get_property(const mxwriter *writer, mxwriter_prop property, VARIANT_BOOL *value)
{
    if (!value) return E_POINTER;
    *value = writer->props[property];
    return S_OK;
}