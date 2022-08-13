#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  serialNumber; } ;
struct TYPE_5__ {TYPE_1__ cert_info; } ;
typedef  TYPE_2__ X509 ;
typedef  int /*<<< orphan*/  ASN1_INTEGER ;

/* Variables and functions */

ASN1_INTEGER *X509_get_serialNumber(X509 *a)
{
    return &a->cert_info.serialNumber;
}