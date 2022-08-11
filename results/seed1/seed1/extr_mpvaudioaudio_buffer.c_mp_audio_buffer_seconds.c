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
struct mp_audio_buffer {double num_samples; scalar_t__ srate; } ;

/* Variables and functions */

double mp_audio_buffer_seconds(struct mp_audio_buffer *ab)
{
    return ab->num_samples / (double)ab->srate;
}