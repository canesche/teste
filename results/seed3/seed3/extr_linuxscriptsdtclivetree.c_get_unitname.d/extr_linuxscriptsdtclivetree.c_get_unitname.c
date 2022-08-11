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
struct node {char* name; size_t basenamelen; } ;

/* Variables and functions */

const char *get_unitname(struct node *node)
{
	if (node->name[node->basenamelen] == '\0')
		return "";
	else
		return node->name + node->basenamelen + 1;
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
          int _len_node0 = 1;
          struct node * node = (struct node *) malloc(_len_node0*sizeof(struct node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
              int _len_node__i0__name0 = 1;
          node[_i0].name = (char *) malloc(_len_node__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_node__i0__name0; _j0++) {
            node[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        node[_i0].basenamelen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = get_unitname(node);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].name);
          }
          free(node);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_node0 = 65025;
          struct node * node = (struct node *) malloc(_len_node0*sizeof(struct node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
              int _len_node__i0__name0 = 1;
          node[_i0].name = (char *) malloc(_len_node__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_node__i0__name0; _j0++) {
            node[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        node[_i0].basenamelen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = get_unitname(node);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].name);
          }
          free(node);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_node0 = 100;
          struct node * node = (struct node *) malloc(_len_node0*sizeof(struct node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
              int _len_node__i0__name0 = 1;
          node[_i0].name = (char *) malloc(_len_node__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_node__i0__name0; _j0++) {
            node[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        node[_i0].basenamelen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = get_unitname(node);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].name);
          }
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
