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
 int RP_PASSWORD_SIZE ; 

__attribute__((used)) static int mangle_prepend (char arr[RP_PASSWORD_SIZE], int arr_len, char c)
{
  if ((arr_len + 1) >= RP_PASSWORD_SIZE) return (arr_len);

  int arr_pos;

  for (arr_pos = arr_len - 1; arr_pos > -1; arr_pos--)
  {
    arr[arr_pos + 1] = arr[arr_pos];
  }

  arr[0] = c;

  return (arr_len + 1);
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
          int arr_len = 100;
          char c = 100;
          int _len_arr0 = RP_PASSWORD_SIZE;
          char * arr = (char *) malloc(_len_arr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mangle_prepend(arr,arr_len,c);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int arr_len = 255;
          char c = 255;
          int _len_arr0 = 65025;
          char * arr = (char *) malloc(_len_arr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mangle_prepend(arr,arr_len,c);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int arr_len = 10;
          char c = 10;
          int _len_arr0 = 100;
          char * arr = (char *) malloc(_len_arr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mangle_prepend(arr,arr_len,c);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
