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
struct SmackMatches {size_t* m_ids; } ;
struct SMACK {struct SmackMatches* m_match; } ;

/* Variables and functions */
 size_t SMACK_NOT_FOUND ; 

size_t
smack_next_match(struct SMACK *smack, unsigned *current_state)
{
    unsigned row, current_matches;
    size_t id = SMACK_NOT_FOUND;

    /* split the state variable */
    row = *current_state & 0xFFFFFF;
    current_matches = (*current_state)>>24;

    /* If we broke early because we found a match, return that match */
    if (current_matches) {
        const struct SmackMatches *match = smack->m_match;
        id = match[row].m_ids[current_matches-1];
        current_matches--;
    }

    /* Recombine the state */
    *current_state = row | (current_matches<<24);

    return id;
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
          int _len_smack0 = 1;
          struct SMACK * smack = (struct SMACK *) malloc(_len_smack0*sizeof(struct SMACK));
          for(int _i0 = 0; _i0 < _len_smack0; _i0++) {
              int _len_smack__i0__m_match0 = 1;
          smack[_i0].m_match = (struct SmackMatches *) malloc(_len_smack__i0__m_match0*sizeof(struct SmackMatches));
          for(int _j0 = 0; _j0 < _len_smack__i0__m_match0; _j0++) {
              int _len_smack__i0__m_match_m_ids0 = 1;
          smack[_i0].m_match->m_ids = (unsigned long *) malloc(_len_smack__i0__m_match_m_ids0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_smack__i0__m_match_m_ids0; _j0++) {
            smack[_i0].m_match->m_ids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_current_state0 = 1;
          unsigned int * current_state = (unsigned int *) malloc(_len_current_state0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_current_state0; _i0++) {
            current_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = smack_next_match(smack,current_state);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_smack0; _aux++) {
          free(smack[_aux].m_match);
          }
          free(smack);
          free(current_state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_smack0 = 65025;
          struct SMACK * smack = (struct SMACK *) malloc(_len_smack0*sizeof(struct SMACK));
          for(int _i0 = 0; _i0 < _len_smack0; _i0++) {
              int _len_smack__i0__m_match0 = 1;
          smack[_i0].m_match = (struct SmackMatches *) malloc(_len_smack__i0__m_match0*sizeof(struct SmackMatches));
          for(int _j0 = 0; _j0 < _len_smack__i0__m_match0; _j0++) {
              int _len_smack__i0__m_match_m_ids0 = 1;
          smack[_i0].m_match->m_ids = (unsigned long *) malloc(_len_smack__i0__m_match_m_ids0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_smack__i0__m_match_m_ids0; _j0++) {
            smack[_i0].m_match->m_ids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_current_state0 = 65025;
          unsigned int * current_state = (unsigned int *) malloc(_len_current_state0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_current_state0; _i0++) {
            current_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = smack_next_match(smack,current_state);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_smack0; _aux++) {
          free(smack[_aux].m_match);
          }
          free(smack);
          free(current_state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_smack0 = 100;
          struct SMACK * smack = (struct SMACK *) malloc(_len_smack0*sizeof(struct SMACK));
          for(int _i0 = 0; _i0 < _len_smack0; _i0++) {
              int _len_smack__i0__m_match0 = 1;
          smack[_i0].m_match = (struct SmackMatches *) malloc(_len_smack__i0__m_match0*sizeof(struct SmackMatches));
          for(int _j0 = 0; _j0 < _len_smack__i0__m_match0; _j0++) {
              int _len_smack__i0__m_match_m_ids0 = 1;
          smack[_i0].m_match->m_ids = (unsigned long *) malloc(_len_smack__i0__m_match_m_ids0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_smack__i0__m_match_m_ids0; _j0++) {
            smack[_i0].m_match->m_ids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_current_state0 = 100;
          unsigned int * current_state = (unsigned int *) malloc(_len_current_state0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_current_state0; _i0++) {
            current_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = smack_next_match(smack,current_state);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_smack0; _aux++) {
          free(smack[_aux].m_match);
          }
          free(smack);
          free(current_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
