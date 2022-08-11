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

unsigned long
utf8_to_unicode(const char *string, size_t length)
{
	unsigned long unicode;

	switch (length) {
	case 1:
		unicode  =   string[0];
		break;
	case 2:
		unicode  =  (string[0] & 0x1f) << 6;
		unicode +=  (string[1] & 0x3f);
		break;
	case 3:
		unicode  =  (string[0] & 0x0f) << 12;
		unicode += ((string[1] & 0x3f) << 6);
		unicode +=  (string[2] & 0x3f);
		break;
	case 4:
		unicode  =  (string[0] & 0x0f) << 18;
		unicode += ((string[1] & 0x3f) << 12);
		unicode += ((string[2] & 0x3f) << 6);
		unicode +=  (string[3] & 0x3f);
		break;
	case 5:
		unicode  =  (string[0] & 0x0f) << 24;
		unicode += ((string[1] & 0x3f) << 18);
		unicode += ((string[2] & 0x3f) << 12);
		unicode += ((string[3] & 0x3f) << 6);
		unicode +=  (string[4] & 0x3f);
		break;
	case 6:
		unicode  =  (string[0] & 0x01) << 30;
		unicode += ((string[1] & 0x3f) << 24);
		unicode += ((string[2] & 0x3f) << 18);
		unicode += ((string[3] & 0x3f) << 12);
		unicode += ((string[4] & 0x3f) << 6);
		unicode +=  (string[5] & 0x3f);
		break;
	default:
		return 0;
	}

	/* Invalid characters could return the special 0xfffd value but NUL
	 * should be just as good. */
	return unicode > 0x10FFFF ? 0 : unicode;
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
          unsigned long length = 100;
          int _len_string0 = 1;
          const char * string = (const char *) malloc(_len_string0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = utf8_to_unicode(string,length);
          printf("%lu\n", benchRet); 
          free(string);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long length = 255;
          int _len_string0 = 65025;
          const char * string = (const char *) malloc(_len_string0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = utf8_to_unicode(string,length);
          printf("%lu\n", benchRet); 
          free(string);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long length = 10;
          int _len_string0 = 100;
          const char * string = (const char *) malloc(_len_string0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = utf8_to_unicode(string,length);
          printf("%lu\n", benchRet); 
          free(string);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
