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
typedef  int u8 ;
struct opal_resp_tok {int const* pos; int len; int /*<<< orphan*/  type; int /*<<< orphan*/  width; } ;
typedef  int ssize_t ;

/* Variables and functions */
 int const MEDIUM_ATOM_BYTESTRING ; 
 int const MEDIUM_ATOM_LEN_MASK ; 
 int const MEDIUM_ATOM_SIGNED ; 
 int /*<<< orphan*/  OPAL_DTA_TOKENID_BYTESTRING ; 
 int /*<<< orphan*/  OPAL_DTA_TOKENID_SINT ; 
 int /*<<< orphan*/  OPAL_DTA_TOKENID_UINT ; 
 int /*<<< orphan*/  OPAL_WIDTH_MEDIUM ; 

__attribute__((used)) static ssize_t response_parse_medium(struct opal_resp_tok *tok,
				     const u8 *pos)
{
	tok->pos = pos;
	tok->len = (((pos[0] & MEDIUM_ATOM_LEN_MASK) << 8) | pos[1]) + 2;
	tok->width = OPAL_WIDTH_MEDIUM;

	if (pos[0] & MEDIUM_ATOM_BYTESTRING)
		tok->type = OPAL_DTA_TOKENID_BYTESTRING;
	else if (pos[0] & MEDIUM_ATOM_SIGNED)
		tok->type = OPAL_DTA_TOKENID_SINT;
	else
		tok->type = OPAL_DTA_TOKENID_UINT;

	return tok->len;
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
          int _len_tok0 = 1;
          struct opal_resp_tok * tok = (struct opal_resp_tok *) malloc(_len_tok0*sizeof(struct opal_resp_tok));
          for(int _i0 = 0; _i0 < _len_tok0; _i0++) {
              int _len_tok__i0__pos0 = 1;
          tok[_i0].pos = (const int *) malloc(_len_tok__i0__pos0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_tok__i0__pos0; _j0++) {
            tok[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tok[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        tok[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        tok[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 1;
          const int * pos = (const int *) malloc(_len_pos0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = response_parse_medium(tok,pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tok0; _aux++) {
          free(tok[_aux].pos);
          }
          free(tok);
          free(pos);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tok0 = 65025;
          struct opal_resp_tok * tok = (struct opal_resp_tok *) malloc(_len_tok0*sizeof(struct opal_resp_tok));
          for(int _i0 = 0; _i0 < _len_tok0; _i0++) {
              int _len_tok__i0__pos0 = 1;
          tok[_i0].pos = (const int *) malloc(_len_tok__i0__pos0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_tok__i0__pos0; _j0++) {
            tok[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tok[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        tok[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        tok[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 65025;
          const int * pos = (const int *) malloc(_len_pos0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = response_parse_medium(tok,pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tok0; _aux++) {
          free(tok[_aux].pos);
          }
          free(tok);
          free(pos);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tok0 = 100;
          struct opal_resp_tok * tok = (struct opal_resp_tok *) malloc(_len_tok0*sizeof(struct opal_resp_tok));
          for(int _i0 = 0; _i0 < _len_tok0; _i0++) {
              int _len_tok__i0__pos0 = 1;
          tok[_i0].pos = (const int *) malloc(_len_tok__i0__pos0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_tok__i0__pos0; _j0++) {
            tok[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tok[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        tok[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        tok[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 100;
          const int * pos = (const int *) malloc(_len_pos0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = response_parse_medium(tok,pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tok0; _aux++) {
          free(tok[_aux].pos);
          }
          free(tok);
          free(pos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
