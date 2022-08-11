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
struct media_gobj {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void dev_dbg_obj(const char *event_name,  struct media_gobj *gobj)
{
#if defined(DEBUG) || defined (CONFIG_DYNAMIC_DEBUG)
	switch (media_type(gobj)) {
	case MEDIA_GRAPH_ENTITY:
		dev_dbg(gobj->mdev->dev,
			"%s id %u: entity '%s'\n",
			event_name, media_id(gobj),
			gobj_to_entity(gobj)->name);
		break;
	case MEDIA_GRAPH_LINK:
	{
		struct media_link *link = gobj_to_link(gobj);

		dev_dbg(gobj->mdev->dev,
			"%s id %u: %s link id %u ==> id %u\n",
			event_name, media_id(gobj),
			media_type(link->gobj0) == MEDIA_GRAPH_PAD ?
				"data" : "interface",
			media_id(link->gobj0),
			media_id(link->gobj1));
		break;
	}
	case MEDIA_GRAPH_PAD:
	{
		struct media_pad *pad = gobj_to_pad(gobj);

		dev_dbg(gobj->mdev->dev,
			"%s id %u: %s%spad '%s':%d\n",
			event_name, media_id(gobj),
			pad->flags & MEDIA_PAD_FL_SINK   ? "sink " : "",
			pad->flags & MEDIA_PAD_FL_SOURCE ? "source " : "",
			pad->entity->name, pad->index);
		break;
	}
	case MEDIA_GRAPH_INTF_DEVNODE:
	{
		struct media_interface *intf = gobj_to_intf(gobj);
		struct media_intf_devnode *devnode = intf_to_devnode(intf);

		dev_dbg(gobj->mdev->dev,
			"%s id %u: intf_devnode %s - major: %d, minor: %d\n",
			event_name, media_id(gobj),
			intf_type(intf),
			devnode->major, devnode->minor);
		break;
	}
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
          int _len_event_name0 = 1;
          const char * event_name = (const char *) malloc(_len_event_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_event_name0; _i0++) {
            event_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gobj0 = 1;
          struct media_gobj * gobj = (struct media_gobj *) malloc(_len_gobj0*sizeof(struct media_gobj));
          for(int _i0 = 0; _i0 < _len_gobj0; _i0++) {
            gobj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dev_dbg_obj(event_name,gobj);
          free(event_name);
          free(gobj);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_event_name0 = 65025;
          const char * event_name = (const char *) malloc(_len_event_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_event_name0; _i0++) {
            event_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gobj0 = 65025;
          struct media_gobj * gobj = (struct media_gobj *) malloc(_len_gobj0*sizeof(struct media_gobj));
          for(int _i0 = 0; _i0 < _len_gobj0; _i0++) {
            gobj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dev_dbg_obj(event_name,gobj);
          free(event_name);
          free(gobj);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_event_name0 = 100;
          const char * event_name = (const char *) malloc(_len_event_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_event_name0; _i0++) {
            event_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gobj0 = 100;
          struct media_gobj * gobj = (struct media_gobj *) malloc(_len_gobj0*sizeof(struct media_gobj));
          for(int _i0 = 0; _i0 < _len_gobj0; _i0++) {
            gobj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dev_dbg_obj(event_name,gobj);
          free(event_name);
          free(gobj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
