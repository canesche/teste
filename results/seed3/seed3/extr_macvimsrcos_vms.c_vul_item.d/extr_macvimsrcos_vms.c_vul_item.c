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
struct TYPE_3__ {short buflen; short itemcode; char* bufadrs; int* retlen; } ;
typedef  TYPE_1__ ITEM ;

/* Variables and functions */

__attribute__((used)) static void
vul_item(ITEM *itm, short len, short cod, char *adr, int *ret)
{
    itm->buflen   = len;
    itm->itemcode = cod;
    itm->bufadrs  = adr;
    itm->retlen   = ret;
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
          short len = 100;
          short cod = 100;
          int _len_itm0 = 1;
          struct TYPE_3__ * itm = (struct TYPE_3__ *) malloc(_len_itm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_itm0; _i0++) {
            itm[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
        itm[_i0].itemcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itm__i0__bufadrs0 = 1;
          itm[_i0].bufadrs = (char *) malloc(_len_itm__i0__bufadrs0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_itm__i0__bufadrs0; _j0++) {
            itm[_i0].bufadrs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_itm__i0__retlen0 = 1;
          itm[_i0].retlen = (int *) malloc(_len_itm__i0__retlen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_itm__i0__retlen0; _j0++) {
            itm[_i0].retlen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_adr0 = 1;
          char * adr = (char *) malloc(_len_adr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_adr0; _i0++) {
            adr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ret0 = 1;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vul_item(itm,len,cod,adr,ret);
          for(int _aux = 0; _aux < _len_itm0; _aux++) {
          free(itm[_aux].bufadrs);
          }
          for(int _aux = 0; _aux < _len_itm0; _aux++) {
          free(itm[_aux].retlen);
          }
          free(itm);
          free(adr);
          free(ret);
        
        break;
    }
    // big-arr
    case 1:
    {
          short len = 255;
          short cod = 255;
          int _len_itm0 = 65025;
          struct TYPE_3__ * itm = (struct TYPE_3__ *) malloc(_len_itm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_itm0; _i0++) {
            itm[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
        itm[_i0].itemcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itm__i0__bufadrs0 = 1;
          itm[_i0].bufadrs = (char *) malloc(_len_itm__i0__bufadrs0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_itm__i0__bufadrs0; _j0++) {
            itm[_i0].bufadrs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_itm__i0__retlen0 = 1;
          itm[_i0].retlen = (int *) malloc(_len_itm__i0__retlen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_itm__i0__retlen0; _j0++) {
            itm[_i0].retlen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_adr0 = 65025;
          char * adr = (char *) malloc(_len_adr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_adr0; _i0++) {
            adr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ret0 = 65025;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vul_item(itm,len,cod,adr,ret);
          for(int _aux = 0; _aux < _len_itm0; _aux++) {
          free(itm[_aux].bufadrs);
          }
          for(int _aux = 0; _aux < _len_itm0; _aux++) {
          free(itm[_aux].retlen);
          }
          free(itm);
          free(adr);
          free(ret);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          short len = 10;
          short cod = 10;
          int _len_itm0 = 100;
          struct TYPE_3__ * itm = (struct TYPE_3__ *) malloc(_len_itm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_itm0; _i0++) {
            itm[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
        itm[_i0].itemcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itm__i0__bufadrs0 = 1;
          itm[_i0].bufadrs = (char *) malloc(_len_itm__i0__bufadrs0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_itm__i0__bufadrs0; _j0++) {
            itm[_i0].bufadrs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_itm__i0__retlen0 = 1;
          itm[_i0].retlen = (int *) malloc(_len_itm__i0__retlen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_itm__i0__retlen0; _j0++) {
            itm[_i0].retlen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_adr0 = 100;
          char * adr = (char *) malloc(_len_adr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_adr0; _i0++) {
            adr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ret0 = 100;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vul_item(itm,len,cod,adr,ret);
          for(int _aux = 0; _aux < _len_itm0; _aux++) {
          free(itm[_aux].bufadrs);
          }
          for(int _aux = 0; _aux < _len_itm0; _aux++) {
          free(itm[_aux].retlen);
          }
          free(itm);
          free(adr);
          free(ret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
