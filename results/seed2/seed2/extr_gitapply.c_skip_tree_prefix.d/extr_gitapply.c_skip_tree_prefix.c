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
struct apply_state {int p_value; } ;

/* Variables and functions */

__attribute__((used)) static const char *skip_tree_prefix(struct apply_state *state,
				    const char *line,
				    int llen)
{
	int nslash;
	int i;

	if (!state->p_value)
		return (llen && line[0] == '/') ? NULL : line;

	nslash = state->p_value;
	for (i = 0; i < llen; i++) {
		int ch = line[i];
		if (ch == '/' && --nslash <= 0)
			return (i == 0) ? NULL : &line[i + 1];
	}
	return NULL;
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
          int llen = 100;
          int _len_state0 = 1;
          struct apply_state * state = (struct apply_state *) malloc(_len_state0*sizeof(struct apply_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].p_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_line0 = 1;
          const char * line = (const char *) malloc(_len_line0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = skip_tree_prefix(state,line,llen);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(state);
          free(line);
        
        break;
    }
    // big-arr
    case 1:
    {
          int llen = 255;
          int _len_state0 = 65025;
          struct apply_state * state = (struct apply_state *) malloc(_len_state0*sizeof(struct apply_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].p_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_line0 = 65025;
          const char * line = (const char *) malloc(_len_line0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = skip_tree_prefix(state,line,llen);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(state);
          free(line);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int llen = 10;
          int _len_state0 = 100;
          struct apply_state * state = (struct apply_state *) malloc(_len_state0*sizeof(struct apply_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].p_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_line0 = 100;
          const char * line = (const char *) malloc(_len_line0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = skip_tree_prefix(state,line,llen);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(state);
          free(line);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
