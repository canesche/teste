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
typedef  enum video_format { ____Placeholder_video_format } video_format ;

/* Variables and functions */
 int VIDEO_FORMAT_I420 ; 
 int VIDEO_FORMAT_I444 ; 
 int VIDEO_FORMAT_NV12 ; 

__attribute__((used)) static inline bool valid_format(enum video_format format)
{
	return format == VIDEO_FORMAT_I420 ||
	       format == VIDEO_FORMAT_NV12 ||
	       format == VIDEO_FORMAT_I444;
}