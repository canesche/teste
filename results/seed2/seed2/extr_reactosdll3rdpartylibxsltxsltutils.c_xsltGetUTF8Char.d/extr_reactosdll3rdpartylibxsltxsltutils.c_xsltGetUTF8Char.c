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

int
xsltGetUTF8Char(const unsigned char *utf, int *len) {
    unsigned int c;

    if (utf == NULL)
	goto error;
    if (len == NULL)
	goto error;
    if (*len < 1)
	goto error;

    c = utf[0];
    if (c & 0x80) {
	if (*len < 2)
	    goto error;
	if ((utf[1] & 0xc0) != 0x80)
	    goto error;
	if ((c & 0xe0) == 0xe0) {
	    if (*len < 3)
		goto error;
	    if ((utf[2] & 0xc0) != 0x80)
		goto error;
	    if ((c & 0xf0) == 0xf0) {
		if (*len < 4)
		    goto error;
		if ((c & 0xf8) != 0xf0 || (utf[3] & 0xc0) != 0x80)
		    goto error;
		*len = 4;
		/* 4-byte code */
		c = (utf[0] & 0x7) << 18;
		c |= (utf[1] & 0x3f) << 12;
		c |= (utf[2] & 0x3f) << 6;
		c |= utf[3] & 0x3f;
	    } else {
	      /* 3-byte code */
		*len = 3;
		c = (utf[0] & 0xf) << 12;
		c |= (utf[1] & 0x3f) << 6;
		c |= utf[2] & 0x3f;
	    }
	} else {
	  /* 2-byte code */
	    *len = 2;
	    c = (utf[0] & 0x1f) << 6;
	    c |= utf[1] & 0x3f;
	}
    } else {
	/* 1-byte code */
	*len = 1;
    }
    return(c);

error:
    if (len != NULL)
	*len = 0;
    return(-1);
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
          int _len_utf0 = 1;
          const unsigned char * utf = (const unsigned char *) malloc(_len_utf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_utf0; _i0++) {
            utf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xsltGetUTF8Char(utf,len);
          printf("%d\n", benchRet); 
          free(utf);
          free(len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_utf0 = 65025;
          const unsigned char * utf = (const unsigned char *) malloc(_len_utf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_utf0; _i0++) {
            utf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 65025;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xsltGetUTF8Char(utf,len);
          printf("%d\n", benchRet); 
          free(utf);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_utf0 = 100;
          const unsigned char * utf = (const unsigned char *) malloc(_len_utf0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_utf0; _i0++) {
            utf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 100;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xsltGetUTF8Char(utf,len);
          printf("%d\n", benchRet); 
          free(utf);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
