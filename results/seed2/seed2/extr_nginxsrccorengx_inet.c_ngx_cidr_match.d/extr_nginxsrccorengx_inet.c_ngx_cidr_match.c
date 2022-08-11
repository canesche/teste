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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct sockaddr {size_t sa_family; } ;
typedef  size_t ngx_uint_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_7__ {int mask; int addr; } ;
struct TYPE_8__ {TYPE_1__ in; } ;
struct TYPE_10__ {size_t family; TYPE_2__ u; } ;
typedef  TYPE_4__ ngx_cidr_t ;
struct TYPE_11__ {size_t nelts; TYPE_4__* elts; } ;
typedef  TYPE_5__ ngx_array_t ;
typedef  int in_addr_t ;

/* Variables and functions */
 size_t AF_INET ; 
 int /*<<< orphan*/  NGX_DECLINED ; 
 int /*<<< orphan*/  NGX_OK ; 

ngx_int_t
ngx_cidr_match(struct sockaddr *sa, ngx_array_t *cidrs)
{
#if (NGX_HAVE_INET6)
    u_char           *p;
#endif
    in_addr_t         inaddr;
    ngx_cidr_t       *cidr;
    ngx_uint_t        family, i;
#if (NGX_HAVE_INET6)
    ngx_uint_t        n;
    struct in6_addr  *inaddr6;
#endif

#if (NGX_SUPPRESS_WARN)
    inaddr = 0;
#if (NGX_HAVE_INET6)
    inaddr6 = NULL;
#endif
#endif

    family = sa->sa_family;

    if (family == AF_INET) {
        inaddr = ((struct sockaddr_in *) sa)->sin_addr.s_addr;
    }

#if (NGX_HAVE_INET6)
    else if (family == AF_INET6) {
        inaddr6 = &((struct sockaddr_in6 *) sa)->sin6_addr;

        if (IN6_IS_ADDR_V4MAPPED(inaddr6)) {
            family = AF_INET;

            p = inaddr6->s6_addr;

            inaddr = p[12] << 24;
            inaddr += p[13] << 16;
            inaddr += p[14] << 8;
            inaddr += p[15];

            inaddr = htonl(inaddr);
        }
    }
#endif

    for (cidr = cidrs->elts, i = 0; i < cidrs->nelts; i++) {
        if (cidr[i].family != family) {
            goto next;
        }

        switch (family) {

#if (NGX_HAVE_INET6)
        case AF_INET6:
            for (n = 0; n < 16; n++) {
                if ((inaddr6->s6_addr[n] & cidr[i].u.in6.mask.s6_addr[n])
                    != cidr[i].u.in6.addr.s6_addr[n])
                {
                    goto next;
                }
            }
            break;
#endif

#if (NGX_HAVE_UNIX_DOMAIN)
        case AF_UNIX:
            break;
#endif

        default: /* AF_INET */
            if ((inaddr & cidr[i].u.in.mask) != cidr[i].u.in.addr) {
                goto next;
            }
            break;
        }

        return NGX_OK;

    next:
        continue;
    }

    return NGX_DECLINED;
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
          int _len_sa0 = 1;
          struct sockaddr * sa = (struct sockaddr *) malloc(_len_sa0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_sa0; _i0++) {
            sa[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cidrs0 = 1;
          struct TYPE_11__ * cidrs = (struct TYPE_11__ *) malloc(_len_cidrs0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_cidrs0; _i0++) {
            cidrs[_i0].nelts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cidrs__i0__elts0 = 1;
          cidrs[_i0].elts = (struct TYPE_10__ *) malloc(_len_cidrs__i0__elts0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_cidrs__i0__elts0; _j0++) {
            cidrs[_i0].elts->family = ((-2 * (next_i()%2)) + 1) * next_i();
        cidrs[_i0].elts->u.in.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        cidrs[_i0].elts->u.in.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_cidr_match(sa,cidrs);
          printf("%d\n", benchRet); 
          free(sa);
          for(int _aux = 0; _aux < _len_cidrs0; _aux++) {
          free(cidrs[_aux].elts);
          }
          free(cidrs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sa0 = 65025;
          struct sockaddr * sa = (struct sockaddr *) malloc(_len_sa0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_sa0; _i0++) {
            sa[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cidrs0 = 65025;
          struct TYPE_11__ * cidrs = (struct TYPE_11__ *) malloc(_len_cidrs0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_cidrs0; _i0++) {
            cidrs[_i0].nelts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cidrs__i0__elts0 = 1;
          cidrs[_i0].elts = (struct TYPE_10__ *) malloc(_len_cidrs__i0__elts0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_cidrs__i0__elts0; _j0++) {
            cidrs[_i0].elts->family = ((-2 * (next_i()%2)) + 1) * next_i();
        cidrs[_i0].elts->u.in.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        cidrs[_i0].elts->u.in.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_cidr_match(sa,cidrs);
          printf("%d\n", benchRet); 
          free(sa);
          for(int _aux = 0; _aux < _len_cidrs0; _aux++) {
          free(cidrs[_aux].elts);
          }
          free(cidrs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sa0 = 100;
          struct sockaddr * sa = (struct sockaddr *) malloc(_len_sa0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_sa0; _i0++) {
            sa[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cidrs0 = 100;
          struct TYPE_11__ * cidrs = (struct TYPE_11__ *) malloc(_len_cidrs0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_cidrs0; _i0++) {
            cidrs[_i0].nelts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cidrs__i0__elts0 = 1;
          cidrs[_i0].elts = (struct TYPE_10__ *) malloc(_len_cidrs__i0__elts0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_cidrs__i0__elts0; _j0++) {
            cidrs[_i0].elts->family = ((-2 * (next_i()%2)) + 1) * next_i();
        cidrs[_i0].elts->u.in.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        cidrs[_i0].elts->u.in.addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_cidr_match(sa,cidrs);
          printf("%d\n", benchRet); 
          free(sa);
          for(int _aux = 0; _aux < _len_cidrs0; _aux++) {
          free(cidrs[_aux].elts);
          }
          free(cidrs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
