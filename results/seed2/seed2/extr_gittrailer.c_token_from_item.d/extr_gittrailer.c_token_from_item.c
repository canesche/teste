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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {char const* key; char const* name; } ;
struct arg_item {TYPE_1__ conf; } ;

/* Variables and functions */

__attribute__((used)) static const char *token_from_item(struct arg_item *item, char *tok)
{
	if (item->conf.key)
		return item->conf.key;
	if (tok)
		return tok;
	return item->conf.name;
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
          int _len_item0 = 1;
          struct arg_item * item = (struct arg_item *) malloc(_len_item0*sizeof(struct arg_item));
          for(int _i0 = 0; _i0 < _len_item0; _i0++) {
              int _len_item__i0__conf_key0 = 1;
          item[_i0].conf.key = (const char *) malloc(_len_item__i0__conf_key0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_item__i0__conf_key0; _j0++) {
            item[_i0].conf.key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_item__i0__conf_name0 = 1;
          item[_i0].conf.name = (const char *) malloc(_len_item__i0__conf_name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_item__i0__conf_name0; _j0++) {
            item[_i0].conf.name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tok0 = 1;
          char * tok = (char *) malloc(_len_tok0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_tok0; _i0++) {
            tok[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = token_from_item(item,tok);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(item);
          free(tok);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_item0 = 65025;
          struct arg_item * item = (struct arg_item *) malloc(_len_item0*sizeof(struct arg_item));
          for(int _i0 = 0; _i0 < _len_item0; _i0++) {
              int _len_item__i0__conf_key0 = 1;
          item[_i0].conf.key = (const char *) malloc(_len_item__i0__conf_key0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_item__i0__conf_key0; _j0++) {
            item[_i0].conf.key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_item__i0__conf_name0 = 1;
          item[_i0].conf.name = (const char *) malloc(_len_item__i0__conf_name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_item__i0__conf_name0; _j0++) {
            item[_i0].conf.name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tok0 = 65025;
          char * tok = (char *) malloc(_len_tok0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_tok0; _i0++) {
            tok[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = token_from_item(item,tok);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(item);
          free(tok);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_item0 = 100;
          struct arg_item * item = (struct arg_item *) malloc(_len_item0*sizeof(struct arg_item));
          for(int _i0 = 0; _i0 < _len_item0; _i0++) {
              int _len_item__i0__conf_key0 = 1;
          item[_i0].conf.key = (const char *) malloc(_len_item__i0__conf_key0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_item__i0__conf_key0; _j0++) {
            item[_i0].conf.key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_item__i0__conf_name0 = 1;
          item[_i0].conf.name = (const char *) malloc(_len_item__i0__conf_name0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_item__i0__conf_name0; _j0++) {
            item[_i0].conf.name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tok0 = 100;
          char * tok = (char *) malloc(_len_tok0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_tok0; _i0++) {
            tok[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = token_from_item(item,tok);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(item);
          free(tok);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
