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

__attribute__((used)) static inline void dump_rawmsg(enum debuglevel level, const char *tag,
			       unsigned char *data)
{
#ifdef CONFIG_GIGASET_DEBUG
	char *dbgline;
	int i, l;

	if (!(gigaset_debuglevel & level))
		return;

	l = CAPIMSG_LEN(data);
	if (l < 12) {
		gig_dbg(level, "%s: ??? LEN=%04d", tag, l);
		return;
	}
	gig_dbg(level, "%s: 0x%02x:0x%02x: ID=%03d #0x%04x LEN=%04d NCCI=0x%x",
		tag, CAPIMSG_COMMAND(data), CAPIMSG_SUBCOMMAND(data),
		CAPIMSG_APPID(data), CAPIMSG_MSGID(data), l,
		CAPIMSG_CONTROL(data));
	l -= 12;
	if (l <= 0)
		return;
	if (l > 64)
		l = 64; /* arbitrary limit */
	dbgline = kmalloc_array(3, l, GFP_ATOMIC);
	if (!dbgline)
		return;
	for (i = 0; i < l; i++) {
		dbgline[3 * i] = hex_asc_hi(data[12 + i]);
		dbgline[3 * i + 1] = hex_asc_lo(data[12 + i]);
		dbgline[3 * i + 2] = ' ';
	}
	dbgline[3 * l - 1] = '\0';
	gig_dbg(level, "  %s", dbgline);
	kfree(dbgline);
	if (CAPIMSG_COMMAND(data) == CAPI_DATA_B3 &&
	    (CAPIMSG_SUBCOMMAND(data) == CAPI_REQ ||
	     CAPIMSG_SUBCOMMAND(data) == CAPI_IND)) {
		l = CAPIMSG_DATALEN(data);
		gig_dbg(level, "   DataLength=%d", l);
		if (l <= 0 || !(gigaset_debuglevel & DEBUG_LLDATA))
			return;
		if (l > 64)
			l = 64; /* arbitrary limit */
		dbgline = kmalloc_array(3, l, GFP_ATOMIC);
		if (!dbgline)
			return;
		data += CAPIMSG_LEN(data);
		for (i = 0; i < l; i++) {
			dbgline[3 * i] = hex_asc_hi(data[i]);
			dbgline[3 * i + 1] = hex_asc_lo(data[i]);
			dbgline[3 * i + 2] = ' ';
		}
		dbgline[3 * l - 1] = '\0';
		gig_dbg(level, "  %s", dbgline);
		kfree(dbgline);
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
          int _len_data0 = 1;
          unsigned char * data = (unsigned char *) malloc(_len_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_rawmsg(level,tag,data);
          free(tag);
          free(data);
        
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
          int _len_data0 = 65025;
          unsigned char * data = (unsigned char *) malloc(_len_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_rawmsg(level,tag,data);
          free(tag);
          free(data);
        
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
          int _len_data0 = 100;
          unsigned char * data = (unsigned char *) malloc(_len_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_rawmsg(level,tag,data);
          free(tag);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
