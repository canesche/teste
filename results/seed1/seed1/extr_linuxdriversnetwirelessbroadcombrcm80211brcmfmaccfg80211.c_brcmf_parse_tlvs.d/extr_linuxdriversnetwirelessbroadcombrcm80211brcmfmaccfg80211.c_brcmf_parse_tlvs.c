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
typedef  scalar_t__ uint ;
typedef  int /*<<< orphan*/  u8 ;
struct brcmf_tlv {int len; scalar_t__ id; } ;

/* Variables and functions */
 int TLV_HDR_LEN ; 

__attribute__((used)) static const struct brcmf_tlv *
brcmf_parse_tlvs(const void *buf, int buflen, uint key)
{
	const struct brcmf_tlv *elt = buf;
	int totlen = buflen;

	/* find tagged parameter */
	while (totlen >= TLV_HDR_LEN) {
		int len = elt->len;

		/* validate remaining totlen */
		if ((elt->id == key) && (totlen >= (len + TLV_HDR_LEN)))
			return elt;

		elt = (struct brcmf_tlv *)((u8 *)elt + (len + TLV_HDR_LEN));
		totlen -= (len + TLV_HDR_LEN);
	}

	return NULL;
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
          int buflen = 100;
          long key = 100;
          int _len_buf0 = 1;
          const void * buf = (const void *) malloc(_len_buf0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = 0;
          }
          const struct brcmf_tlv * benchRet = brcmf_parse_tlvs(buf,buflen,key);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int buflen = 255;
          long key = 255;
          int _len_buf0 = 65025;
          const void * buf = (const void *) malloc(_len_buf0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = 0;
          }
          const struct brcmf_tlv * benchRet = brcmf_parse_tlvs(buf,buflen,key);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int buflen = 10;
          long key = 10;
          int _len_buf0 = 100;
          const void * buf = (const void *) malloc(_len_buf0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = 0;
          }
          const struct brcmf_tlv * benchRet = brcmf_parse_tlvs(buf,buflen,key);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
