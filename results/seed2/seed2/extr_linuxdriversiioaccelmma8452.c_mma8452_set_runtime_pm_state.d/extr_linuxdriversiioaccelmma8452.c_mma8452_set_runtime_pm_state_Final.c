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
struct i2c_client {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int mma8452_set_runtime_pm_state(struct i2c_client *client, bool on)
{
#ifdef CONFIG_PM
	int ret;

	if (on) {
		ret = pm_runtime_get_sync(&client->dev);
	} else {
		pm_runtime_mark_last_busy(&client->dev);
		ret = pm_runtime_put_autosuspend(&client->dev);
	}

	if (ret < 0) {
		dev_err(&client->dev,
			"failed to change power state to %d\n", on);
		if (on)
			pm_runtime_put_noidle(&client->dev);

		return ret;
	}
#endif

	return 0;
}


// ------------------------------------------------------------------------- //




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
          int on = 100;
          int _len_client0 = 1;
          struct i2c_client * client = (struct i2c_client *) malloc(_len_client0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mma8452_set_runtime_pm_state(client,on);
          printf("%d\n", benchRet); 
          free(client);
        
        break;
    }
    // big-arr
    case 1:
    {
          int on = 255;
          int _len_client0 = 65025;
          struct i2c_client * client = (struct i2c_client *) malloc(_len_client0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mma8452_set_runtime_pm_state(client,on);
          printf("%d\n", benchRet); 
          free(client);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int on = 10;
          int _len_client0 = 100;
          struct i2c_client * client = (struct i2c_client *) malloc(_len_client0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mma8452_set_runtime_pm_state(client,on);
          printf("%d\n", benchRet); 
          free(client);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
