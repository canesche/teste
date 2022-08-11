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
struct st {int op; } ;

/* Variables and functions */

__attribute__((used)) static const char *parseop(struct st *st, const char *s)
{
	static const char opch[11] = "|&=!><+-*%/";
	static const char opch2[6] = "|&====";
	int i;
	for (i=0; i<11; i++)
		if (*s == opch[i]) {
			/* note: >,< are accepted with or without = */
			if (i<6 && s[1] == opch2[i]) {
				st->op = i;
				return s+2;
			}
			if (i>=4) {
				st->op = i+2;
				return s+1;
			}
			break;
		}
	st->op = 13;
	return s;
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
          int _len_st0 = 1;
          struct st * st = (struct st *) malloc(_len_st0*sizeof(struct st));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 1;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = parseop(st,s);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(st);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_st0 = 65025;
          struct st * st = (struct st *) malloc(_len_st0*sizeof(struct st));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 65025;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = parseop(st,s);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(st);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_st0 = 100;
          struct st * st = (struct st *) malloc(_len_st0*sizeof(struct st));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 100;
          const char * s = (const char *) malloc(_len_s0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = parseop(st,s);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(st);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
