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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ status; scalar_t__ accelerated; } ;

/* Variables and functions */
 scalar_t__ DEVCRYPTO_ACCELERATED ; 
 scalar_t__ DEVCRYPTO_NOT_ACCELERATED ; 
 scalar_t__ DEVCRYPTO_REJECT_SOFTWARE ; 
 scalar_t__ DEVCRYPTO_STATUS_USABLE ; 
 scalar_t__ DEVCRYPTO_USE_SOFTWARE ; 
 TYPE_1__* cipher_driver_info ; 
 int* selected_ciphers ; 
 scalar_t__ use_softdrivers ; 

__attribute__((used)) static int devcrypto_test_cipher(size_t cipher_data_index)
{
    return (cipher_driver_info[cipher_data_index].status == DEVCRYPTO_STATUS_USABLE
            && selected_ciphers[cipher_data_index] == 1
            && (cipher_driver_info[cipher_data_index].accelerated
                    == DEVCRYPTO_ACCELERATED
                || use_softdrivers == DEVCRYPTO_USE_SOFTWARE
                || (cipher_driver_info[cipher_data_index].accelerated
                        != DEVCRYPTO_NOT_ACCELERATED
                    && use_softdrivers == DEVCRYPTO_REJECT_SOFTWARE)));
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
          unsigned long cipher_data_index = 100;
          int benchRet = devcrypto_test_cipher(cipher_data_index);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long cipher_data_index = 255;
          int benchRet = devcrypto_test_cipher(cipher_data_index);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long cipher_data_index = 10;
          int benchRet = devcrypto_test_cipher(cipher_data_index);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
