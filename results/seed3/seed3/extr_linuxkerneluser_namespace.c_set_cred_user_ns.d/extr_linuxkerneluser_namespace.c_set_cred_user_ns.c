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

/* Type definitions */
struct user_namespace {int dummy; } ;
struct cred {struct user_namespace* user_ns; void* cap_bset; void* cap_ambient; void* cap_effective; void* cap_permitted; void* cap_inheritable; int /*<<< orphan*/  securebits; } ;

/* Variables and functions */
 void* CAP_EMPTY_SET ; 
 void* CAP_FULL_SET ; 
 int /*<<< orphan*/  SECUREBITS_DEFAULT ; 

__attribute__((used)) static void set_cred_user_ns(struct cred *cred, struct user_namespace *user_ns)
{
	/* Start with the same capabilities as init but useless for doing
	 * anything as the capabilities are bound to the new user namespace.
	 */
	cred->securebits = SECUREBITS_DEFAULT;
	cred->cap_inheritable = CAP_EMPTY_SET;
	cred->cap_permitted = CAP_FULL_SET;
	cred->cap_effective = CAP_FULL_SET;
	cred->cap_ambient = CAP_EMPTY_SET;
	cred->cap_bset = CAP_FULL_SET;
#ifdef CONFIG_KEYS
	key_put(cred->request_key_auth);
	cred->request_key_auth = NULL;
#endif
	/* tgcred will be cleared in our caller bc CLONE_THREAD won't be set */
	cred->user_ns = user_ns;
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
          int _len_cred0 = 1;
          struct cred * cred = (struct cred *) malloc(_len_cred0*sizeof(struct cred));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
              int _len_cred__i0__user_ns0 = 1;
          cred[_i0].user_ns = (struct user_namespace *) malloc(_len_cred__i0__user_ns0*sizeof(struct user_namespace));
          for(int _j0 = 0; _j0 < _len_cred__i0__user_ns0; _j0++) {
            cred[_i0].user_ns->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].securebits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_user_ns0 = 1;
          struct user_namespace * user_ns = (struct user_namespace *) malloc(_len_user_ns0*sizeof(struct user_namespace));
          for(int _i0 = 0; _i0 < _len_user_ns0; _i0++) {
            user_ns[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_cred_user_ns(cred,user_ns);
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].user_ns);
          }
          free(cred);
          free(user_ns);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cred0 = 65025;
          struct cred * cred = (struct cred *) malloc(_len_cred0*sizeof(struct cred));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
              int _len_cred__i0__user_ns0 = 1;
          cred[_i0].user_ns = (struct user_namespace *) malloc(_len_cred__i0__user_ns0*sizeof(struct user_namespace));
          for(int _j0 = 0; _j0 < _len_cred__i0__user_ns0; _j0++) {
            cred[_i0].user_ns->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].securebits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_user_ns0 = 65025;
          struct user_namespace * user_ns = (struct user_namespace *) malloc(_len_user_ns0*sizeof(struct user_namespace));
          for(int _i0 = 0; _i0 < _len_user_ns0; _i0++) {
            user_ns[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_cred_user_ns(cred,user_ns);
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].user_ns);
          }
          free(cred);
          free(user_ns);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cred0 = 100;
          struct cred * cred = (struct cred *) malloc(_len_cred0*sizeof(struct cred));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
              int _len_cred__i0__user_ns0 = 1;
          cred[_i0].user_ns = (struct user_namespace *) malloc(_len_cred__i0__user_ns0*sizeof(struct user_namespace));
          for(int _j0 = 0; _j0 < _len_cred__i0__user_ns0; _j0++) {
            cred[_i0].user_ns->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cred[_i0].securebits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_user_ns0 = 100;
          struct user_namespace * user_ns = (struct user_namespace *) malloc(_len_user_ns0*sizeof(struct user_namespace));
          for(int _i0 = 0; _i0 < _len_user_ns0; _i0++) {
            user_ns[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_cred_user_ns(cred,user_ns);
          for(int _aux = 0; _aux < _len_cred0; _aux++) {
          free(cred[_aux].user_ns);
          }
          free(cred);
          free(user_ns);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
