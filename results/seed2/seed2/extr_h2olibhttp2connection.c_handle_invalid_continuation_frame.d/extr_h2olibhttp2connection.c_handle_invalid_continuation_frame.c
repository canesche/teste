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
typedef  int /*<<< orphan*/  h2o_http2_frame_t ;
typedef  int /*<<< orphan*/  h2o_http2_conn_t ;

/* Variables and functions */
 int H2O_HTTP2_ERROR_PROTOCOL ; 

__attribute__((used)) static int handle_invalid_continuation_frame(h2o_http2_conn_t *conn, h2o_http2_frame_t *frame, const char **err_desc)
{
    *err_desc = "received invalid CONTINUATION frame";
    return H2O_HTTP2_ERROR_PROTOCOL;
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
          int _len_conn0 = 1;
          int * conn = (int *) malloc(_len_conn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame0 = 1;
          int * frame = (int *) malloc(_len_frame0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_err_desc0 = 1;
          const char ** err_desc = (const char **) malloc(_len_err_desc0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_err_desc0; _i0++) {
            int _len_err_desc1 = 1;
            err_desc[_i0] = (const char *) malloc(_len_err_desc1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_err_desc1; _i1++) {
              err_desc[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = handle_invalid_continuation_frame(conn,frame,err_desc);
          printf("%d\n", benchRet); 
          free(conn);
          free(frame);
          for(int i1 = 0; i1 < _len_err_desc0; i1++) {
            int _len_err_desc1 = 1;
              free(err_desc[i1]);
          }
          free(err_desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_conn0 = 65025;
          int * conn = (int *) malloc(_len_conn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame0 = 65025;
          int * frame = (int *) malloc(_len_frame0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_err_desc0 = 65025;
          const char ** err_desc = (const char **) malloc(_len_err_desc0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_err_desc0; _i0++) {
            int _len_err_desc1 = 1;
            err_desc[_i0] = (const char *) malloc(_len_err_desc1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_err_desc1; _i1++) {
              err_desc[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = handle_invalid_continuation_frame(conn,frame,err_desc);
          printf("%d\n", benchRet); 
          free(conn);
          free(frame);
          for(int i1 = 0; i1 < _len_err_desc0; i1++) {
            int _len_err_desc1 = 1;
              free(err_desc[i1]);
          }
          free(err_desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_conn0 = 100;
          int * conn = (int *) malloc(_len_conn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame0 = 100;
          int * frame = (int *) malloc(_len_frame0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_err_desc0 = 100;
          const char ** err_desc = (const char **) malloc(_len_err_desc0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_err_desc0; _i0++) {
            int _len_err_desc1 = 1;
            err_desc[_i0] = (const char *) malloc(_len_err_desc1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_err_desc1; _i1++) {
              err_desc[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = handle_invalid_continuation_frame(conn,frame,err_desc);
          printf("%d\n", benchRet); 
          free(conn);
          free(frame);
          for(int i1 = 0; i1 < _len_err_desc0; i1++) {
            int _len_err_desc1 = 1;
              free(err_desc[i1]);
          }
          free(err_desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
