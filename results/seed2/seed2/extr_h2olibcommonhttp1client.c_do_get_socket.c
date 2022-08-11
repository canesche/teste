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
struct st_h2o_http1client_t {int /*<<< orphan*/ * sock; } ;
typedef  int /*<<< orphan*/  h2o_socket_t ;
typedef  int /*<<< orphan*/  h2o_httpclient_t ;

/* Variables and functions */

__attribute__((used)) static h2o_socket_t *do_get_socket(h2o_httpclient_t *_client)
{
    struct st_h2o_http1client_t *client = (void *)_client;
    return client->sock;
}