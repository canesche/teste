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
typedef  int u8 ;

/* Variables and functions */

__attribute__((used)) static int lbs_add_wpa_tlv(u8 *tlv, const u8 *ie, u8 ie_len)
{
	size_t tlv_len;

	/*
	 * We need just convert an IE to an TLV. IEs use u8 for the header,
	 *   u8      type
	 *   u8      len
	 *   u8[]    data
	 * but TLVs use __le16 instead:
	 *   __le16  type
	 *   __le16  len
	 *   u8[]    data
	 */
	*tlv++ = *ie++;
	*tlv++ = 0;
	tlv_len = *tlv++ = *ie++;
	*tlv++ = 0;
	while (tlv_len--)
		*tlv++ = *ie++;
	/* the TLV is two bytes larger than the IE */
	return ie_len + 2;
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
          int ie_len = 100;
          int _len_tlv0 = 1;
          int * tlv = (int *) malloc(_len_tlv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tlv0; _i0++) {
            tlv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ie0 = 1;
          const int * ie = (const int *) malloc(_len_ie0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ie0; _i0++) {
            ie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lbs_add_wpa_tlv(tlv,ie,ie_len);
          printf("%d\n", benchRet); 
          free(tlv);
          free(ie);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ie_len = 255;
          int _len_tlv0 = 65025;
          int * tlv = (int *) malloc(_len_tlv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tlv0; _i0++) {
            tlv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ie0 = 65025;
          const int * ie = (const int *) malloc(_len_ie0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ie0; _i0++) {
            ie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lbs_add_wpa_tlv(tlv,ie,ie_len);
          printf("%d\n", benchRet); 
          free(tlv);
          free(ie);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ie_len = 10;
          int _len_tlv0 = 100;
          int * tlv = (int *) malloc(_len_tlv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tlv0; _i0++) {
            tlv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ie0 = 100;
          const int * ie = (const int *) malloc(_len_ie0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ie0; _i0++) {
            ie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lbs_add_wpa_tlv(tlv,ie,ie_len);
          printf("%d\n", benchRet); 
          free(tlv);
          free(ie);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
