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
typedef  TYPE_1__* XMLRPC_VALUE ;
struct TYPE_3__ {scalar_t__ type; int i; } ;

/* Variables and functions */
 scalar_t__ xmlrpc_int ; 

int XMLRPC_GetValueInt(XMLRPC_VALUE value) {
    return ((value && value->type == xmlrpc_int) ? value->i : 0);
}