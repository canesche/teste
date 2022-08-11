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
struct msg {int type; } ;

/* Variables and functions */
#define  MSG_REQ_REDIS_PING 129 
#define  MSG_REQ_REDIS_QUIT 128 

__attribute__((used)) static bool
redis_argz(struct msg *r)
{
    switch (r->type) {
    case MSG_REQ_REDIS_PING:
    case MSG_REQ_REDIS_QUIT:
        return true;

    default:
        break;
    }

    return false;
}