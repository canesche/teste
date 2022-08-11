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
typedef  int /*<<< orphan*/  MMKeyCode ;

/* Variables and functions */

MMKeyCode keyCodeForChar(const char c)
{
#if defined(IS_MACOSX)
	/* OS X does not appear to have a built-in function for this, so instead we
	 * have to write our own. */
	static CFMutableDictionaryRef charToCodeDict = NULL;
	CGKeyCode code;
	UniChar character = c;
	CFStringRef charStr = NULL;

	/* Generate table of keycodes and characters. */
	if (charToCodeDict == NULL) {
		size_t i;
		charToCodeDict = CFDictionaryCreateMutable(kCFAllocatorDefault,
		                                           128,
		                                           &kCFCopyStringDictionaryKeyCallBacks,
		                                           NULL);
		if (charToCodeDict == NULL) return UINT16_MAX;

		/* Loop through every keycode (0 - 127) to find its current mapping. */
		for (i = 0; i < 128; ++i) {
			CFStringRef string = createStringForKey((CGKeyCode)i);
			if (string != NULL) {
				CFDictionaryAddValue(charToCodeDict, string, (const void *)i);
				CFRelease(string);
			}
		}
	}

	charStr = CFStringCreateWithCharacters(kCFAllocatorDefault, &character, 1);

	/* Our values may be NULL (0), so we need to use this function. */
	if (!CFDictionaryGetValueIfPresent(charToCodeDict, charStr,
	                                   (const void **)&code)) {
		code = UINT16_MAX; /* Error */
	}

	CFRelease(charStr);
	return (MMKeyCode)code;
#elif defined(IS_WINDOWS)
	return VkKeyScan(c);
#elif defined(USE_X11)
	MMKeyCode code;

	char buf[2];
	buf[0] = c;
	buf[1] = '\0';

	code = XStringToKeysym(buf);
	if (code == NoSymbol) {
		/* Some special keys are apparently not handled properly by
		 * XStringToKeysym() on some systems, so search for them instead in our
		 * mapping table. */
		size_t i;
		const size_t specialCharacterCount =
			sizeof(XSpecialCharacterTable) / sizeof(XSpecialCharacterTable[0]);
		for (i = 0; i < specialCharacterCount; ++i) {
			if (c == XSpecialCharacterTable[i].name) {
				code = XSpecialCharacterTable[i].code;
				break;
			}
		}
	}

	return code;
#endif
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
          const char c = 100;
          int benchRet = keyCodeForChar(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const char c = 255;
          int benchRet = keyCodeForChar(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const char c = 10;
          int benchRet = keyCodeForChar(c);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
