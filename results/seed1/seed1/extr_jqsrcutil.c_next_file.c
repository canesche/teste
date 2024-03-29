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
struct TYPE_3__ {scalar_t__ curr_file; scalar_t__ nfiles; char const** files; } ;
typedef  TYPE_1__ jq_util_input_state ;

/* Variables and functions */

__attribute__((used)) static const char *next_file(jq_util_input_state *state) {
  if (state->curr_file < state->nfiles)
    return state->files[state->curr_file++];
  return NULL;
}