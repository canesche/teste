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
typedef  int u32 ;
struct nlattr {int dummy; } ;
typedef  enum ip_set_ext_id { ____Placeholder_ip_set_ext_id } ip_set_ext_id ;
struct TYPE_2__ {int flag; } ;

/* Variables and functions */
 size_t IPSET_ATTR_TIMEOUT ; 
 TYPE_1__* ip_set_extensions ; 

__attribute__((used)) static inline bool
add_extension(enum ip_set_ext_id id, u32 flags, struct nlattr *tb[])
{
	return ip_set_extensions[id].flag ?
		(flags & ip_set_extensions[id].flag) :
		!!tb[IPSET_ATTR_TIMEOUT];
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
          enum ip_set_ext_id id = 0;
          int flags = 100;
          int _len_tb0 = 1;
          struct nlattr ** tb = (struct nlattr **) malloc(_len_tb0*sizeof(struct nlattr *));
          for(int _i0 = 0; _i0 < _len_tb0; _i0++) {
            int _len_tb1 = 1;
            tb[_i0] = (struct nlattr *) malloc(_len_tb1*sizeof(struct nlattr));
            for(int _i1 = 0; _i1 < _len_tb1; _i1++) {
              tb[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = add_extension(id,flags,tb);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_tb0; i1++) {
            int _len_tb1 = 1;
              free(tb[i1]);
          }
          free(tb);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum ip_set_ext_id id = 0;
          int flags = 255;
          int _len_tb0 = 65025;
          struct nlattr ** tb = (struct nlattr **) malloc(_len_tb0*sizeof(struct nlattr *));
          for(int _i0 = 0; _i0 < _len_tb0; _i0++) {
            int _len_tb1 = 1;
            tb[_i0] = (struct nlattr *) malloc(_len_tb1*sizeof(struct nlattr));
            for(int _i1 = 0; _i1 < _len_tb1; _i1++) {
              tb[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = add_extension(id,flags,tb);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_tb0; i1++) {
            int _len_tb1 = 1;
              free(tb[i1]);
          }
          free(tb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum ip_set_ext_id id = 0;
          int flags = 10;
          int _len_tb0 = 100;
          struct nlattr ** tb = (struct nlattr **) malloc(_len_tb0*sizeof(struct nlattr *));
          for(int _i0 = 0; _i0 < _len_tb0; _i0++) {
            int _len_tb1 = 1;
            tb[_i0] = (struct nlattr *) malloc(_len_tb1*sizeof(struct nlattr));
            for(int _i1 = 0; _i1 < _len_tb1; _i1++) {
              tb[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = add_extension(id,flags,tb);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_tb0; i1++) {
            int _len_tb1 = 1;
              free(tb[i1]);
          }
          free(tb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
