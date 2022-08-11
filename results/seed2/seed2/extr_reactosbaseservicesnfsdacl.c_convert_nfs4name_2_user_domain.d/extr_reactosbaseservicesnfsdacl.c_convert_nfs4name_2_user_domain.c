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
typedef  char* LPSTR ;

/* Variables and functions */

__attribute__((used)) static void convert_nfs4name_2_user_domain(LPSTR nfs4name, 
                                           LPSTR *domain)
{
    LPSTR p = nfs4name;
    for(; p[0] != '\0'; p++) {
        if (p[0] == '@') { 
            p[0] = '\0';
            *domain = &p[1];
            break;
        }
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
          int _len_nfs4name0 = 1;
          char * nfs4name = (char *) malloc(_len_nfs4name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_nfs4name0; _i0++) {
            nfs4name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_domain0 = 1;
          char ** domain = (char **) malloc(_len_domain0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_domain0; _i0++) {
            int _len_domain1 = 1;
            domain[_i0] = (char *) malloc(_len_domain1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_domain1; _i1++) {
              domain[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          convert_nfs4name_2_user_domain(nfs4name,domain);
          free(nfs4name);
          for(int i1 = 0; i1 < _len_domain0; i1++) {
            int _len_domain1 = 1;
              free(domain[i1]);
          }
          free(domain);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_nfs4name0 = 65025;
          char * nfs4name = (char *) malloc(_len_nfs4name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_nfs4name0; _i0++) {
            nfs4name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_domain0 = 65025;
          char ** domain = (char **) malloc(_len_domain0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_domain0; _i0++) {
            int _len_domain1 = 1;
            domain[_i0] = (char *) malloc(_len_domain1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_domain1; _i1++) {
              domain[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          convert_nfs4name_2_user_domain(nfs4name,domain);
          free(nfs4name);
          for(int i1 = 0; i1 < _len_domain0; i1++) {
            int _len_domain1 = 1;
              free(domain[i1]);
          }
          free(domain);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_nfs4name0 = 100;
          char * nfs4name = (char *) malloc(_len_nfs4name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_nfs4name0; _i0++) {
            nfs4name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_domain0 = 100;
          char ** domain = (char **) malloc(_len_domain0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_domain0; _i0++) {
            int _len_domain1 = 1;
            domain[_i0] = (char *) malloc(_len_domain1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_domain1; _i1++) {
              domain[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          convert_nfs4name_2_user_domain(nfs4name,domain);
          free(nfs4name);
          for(int i1 = 0; i1 < _len_domain0; i1++) {
            int _len_domain1 = 1;
              free(domain[i1]);
          }
          free(domain);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
