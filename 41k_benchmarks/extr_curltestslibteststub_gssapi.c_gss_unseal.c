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
typedef  int /*<<< orphan*/  gss_ctx_id_t ;
typedef  int /*<<< orphan*/  gss_buffer_t ;
typedef  int /*<<< orphan*/  OM_uint32 ;

/* Variables and functions */
 int /*<<< orphan*/  GSS_S_FAILURE ; 

OM_uint32 gss_unseal(OM_uint32 *min,
                     gss_ctx_id_t context_handle,
                     gss_buffer_t input_message_buffer,
                     gss_buffer_t output_message_buffer,
                     int *conf_state,
                     int *qop_state)
{
  (void)min;
  (void)context_handle;
  (void)input_message_buffer;
  (void)output_message_buffer;
  (void)conf_state;
  (void)qop_state;
  return GSS_S_FAILURE;
}