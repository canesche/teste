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
typedef  scalar_t__ u8 ;
struct TYPE_2__ {int msg_num; int cmd; scalar_t__ addr_width; scalar_t__ data_len; struct i2c_msg* msg; } ;
struct mlxcpld_i2c_priv {TYPE_1__ xfer; } ;
struct i2c_msg {int flags; scalar_t__ len; } ;

/* Variables and functions */
 int I2C_M_RD ; 

__attribute__((used)) static void mlxcpld_i2c_set_transf_data(struct mlxcpld_i2c_priv *priv,
					struct i2c_msg *msgs, int num,
					u8 comm_len)
{
	priv->xfer.msg = msgs;
	priv->xfer.msg_num = num;

	/*
	 * All upper layers currently are never use transfer with more than
	 * 2 messages. Actually, it's also not so relevant in Mellanox systems
	 * because of HW limitation. Max size of transfer is not more than 32
	 * or 68 bytes in the current x86 LPCI2C bridge.
	 */
	priv->xfer.cmd = msgs[num - 1].flags & I2C_M_RD;

	if (priv->xfer.cmd == I2C_M_RD && comm_len != msgs[0].len) {
		priv->xfer.addr_width = msgs[0].len;
		priv->xfer.data_len = comm_len - priv->xfer.addr_width;
	} else {
		priv->xfer.addr_width = 0;
		priv->xfer.data_len = comm_len;
	}
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
          int num = 100;
          long comm_len = 100;
          int _len_priv0 = 1;
          struct mlxcpld_i2c_priv * priv = (struct mlxcpld_i2c_priv *) malloc(_len_priv0*sizeof(struct mlxcpld_i2c_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].xfer.msg_num = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.data_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__xfer_msg0 = 1;
          priv[_i0].xfer.msg = (struct i2c_msg *) malloc(_len_priv__i0__xfer_msg0*sizeof(struct i2c_msg));
          for(int _j0 = 0; _j0 < _len_priv__i0__xfer_msg0; _j0++) {
            priv[_i0].xfer.msg->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.msg->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_msgs0 = 1;
          struct i2c_msg * msgs = (struct i2c_msg *) malloc(_len_msgs0*sizeof(struct i2c_msg));
          for(int _i0 = 0; _i0 < _len_msgs0; _i0++) {
            msgs[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        msgs[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxcpld_i2c_set_transf_data(priv,msgs,num,comm_len);
          free(priv);
          free(msgs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num = 255;
          long comm_len = 255;
          int _len_priv0 = 65025;
          struct mlxcpld_i2c_priv * priv = (struct mlxcpld_i2c_priv *) malloc(_len_priv0*sizeof(struct mlxcpld_i2c_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].xfer.msg_num = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.data_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__xfer_msg0 = 1;
          priv[_i0].xfer.msg = (struct i2c_msg *) malloc(_len_priv__i0__xfer_msg0*sizeof(struct i2c_msg));
          for(int _j0 = 0; _j0 < _len_priv__i0__xfer_msg0; _j0++) {
            priv[_i0].xfer.msg->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.msg->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_msgs0 = 65025;
          struct i2c_msg * msgs = (struct i2c_msg *) malloc(_len_msgs0*sizeof(struct i2c_msg));
          for(int _i0 = 0; _i0 < _len_msgs0; _i0++) {
            msgs[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        msgs[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxcpld_i2c_set_transf_data(priv,msgs,num,comm_len);
          free(priv);
          free(msgs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num = 10;
          long comm_len = 10;
          int _len_priv0 = 100;
          struct mlxcpld_i2c_priv * priv = (struct mlxcpld_i2c_priv *) malloc(_len_priv0*sizeof(struct mlxcpld_i2c_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].xfer.msg_num = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.data_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__xfer_msg0 = 1;
          priv[_i0].xfer.msg = (struct i2c_msg *) malloc(_len_priv__i0__xfer_msg0*sizeof(struct i2c_msg));
          for(int _j0 = 0; _j0 < _len_priv__i0__xfer_msg0; _j0++) {
            priv[_i0].xfer.msg->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].xfer.msg->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_msgs0 = 100;
          struct i2c_msg * msgs = (struct i2c_msg *) malloc(_len_msgs0*sizeof(struct i2c_msg));
          for(int _i0 = 0; _i0 < _len_msgs0; _i0++) {
            msgs[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        msgs[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxcpld_i2c_set_transf_data(priv,msgs,num,comm_len);
          free(priv);
          free(msgs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
