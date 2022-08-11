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
typedef  int /*<<< orphan*/  cbc_handles ;

/* Variables and functions */
 size_t AES_CBC_128 ; 
 size_t AES_CBC_192 ; 
 size_t AES_CBC_256 ; 
#define  NID_aes_128_cbc 130 
#define  NID_aes_192_cbc 129 
#define  NID_aes_256_cbc 128 
 int /*<<< orphan*/ * cbc_handle ; 

__attribute__((used)) static cbc_handles *get_cipher_handle(int nid)
{
    switch (nid) {
    case NID_aes_128_cbc:
        return &cbc_handle[AES_CBC_128];
    case NID_aes_192_cbc:
        return &cbc_handle[AES_CBC_192];
    case NID_aes_256_cbc:
        return &cbc_handle[AES_CBC_256];
    default:
        return NULL;
    }
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
          int nid = 100;
          int * benchRet = get_cipher_handle(nid);
          printf("%d\n", (*benchRet)); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int nid = 255;
          int * benchRet = get_cipher_handle(nid);
          printf("%d\n", (*benchRet)); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nid = 10;
          int * benchRet = get_cipher_handle(nid);
          printf("%d\n", (*benchRet)); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
