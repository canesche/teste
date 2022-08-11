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

__attribute__((used)) static int find_invalid_utf8(const char *buf, int len)
{
	int offset = 0;
	static const unsigned int max_codepoint[] = {
		0x7f, 0x7ff, 0xffff, 0x10ffff
	};

	while (len) {
		unsigned char c = *buf++;
		int bytes, bad_offset;
		unsigned int codepoint;
		unsigned int min_val, max_val;

		len--;
		offset++;

		/* Simple US-ASCII? No worries. */
		if (c < 0x80)
			continue;

		bad_offset = offset-1;

		/*
		 * Count how many more high bits set: that's how
		 * many more bytes this sequence should have.
		 */
		bytes = 0;
		while (c & 0x40) {
			c <<= 1;
			bytes++;
		}

		/*
		 * Must be between 1 and 3 more bytes.  Longer sequences result in
		 * codepoints beyond U+10FFFF, which are guaranteed never to exist.
		 */
		if (bytes < 1 || 3 < bytes)
			return bad_offset;

		/* Do we *have* that many bytes? */
		if (len < bytes)
			return bad_offset;

		/*
		 * Place the encoded bits at the bottom of the value and compute the
		 * valid range.
		 */
		codepoint = (c & 0x7f) >> bytes;
		min_val = max_codepoint[bytes-1] + 1;
		max_val = max_codepoint[bytes];

		offset += bytes;
		len -= bytes;

		/* And verify that they are good continuation bytes */
		do {
			codepoint <<= 6;
			codepoint |= *buf & 0x3f;
			if ((*buf++ & 0xc0) != 0x80)
				return bad_offset;
		} while (--bytes);

		/* Reject codepoints that are out of range for the sequence length. */
		if (codepoint < min_val || codepoint > max_val)
			return bad_offset;
		/* Surrogates are only for UTF-16 and cannot be encoded in UTF-8. */
		if ((codepoint & 0x1ff800) == 0xd800)
			return bad_offset;
		/* U+xxFFFE and U+xxFFFF are guaranteed non-characters. */
		if ((codepoint & 0xfffe) == 0xfffe)
			return bad_offset;
		/* So are anything in the range U+FDD0..U+FDEF. */
		if (codepoint >= 0xfdd0 && codepoint <= 0xfdef)
			return bad_offset;
	}
	return -1;
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
          int len = 100;
          int _len_buf0 = 1;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_invalid_utf8(buf,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_buf0 = 65025;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_invalid_utf8(buf,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_buf0 = 100;
          const char * buf = (const char *) malloc(_len_buf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_invalid_utf8(buf,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
