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
typedef  enum debuglevel { ____Placeholder_debuglevel } debuglevel ;

/* Variables and functions */

__attribute__((used)) static inline void dump_bytes(enum debuglevel level, const char *tag,
			      unsigned char *bytes, int count)
{
#ifdef CONFIG_GIGASET_DEBUG
	unsigned char c;
	static char dbgline[3 * 32 + 1];
	int i = 0;

	if (!(gigaset_debuglevel & level))
		return;

	while (count-- > 0) {
		if (i > sizeof(dbgline) - 4) {
			dbgline[i] = '\0';
			gig_dbg(level, "%s:%s", tag, dbgline);
			i = 0;
		}
		c = *bytes++;
		dbgline[i] = (i && !(i % 12)) ? '-' : ' ';
		i++;
		dbgline[i++] = hex_asc_hi(c);
		dbgline[i++] = hex_asc_lo(c);
	}
	dbgline[i] = '\0';
	gig_dbg(level, "%s:%s", tag, dbgline);
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
          enum debuglevel level = 0;
          int count = 100;
          int _len_tag0 = 1;
          const char * tag = (const char *) malloc(_len_tag0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bytes0 = 1;
          unsigned char * bytes = (unsigned char *) malloc(_len_bytes0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_bytes0; _i0++) {
            bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_bytes(level,tag,bytes,count);
          free(tag);
          free(bytes);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum debuglevel level = 0;
          int count = 255;
          int _len_tag0 = 65025;
          const char * tag = (const char *) malloc(_len_tag0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bytes0 = 65025;
          unsigned char * bytes = (unsigned char *) malloc(_len_bytes0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_bytes0; _i0++) {
            bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_bytes(level,tag,bytes,count);
          free(tag);
          free(bytes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum debuglevel level = 0;
          int count = 10;
          int _len_tag0 = 100;
          const char * tag = (const char *) malloc(_len_tag0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bytes0 = 100;
          unsigned char * bytes = (unsigned char *) malloc(_len_bytes0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_bytes0; _i0++) {
            bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_bytes(level,tag,bytes,count);
          free(tag);
          free(bytes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
