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
struct TYPE_5__ {TYPE_1__* punctuations; } ;
typedef  TYPE_2__ script_t ;
struct TYPE_4__ {char* p; int n; } ;

/* Variables and functions */

char *PunctuationFromNum(script_t *script, int num)
{
	int i;

	for (i = 0; script->punctuations[i].p; i++)
	{
		if (script->punctuations[i].n == num) return script->punctuations[i].p;
	} //end for
	return "unknown punctuation";
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
          int num = 100;
          int _len_script0 = 1;
          struct TYPE_5__ * script = (struct TYPE_5__ *) malloc(_len_script0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_script0; _i0++) {
              int _len_script__i0__punctuations0 = 1;
          script[_i0].punctuations = (struct TYPE_4__ *) malloc(_len_script__i0__punctuations0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_script__i0__punctuations0; _j0++) {
              int _len_script__i0__punctuations_p0 = 1;
          script[_i0].punctuations->p = (char *) malloc(_len_script__i0__punctuations_p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_script__i0__punctuations_p0; _j0++) {
            script[_i0].punctuations->p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        script[_i0].punctuations->n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = PunctuationFromNum(script,num);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_script0; _aux++) {
          free(script[_aux].punctuations);
          }
          free(script);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num = 255;
          int _len_script0 = 65025;
          struct TYPE_5__ * script = (struct TYPE_5__ *) malloc(_len_script0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_script0; _i0++) {
              int _len_script__i0__punctuations0 = 1;
          script[_i0].punctuations = (struct TYPE_4__ *) malloc(_len_script__i0__punctuations0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_script__i0__punctuations0; _j0++) {
              int _len_script__i0__punctuations_p0 = 1;
          script[_i0].punctuations->p = (char *) malloc(_len_script__i0__punctuations_p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_script__i0__punctuations_p0; _j0++) {
            script[_i0].punctuations->p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        script[_i0].punctuations->n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = PunctuationFromNum(script,num);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_script0; _aux++) {
          free(script[_aux].punctuations);
          }
          free(script);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num = 10;
          int _len_script0 = 100;
          struct TYPE_5__ * script = (struct TYPE_5__ *) malloc(_len_script0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_script0; _i0++) {
              int _len_script__i0__punctuations0 = 1;
          script[_i0].punctuations = (struct TYPE_4__ *) malloc(_len_script__i0__punctuations0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_script__i0__punctuations0; _j0++) {
              int _len_script__i0__punctuations_p0 = 1;
          script[_i0].punctuations->p = (char *) malloc(_len_script__i0__punctuations_p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_script__i0__punctuations_p0; _j0++) {
            script[_i0].punctuations->p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        script[_i0].punctuations->n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = PunctuationFromNum(script,num);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_script0; _aux++) {
          free(script[_aux].punctuations);
          }
          free(script);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
