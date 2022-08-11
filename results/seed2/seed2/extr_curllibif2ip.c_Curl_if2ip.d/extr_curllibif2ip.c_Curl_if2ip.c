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
typedef  int /*<<< orphan*/  if2ip_result_t ;

/* Variables and functions */
 int /*<<< orphan*/  IF2IP_NOT_FOUND ; 

if2ip_result_t Curl_if2ip(int af, unsigned int remote_scope,
                          unsigned int local_scope_id, const char *interf,
                          char *buf, int buf_size)
{
    (void) af;
    (void) remote_scope;
    (void) local_scope_id;
    (void) interf;
    (void) buf;
    (void) buf_size;
    return IF2IP_NOT_FOUND;
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
          int af = 100;
          unsigned int remote_scope = 100;
          unsigned int local_scope_id = 100;
          int buf_size = 100;
          int _len_interf0 = 1;
          const char * interf = (const char *) malloc(_len_interf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_interf0; _i0++) {
            interf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Curl_if2ip(af,remote_scope,local_scope_id,interf,buf,buf_size);
          printf("%d\n", benchRet); 
          free(interf);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int af = 255;
          unsigned int remote_scope = 255;
          unsigned int local_scope_id = 255;
          int buf_size = 255;
          int _len_interf0 = 65025;
          const char * interf = (const char *) malloc(_len_interf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_interf0; _i0++) {
            interf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Curl_if2ip(af,remote_scope,local_scope_id,interf,buf,buf_size);
          printf("%d\n", benchRet); 
          free(interf);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int af = 10;
          unsigned int remote_scope = 10;
          unsigned int local_scope_id = 10;
          int buf_size = 10;
          int _len_interf0 = 100;
          const char * interf = (const char *) malloc(_len_interf0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_interf0; _i0++) {
            interf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Curl_if2ip(af,remote_scope,local_scope_id,interf,buf,buf_size);
          printf("%d\n", benchRet); 
          free(interf);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
