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

__attribute__((used)) static const char *pkcs_1_v1_5_decode_emsa(const unsigned char *msg,
						unsigned long  msglen,
						unsigned long  modulus_bitlen,
						unsigned long *outlen)
{
	unsigned long modulus_len, ps_len, i;

	modulus_len = (modulus_bitlen >> 3) + (modulus_bitlen & 7 ? 1 : 0);

	/* test message size */
	if ((msglen > modulus_len) || (modulus_len < 11))
		return NULL;

	/* separate encoded message */
	if (msg[0] != 0x00 || msg[1] != 0x01)
		return NULL;

	for (i = 2; i < modulus_len - 1; i++)
		if (msg[i] != 0xFF)
			break;

	/* separator check */
	if (msg[i] != 0)
		/* There was no octet with hexadecimal value 0x00
		to separate ps from m. */
		return NULL;

	ps_len = i - 2;

	*outlen = (msglen - (2 + ps_len + 1));

	return msg + 2 + ps_len + 1;
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
          unsigned long msglen = 100;
          unsigned long modulus_bitlen = 100;
          int _len_msg0 = 1;
          const unsigned char * msg = (const unsigned char *) malloc(_len_msg0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outlen0 = 1;
          unsigned long * outlen = (unsigned long *) malloc(_len_outlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_outlen0; _i0++) {
            outlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = pkcs_1_v1_5_decode_emsa(msg,msglen,modulus_bitlen,outlen);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(msg);
          free(outlen);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long msglen = 255;
          unsigned long modulus_bitlen = 255;
          int _len_msg0 = 65025;
          const unsigned char * msg = (const unsigned char *) malloc(_len_msg0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outlen0 = 65025;
          unsigned long * outlen = (unsigned long *) malloc(_len_outlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_outlen0; _i0++) {
            outlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = pkcs_1_v1_5_decode_emsa(msg,msglen,modulus_bitlen,outlen);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(msg);
          free(outlen);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long msglen = 10;
          unsigned long modulus_bitlen = 10;
          int _len_msg0 = 100;
          const unsigned char * msg = (const unsigned char *) malloc(_len_msg0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outlen0 = 100;
          unsigned long * outlen = (unsigned long *) malloc(_len_outlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_outlen0; _i0++) {
            outlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = pkcs_1_v1_5_decode_emsa(msg,msglen,modulus_bitlen,outlen);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(msg);
          free(outlen);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
