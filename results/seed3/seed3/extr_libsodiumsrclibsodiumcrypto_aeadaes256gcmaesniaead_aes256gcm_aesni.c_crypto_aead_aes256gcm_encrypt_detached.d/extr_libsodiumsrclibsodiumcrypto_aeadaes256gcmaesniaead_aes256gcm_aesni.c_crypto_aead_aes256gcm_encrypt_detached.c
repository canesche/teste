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
 int /*<<< orphan*/  ENOSYS ; 
 int /*<<< orphan*/  errno ; 

int
crypto_aead_aes256gcm_encrypt_detached(unsigned char *c,
                                       unsigned char *mac,
                                       unsigned long long *maclen_p,
                                       const unsigned char *m,
                                       unsigned long long mlen,
                                       const unsigned char *ad,
                                       unsigned long long adlen,
                                       const unsigned char *nsec,
                                       const unsigned char *npub,
                                       const unsigned char *k)
{
    errno = ENOSYS;
    return -1;
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
          unsigned long long mlen = 100;
          unsigned long long adlen = 100;
          int _len_c0 = 1;
          unsigned char * c = (unsigned char *) malloc(_len_c0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mac0 = 1;
          unsigned char * mac = (unsigned char *) malloc(_len_mac0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maclen_p0 = 1;
          unsigned long long * maclen_p = (unsigned long long *) malloc(_len_maclen_p0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_maclen_p0; _i0++) {
            maclen_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 1;
          const unsigned char * m = (const unsigned char *) malloc(_len_m0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ad0 = 1;
          const unsigned char * ad = (const unsigned char *) malloc(_len_ad0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_ad0; _i0++) {
            ad[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nsec0 = 1;
          const unsigned char * nsec = (const unsigned char *) malloc(_len_nsec0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_nsec0; _i0++) {
            nsec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_npub0 = 1;
          const unsigned char * npub = (const unsigned char *) malloc(_len_npub0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_npub0; _i0++) {
            npub[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k0 = 1;
          const unsigned char * k = (const unsigned char *) malloc(_len_k0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = crypto_aead_aes256gcm_encrypt_detached(c,mac,maclen_p,m,mlen,ad,adlen,nsec,npub,k);
          printf("%d\n", benchRet); 
          free(c);
          free(mac);
          free(maclen_p);
          free(m);
          free(ad);
          free(nsec);
          free(npub);
          free(k);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long long mlen = 255;
          unsigned long long adlen = 255;
          int _len_c0 = 65025;
          unsigned char * c = (unsigned char *) malloc(_len_c0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mac0 = 65025;
          unsigned char * mac = (unsigned char *) malloc(_len_mac0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maclen_p0 = 65025;
          unsigned long long * maclen_p = (unsigned long long *) malloc(_len_maclen_p0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_maclen_p0; _i0++) {
            maclen_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 65025;
          const unsigned char * m = (const unsigned char *) malloc(_len_m0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ad0 = 65025;
          const unsigned char * ad = (const unsigned char *) malloc(_len_ad0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_ad0; _i0++) {
            ad[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nsec0 = 65025;
          const unsigned char * nsec = (const unsigned char *) malloc(_len_nsec0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_nsec0; _i0++) {
            nsec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_npub0 = 65025;
          const unsigned char * npub = (const unsigned char *) malloc(_len_npub0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_npub0; _i0++) {
            npub[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k0 = 65025;
          const unsigned char * k = (const unsigned char *) malloc(_len_k0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = crypto_aead_aes256gcm_encrypt_detached(c,mac,maclen_p,m,mlen,ad,adlen,nsec,npub,k);
          printf("%d\n", benchRet); 
          free(c);
          free(mac);
          free(maclen_p);
          free(m);
          free(ad);
          free(nsec);
          free(npub);
          free(k);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long long mlen = 10;
          unsigned long long adlen = 10;
          int _len_c0 = 100;
          unsigned char * c = (unsigned char *) malloc(_len_c0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mac0 = 100;
          unsigned char * mac = (unsigned char *) malloc(_len_mac0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maclen_p0 = 100;
          unsigned long long * maclen_p = (unsigned long long *) malloc(_len_maclen_p0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_maclen_p0; _i0++) {
            maclen_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 100;
          const unsigned char * m = (const unsigned char *) malloc(_len_m0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ad0 = 100;
          const unsigned char * ad = (const unsigned char *) malloc(_len_ad0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_ad0; _i0++) {
            ad[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nsec0 = 100;
          const unsigned char * nsec = (const unsigned char *) malloc(_len_nsec0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_nsec0; _i0++) {
            nsec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_npub0 = 100;
          const unsigned char * npub = (const unsigned char *) malloc(_len_npub0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_npub0; _i0++) {
            npub[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k0 = 100;
          const unsigned char * k = (const unsigned char *) malloc(_len_k0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = crypto_aead_aes256gcm_encrypt_detached(c,mac,maclen_p,m,mlen,ad,adlen,nsec,npub,k);
          printf("%d\n", benchRet); 
          free(c);
          free(mac);
          free(maclen_p);
          free(m);
          free(ad);
          free(nsec);
          free(npub);
          free(k);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
