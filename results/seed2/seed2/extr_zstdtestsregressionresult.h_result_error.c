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
struct TYPE_3__ {int /*<<< orphan*/  internal_error; } ;
typedef  TYPE_1__ result_t ;
typedef  int /*<<< orphan*/  result_error_t ;

/* Variables and functions */

__attribute__((used)) static result_t result_error(result_error_t error) {
    result_t result = {
        .internal_error = error,
    };
    return result;
}