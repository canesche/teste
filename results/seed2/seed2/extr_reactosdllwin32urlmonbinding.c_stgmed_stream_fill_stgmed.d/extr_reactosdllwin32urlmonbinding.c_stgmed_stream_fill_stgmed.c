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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  stgmed_obj_t ;
struct TYPE_9__ {TYPE_2__* buf; int /*<<< orphan*/  IStream_iface; } ;
struct TYPE_6__ {int /*<<< orphan*/ * pstm; } ;
struct TYPE_8__ {int /*<<< orphan*/ * pUnkForRelease; TYPE_1__ u; int /*<<< orphan*/  tymed; } ;
struct TYPE_7__ {int /*<<< orphan*/  IUnknown_iface; } ;
typedef  TYPE_3__ STGMEDIUM ;
typedef  TYPE_4__ ProtocolStream ;
typedef  int /*<<< orphan*/  HRESULT ;

/* Variables and functions */
 int /*<<< orphan*/  S_OK ; 
 int /*<<< orphan*/  TYMED_ISTREAM ; 

__attribute__((used)) static HRESULT stgmed_stream_fill_stgmed(stgmed_obj_t *obj, STGMEDIUM *stgmed)
{
    ProtocolStream *stream = (ProtocolStream*)obj;

    stgmed->tymed = TYMED_ISTREAM;
    stgmed->u.pstm = &stream->IStream_iface;
    stgmed->pUnkForRelease = &stream->buf->IUnknown_iface;

    return S_OK;
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
          int _len_obj0 = 1;
          int * obj = (int *) malloc(_len_obj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stgmed0 = 1;
          struct TYPE_8__ * stgmed = (struct TYPE_8__ *) malloc(_len_stgmed0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_stgmed0; _i0++) {
              int _len_stgmed__i0__pUnkForRelease0 = 1;
          stgmed[_i0].pUnkForRelease = (int *) malloc(_len_stgmed__i0__pUnkForRelease0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stgmed__i0__pUnkForRelease0; _j0++) {
            stgmed[_i0].pUnkForRelease[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stgmed__i0__u_pstm0 = 1;
          stgmed[_i0].u.pstm = (int *) malloc(_len_stgmed__i0__u_pstm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stgmed__i0__u_pstm0; _j0++) {
            stgmed[_i0].u.pstm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stgmed[_i0].tymed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stgmed_stream_fill_stgmed(obj,stgmed);
          printf("%d\n", benchRet); 
          free(obj);
          for(int _aux = 0; _aux < _len_stgmed0; _aux++) {
          free(stgmed[_aux].pUnkForRelease);
          }
          free(stgmed);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_obj0 = 65025;
          int * obj = (int *) malloc(_len_obj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stgmed0 = 65025;
          struct TYPE_8__ * stgmed = (struct TYPE_8__ *) malloc(_len_stgmed0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_stgmed0; _i0++) {
              int _len_stgmed__i0__pUnkForRelease0 = 1;
          stgmed[_i0].pUnkForRelease = (int *) malloc(_len_stgmed__i0__pUnkForRelease0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stgmed__i0__pUnkForRelease0; _j0++) {
            stgmed[_i0].pUnkForRelease[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stgmed__i0__u_pstm0 = 1;
          stgmed[_i0].u.pstm = (int *) malloc(_len_stgmed__i0__u_pstm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stgmed__i0__u_pstm0; _j0++) {
            stgmed[_i0].u.pstm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stgmed[_i0].tymed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stgmed_stream_fill_stgmed(obj,stgmed);
          printf("%d\n", benchRet); 
          free(obj);
          for(int _aux = 0; _aux < _len_stgmed0; _aux++) {
          free(stgmed[_aux].pUnkForRelease);
          }
          free(stgmed);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_obj0 = 100;
          int * obj = (int *) malloc(_len_obj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stgmed0 = 100;
          struct TYPE_8__ * stgmed = (struct TYPE_8__ *) malloc(_len_stgmed0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_stgmed0; _i0++) {
              int _len_stgmed__i0__pUnkForRelease0 = 1;
          stgmed[_i0].pUnkForRelease = (int *) malloc(_len_stgmed__i0__pUnkForRelease0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stgmed__i0__pUnkForRelease0; _j0++) {
            stgmed[_i0].pUnkForRelease[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stgmed__i0__u_pstm0 = 1;
          stgmed[_i0].u.pstm = (int *) malloc(_len_stgmed__i0__u_pstm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stgmed__i0__u_pstm0; _j0++) {
            stgmed[_i0].u.pstm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stgmed[_i0].tymed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stgmed_stream_fill_stgmed(obj,stgmed);
          printf("%d\n", benchRet); 
          free(obj);
          for(int _aux = 0; _aux < _len_stgmed0; _aux++) {
          free(stgmed[_aux].pUnkForRelease);
          }
          free(stgmed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
