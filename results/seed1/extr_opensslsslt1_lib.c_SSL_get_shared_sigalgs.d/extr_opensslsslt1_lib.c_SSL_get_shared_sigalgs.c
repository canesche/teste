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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int hash; int sig; int sigandhash; int sigalg; } ;
struct TYPE_6__ {TYPE_1__* cert; } ;
struct TYPE_5__ {scalar_t__ shared_sigalgslen; TYPE_3__** shared_sigalgs; } ;
typedef  TYPE_2__ SSL ;
typedef  TYPE_3__ SIGALG_LOOKUP ;

/* Variables and functions */
 scalar_t__ INT_MAX ; 

int SSL_get_shared_sigalgs(SSL *s, int idx,
                           int *psign, int *phash, int *psignhash,
                           unsigned char *rsig, unsigned char *rhash)
{
    const SIGALG_LOOKUP *shsigalgs;
    if (s->cert->shared_sigalgs == NULL
        || idx < 0
        || idx >= (int)s->cert->shared_sigalgslen
        || s->cert->shared_sigalgslen > INT_MAX)
        return 0;
    shsigalgs = s->cert->shared_sigalgs[idx];
    if (phash != NULL)
        *phash = shsigalgs->hash;
    if (psign != NULL)
        *psign = shsigalgs->sig;
    if (psignhash != NULL)
        *psignhash = shsigalgs->sigandhash;
    if (rsig != NULL)
        *rsig = (unsigned char)(shsigalgs->sigalg & 0xff);
    if (rhash != NULL)
        *rhash = (unsigned char)((shsigalgs->sigalg >> 8) & 0xff);
    return (int)s->cert->shared_sigalgslen;
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
          int idx = 100;
          int _len_s0 = 1;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__cert0 = 1;
          s[_i0].cert = (struct TYPE_5__ *) malloc(_len_s__i0__cert0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__cert0; _j0++) {
            s[_i0].cert->shared_sigalgslen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cert_shared_sigalgs0 = 1;
          s[_i0].cert->shared_sigalgs = (struct TYPE_7__ **) malloc(_len_s__i0__cert_shared_sigalgs0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__cert_shared_sigalgs0; _j0++) {
            int _len_s__i0__cert_shared_sigalgs1 = 1;
            s[_i0].cert->shared_sigalgs[_j0] = (struct TYPE_7__ *) malloc(_len_s__i0__cert_shared_sigalgs1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_s__i0__cert_shared_sigalgs1; _j1++) {
              s[_i0].cert->shared_sigalgs[_j0]->hash = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cert->shared_sigalgs[_j0]->sig = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cert->shared_sigalgs[_j0]->sigandhash = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cert->shared_sigalgs[_j0]->sigalg = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_psign0 = 1;
          int * psign = (int *) malloc(_len_psign0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psign0; _i0++) {
            psign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phash0 = 1;
          int * phash = (int *) malloc(_len_phash0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phash0; _i0++) {
            phash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psignhash0 = 1;
          int * psignhash = (int *) malloc(_len_psignhash0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psignhash0; _i0++) {
            psignhash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rsig0 = 1;
          unsigned char * rsig = (unsigned char *) malloc(_len_rsig0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_rsig0; _i0++) {
            rsig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rhash0 = 1;
          unsigned char * rhash = (unsigned char *) malloc(_len_rhash0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_rhash0; _i0++) {
            rhash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SSL_get_shared_sigalgs(s,idx,psign,phash,psignhash,rsig,rhash);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cert);
          }
          free(s);
          free(psign);
          free(phash);
          free(psignhash);
          free(rsig);
          free(rhash);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_s0 = 65025;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__cert0 = 1;
          s[_i0].cert = (struct TYPE_5__ *) malloc(_len_s__i0__cert0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__cert0; _j0++) {
            s[_i0].cert->shared_sigalgslen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cert_shared_sigalgs0 = 1;
          s[_i0].cert->shared_sigalgs = (struct TYPE_7__ **) malloc(_len_s__i0__cert_shared_sigalgs0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__cert_shared_sigalgs0; _j0++) {
            int _len_s__i0__cert_shared_sigalgs1 = 1;
            s[_i0].cert->shared_sigalgs[_j0] = (struct TYPE_7__ *) malloc(_len_s__i0__cert_shared_sigalgs1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_s__i0__cert_shared_sigalgs1; _j1++) {
              s[_i0].cert->shared_sigalgs[_j0]->hash = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cert->shared_sigalgs[_j0]->sig = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cert->shared_sigalgs[_j0]->sigandhash = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cert->shared_sigalgs[_j0]->sigalg = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_psign0 = 65025;
          int * psign = (int *) malloc(_len_psign0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psign0; _i0++) {
            psign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phash0 = 65025;
          int * phash = (int *) malloc(_len_phash0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phash0; _i0++) {
            phash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psignhash0 = 65025;
          int * psignhash = (int *) malloc(_len_psignhash0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psignhash0; _i0++) {
            psignhash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rsig0 = 65025;
          unsigned char * rsig = (unsigned char *) malloc(_len_rsig0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_rsig0; _i0++) {
            rsig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rhash0 = 65025;
          unsigned char * rhash = (unsigned char *) malloc(_len_rhash0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_rhash0; _i0++) {
            rhash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SSL_get_shared_sigalgs(s,idx,psign,phash,psignhash,rsig,rhash);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cert);
          }
          free(s);
          free(psign);
          free(phash);
          free(psignhash);
          free(rsig);
          free(rhash);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_s0 = 100;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__cert0 = 1;
          s[_i0].cert = (struct TYPE_5__ *) malloc(_len_s__i0__cert0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__cert0; _j0++) {
            s[_i0].cert->shared_sigalgslen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cert_shared_sigalgs0 = 1;
          s[_i0].cert->shared_sigalgs = (struct TYPE_7__ **) malloc(_len_s__i0__cert_shared_sigalgs0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__cert_shared_sigalgs0; _j0++) {
            int _len_s__i0__cert_shared_sigalgs1 = 1;
            s[_i0].cert->shared_sigalgs[_j0] = (struct TYPE_7__ *) malloc(_len_s__i0__cert_shared_sigalgs1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_s__i0__cert_shared_sigalgs1; _j1++) {
              s[_i0].cert->shared_sigalgs[_j0]->hash = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cert->shared_sigalgs[_j0]->sig = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cert->shared_sigalgs[_j0]->sigandhash = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cert->shared_sigalgs[_j0]->sigalg = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_psign0 = 100;
          int * psign = (int *) malloc(_len_psign0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psign0; _i0++) {
            psign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phash0 = 100;
          int * phash = (int *) malloc(_len_phash0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phash0; _i0++) {
            phash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psignhash0 = 100;
          int * psignhash = (int *) malloc(_len_psignhash0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psignhash0; _i0++) {
            psignhash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rsig0 = 100;
          unsigned char * rsig = (unsigned char *) malloc(_len_rsig0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_rsig0; _i0++) {
            rsig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rhash0 = 100;
          unsigned char * rhash = (unsigned char *) malloc(_len_rhash0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_rhash0; _i0++) {
            rhash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SSL_get_shared_sigalgs(s,idx,psign,phash,psignhash,rsig,rhash);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cert);
          }
          free(s);
          free(psign);
          free(phash);
          free(psignhash);
          free(rsig);
          free(rhash);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
