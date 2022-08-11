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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned int* xkey; } ;
typedef  TYPE_1__ rc2_key ;

/* Variables and functions */

void rc2_ecb_encrypt( const unsigned char *plain,
                            unsigned char *cipher,
                            rc2_key *rc2)
{
    unsigned *xkey;
    unsigned x76, x54, x32, x10, i;

    xkey = rc2->xkey;

    x76 = ((unsigned)plain[7] << 8) + (unsigned)plain[6];
    x54 = ((unsigned)plain[5] << 8) + (unsigned)plain[4];
    x32 = ((unsigned)plain[3] << 8) + (unsigned)plain[2];
    x10 = ((unsigned)plain[1] << 8) + (unsigned)plain[0];

    for (i = 0; i < 16; i++) {
        x10 = (x10 + (x32 & ~x76) + (x54 & x76) + xkey[4*i+0]) & 0xFFFF;
        x10 = ((x10 << 1) | (x10 >> 15));

        x32 = (x32 + (x54 & ~x10) + (x76 & x10) + xkey[4*i+1]) & 0xFFFF;
        x32 = ((x32 << 2) | (x32 >> 14));

        x54 = (x54 + (x76 & ~x32) + (x10 & x32) + xkey[4*i+2]) & 0xFFFF;
        x54 = ((x54 << 3) | (x54 >> 13));

        x76 = (x76 + (x10 & ~x54) + (x32 & x54) + xkey[4*i+3]) & 0xFFFF;
        x76 = ((x76 << 5) | (x76 >> 11));

        if (i == 4 || i == 10) {
            x10 = (x10 + xkey[x76 & 63]) & 0xFFFF;
            x32 = (x32 + xkey[x10 & 63]) & 0xFFFF;
            x54 = (x54 + xkey[x32 & 63]) & 0xFFFF;
            x76 = (x76 + xkey[x54 & 63]) & 0xFFFF;
        }
    }

    cipher[0] = (unsigned char)x10;
    cipher[1] = (unsigned char)(x10 >> 8);
    cipher[2] = (unsigned char)x32;
    cipher[3] = (unsigned char)(x32 >> 8);
    cipher[4] = (unsigned char)x54;
    cipher[5] = (unsigned char)(x54 >> 8);
    cipher[6] = (unsigned char)x76;
    cipher[7] = (unsigned char)(x76 >> 8);
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
          int _len_plain0 = 1;
          const unsigned char * plain = (const unsigned char *) malloc(_len_plain0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_plain0; _i0++) {
            plain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cipher0 = 1;
          unsigned char * cipher = (unsigned char *) malloc(_len_cipher0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_cipher0; _i0++) {
            cipher[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc20 = 1;
          struct TYPE_3__ * rc2 = (struct TYPE_3__ *) malloc(_len_rc20*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc20; _i0++) {
              int _len_rc2__i0__xkey0 = 1;
          rc2[_i0].xkey = (unsigned int *) malloc(_len_rc2__i0__xkey0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_rc2__i0__xkey0; _j0++) {
            rc2[_i0].xkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rc2_ecb_encrypt(plain,cipher,rc2);
          free(plain);
          free(cipher);
          for(int _aux = 0; _aux < _len_rc20; _aux++) {
          free(rc2[_aux].xkey);
          }
          free(rc2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_plain0 = 65025;
          const unsigned char * plain = (const unsigned char *) malloc(_len_plain0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_plain0; _i0++) {
            plain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cipher0 = 65025;
          unsigned char * cipher = (unsigned char *) malloc(_len_cipher0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_cipher0; _i0++) {
            cipher[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc20 = 65025;
          struct TYPE_3__ * rc2 = (struct TYPE_3__ *) malloc(_len_rc20*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc20; _i0++) {
              int _len_rc2__i0__xkey0 = 1;
          rc2[_i0].xkey = (unsigned int *) malloc(_len_rc2__i0__xkey0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_rc2__i0__xkey0; _j0++) {
            rc2[_i0].xkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rc2_ecb_encrypt(plain,cipher,rc2);
          free(plain);
          free(cipher);
          for(int _aux = 0; _aux < _len_rc20; _aux++) {
          free(rc2[_aux].xkey);
          }
          free(rc2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_plain0 = 100;
          const unsigned char * plain = (const unsigned char *) malloc(_len_plain0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_plain0; _i0++) {
            plain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cipher0 = 100;
          unsigned char * cipher = (unsigned char *) malloc(_len_cipher0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_cipher0; _i0++) {
            cipher[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc20 = 100;
          struct TYPE_3__ * rc2 = (struct TYPE_3__ *) malloc(_len_rc20*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc20; _i0++) {
              int _len_rc2__i0__xkey0 = 1;
          rc2[_i0].xkey = (unsigned int *) malloc(_len_rc2__i0__xkey0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_rc2__i0__xkey0; _j0++) {
            rc2[_i0].xkey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rc2_ecb_encrypt(plain,cipher,rc2);
          free(plain);
          free(cipher);
          for(int _aux = 0; _aux < _len_rc20; _aux++) {
          free(rc2[_aux].xkey);
          }
          free(rc2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
