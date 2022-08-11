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
typedef  int ut8 ;
typedef  int unichar ;

/* Variables and functions */
 scalar_t__ T ; 
 scalar_t__* text_chars ; 

int file_looks_utf8(const ut8 *buf, size_t nbytes, unichar *ubuf, size_t *ulen) {
	size_t i;
	int n;
	unichar c;
	int gotone = 0, ctrl = 0;

	if (ubuf) {
		*ulen = 0;
	}

	for (i = 0; i < nbytes; i++) {
		if ((buf[i] & 0x80) == 0) {	   /* 0xxxxxxx is plain ASCII */
			/*
			 * Even if the whole file is valid UTF-8 sequences,
			 * still reject it if it uses weird control characters.
			 */

			if (text_chars[buf[i]] != T) {
				ctrl = 1;
			}

			if (ubuf) {
				ubuf[(*ulen)++] = buf[i];
			}
		} else if ((buf[i] & 0x40) == 0) { /* 10xxxxxx never 1st byte */
			return -1;
		} else {			   /* 11xxxxxx begins UTF-8 */
			int following;

			if ((buf[i] & 0x20) == 0) {		/* 110xxxxx */
				c = buf[i] & 0x1f;
				following = 1;
			} else if ((buf[i] & 0x10) == 0) {	/* 1110xxxx */
				c = buf[i] & 0x0f;
				following = 2;
			} else if ((buf[i] & 0x08) == 0) {	/* 11110xxx */
				c = buf[i] & 0x07;
				following = 3;
			} else if ((buf[i] & 0x04) == 0) {	/* 111110xx */
				c = buf[i] & 0x03;
				following = 4;
			} else if ((buf[i] & 0x02) == 0) {	/* 1111110x */
				c = buf[i] & 0x01;
				following = 5;
			} else {
				return -1;
			}

			for (n = 0; n < following; n++) {
				i++;
				if (i >= nbytes) {
					goto done;
				}

				if ((buf[i] & 0x80) == 0 || (buf[i] & 0x40)) {
					return -1;
				}

				c = (c << 6) + (buf[i] & 0x3f);
			}

			if (ubuf) {
				ubuf[(*ulen)++] = c;
			}
			gotone = 1;
		}
	}
done:
	return ctrl ? 0 : (gotone ? 2 : 1);
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
          unsigned long nbytes = 100;
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ubuf0 = 1;
          int * ubuf = (int *) malloc(_len_ubuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ubuf0; _i0++) {
            ubuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ulen0 = 1;
          unsigned long * ulen = (unsigned long *) malloc(_len_ulen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ulen0; _i0++) {
            ulen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = file_looks_utf8(buf,nbytes,ubuf,ulen);
          printf("%d\n", benchRet); 
          free(buf);
          free(ubuf);
          free(ulen);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long nbytes = 255;
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ubuf0 = 65025;
          int * ubuf = (int *) malloc(_len_ubuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ubuf0; _i0++) {
            ubuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ulen0 = 65025;
          unsigned long * ulen = (unsigned long *) malloc(_len_ulen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ulen0; _i0++) {
            ulen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = file_looks_utf8(buf,nbytes,ubuf,ulen);
          printf("%d\n", benchRet); 
          free(buf);
          free(ubuf);
          free(ulen);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long nbytes = 10;
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ubuf0 = 100;
          int * ubuf = (int *) malloc(_len_ubuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ubuf0; _i0++) {
            ubuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ulen0 = 100;
          unsigned long * ulen = (unsigned long *) malloc(_len_ulen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ulen0; _i0++) {
            ulen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = file_looks_utf8(buf,nbytes,ubuf,ulen);
          printf("%d\n", benchRet); 
          free(buf);
          free(ubuf);
          free(ulen);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
