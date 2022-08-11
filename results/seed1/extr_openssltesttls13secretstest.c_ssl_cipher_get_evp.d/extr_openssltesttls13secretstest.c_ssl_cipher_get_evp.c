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
typedef  int /*<<< orphan*/  SSL_SESSION ;
typedef  int /*<<< orphan*/  SSL_COMP ;
typedef  int /*<<< orphan*/  EVP_MD ;
typedef  int /*<<< orphan*/  EVP_CIPHER ;

/* Variables and functions */

int ssl_cipher_get_evp(const SSL_SESSION *s, const EVP_CIPHER **enc,
                       const EVP_MD **md, int *mac_pkey_type,
                       size_t *mac_secret_size, SSL_COMP **comp, int use_etm)

{
    return 0;
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
          int use_etm = 100;
          int _len_s0 = 1;
          const int * s = (const int *) malloc(_len_s0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc0 = 1;
          const int ** enc = (const int **) malloc(_len_enc0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
            int _len_enc1 = 1;
            enc[_i0] = (const int *) malloc(_len_enc1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_enc1; _i1++) {
              enc[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_md0 = 1;
          const int ** md = (const int **) malloc(_len_md0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            int _len_md1 = 1;
            md[_i0] = (const int *) malloc(_len_md1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_md1; _i1++) {
              md[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_mac_pkey_type0 = 1;
          int * mac_pkey_type = (int *) malloc(_len_mac_pkey_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac_pkey_type0; _i0++) {
            mac_pkey_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mac_secret_size0 = 1;
          unsigned long * mac_secret_size = (unsigned long *) malloc(_len_mac_secret_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mac_secret_size0; _i0++) {
            mac_secret_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp0 = 1;
          int ** comp = (int **) malloc(_len_comp0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            int _len_comp1 = 1;
            comp[_i0] = (int *) malloc(_len_comp1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_comp1; _i1++) {
              comp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ssl_cipher_get_evp(s,enc,md,mac_pkey_type,mac_secret_size,comp,use_etm);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_enc0; i1++) {
            int _len_enc1 = 1;
              free(enc[i1]);
          }
          free(enc);
          for(int i1 = 0; i1 < _len_md0; i1++) {
            int _len_md1 = 1;
              free(md[i1]);
          }
          free(md);
          free(mac_pkey_type);
          free(mac_secret_size);
          for(int i1 = 0; i1 < _len_comp0; i1++) {
            int _len_comp1 = 1;
              free(comp[i1]);
          }
          free(comp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int use_etm = 255;
          int _len_s0 = 65025;
          const int * s = (const int *) malloc(_len_s0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc0 = 65025;
          const int ** enc = (const int **) malloc(_len_enc0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
            int _len_enc1 = 1;
            enc[_i0] = (const int *) malloc(_len_enc1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_enc1; _i1++) {
              enc[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_md0 = 65025;
          const int ** md = (const int **) malloc(_len_md0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            int _len_md1 = 1;
            md[_i0] = (const int *) malloc(_len_md1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_md1; _i1++) {
              md[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_mac_pkey_type0 = 65025;
          int * mac_pkey_type = (int *) malloc(_len_mac_pkey_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac_pkey_type0; _i0++) {
            mac_pkey_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mac_secret_size0 = 65025;
          unsigned long * mac_secret_size = (unsigned long *) malloc(_len_mac_secret_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mac_secret_size0; _i0++) {
            mac_secret_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp0 = 65025;
          int ** comp = (int **) malloc(_len_comp0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            int _len_comp1 = 1;
            comp[_i0] = (int *) malloc(_len_comp1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_comp1; _i1++) {
              comp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ssl_cipher_get_evp(s,enc,md,mac_pkey_type,mac_secret_size,comp,use_etm);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_enc0; i1++) {
            int _len_enc1 = 1;
              free(enc[i1]);
          }
          free(enc);
          for(int i1 = 0; i1 < _len_md0; i1++) {
            int _len_md1 = 1;
              free(md[i1]);
          }
          free(md);
          free(mac_pkey_type);
          free(mac_secret_size);
          for(int i1 = 0; i1 < _len_comp0; i1++) {
            int _len_comp1 = 1;
              free(comp[i1]);
          }
          free(comp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int use_etm = 10;
          int _len_s0 = 100;
          const int * s = (const int *) malloc(_len_s0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc0 = 100;
          const int ** enc = (const int **) malloc(_len_enc0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
            int _len_enc1 = 1;
            enc[_i0] = (const int *) malloc(_len_enc1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_enc1; _i1++) {
              enc[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_md0 = 100;
          const int ** md = (const int **) malloc(_len_md0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            int _len_md1 = 1;
            md[_i0] = (const int *) malloc(_len_md1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_md1; _i1++) {
              md[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_mac_pkey_type0 = 100;
          int * mac_pkey_type = (int *) malloc(_len_mac_pkey_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac_pkey_type0; _i0++) {
            mac_pkey_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mac_secret_size0 = 100;
          unsigned long * mac_secret_size = (unsigned long *) malloc(_len_mac_secret_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mac_secret_size0; _i0++) {
            mac_secret_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp0 = 100;
          int ** comp = (int **) malloc(_len_comp0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            int _len_comp1 = 1;
            comp[_i0] = (int *) malloc(_len_comp1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_comp1; _i1++) {
              comp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ssl_cipher_get_evp(s,enc,md,mac_pkey_type,mac_secret_size,comp,use_etm);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_enc0; i1++) {
            int _len_enc1 = 1;
              free(enc[i1]);
          }
          free(enc);
          for(int i1 = 0; i1 < _len_md0; i1++) {
            int _len_md1 = 1;
              free(md[i1]);
          }
          free(md);
          free(mac_pkey_type);
          free(mac_secret_size);
          for(int i1 = 0; i1 < _len_comp0; i1++) {
            int _len_comp1 = 1;
              free(comp[i1]);
          }
          free(comp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
