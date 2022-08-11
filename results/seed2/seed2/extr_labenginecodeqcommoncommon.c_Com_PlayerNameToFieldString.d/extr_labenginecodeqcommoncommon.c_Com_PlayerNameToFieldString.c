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
typedef  int /*<<< orphan*/  qboolean ;

/* Variables and functions */
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

qboolean Com_PlayerNameToFieldString( char *str, int length, const char *name )
{
	const char *p;
	int i;
	int x1, x2;

	if( str == NULL || name == NULL )
		return qfalse;

	if( length <= 0 )
		return qtrue;

	*str = '\0';
	p = name;

	for( i = 0; *p != '\0'; i++, p++ )
	{
		if( i + 1 >= length )
			break;

		if( *p <= ' ' )
		{
			if( i + 5 + 1 >= length )
				break;

			x1 = *p >> 4;
			x2 = *p & 15;

			str[i+0] = '\\';
			str[i+1] = '0';
			str[i+2] = 'x';
			str[i+3] = x1 > 9 ? x1 - 10 + 'a' : x1 + '0';
			str[i+4] = x2 > 9 ? x2 - 10 + 'a' : x2 + '0';

			i += 4;
		} else {
			str[i] = *p;
		}		
	}
	str[i] = '\0';

	return qtrue;
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
          int length = 100;
          int _len_str0 = 1;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Com_PlayerNameToFieldString(str,length,name);
          printf("%d\n", benchRet); 
          free(str);
          free(name);
        
        break;
    }
    // big-arr
    case 1:
    {
          int length = 255;
          int _len_str0 = 65025;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Com_PlayerNameToFieldString(str,length,name);
          printf("%d\n", benchRet); 
          free(str);
          free(name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int length = 10;
          int _len_str0 = 100;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Com_PlayerNameToFieldString(str,length,name);
          printf("%d\n", benchRet); 
          free(str);
          free(name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
