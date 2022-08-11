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
struct TYPE_3__ {int word; int nleft; } ;
typedef  TYPE_1__ adpcm_state ;

/* Variables and functions */
 int* bitmask ; 

__attribute__((used)) static void
isdn_audio_put_bits(int data, int nbits, adpcm_state *s,
		    unsigned char **out, int *len)
{
	s->word = (s->word << nbits) | (data & bitmask[nbits]);
	s->nleft += nbits;
	while (s->nleft >= 8) {
		int d = (s->word >> (s->nleft - 8));
		*(out[0]++) = d & 255;
		(*len)++;
		s->nleft -= 8;
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
          int data = 100;
          int nbits = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nleft = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          unsigned char ** out = (unsigned char **) malloc(_len_out0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (unsigned char *) malloc(_len_out1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isdn_audio_put_bits(data,nbits,s,out,len);
          free(s);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
          free(len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int data = 255;
          int nbits = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nleft = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          unsigned char ** out = (unsigned char **) malloc(_len_out0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (unsigned char *) malloc(_len_out1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 65025;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isdn_audio_put_bits(data,nbits,s,out,len);
          free(s);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int data = 10;
          int nbits = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nleft = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          unsigned char ** out = (unsigned char **) malloc(_len_out0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (unsigned char *) malloc(_len_out1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 100;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isdn_audio_put_bits(data,nbits,s,out,len);
          free(s);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
