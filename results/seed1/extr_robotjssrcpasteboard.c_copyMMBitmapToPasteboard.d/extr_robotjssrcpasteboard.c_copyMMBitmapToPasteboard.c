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
typedef  int /*<<< orphan*/  MMPasteError ;
typedef  int /*<<< orphan*/  MMBitmapRef ;

/* Variables and functions */

MMPasteError copyMMBitmapToPasteboard(MMBitmapRef bitmap)
{
#if defined(IS_MACOSX)
	PasteboardRef clipboard;

	size_t len;
	uint8_t *pngbuf;
	CFDataRef data;
	OSStatus err;

	if (PasteboardCreate(kPasteboardClipboard, &clipboard) != noErr) {
		return kMMPasteOpenError;
	}

	if (PasteboardClear(clipboard) != noErr) {
		CFRelease(clipboard);
		return kMMPasteClearError;
	}

	pngbuf = createPNGData(bitmap, &len);
	if (pngbuf == NULL) {
		CFRelease(clipboard);
		return kMMPasteDataError;
	}

	data = CFDataCreateWithBytesNoCopy(kCFAllocatorDefault, pngbuf, len,
	                                   kCFAllocatorNull);
	if (data == NULL) {
		CFRelease(clipboard);
		free(pngbuf);
		return kMMPasteDataError;
	}

	err = PasteboardPutItemFlavor(clipboard, bitmap, kUTTypePNG, data, 0);
	CFRelease(data);
	CFRelease(clipboard);
	free(pngbuf);
	return (err == noErr) ? kMMPasteNoError : kMMPastePasteError;
#elif defined(IS_WINDOWS)
	MMPasteError ret = kMMPasteNoError;
	uint8_t *bmpData;
	size_t len;
	HGLOBAL handle;

	if (!OpenClipboard(NULL)) return kMMPasteOpenError;
	if (!EmptyClipboard()) return kMMPasteClearError;

	bmpData = createBitmapData(bitmap, &len);
	if (bmpData == NULL) return kMMPasteDataError;

	/* CF_DIB does not include the BITMAPFILEHEADER struct (and displays a
	 * cryptic error if it is included). */
	len -= sizeof(BITMAPFILEHEADER);

	/* SetClipboardData() needs a "handle", not just a buffer, so we have to
	 * allocate one with GlobalAlloc(). */
	if ((handle = GlobalAlloc(GMEM_MOVEABLE, len)) == NULL) {
		CloseClipboard();
		free(bmpData);
		return kMMPasteDataError;
	}

	memcpy(GlobalLock(handle), bmpData + sizeof(BITMAPFILEHEADER), len);
	GlobalUnlock(handle);
	free(bmpData);

	if (SetClipboardData(CF_DIB, handle) == NULL) {
		ret = kMMPastePasteError;
	}

	CloseClipboard();
	GlobalFree(handle);
	return ret;
#elif defined(USE_X11)
	/* TODO (X11's clipboard is _weird_.) */
	return kMMPasteUnsupportedError;
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
          int bitmap = 100;
          int benchRet = copyMMBitmapToPasteboard(bitmap);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int bitmap = 255;
          int benchRet = copyMMBitmapToPasteboard(bitmap);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bitmap = 10;
          int benchRet = copyMMBitmapToPasteboard(bitmap);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
