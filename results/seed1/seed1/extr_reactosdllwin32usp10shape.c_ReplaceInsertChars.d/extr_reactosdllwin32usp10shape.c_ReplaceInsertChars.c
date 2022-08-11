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
typedef  int WCHAR ;
typedef  size_t INT ;
typedef  int /*<<< orphan*/  HDC ;

/* Variables and functions */

__attribute__((used)) static void ReplaceInsertChars(HDC hdc, INT cWalk, INT* pcChars, WCHAR *pwOutChars, const WCHAR *replacements)
{
    int i;

    /* Replace */
    pwOutChars[cWalk] = replacements[0];
    cWalk=cWalk+1;

    /* Insert */
    for (i = 1; i < 3 && replacements[i] != 0x0000; i++)
    {
        int j;
        for (j = *pcChars; j > cWalk; j--)
            pwOutChars[j] = pwOutChars[j-1];
        *pcChars= *pcChars+1;
        pwOutChars[cWalk] = replacements[i];
        cWalk = cWalk+1;
    }
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
          int hdc = 100;
          unsigned long cWalk = 100;
          int _len_pcChars0 = 1;
          unsigned long * pcChars = (unsigned long *) malloc(_len_pcChars0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pcChars0; _i0++) {
            pcChars[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwOutChars0 = 1;
          int * pwOutChars = (int *) malloc(_len_pwOutChars0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwOutChars0; _i0++) {
            pwOutChars[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_replacements0 = 1;
          const int * replacements = (const int *) malloc(_len_replacements0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_replacements0; _i0++) {
            replacements[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ReplaceInsertChars(hdc,cWalk,pcChars,pwOutChars,replacements);
          free(pcChars);
          free(pwOutChars);
          free(replacements);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hdc = 255;
          unsigned long cWalk = 255;
          int _len_pcChars0 = 65025;
          unsigned long * pcChars = (unsigned long *) malloc(_len_pcChars0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pcChars0; _i0++) {
            pcChars[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwOutChars0 = 65025;
          int * pwOutChars = (int *) malloc(_len_pwOutChars0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwOutChars0; _i0++) {
            pwOutChars[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_replacements0 = 65025;
          const int * replacements = (const int *) malloc(_len_replacements0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_replacements0; _i0++) {
            replacements[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ReplaceInsertChars(hdc,cWalk,pcChars,pwOutChars,replacements);
          free(pcChars);
          free(pwOutChars);
          free(replacements);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hdc = 10;
          unsigned long cWalk = 10;
          int _len_pcChars0 = 100;
          unsigned long * pcChars = (unsigned long *) malloc(_len_pcChars0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pcChars0; _i0++) {
            pcChars[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwOutChars0 = 100;
          int * pwOutChars = (int *) malloc(_len_pwOutChars0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwOutChars0; _i0++) {
            pwOutChars[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_replacements0 = 100;
          const int * replacements = (const int *) malloc(_len_replacements0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_replacements0; _i0++) {
            replacements[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ReplaceInsertChars(hdc,cWalk,pcChars,pwOutChars,replacements);
          free(pcChars);
          free(pwOutChars);
          free(replacements);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
