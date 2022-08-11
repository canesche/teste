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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_2__* aead; } ;
struct TYPE_10__ {TYPE_3__ enc; } ;
struct TYPE_11__ {TYPE_4__ traffic_protection; } ;
typedef  TYPE_5__ ptls_t ;
struct TYPE_8__ {TYPE_1__* algo; } ;
struct TYPE_7__ {size_t tag_size; } ;

/* Variables and functions */

size_t ptls_get_record_overhead(ptls_t *tls)
{
    return 6 + tls->traffic_protection.enc.aead->algo->tag_size;
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
          int _len_tls0 = 1;
          struct TYPE_11__ * tls = (struct TYPE_11__ *) malloc(_len_tls0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_tls0; _i0++) {
              int _len_tls__i0__traffic_protection_enc_aead0 = 1;
          tls[_i0].traffic_protection.enc.aead = (struct TYPE_8__ *) malloc(_len_tls__i0__traffic_protection_enc_aead0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_tls__i0__traffic_protection_enc_aead0; _j0++) {
              int _len_tls__i0__traffic_protection_enc_aead_algo0 = 1;
          tls[_i0].traffic_protection.enc.aead->algo = (struct TYPE_7__ *) malloc(_len_tls__i0__traffic_protection_enc_aead_algo0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_tls__i0__traffic_protection_enc_aead_algo0; _j0++) {
            tls[_i0].traffic_protection.enc.aead->algo->tag_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = ptls_get_record_overhead(tls);
          printf("%lu\n", benchRet); 
          free(tls);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tls0 = 65025;
          struct TYPE_11__ * tls = (struct TYPE_11__ *) malloc(_len_tls0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_tls0; _i0++) {
              int _len_tls__i0__traffic_protection_enc_aead0 = 1;
          tls[_i0].traffic_protection.enc.aead = (struct TYPE_8__ *) malloc(_len_tls__i0__traffic_protection_enc_aead0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_tls__i0__traffic_protection_enc_aead0; _j0++) {
              int _len_tls__i0__traffic_protection_enc_aead_algo0 = 1;
          tls[_i0].traffic_protection.enc.aead->algo = (struct TYPE_7__ *) malloc(_len_tls__i0__traffic_protection_enc_aead_algo0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_tls__i0__traffic_protection_enc_aead_algo0; _j0++) {
            tls[_i0].traffic_protection.enc.aead->algo->tag_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = ptls_get_record_overhead(tls);
          printf("%lu\n", benchRet); 
          free(tls);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tls0 = 100;
          struct TYPE_11__ * tls = (struct TYPE_11__ *) malloc(_len_tls0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_tls0; _i0++) {
              int _len_tls__i0__traffic_protection_enc_aead0 = 1;
          tls[_i0].traffic_protection.enc.aead = (struct TYPE_8__ *) malloc(_len_tls__i0__traffic_protection_enc_aead0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_tls__i0__traffic_protection_enc_aead0; _j0++) {
              int _len_tls__i0__traffic_protection_enc_aead_algo0 = 1;
          tls[_i0].traffic_protection.enc.aead->algo = (struct TYPE_7__ *) malloc(_len_tls__i0__traffic_protection_enc_aead_algo0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_tls__i0__traffic_protection_enc_aead_algo0; _j0++) {
            tls[_i0].traffic_protection.enc.aead->algo->tag_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = ptls_get_record_overhead(tls);
          printf("%lu\n", benchRet); 
          free(tls);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
