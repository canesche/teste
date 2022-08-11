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
typedef  scalar_t__ key_code ;

/* Variables and functions */
 scalar_t__ KEYC_CTRL ; 
 scalar_t__ KEYC_ESCAPE ; 
 scalar_t__ KEYC_SHIFT ; 

__attribute__((used)) static key_code
key_string_get_modifiers(const char **string)
{
	key_code	modifiers;

	modifiers = 0;
	while (((*string)[0] != '\0') && (*string)[1] == '-') {
		switch ((*string)[0]) {
		case 'C':
		case 'c':
			modifiers |= KEYC_CTRL;
			break;
		case 'M':
		case 'm':
			modifiers |= KEYC_ESCAPE;
			break;
		case 'S':
		case 's':
			modifiers |= KEYC_SHIFT;
			break;
		default:
			*string = NULL;
			return (0);
		}
		*string += 2;
	}
	return (modifiers);
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
          int _len_string0 = 1;
          const char ** string = (const char **) malloc(_len_string0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            int _len_string1 = 1;
            string[_i0] = (const char *) malloc(_len_string1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_string1; _i1++) {
              string[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = key_string_get_modifiers(string);
          printf("%ld\n", benchRet); 
          for(int i1 = 0; i1 < _len_string0; i1++) {
            int _len_string1 = 1;
              free(string[i1]);
          }
          free(string);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_string0 = 65025;
          const char ** string = (const char **) malloc(_len_string0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            int _len_string1 = 1;
            string[_i0] = (const char *) malloc(_len_string1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_string1; _i1++) {
              string[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = key_string_get_modifiers(string);
          printf("%ld\n", benchRet); 
          for(int i1 = 0; i1 < _len_string0; i1++) {
            int _len_string1 = 1;
              free(string[i1]);
          }
          free(string);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_string0 = 100;
          const char ** string = (const char **) malloc(_len_string0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            int _len_string1 = 1;
            string[_i0] = (const char *) malloc(_len_string1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_string1; _i1++) {
              string[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = key_string_get_modifiers(string);
          printf("%ld\n", benchRet); 
          for(int i1 = 0; i1 < _len_string0; i1++) {
            int _len_string1 = 1;
              free(string[i1]);
          }
          free(string);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
