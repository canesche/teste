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
typedef  int u_int32_t ;
struct sockbuf_info {int sbi_timeo; int /*<<< orphan*/  sbi_flags; int /*<<< orphan*/  sbi_lowat; int /*<<< orphan*/  sbi_mbmax; int /*<<< orphan*/  sbi_mbcnt; int /*<<< orphan*/  sbi_hiwat; int /*<<< orphan*/  sbi_cc; } ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;
struct sockbuf {TYPE_1__ sb_timeo; int /*<<< orphan*/  sb_flags; int /*<<< orphan*/  sb_lowat; int /*<<< orphan*/  sb_mbmax; int /*<<< orphan*/  sb_mbcnt; int /*<<< orphan*/  sb_hiwat; int /*<<< orphan*/  sb_cc; } ;

/* Variables and functions */
 int hz ; 
 int tick ; 

__attribute__((used)) static void
fill_sockbuf_info(struct sockbuf *sb, struct sockbuf_info *sbi)
{
	sbi->sbi_cc = sb->sb_cc;
	sbi->sbi_hiwat = sb->sb_hiwat;
	sbi->sbi_mbcnt = sb->sb_mbcnt;
	sbi->sbi_mbmax = sb->sb_mbmax;
	sbi->sbi_lowat = sb->sb_lowat;
	sbi->sbi_flags = sb->sb_flags;
	sbi->sbi_timeo = (u_int32_t)(sb->sb_timeo.tv_sec * hz) +
	    sb->sb_timeo.tv_usec / tick;
	if (sbi->sbi_timeo == 0 && sb->sb_timeo.tv_usec != 0)
		sbi->sbi_timeo = 1;
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
          struct sockbuf * sb = (struct sockbuf *) malloc(_len_sb0*sizeof(struct sockbuf));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].sb_timeo.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_timeo.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_lowat = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_mbmax = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_mbcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbi0 = 1;
          struct sockbuf_info * sbi = (struct sockbuf_info *) malloc(_len_sbi0*sizeof(struct sockbuf_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].sbi_timeo = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_lowat = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_mbmax = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_mbcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_sockbuf_info(sb,sbi);
          free(sb);
          free(sbi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sb0 = 65025;
          struct sockbuf * sb = (struct sockbuf *) malloc(_len_sb0*sizeof(struct sockbuf));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].sb_timeo.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_timeo.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_lowat = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_mbmax = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_mbcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbi0 = 65025;
          struct sockbuf_info * sbi = (struct sockbuf_info *) malloc(_len_sbi0*sizeof(struct sockbuf_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].sbi_timeo = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_lowat = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_mbmax = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_mbcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_sockbuf_info(sb,sbi);
          free(sb);
          free(sbi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sb0 = 100;
          struct sockbuf * sb = (struct sockbuf *) malloc(_len_sb0*sizeof(struct sockbuf));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].sb_timeo.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_timeo.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_lowat = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_mbmax = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_mbcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].sb_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbi0 = 100;
          struct sockbuf_info * sbi = (struct sockbuf_info *) malloc(_len_sbi0*sizeof(struct sockbuf_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].sbi_timeo = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_lowat = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_mbmax = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_mbcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_hiwat = ((-2 * (next_i()%2)) + 1) * next_i();
        sbi[_i0].sbi_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_sockbuf_info(sb,sbi);
          free(sb);
          free(sbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
