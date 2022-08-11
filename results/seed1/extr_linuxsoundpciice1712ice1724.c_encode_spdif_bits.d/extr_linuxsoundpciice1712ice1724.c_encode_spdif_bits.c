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
struct snd_aes_iec958 {int* status; } ;

/* Variables and functions */
 int IEC958_AES0_CON_EMPHASIS ; 
 int IEC958_AES0_CON_EMPHASIS_5015 ; 
 int IEC958_AES0_PRO_EMPHASIS ; 
 int IEC958_AES0_PRO_EMPHASIS_5015 ; 
 int IEC958_AES0_PRO_FS ; 
#define  IEC958_AES0_PRO_FS_32000 129 
#define  IEC958_AES0_PRO_FS_44100 128 
 int IEC958_AES3_CON_FS ; 

__attribute__((used)) static unsigned int encode_spdif_bits(struct snd_aes_iec958 *diga)
{
	unsigned int val, rbits;

	val = diga->status[0] & 0x03; /* professional, non-audio */
	if (val & 0x01) {
		/* professional */
		if ((diga->status[0] & IEC958_AES0_PRO_EMPHASIS) ==
		    IEC958_AES0_PRO_EMPHASIS_5015)
			val |= 1U << 3;
		rbits = (diga->status[4] >> 3) & 0x0f;
		if (rbits) {
			switch (rbits) {
			case 2: val |= 5 << 12; break; /* 96k */
			case 3: val |= 6 << 12; break; /* 192k */
			case 10: val |= 4 << 12; break; /* 88.2k */
			case 11: val |= 7 << 12; break; /* 176.4k */
			}
		} else {
			switch (diga->status[0] & IEC958_AES0_PRO_FS) {
			case IEC958_AES0_PRO_FS_44100:
				break;
			case IEC958_AES0_PRO_FS_32000:
				val |= 3U << 12;
				break;
			default:
				val |= 2U << 12;
				break;
			}
		}
	} else {
		/* consumer */
		val |= diga->status[1] & 0x04; /* copyright */
		if ((diga->status[0] & IEC958_AES0_CON_EMPHASIS) ==
		    IEC958_AES0_CON_EMPHASIS_5015)
			val |= 1U << 3;
		val |= (unsigned int)(diga->status[1] & 0x3f) << 4; /* category */
		val |= (unsigned int)(diga->status[3] & IEC958_AES3_CON_FS) << 12; /* fs */
	}
	return val;
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
          int _len_diga0 = 1;
          struct snd_aes_iec958 * diga = (struct snd_aes_iec958 *) malloc(_len_diga0*sizeof(struct snd_aes_iec958));
          for(int _i0 = 0; _i0 < _len_diga0; _i0++) {
              int _len_diga__i0__status0 = 1;
          diga[_i0].status = (int *) malloc(_len_diga__i0__status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_diga__i0__status0; _j0++) {
            diga[_i0].status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = encode_spdif_bits(diga);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_diga0; _aux++) {
          free(diga[_aux].status);
          }
          free(diga);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_diga0 = 65025;
          struct snd_aes_iec958 * diga = (struct snd_aes_iec958 *) malloc(_len_diga0*sizeof(struct snd_aes_iec958));
          for(int _i0 = 0; _i0 < _len_diga0; _i0++) {
              int _len_diga__i0__status0 = 1;
          diga[_i0].status = (int *) malloc(_len_diga__i0__status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_diga__i0__status0; _j0++) {
            diga[_i0].status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = encode_spdif_bits(diga);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_diga0; _aux++) {
          free(diga[_aux].status);
          }
          free(diga);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_diga0 = 100;
          struct snd_aes_iec958 * diga = (struct snd_aes_iec958 *) malloc(_len_diga0*sizeof(struct snd_aes_iec958));
          for(int _i0 = 0; _i0 < _len_diga0; _i0++) {
              int _len_diga__i0__status0 = 1;
          diga[_i0].status = (int *) malloc(_len_diga__i0__status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_diga__i0__status0; _j0++) {
            diga[_i0].status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = encode_spdif_bits(diga);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_diga0; _aux++) {
          free(diga[_aux].status);
          }
          free(diga);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
