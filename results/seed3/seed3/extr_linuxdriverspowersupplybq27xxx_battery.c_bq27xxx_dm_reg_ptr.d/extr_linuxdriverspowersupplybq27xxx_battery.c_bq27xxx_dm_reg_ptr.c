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
typedef  int /*<<< orphan*/  u16 ;
struct bq27xxx_dm_reg {scalar_t__ subclass_id; int offset; } ;
struct bq27xxx_dm_buf {scalar_t__ class; int block; scalar_t__ data; } ;

/* Variables and functions */
 int BQ27XXX_DM_SZ ; 

__attribute__((used)) static inline u16 *bq27xxx_dm_reg_ptr(struct bq27xxx_dm_buf *buf,
				      struct bq27xxx_dm_reg *reg)
{
	if (buf->class == reg->subclass_id &&
	    buf->block == reg->offset / BQ27XXX_DM_SZ)
		return (u16 *) (buf->data + reg->offset % BQ27XXX_DM_SZ);

	return NULL;
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
          struct bq27xxx_dm_buf * buf = (struct bq27xxx_dm_buf *) malloc(_len_buf0*sizeof(struct bq27xxx_dm_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].block = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 1;
          struct bq27xxx_dm_reg * reg = (struct bq27xxx_dm_reg *) malloc(_len_reg0*sizeof(struct bq27xxx_dm_reg));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].subclass_id = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = bq27xxx_dm_reg_ptr(buf,reg);
          printf("%d\n", (*benchRet)); 
          free(buf);
          free(reg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_buf0 = 65025;
          struct bq27xxx_dm_buf * buf = (struct bq27xxx_dm_buf *) malloc(_len_buf0*sizeof(struct bq27xxx_dm_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].block = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 65025;
          struct bq27xxx_dm_reg * reg = (struct bq27xxx_dm_reg *) malloc(_len_reg0*sizeof(struct bq27xxx_dm_reg));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].subclass_id = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = bq27xxx_dm_reg_ptr(buf,reg);
          printf("%d\n", (*benchRet)); 
          free(buf);
          free(reg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_buf0 = 100;
          struct bq27xxx_dm_buf * buf = (struct bq27xxx_dm_buf *) malloc(_len_buf0*sizeof(struct bq27xxx_dm_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].block = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 100;
          struct bq27xxx_dm_reg * reg = (struct bq27xxx_dm_reg *) malloc(_len_reg0*sizeof(struct bq27xxx_dm_reg));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].subclass_id = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = bq27xxx_dm_reg_ptr(buf,reg);
          printf("%d\n", (*benchRet)); 
          free(buf);
          free(reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
