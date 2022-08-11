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
ngx_parse_unix_domain_url(ngx_pool_t *pool, ngx_url_t *u)
{
#if (NGX_HAVE_UNIX_DOMAIN)
    u_char              *path, *uri, *last;
    size_t               len;
    struct sockaddr_un  *saun;

    len = u->url.len;
    path = u->url.data;

    path += 5;
    len -= 5;

    if (u->uri_part) {

        last = path + len;
        uri = ngx_strlchr(path, last, ':');

        if (uri) {
            len = uri - path;
            uri++;
            u->uri.len = last - uri;
            u->uri.data = uri;
        }
    }

    if (len == 0) {
        u->err = "no path in the unix domain socket";
        return NGX_ERROR;
    }

    u->host.len = len++;
    u->host.data = path;

    if (len > sizeof(saun->sun_path)) {
        u->err = "too long path in the unix domain socket";
        return NGX_ERROR;
    }

    u->socklen = sizeof(struct sockaddr_un);
    saun = (struct sockaddr_un *) &u->sockaddr;
    saun->sun_family = AF_UNIX;
    (void) ngx_cpystrn((u_char *) saun->sun_path, path, len);

    u->addrs = ngx_pcalloc(pool, sizeof(ngx_addr_t));
    if (u->addrs == NULL) {
        return NGX_ERROR;
    }

    saun = ngx_pcalloc(pool, sizeof(struct sockaddr_un));
    if (saun == NULL) {
        return NGX_ERROR;
    }

    u->family = AF_UNIX;
    u->naddrs = 1;

    saun->sun_family = AF_UNIX;
    (void) ngx_cpystrn((u_char *) saun->sun_path, path, len);

    u->addrs[0].sockaddr = (struct sockaddr *) saun;
    u->addrs[0].socklen = sizeof(struct sockaddr_un);
    u->addrs[0].name.len = len + 4;
    u->addrs[0].name.data = u->url.data;

    return NGX_OK;

#else

    u->err = "the unix domain sockets are not supported on this platform";

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
          int benchRet = ngx_parse_unix_domain_url(pool,u);
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
          int benchRet = ngx_parse_unix_domain_url(pool,u);
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
          int benchRet = ngx_parse_unix_domain_url(pool,u);
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
