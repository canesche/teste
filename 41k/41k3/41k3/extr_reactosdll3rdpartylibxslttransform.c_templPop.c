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
typedef  TYPE_1__* xsltTransformContextPtr ;
typedef  scalar_t__ xsltTemplatePtr ;
struct TYPE_3__ {int templNr; scalar_t__* templTab; scalar_t__ templ; } ;

/* Variables and functions */

__attribute__((used)) static xsltTemplatePtr
templPop(xsltTransformContextPtr ctxt)
{
    xsltTemplatePtr ret;

    if (ctxt->templNr <= 0)
        return (0);
    ctxt->templNr--;
    if (ctxt->templNr > 0)
        ctxt->templ = ctxt->templTab[ctxt->templNr - 1];
    else
        ctxt->templ = (xsltTemplatePtr) 0;
    ret = ctxt->templTab[ctxt->templNr];
    ctxt->templTab[ctxt->templNr] = 0;
    return (ret);
}