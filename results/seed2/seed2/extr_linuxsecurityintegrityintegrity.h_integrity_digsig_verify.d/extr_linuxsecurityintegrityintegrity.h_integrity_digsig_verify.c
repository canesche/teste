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
 int EOPNOTSUPP ; 

__attribute__((used)) static inline int integrity_digsig_verify(const unsigned int id,
					  const char *sig, int siglen,
					  const char *digest, int digestlen)
{
	return -EOPNOTSUPP;
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
          const unsigned int id = 100;
          int siglen = 100;
          int digestlen = 100;
          int _len_sig0 = 1;
          const char * sig = (const char *) malloc(_len_sig0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_sig0; _i0++) {
            sig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_digest0 = 1;
          const char * digest = (const char *) malloc(_len_digest0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_digest0; _i0++) {
            digest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = integrity_digsig_verify(id,sig,siglen,digest,digestlen);
          printf("%d\n", benchRet); 
          free(sig);
          free(digest);
        
        break;
    }
    // big-arr
    case 1:
    {
          const unsigned int id = 255;
          int siglen = 255;
          int digestlen = 255;
          int _len_sig0 = 65025;
          const char * sig = (const char *) malloc(_len_sig0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_sig0; _i0++) {
            sig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_digest0 = 65025;
          const char * digest = (const char *) malloc(_len_digest0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_digest0; _i0++) {
            digest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = integrity_digsig_verify(id,sig,siglen,digest,digestlen);
          printf("%d\n", benchRet); 
          free(sig);
          free(digest);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const unsigned int id = 10;
          int siglen = 10;
          int digestlen = 10;
          int _len_sig0 = 100;
          const char * sig = (const char *) malloc(_len_sig0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_sig0; _i0++) {
            sig[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_digest0 = 100;
          const char * digest = (const char *) malloc(_len_digest0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_digest0; _i0++) {
            digest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = integrity_digsig_verify(id,sig,siglen,digest,digestlen);
          printf("%d\n", benchRet); 
          free(sig);
          free(digest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
