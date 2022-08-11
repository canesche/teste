// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

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
struct TYPE_3__ {char* err; } ;
typedef  TYPE_1__ ngx_url_t ;
typedef  int /*<<< orphan*/  ngx_pool_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_ERROR ; 

__attribute__((used)) static ngx_int_t
ngx_parse_inet6_url(ngx_pool_t *pool, ngx_url_t *u)
{
#if (NGX_HAVE_INET6)
    u_char               *p, *host, *port, *last, *uri, *dash;
    size_t                len;
    ngx_int_t             n;
    struct sockaddr_in6  *sin6;

    u->socklen = sizeof(struct sockaddr_in6);
    sin6 = (struct sockaddr_in6 *) &u->sockaddr;
    sin6->sin6_family = AF_INET6;

    host = u->url.data + 1;

    last = u->url.data + u->url.len;

    p = ngx_strlchr(host, last, ']');

    if (p == NULL) {
        u->err = "invalid host";
        return NGX_ERROR;
    }

    port = p + 1;

    uri = ngx_strlchr(port, last, '/');

    if (uri) {
        if (u->listen || !u->uri_part) {
            u->err = "invalid host";
            return NGX_ERROR;
        }

        u->uri.len = last - uri;
        u->uri.data = uri;

        last = uri;
    }

    if (port < last) {
        if (*port != ':') {
            u->err = "invalid host";
            return NGX_ERROR;
        }

        port++;

        len = last - port;

        if (u->listen) {
            dash = ngx_strlchr(port, last, '-');

            if (dash) {
                dash++;

                n = ngx_atoi(dash, last - dash);

                if (n < 1 || n > 65535) {
                    u->err = "invalid port";
                    return NGX_ERROR;
                }

                u->last_port = (in_port_t) n;

                len = dash - port - 1;
            }
        }

        n = ngx_atoi(port, len);

        if (n < 1 || n > 65535) {
            u->err = "invalid port";
            return NGX_ERROR;
        }

        if (u->last_port && n > u->last_port) {
            u->err = "invalid port range";
            return NGX_ERROR;
        }

        u->port = (in_port_t) n;
        sin6->sin6_port = htons((in_port_t) n);

        u->port_text.len = last - port;
        u->port_text.data = port;

    } else {
        u->no_port = 1;
        u->port = u->default_port;
        sin6->sin6_port = htons(u->default_port);
    }

    len = p - host;

    if (len == 0) {
        u->err = "no host";
        return NGX_ERROR;
    }

    u->host.len = len + 2;
    u->host.data = host - 1;

    if (ngx_inet6_addr(host, len, sin6->sin6_addr.s6_addr) != NGX_OK) {
        u->err = "invalid IPv6 address";
        return NGX_ERROR;
    }

    if (IN6_IS_ADDR_UNSPECIFIED(&sin6->sin6_addr)) {
        u->wildcard = 1;
    }

    u->family = AF_INET6;

    return ngx_inet_add_addr(pool, u, &u->sockaddr.sockaddr, u->socklen, 1);

#else

    u->err = "the INET6 sockets are not supported on this platform";

    return NGX_ERROR;

#endif
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int _len_pool0 = 1;
          int * pool = (int *) malloc(_len_pool0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 1;
          struct TYPE_3__ * u = (struct TYPE_3__ *) malloc(_len_u0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
              int _len_u__i0__err0 = 1;
          u[_i0].err = (char *) malloc(_len_u__i0__err0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_u__i0__err0; _j0++) {
            u[_i0].err[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_parse_inet6_url(pool,u);
          printf("%d\n", benchRet); 
          free(pool);
          for(int _aux = 0; _aux < _len_u0; _aux++) {
          free(u[_aux].err);
          }
          free(u);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pool0 = 65025;
          int * pool = (int *) malloc(_len_pool0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 65025;
          struct TYPE_3__ * u = (struct TYPE_3__ *) malloc(_len_u0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
              int _len_u__i0__err0 = 1;
          u[_i0].err = (char *) malloc(_len_u__i0__err0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_u__i0__err0; _j0++) {
            u[_i0].err[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_parse_inet6_url(pool,u);
          printf("%d\n", benchRet); 
          free(pool);
          for(int _aux = 0; _aux < _len_u0; _aux++) {
          free(u[_aux].err);
          }
          free(u);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pool0 = 100;
          int * pool = (int *) malloc(_len_pool0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 100;
          struct TYPE_3__ * u = (struct TYPE_3__ *) malloc(_len_u0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
              int _len_u__i0__err0 = 1;
          u[_i0].err = (char *) malloc(_len_u__i0__err0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_u__i0__err0; _j0++) {
            u[_i0].err[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_parse_inet6_url(pool,u);
          printf("%d\n", benchRet); 
          free(pool);
          for(int _aux = 0; _aux < _len_u0; _aux++) {
          free(u[_aux].err);
          }
          free(u);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
