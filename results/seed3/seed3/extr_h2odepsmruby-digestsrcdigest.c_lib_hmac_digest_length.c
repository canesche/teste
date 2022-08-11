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
struct TYPE_2__ {int digest_length; } ;
struct mrb_hmac {TYPE_1__ ctx; } ;

/* Variables and functions */

__attribute__((used)) static int
lib_hmac_digest_length(const struct mrb_hmac *hmac)
{
  return hmac->ctx.digest_length;
}