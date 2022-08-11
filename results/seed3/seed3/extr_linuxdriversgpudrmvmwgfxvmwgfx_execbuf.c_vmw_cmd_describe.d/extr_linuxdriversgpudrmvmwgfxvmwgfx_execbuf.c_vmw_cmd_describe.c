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
typedef  size_t u32 ;
struct vmw_cmd_entry {char* cmd_name; } ;
struct TYPE_2__ {size_t size; size_t id; } ;
typedef  int /*<<< orphan*/  SVGAFifoCmdUpdate ;
typedef  int /*<<< orphan*/  SVGAFifoCmdDefineGMRFB ;
typedef  int /*<<< orphan*/  SVGAFifoCmdBlitGMRFBToScreen ;
typedef  TYPE_1__ SVGA3dCmdHeader ;

/* Variables and functions */
 scalar_t__ SVGA_3D_CMD_BASE ; 
 size_t SVGA_3D_CMD_MAX ; 
#define  SVGA_CMD_BLIT_GMRFB_TO_SCREEN 131 
#define  SVGA_CMD_BLIT_SCREEN_TO_GMRFB 130 
#define  SVGA_CMD_DEFINE_GMRFB 129 
 size_t SVGA_CMD_MAX ; 
#define  SVGA_CMD_UPDATE 128 
 struct vmw_cmd_entry* vmw_cmd_entries ; 

bool vmw_cmd_describe(const void *buf, u32 *size, char const **cmd)
{
	u32 cmd_id = ((u32 *) buf)[0];

	if (cmd_id >= SVGA_CMD_MAX) {
		SVGA3dCmdHeader *header = (SVGA3dCmdHeader *) buf;
		const struct vmw_cmd_entry *entry;

		*size = header->size + sizeof(SVGA3dCmdHeader);
		cmd_id = header->id;
		if (cmd_id >= SVGA_3D_CMD_MAX)
			return false;

		cmd_id -= SVGA_3D_CMD_BASE;
		entry = &vmw_cmd_entries[cmd_id];
		*cmd = entry->cmd_name;
		return true;
	}

	switch (cmd_id) {
	case SVGA_CMD_UPDATE:
		*cmd = "SVGA_CMD_UPDATE";
		*size = sizeof(u32) + sizeof(SVGAFifoCmdUpdate);
		break;
	case SVGA_CMD_DEFINE_GMRFB:
		*cmd = "SVGA_CMD_DEFINE_GMRFB";
		*size = sizeof(u32) + sizeof(SVGAFifoCmdDefineGMRFB);
		break;
	case SVGA_CMD_BLIT_GMRFB_TO_SCREEN:
		*cmd = "SVGA_CMD_BLIT_GMRFB_TO_SCREEN";
		*size = sizeof(u32) + sizeof(SVGAFifoCmdBlitGMRFBToScreen);
		break;
	case SVGA_CMD_BLIT_SCREEN_TO_GMRFB:
		*cmd = "SVGA_CMD_BLIT_SCREEN_TO_GMRFB";
		*size = sizeof(u32) + sizeof(SVGAFifoCmdBlitGMRFBToScreen);
		break;
	default:
		*cmd = "UNKNOWN";
		*size = 0;
		return false;
	}

	return true;
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
          int _len_buf0 = 1;
          const void * buf = (const void *) malloc(_len_buf0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = 0;
          }
          int _len_size0 = 1;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          const char ** cmd = (const char **) malloc(_len_cmd0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            int _len_cmd1 = 1;
            cmd[_i0] = (const char *) malloc(_len_cmd1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_cmd1; _i1++) {
              cmd[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = vmw_cmd_describe(buf,size,cmd);
          printf("%d\n", benchRet); 
          free(buf);
          free(size);
          for(int i1 = 0; i1 < _len_cmd0; i1++) {
            int _len_cmd1 = 1;
              free(cmd[i1]);
          }
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_buf0 = 65025;
          const void * buf = (const void *) malloc(_len_buf0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = 0;
          }
          int _len_size0 = 65025;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 65025;
          const char ** cmd = (const char **) malloc(_len_cmd0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            int _len_cmd1 = 1;
            cmd[_i0] = (const char *) malloc(_len_cmd1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_cmd1; _i1++) {
              cmd[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = vmw_cmd_describe(buf,size,cmd);
          printf("%d\n", benchRet); 
          free(buf);
          free(size);
          for(int i1 = 0; i1 < _len_cmd0; i1++) {
            int _len_cmd1 = 1;
              free(cmd[i1]);
          }
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_buf0 = 100;
          const void * buf = (const void *) malloc(_len_buf0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = 0;
          }
          int _len_size0 = 100;
          unsigned long * size = (unsigned long *) malloc(_len_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 100;
          const char ** cmd = (const char **) malloc(_len_cmd0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            int _len_cmd1 = 1;
            cmd[_i0] = (const char *) malloc(_len_cmd1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_cmd1; _i1++) {
              cmd[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = vmw_cmd_describe(buf,size,cmd);
          printf("%d\n", benchRet); 
          free(buf);
          free(size);
          for(int i1 = 0; i1 < _len_cmd0; i1++) {
            int _len_cmd1 = 1;
              free(cmd[i1]);
          }
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
