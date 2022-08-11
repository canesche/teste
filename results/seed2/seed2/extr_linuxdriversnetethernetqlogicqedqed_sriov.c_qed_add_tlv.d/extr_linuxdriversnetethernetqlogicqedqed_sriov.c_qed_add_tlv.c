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
typedef  void u8 ;
typedef  int u16 ;
struct qed_hwfn {int dummy; } ;
struct channel_tlv {int type; int length; } ;

/* Variables and functions */

void *qed_add_tlv(struct qed_hwfn *p_hwfn, u8 **offset, u16 type, u16 length)
{
	struct channel_tlv *tl = (struct channel_tlv *)*offset;

	tl->type = type;
	tl->length = length;

	/* Offset should keep pointing to next TLV (the end of the last) */
	*offset += length;

	/* Return a pointer to the start of the added tlv */
	return *offset - length;
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
          int type = 100;
          int length = 100;
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 1;
          void ** offset = (void **) malloc(_len_offset0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
          }
          void * benchRet = qed_add_tlv(p_hwfn,offset,type,length);
          free(p_hwfn);
          for(int i1 = 0; i1 < _len_offset0; i1++) {
            int _len_offset1 = 1;
              }
          free(offset);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int length = 255;
          int _len_p_hwfn0 = 65025;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 65025;
          void ** offset = (void **) malloc(_len_offset0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
          }
          void * benchRet = qed_add_tlv(p_hwfn,offset,type,length);
          free(p_hwfn);
          for(int i1 = 0; i1 < _len_offset0; i1++) {
            int _len_offset1 = 1;
              }
          free(offset);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int length = 10;
          int _len_p_hwfn0 = 100;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 100;
          void ** offset = (void **) malloc(_len_offset0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
          }
          void * benchRet = qed_add_tlv(p_hwfn,offset,type,length);
          free(p_hwfn);
          for(int i1 = 0; i1 < _len_offset0; i1++) {
            int _len_offset1 = 1;
              }
          free(offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
