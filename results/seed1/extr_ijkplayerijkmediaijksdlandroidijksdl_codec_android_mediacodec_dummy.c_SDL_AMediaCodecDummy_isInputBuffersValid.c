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
struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int /*<<< orphan*/  request_stop; } ;
typedef  TYPE_2__ SDL_AMediaCodec ;

/* Variables and functions */

__attribute__((used)) static bool SDL_AMediaCodecDummy_isInputBuffersValid(SDL_AMediaCodec* acodec)
{
    return !acodec->opaque->request_stop;
}