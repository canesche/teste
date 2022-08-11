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
struct punc_var_t {int var_id; } ;
typedef  enum var_id_t { ____Placeholder_var_id_t } var_id_t ;

/* Variables and functions */
 struct punc_var_t* punc_vars ; 

struct punc_var_t *spk_get_punc_var(enum var_id_t var_id)
{
	struct punc_var_t *rv = NULL;
	struct punc_var_t *where;

	where = punc_vars;
	while ((where->var_id != -1) && (!rv)) {
		if (where->var_id == var_id)
			rv = where;
		else
			where++;
	}
	return rv;
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
          enum var_id_t var_id = 0;
          struct punc_var_t * benchRet = spk_get_punc_var(var_id);
          printf("%d\n", (*benchRet).var_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
