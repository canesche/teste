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
struct SMACK {unsigned int symbol_count; unsigned int* symbol_to_char; unsigned char* char_to_symbol; } ;

/* Variables and functions */

__attribute__((used)) static unsigned
smack_add_symbol(struct SMACK *smack, unsigned c)
{
    unsigned i;
    unsigned symbol;

    /* See if we already know the symbol */
    for (i=1; i<=smack->symbol_count; i++) {
        if (smack->symbol_to_char[i] == c)
            return i;
    }

    /* Add the symbol to our list */
    smack->symbol_count++;
    symbol = smack->symbol_count;

    /* Map it in both directions */
    smack->symbol_to_char[symbol] = c;
    smack->char_to_symbol[c] = (unsigned char)symbol;

    return symbol;
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
          unsigned int c = 100;
          int _len_smack0 = 1;
          struct SMACK * smack = (struct SMACK *) malloc(_len_smack0*sizeof(struct SMACK));
          for(int _i0 = 0; _i0 < _len_smack0; _i0++) {
            smack[_i0].symbol_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smack__i0__symbol_to_char0 = 1;
          smack[_i0].symbol_to_char = (unsigned int *) malloc(_len_smack__i0__symbol_to_char0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_smack__i0__symbol_to_char0; _j0++) {
            smack[_i0].symbol_to_char[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smack__i0__char_to_symbol0 = 1;
          smack[_i0].char_to_symbol = (unsigned char *) malloc(_len_smack__i0__char_to_symbol0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_smack__i0__char_to_symbol0; _j0++) {
            smack[_i0].char_to_symbol[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = smack_add_symbol(smack,c);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_smack0; _aux++) {
          free(smack[_aux].symbol_to_char);
          }
          for(int _aux = 0; _aux < _len_smack0; _aux++) {
          free(smack[_aux].char_to_symbol);
          }
          free(smack);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int c = 255;
          int _len_smack0 = 65025;
          struct SMACK * smack = (struct SMACK *) malloc(_len_smack0*sizeof(struct SMACK));
          for(int _i0 = 0; _i0 < _len_smack0; _i0++) {
            smack[_i0].symbol_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smack__i0__symbol_to_char0 = 1;
          smack[_i0].symbol_to_char = (unsigned int *) malloc(_len_smack__i0__symbol_to_char0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_smack__i0__symbol_to_char0; _j0++) {
            smack[_i0].symbol_to_char[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smack__i0__char_to_symbol0 = 1;
          smack[_i0].char_to_symbol = (unsigned char *) malloc(_len_smack__i0__char_to_symbol0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_smack__i0__char_to_symbol0; _j0++) {
            smack[_i0].char_to_symbol[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = smack_add_symbol(smack,c);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_smack0; _aux++) {
          free(smack[_aux].symbol_to_char);
          }
          for(int _aux = 0; _aux < _len_smack0; _aux++) {
          free(smack[_aux].char_to_symbol);
          }
          free(smack);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int c = 10;
          int _len_smack0 = 100;
          struct SMACK * smack = (struct SMACK *) malloc(_len_smack0*sizeof(struct SMACK));
          for(int _i0 = 0; _i0 < _len_smack0; _i0++) {
            smack[_i0].symbol_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smack__i0__symbol_to_char0 = 1;
          smack[_i0].symbol_to_char = (unsigned int *) malloc(_len_smack__i0__symbol_to_char0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_smack__i0__symbol_to_char0; _j0++) {
            smack[_i0].symbol_to_char[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smack__i0__char_to_symbol0 = 1;
          smack[_i0].char_to_symbol = (unsigned char *) malloc(_len_smack__i0__char_to_symbol0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_smack__i0__char_to_symbol0; _j0++) {
            smack[_i0].char_to_symbol[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = smack_add_symbol(smack,c);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_smack0; _aux++) {
          free(smack[_aux].symbol_to_char);
          }
          for(int _aux = 0; _aux < _len_smack0; _aux++) {
          free(smack[_aux].char_to_symbol);
          }
          free(smack);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
