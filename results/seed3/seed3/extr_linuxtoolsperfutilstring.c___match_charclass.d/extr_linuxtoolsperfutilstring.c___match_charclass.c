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

/* Variables and functions */

__attribute__((used)) static bool __match_charclass(const char *pat, char c, const char **npat)
{
	bool complement = false, ret = true;

	if (*pat == '!') {
		complement = true;
		pat++;
	}
	if (*pat++ == c)	/* First character is special */
		goto end;

	while (*pat && *pat != ']') {	/* Matching */
		if (*pat == '-' && *(pat + 1) != ']') {	/* Range */
			if (*(pat - 1) <= c && c <= *(pat + 1))
				goto end;
			if (*(pat - 1) > *(pat + 1))
				goto error;
			pat += 2;
		} else if (*pat++ == c)
			goto end;
	}
	if (!*pat)
		goto error;
	ret = false;

end:
	while (*pat && *pat != ']')	/* Searching closing */
		pat++;
	if (!*pat)
		goto error;
	*npat = pat + 1;
	return complement ? !ret : ret;

error:
	return false;
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
          char c = 100;
          int _len_pat0 = 1;
          const char * pat = (const char *) malloc(_len_pat0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_pat0; _i0++) {
            pat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_npat0 = 1;
          const char ** npat = (const char **) malloc(_len_npat0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_npat0; _i0++) {
            int _len_npat1 = 1;
            npat[_i0] = (const char *) malloc(_len_npat1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_npat1; _i1++) {
              npat[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = __match_charclass(pat,c,npat);
          printf("%d\n", benchRet); 
          free(pat);
          for(int i1 = 0; i1 < _len_npat0; i1++) {
            int _len_npat1 = 1;
              free(npat[i1]);
          }
          free(npat);
        
        break;
    }
    // big-arr
    case 1:
    {
          char c = 255;
          int _len_pat0 = 65025;
          const char * pat = (const char *) malloc(_len_pat0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_pat0; _i0++) {
            pat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_npat0 = 65025;
          const char ** npat = (const char **) malloc(_len_npat0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_npat0; _i0++) {
            int _len_npat1 = 1;
            npat[_i0] = (const char *) malloc(_len_npat1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_npat1; _i1++) {
              npat[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = __match_charclass(pat,c,npat);
          printf("%d\n", benchRet); 
          free(pat);
          for(int i1 = 0; i1 < _len_npat0; i1++) {
            int _len_npat1 = 1;
              free(npat[i1]);
          }
          free(npat);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char c = 10;
          int _len_pat0 = 100;
          const char * pat = (const char *) malloc(_len_pat0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_pat0; _i0++) {
            pat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_npat0 = 100;
          const char ** npat = (const char **) malloc(_len_npat0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_npat0; _i0++) {
            int _len_npat1 = 1;
            npat[_i0] = (const char *) malloc(_len_npat1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_npat1; _i1++) {
              npat[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = __match_charclass(pat,c,npat);
          printf("%d\n", benchRet); 
          free(pat);
          for(int i1 = 0; i1 < _len_npat0; i1++) {
            int _len_npat1 = 1;
              free(npat[i1]);
          }
          free(npat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
