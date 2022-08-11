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
 int FTP_LP_MALFORMATED_PERM ; 

__attribute__((used)) static int ftp_pl_get_permission(const char *str)
{
  int permissions = 0;
  /* USER */
  if(str[0] == 'r')
    permissions |= 1 << 8;
  else if(str[0] != '-')
    permissions |= FTP_LP_MALFORMATED_PERM;
  if(str[1] == 'w')
    permissions |= 1 << 7;
  else if(str[1] != '-')
    permissions |= FTP_LP_MALFORMATED_PERM;

  if(str[2] == 'x')
    permissions |= 1 << 6;
  else if(str[2] == 's') {
    permissions |= 1 << 6;
    permissions |= 1 << 11;
  }
  else if(str[2] == 'S')
    permissions |= 1 << 11;
  else if(str[2] != '-')
    permissions |= FTP_LP_MALFORMATED_PERM;
  /* GROUP */
  if(str[3] == 'r')
    permissions |= 1 << 5;
  else if(str[3] != '-')
    permissions |= FTP_LP_MALFORMATED_PERM;
  if(str[4] == 'w')
    permissions |= 1 << 4;
  else if(str[4] != '-')
    permissions |= FTP_LP_MALFORMATED_PERM;
  if(str[5] == 'x')
    permissions |= 1 << 3;
  else if(str[5] == 's') {
    permissions |= 1 << 3;
    permissions |= 1 << 10;
  }
  else if(str[5] == 'S')
    permissions |= 1 << 10;
  else if(str[5] != '-')
    permissions |= FTP_LP_MALFORMATED_PERM;
  /* others */
  if(str[6] == 'r')
    permissions |= 1 << 2;
  else if(str[6] != '-')
    permissions |= FTP_LP_MALFORMATED_PERM;
  if(str[7] == 'w')
    permissions |= 1 << 1;
  else if(str[7] != '-')
      permissions |= FTP_LP_MALFORMATED_PERM;
  if(str[8] == 'x')
    permissions |= 1;
  else if(str[8] == 't') {
    permissions |= 1;
    permissions |= 1 << 9;
  }
  else if(str[8] == 'T')
    permissions |= 1 << 9;
  else if(str[8] != '-')
    permissions |= FTP_LP_MALFORMATED_PERM;

  return permissions;
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
          int _len_str0 = 1;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ftp_pl_get_permission(str);
          printf("%d\n", benchRet); 
          free(str);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_str0 = 65025;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ftp_pl_get_permission(str);
          printf("%d\n", benchRet); 
          free(str);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_str0 = 100;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ftp_pl_get_permission(str);
          printf("%d\n", benchRet); 
          free(str);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
