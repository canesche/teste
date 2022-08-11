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
struct TYPE_3__ {size_t nleft; size_t nbits; int word; } ;
typedef  TYPE_1__ adpcm_state ;

/* Variables and functions */
 int* bitmask ; 

__attribute__((used)) static int
isdn_audio_get_bits(adpcm_state *s, unsigned char **in, int *len)
{
	while (s->nleft < s->nbits) {
		int d = *((*in)++);
		(*len)--;
		s->word = (s->word << 8) | d;
		s->nleft += 8;
	}
	s->nleft -= s->nbits;
	return (s->word >> s->nleft) & bitmask[s->nbits];
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nleft = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nbits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 1;
          unsigned char ** in = (unsigned char **) malloc(_len_in0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            int _len_in1 = 1;
            in[_i0] = (unsigned char *) malloc(_len_in1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_in1; _i1++) {
              in[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isdn_audio_get_bits(s,in,len);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_in0; i1++) {
            int _len_in1 = 1;
              free(in[i1]);
          }
          free(in);
          free(len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nleft = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nbits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 65025;
          unsigned char ** in = (unsigned char **) malloc(_len_in0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            int _len_in1 = 1;
            in[_i0] = (unsigned char *) malloc(_len_in1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_in1; _i1++) {
              in[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 65025;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isdn_audio_get_bits(s,in,len);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_in0; i1++) {
            int _len_in1 = 1;
              free(in[i1]);
          }
          free(in);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nleft = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nbits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 100;
          unsigned char ** in = (unsigned char **) malloc(_len_in0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            int _len_in1 = 1;
            in[_i0] = (unsigned char *) malloc(_len_in1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_in1; _i1++) {
              in[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 100;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isdn_audio_get_bits(s,in,len);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_in0; i1++) {
            int _len_in1 = 1;
              free(in[i1]);
          }
          free(in);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
