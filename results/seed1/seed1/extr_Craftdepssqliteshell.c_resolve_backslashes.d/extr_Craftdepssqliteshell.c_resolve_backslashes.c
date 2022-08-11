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

/* Variables and functions */

__attribute__((used)) static void resolve_backslashes(char *z){
  int i, j;
  char c;
  for(i=j=0; (c = z[i])!=0; i++, j++){
    if( c=='\\' ){
      c = z[++i];
      if( c=='n' ){
        c = '\n';
      }else if( c=='t' ){
        c = '\t';
      }else if( c=='r' ){
        c = '\r';
      }else if( c>='0' && c<='7' ){
        c -= '0';
        if( z[i+1]>='0' && z[i+1]<='7' ){
          i++;
          c = (c<<3) + z[i] - '0';
          if( z[i+1]>='0' && z[i+1]<='7' ){
            i++;
            c = (c<<3) + z[i] - '0';
          }
        }
      }
    }
    z[j] = c;
  }
  z[j] = 0;
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
          int _len_z0 = 1;
          char * z = (char *) malloc(_len_z0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          resolve_backslashes(z);
          free(z);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_z0 = 65025;
          char * z = (char *) malloc(_len_z0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          resolve_backslashes(z);
          free(z);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_z0 = 100;
          char * z = (char *) malloc(_len_z0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          resolve_backslashes(z);
          free(z);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
