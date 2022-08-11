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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int phrases_cnt; TYPE_2__* phrases; } ;
typedef  TYPE_1__ watchcat_query_t ;
struct TYPE_5__ {int words; scalar_t__* H; scalar_t__ minus_flag; } ;
typedef  TYPE_2__ watchcat_query_phrase_t ;

/* Variables and functions */

long long watchcat_query_hash_impl (watchcat_query_t *query) {
  long long query_hash = 0x1234123412341234LL;
  int was_plus = 0;
  int i;
  for (i = 0; i < query->phrases_cnt; i++) {
    watchcat_query_phrase_t *phrase = &query->phrases[i];
    query_hash *= 0x4321432143214321LL;
    long long phrase_hash = 0x1234567812345678LL;
    if (phrase->minus_flag) {
      phrase_hash++;
    } else {
      was_plus = 1;
    }
    phrase_hash += phrase->minus_flag;
    int j;
    for (j = 0; j < phrase->words; j++) {
      phrase_hash *= 0x8765432187654321LL;
      phrase_hash += phrase->H[j];
    }

    query_hash += phrase_hash;
  }

  if (!was_plus) {
    //bad query
    /*printf ("Bad query\n");*/
    return -1;
  }

  return query_hash;
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
          int _len_query0 = 1;
          struct TYPE_4__ * query = (struct TYPE_4__ *) malloc(_len_query0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_query0; _i0++) {
            query[_i0].phrases_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_query__i0__phrases0 = 1;
          query[_i0].phrases = (struct TYPE_5__ *) malloc(_len_query__i0__phrases0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_query__i0__phrases0; _j0++) {
            query[_i0].phrases->words = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_query__i0__phrases_H0 = 1;
          query[_i0].phrases->H = (long *) malloc(_len_query__i0__phrases_H0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_query__i0__phrases_H0; _j0++) {
            query[_i0].phrases->H[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        query[_i0].phrases->minus_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long long benchRet = watchcat_query_hash_impl(query);
          printf("%lld\n", benchRet); 
          for(int _aux = 0; _aux < _len_query0; _aux++) {
          free(query[_aux].phrases);
          }
          free(query);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_query0 = 65025;
          struct TYPE_4__ * query = (struct TYPE_4__ *) malloc(_len_query0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_query0; _i0++) {
            query[_i0].phrases_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_query__i0__phrases0 = 1;
          query[_i0].phrases = (struct TYPE_5__ *) malloc(_len_query__i0__phrases0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_query__i0__phrases0; _j0++) {
            query[_i0].phrases->words = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_query__i0__phrases_H0 = 1;
          query[_i0].phrases->H = (long *) malloc(_len_query__i0__phrases_H0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_query__i0__phrases_H0; _j0++) {
            query[_i0].phrases->H[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        query[_i0].phrases->minus_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long long benchRet = watchcat_query_hash_impl(query);
          printf("%lld\n", benchRet); 
          for(int _aux = 0; _aux < _len_query0; _aux++) {
          free(query[_aux].phrases);
          }
          free(query);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_query0 = 100;
          struct TYPE_4__ * query = (struct TYPE_4__ *) malloc(_len_query0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_query0; _i0++) {
            query[_i0].phrases_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_query__i0__phrases0 = 1;
          query[_i0].phrases = (struct TYPE_5__ *) malloc(_len_query__i0__phrases0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_query__i0__phrases0; _j0++) {
            query[_i0].phrases->words = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_query__i0__phrases_H0 = 1;
          query[_i0].phrases->H = (long *) malloc(_len_query__i0__phrases_H0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_query__i0__phrases_H0; _j0++) {
            query[_i0].phrases->H[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        query[_i0].phrases->minus_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long long benchRet = watchcat_query_hash_impl(query);
          printf("%lld\n", benchRet); 
          for(int _aux = 0; _aux < _len_query0; _aux++) {
          free(query[_aux].phrases);
          }
          free(query);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
