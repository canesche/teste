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
struct super_block {int s_blocksize; } ;

/* Variables and functions */

__attribute__((used)) static unsigned char adfs_calczonecheck(struct super_block *sb, unsigned char *map)
{
	unsigned int v0, v1, v2, v3;
	int i;

	v0 = v1 = v2 = v3 = 0;
	for (i = sb->s_blocksize - 4; i; i -= 4) {
		v0 += map[i]     + (v3 >> 8);
		v3 &= 0xff;
		v1 += map[i + 1] + (v0 >> 8);
		v0 &= 0xff;
		v2 += map[i + 2] + (v1 >> 8);
		v1 &= 0xff;
		v3 += map[i + 3] + (v2 >> 8);
		v2 &= 0xff;
	}
	v0 +=           v3 >> 8;
	v1 += map[1] + (v0 >> 8);
	v2 += map[2] + (v1 >> 8);
	v3 += map[3] + (v2 >> 8);

	return v0 ^ v1 ^ v2 ^ v3;
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
          int _len_sb0 = 1;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].s_blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_map0 = 1;
          unsigned char * map = (unsigned char *) malloc(_len_map0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = adfs_calczonecheck(sb,map);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(sb);
          free(map);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sb0 = 65025;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].s_blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_map0 = 65025;
          unsigned char * map = (unsigned char *) malloc(_len_map0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = adfs_calczonecheck(sb,map);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(sb);
          free(map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sb0 = 100;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].s_blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_map0 = 100;
          unsigned char * map = (unsigned char *) malloc(_len_map0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = adfs_calczonecheck(sb,map);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(sb);
          free(map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
