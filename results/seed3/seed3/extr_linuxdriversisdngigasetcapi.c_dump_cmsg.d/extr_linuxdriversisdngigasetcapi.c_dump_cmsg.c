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
typedef  int /*<<< orphan*/  _cmsg ;

/* Variables and functions */

__attribute__((used)) static inline void dump_cmsg(enum debuglevel level, const char *tag, _cmsg *p)
{
#ifdef CONFIG_GIGASET_DEBUG
	/* dump at most 20 messages in 20 secs */
	static DEFINE_RATELIMIT_STATE(msg_dump_ratelimit, 20 * HZ, 20);
	_cdebbuf *cdb;

	if (!(gigaset_debuglevel & level))
		return;
	if (!___ratelimit(&msg_dump_ratelimit, tag))
		return;

	cdb = capi_cmsg2str(p);
	if (cdb) {
		gig_dbg(level, "%s: [%d] %s", tag, p->ApplId, cdb->buf);
		cdebbuf_free(cdb);
	} else {
		gig_dbg(level, "%s: [%d] %s", tag, p->ApplId,
			capi_cmd2str(p->Command, p->Subcommand));
	}
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
          int _len_tag0 = 1;
          const char * tag = (const char *) malloc(_len_tag0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_cmsg(level,tag,p);
          free(tag);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum debuglevel level = 0;
          int _len_tag0 = 65025;
          const char * tag = (const char *) malloc(_len_tag0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_cmsg(level,tag,p);
          free(tag);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum debuglevel level = 0;
          int _len_tag0 = 100;
          const char * tag = (const char *) malloc(_len_tag0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_cmsg(level,tag,p);
          free(tag);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
