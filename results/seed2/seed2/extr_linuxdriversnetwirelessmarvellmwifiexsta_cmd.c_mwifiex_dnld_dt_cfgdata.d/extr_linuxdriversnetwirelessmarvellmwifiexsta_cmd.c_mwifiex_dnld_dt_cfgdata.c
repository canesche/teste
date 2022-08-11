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
struct mwifiex_private {int dummy; } ;
struct device_node {int dummy; } ;

/* Variables and functions */

int mwifiex_dnld_dt_cfgdata(struct mwifiex_private *priv,
			    struct device_node *node, const char *prefix)
{
#ifdef CONFIG_OF
	struct property *prop;
	size_t len = strlen(prefix);
	int ret;

	/* look for all matching property names */
	for_each_property_of_node(node, prop) {
		if (len > strlen(prop->name) ||
		    strncmp(prop->name, prefix, len))
			continue;

		/* property header is 6 bytes, data must fit in cmd buffer */
		if (prop->value && prop->length > 6 &&
		    prop->length <= MWIFIEX_SIZE_OF_CMD_BUFFER - S_DS_GEN) {
			ret = mwifiex_send_cmd(priv, HostCmd_CMD_CFG_DATA,
					       HostCmd_ACT_GEN_SET, 0,
					       prop, true);
			if (ret)
				return ret;
		}
	}
#endif
	return 0;
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
          int _len_priv0 = 1;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 1;
          struct device_node * node = (struct device_node *) malloc(_len_node0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 1;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mwifiex_dnld_dt_cfgdata(priv,node,prefix);
          printf("%d\n", benchRet); 
          free(priv);
          free(node);
          free(prefix);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 65025;
          struct device_node * node = (struct device_node *) malloc(_len_node0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 65025;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mwifiex_dnld_dt_cfgdata(priv,node,prefix);
          printf("%d\n", benchRet); 
          free(priv);
          free(node);
          free(prefix);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 100;
          struct device_node * node = (struct device_node *) malloc(_len_node0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 100;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mwifiex_dnld_dt_cfgdata(priv,node,prefix);
          printf("%d\n", benchRet); 
          free(priv);
          free(node);
          free(prefix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
