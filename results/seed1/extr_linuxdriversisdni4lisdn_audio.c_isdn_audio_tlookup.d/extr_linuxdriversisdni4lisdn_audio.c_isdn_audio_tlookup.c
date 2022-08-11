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
typedef  int /*<<< orphan*/  u_char ;

/* Variables and functions */

__attribute__((used)) static inline void
isdn_audio_tlookup(const u_char *table, u_char *buff, unsigned long n)
{
#ifdef __i386__
	unsigned long d0, d1, d2, d3;
	__asm__ __volatile__(
		"cld\n"
		"1:\tlodsb\n\t"
		"xlatb\n\t"
		"stosb\n\t"
		"loop 1b\n\t"
		:	"=&b"(d0), "=&c"(d1), "=&D"(d2), "=&S"(d3)
		:	"0"((long) table), "1"(n), "2"((long) buff), "3"((long) buff)
		:	"memory", "ax");
#else
	while (n--)
		*buff = table[*(unsigned char *)buff], buff++;
#endif
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
          unsigned long n = 100;
          int _len_table0 = 1;
          const int * table = (const int *) malloc(_len_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buff0 = 1;
          int * buff = (int *) malloc(_len_buff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buff0; _i0++) {
            buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isdn_audio_tlookup(table,buff,n);
          free(table);
          free(buff);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n = 255;
          int _len_table0 = 65025;
          const int * table = (const int *) malloc(_len_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buff0 = 65025;
          int * buff = (int *) malloc(_len_buff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buff0; _i0++) {
            buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isdn_audio_tlookup(table,buff,n);
          free(table);
          free(buff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n = 10;
          int _len_table0 = 100;
          const int * table = (const int *) malloc(_len_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buff0 = 100;
          int * buff = (int *) malloc(_len_buff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buff0; _i0++) {
            buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isdn_audio_tlookup(table,buff,n);
          free(table);
          free(buff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
