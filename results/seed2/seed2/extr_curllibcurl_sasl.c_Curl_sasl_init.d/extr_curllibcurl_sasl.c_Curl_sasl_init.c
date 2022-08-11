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
       3            linked\n\
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

/* Type definitions */
struct SASLproto {int dummy; } ;
struct SASL {void* force_ir; void* mutual_auth; int /*<<< orphan*/  resetprefs; void* authused; int /*<<< orphan*/  prefmech; void* authmechs; int /*<<< orphan*/  state; struct SASLproto const* params; } ;

/* Variables and functions */
 void* FALSE ; 
 int /*<<< orphan*/  SASL_AUTH_DEFAULT ; 
 void* SASL_AUTH_NONE ; 
 int /*<<< orphan*/  SASL_STOP ; 
 int /*<<< orphan*/  TRUE ; 

void Curl_sasl_init(struct SASL *sasl, const struct SASLproto *params)
{
  sasl->params = params;           /* Set protocol dependent parameters */
  sasl->state = SASL_STOP;         /* Not yet running */
  sasl->authmechs = SASL_AUTH_NONE; /* No known authentication mechanism yet */
  sasl->prefmech = SASL_AUTH_DEFAULT; /* Prefer all mechanisms */
  sasl->authused = SASL_AUTH_NONE; /* No the authentication mechanism used */
  sasl->resetprefs = TRUE;         /* Reset prefmech upon AUTH parsing. */
  sasl->mutual_auth = FALSE;       /* No mutual authentication (GSSAPI only) */
  sasl->force_ir = FALSE;          /* Respect external option */
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
          int _len_sasl0 = 1;
          struct SASL * sasl = (struct SASL *) malloc(_len_sasl0*sizeof(struct SASL));
          for(int _i0 = 0; _i0 < _len_sasl0; _i0++) {
            sasl[_i0].resetprefs = ((-2 * (next_i()%2)) + 1) * next_i();
        sasl[_i0].prefmech = ((-2 * (next_i()%2)) + 1) * next_i();
        sasl[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sasl__i0__params0 = 1;
          sasl[_i0].params = (const struct SASLproto *) malloc(_len_sasl__i0__params0*sizeof(const struct SASLproto));
          for(int _j0 = 0; _j0 < _len_sasl__i0__params0; _j0++) {
              }
          }
          int _len_params0 = 1;
          const struct SASLproto * params = (const struct SASLproto *) malloc(_len_params0*sizeof(const struct SASLproto));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
              }
          Curl_sasl_init(sasl,params);
          for(int _aux = 0; _aux < _len_sasl0; _aux++) {
          free(sasl[_aux].params);
          }
          free(sasl);
          free(params);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sasl0 = 65025;
          struct SASL * sasl = (struct SASL *) malloc(_len_sasl0*sizeof(struct SASL));
          for(int _i0 = 0; _i0 < _len_sasl0; _i0++) {
            sasl[_i0].resetprefs = ((-2 * (next_i()%2)) + 1) * next_i();
        sasl[_i0].prefmech = ((-2 * (next_i()%2)) + 1) * next_i();
        sasl[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sasl__i0__params0 = 1;
          sasl[_i0].params = (const struct SASLproto *) malloc(_len_sasl__i0__params0*sizeof(const struct SASLproto));
          for(int _j0 = 0; _j0 < _len_sasl__i0__params0; _j0++) {
              }
          }
          int _len_params0 = 65025;
          const struct SASLproto * params = (const struct SASLproto *) malloc(_len_params0*sizeof(const struct SASLproto));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
              }
          Curl_sasl_init(sasl,params);
          for(int _aux = 0; _aux < _len_sasl0; _aux++) {
          free(sasl[_aux].params);
          }
          free(sasl);
          free(params);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sasl0 = 100;
          struct SASL * sasl = (struct SASL *) malloc(_len_sasl0*sizeof(struct SASL));
          for(int _i0 = 0; _i0 < _len_sasl0; _i0++) {
            sasl[_i0].resetprefs = ((-2 * (next_i()%2)) + 1) * next_i();
        sasl[_i0].prefmech = ((-2 * (next_i()%2)) + 1) * next_i();
        sasl[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sasl__i0__params0 = 1;
          sasl[_i0].params = (const struct SASLproto *) malloc(_len_sasl__i0__params0*sizeof(const struct SASLproto));
          for(int _j0 = 0; _j0 < _len_sasl__i0__params0; _j0++) {
              }
          }
          int _len_params0 = 100;
          const struct SASLproto * params = (const struct SASLproto *) malloc(_len_params0*sizeof(const struct SASLproto));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
              }
          Curl_sasl_init(sasl,params);
          for(int _aux = 0; _aux < _len_sasl0; _aux++) {
          free(sasl[_aux].params);
          }
          free(sasl);
          free(params);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_sasl0 = 1;
          struct SASL * sasl = (struct SASL *) malloc(_len_sasl0*sizeof(struct SASL));
          for(int _i0 = 0; _i0 < _len_sasl0; _i0++) {
            sasl[_i0].resetprefs = ((-2 * (next_i()%2)) + 1) * next_i();
        sasl[_i0].prefmech = ((-2 * (next_i()%2)) + 1) * next_i();
        sasl[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sasl__i0__params0 = 1;
          sasl[_i0].params = (const struct SASLproto *) malloc(_len_sasl__i0__params0*sizeof(const struct SASLproto));
          for(int _j0 = 0; _j0 < _len_sasl__i0__params0; _j0++) {
              }
          }
          int _len_params0 = 1;
          const struct SASLproto * params = (const struct SASLproto *) malloc(_len_params0*sizeof(const struct SASLproto));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
              }
          Curl_sasl_init(sasl,params);
          for(int _aux = 0; _aux < _len_sasl0; _aux++) {
          free(sasl[_aux].params);
          }
          free(sasl);
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
