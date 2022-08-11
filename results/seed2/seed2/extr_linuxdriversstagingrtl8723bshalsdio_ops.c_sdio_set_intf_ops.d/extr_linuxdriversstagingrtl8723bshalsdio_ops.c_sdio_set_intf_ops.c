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
struct adapter {int dummy; } ;
struct _io_ops {int /*<<< orphan*/  _sd_f0_read8; int /*<<< orphan*/ * _write_port; int /*<<< orphan*/ * _write_mem; int /*<<< orphan*/ * _writeN; int /*<<< orphan*/ * _write32; int /*<<< orphan*/ * _write16; int /*<<< orphan*/ * _write8; int /*<<< orphan*/ * _read_port; int /*<<< orphan*/ * _read_mem; int /*<<< orphan*/ * _read32; int /*<<< orphan*/ * _read16; int /*<<< orphan*/ * _read8; } ;

/* Variables and functions */
 int /*<<< orphan*/  sdio_f0_read8 ; 
 int /*<<< orphan*/  sdio_read16 ; 
 int /*<<< orphan*/  sdio_read32 ; 
 int /*<<< orphan*/  sdio_read8 ; 
 int /*<<< orphan*/  sdio_read_mem ; 
 int /*<<< orphan*/  sdio_read_port ; 
 int /*<<< orphan*/  sdio_write16 ; 
 int /*<<< orphan*/  sdio_write32 ; 
 int /*<<< orphan*/  sdio_write8 ; 
 int /*<<< orphan*/  sdio_writeN ; 
 int /*<<< orphan*/  sdio_write_mem ; 
 int /*<<< orphan*/  sdio_write_port ; 

void sdio_set_intf_ops(struct adapter *adapter, struct _io_ops *ops)
{
	ops->_read8 = &sdio_read8;
	ops->_read16 = &sdio_read16;
	ops->_read32 = &sdio_read32;
	ops->_read_mem = &sdio_read_mem;
	ops->_read_port = &sdio_read_port;

	ops->_write8 = &sdio_write8;
	ops->_write16 = &sdio_write16;
	ops->_write32 = &sdio_write32;
	ops->_writeN = &sdio_writeN;
	ops->_write_mem = &sdio_write_mem;
	ops->_write_port = &sdio_write_port;

	ops->_sd_f0_read8 = sdio_f0_read8;
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
          int _len_adapter0 = 1;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops0 = 1;
          struct _io_ops * ops = (struct _io_ops *) malloc(_len_ops0*sizeof(struct _io_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0]._sd_f0_read8 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ops__i0___write_port0 = 1;
          ops[_i0]._write_port = (int *) malloc(_len_ops__i0___write_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write_port0; _j0++) {
            ops[_i0]._write_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write_mem0 = 1;
          ops[_i0]._write_mem = (int *) malloc(_len_ops__i0___write_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write_mem0; _j0++) {
            ops[_i0]._write_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___writeN0 = 1;
          ops[_i0]._writeN = (int *) malloc(_len_ops__i0___writeN0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___writeN0; _j0++) {
            ops[_i0]._writeN[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write320 = 1;
          ops[_i0]._write32 = (int *) malloc(_len_ops__i0___write320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write320; _j0++) {
            ops[_i0]._write32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write160 = 1;
          ops[_i0]._write16 = (int *) malloc(_len_ops__i0___write160*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write160; _j0++) {
            ops[_i0]._write16[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write80 = 1;
          ops[_i0]._write8 = (int *) malloc(_len_ops__i0___write80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write80; _j0++) {
            ops[_i0]._write8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read_port0 = 1;
          ops[_i0]._read_port = (int *) malloc(_len_ops__i0___read_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read_port0; _j0++) {
            ops[_i0]._read_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read_mem0 = 1;
          ops[_i0]._read_mem = (int *) malloc(_len_ops__i0___read_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read_mem0; _j0++) {
            ops[_i0]._read_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read320 = 1;
          ops[_i0]._read32 = (int *) malloc(_len_ops__i0___read320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read320; _j0++) {
            ops[_i0]._read32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read160 = 1;
          ops[_i0]._read16 = (int *) malloc(_len_ops__i0___read160*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read160; _j0++) {
            ops[_i0]._read16[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read80 = 1;
          ops[_i0]._read8 = (int *) malloc(_len_ops__i0___read80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read80; _j0++) {
            ops[_i0]._read8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sdio_set_intf_ops(adapter,ops);
          free(adapter);
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write_port);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write_mem);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._writeN);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write32);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write16);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write8);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read_port);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read_mem);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read32);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read16);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read8);
          }
          free(ops);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops0 = 65025;
          struct _io_ops * ops = (struct _io_ops *) malloc(_len_ops0*sizeof(struct _io_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0]._sd_f0_read8 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ops__i0___write_port0 = 1;
          ops[_i0]._write_port = (int *) malloc(_len_ops__i0___write_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write_port0; _j0++) {
            ops[_i0]._write_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write_mem0 = 1;
          ops[_i0]._write_mem = (int *) malloc(_len_ops__i0___write_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write_mem0; _j0++) {
            ops[_i0]._write_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___writeN0 = 1;
          ops[_i0]._writeN = (int *) malloc(_len_ops__i0___writeN0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___writeN0; _j0++) {
            ops[_i0]._writeN[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write320 = 1;
          ops[_i0]._write32 = (int *) malloc(_len_ops__i0___write320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write320; _j0++) {
            ops[_i0]._write32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write160 = 1;
          ops[_i0]._write16 = (int *) malloc(_len_ops__i0___write160*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write160; _j0++) {
            ops[_i0]._write16[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write80 = 1;
          ops[_i0]._write8 = (int *) malloc(_len_ops__i0___write80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write80; _j0++) {
            ops[_i0]._write8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read_port0 = 1;
          ops[_i0]._read_port = (int *) malloc(_len_ops__i0___read_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read_port0; _j0++) {
            ops[_i0]._read_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read_mem0 = 1;
          ops[_i0]._read_mem = (int *) malloc(_len_ops__i0___read_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read_mem0; _j0++) {
            ops[_i0]._read_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read320 = 1;
          ops[_i0]._read32 = (int *) malloc(_len_ops__i0___read320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read320; _j0++) {
            ops[_i0]._read32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read160 = 1;
          ops[_i0]._read16 = (int *) malloc(_len_ops__i0___read160*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read160; _j0++) {
            ops[_i0]._read16[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read80 = 1;
          ops[_i0]._read8 = (int *) malloc(_len_ops__i0___read80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read80; _j0++) {
            ops[_i0]._read8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sdio_set_intf_ops(adapter,ops);
          free(adapter);
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write_port);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write_mem);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._writeN);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write32);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write16);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write8);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read_port);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read_mem);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read32);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read16);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read8);
          }
          free(ops);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops0 = 100;
          struct _io_ops * ops = (struct _io_ops *) malloc(_len_ops0*sizeof(struct _io_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0]._sd_f0_read8 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ops__i0___write_port0 = 1;
          ops[_i0]._write_port = (int *) malloc(_len_ops__i0___write_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write_port0; _j0++) {
            ops[_i0]._write_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write_mem0 = 1;
          ops[_i0]._write_mem = (int *) malloc(_len_ops__i0___write_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write_mem0; _j0++) {
            ops[_i0]._write_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___writeN0 = 1;
          ops[_i0]._writeN = (int *) malloc(_len_ops__i0___writeN0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___writeN0; _j0++) {
            ops[_i0]._writeN[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write320 = 1;
          ops[_i0]._write32 = (int *) malloc(_len_ops__i0___write320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write320; _j0++) {
            ops[_i0]._write32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write160 = 1;
          ops[_i0]._write16 = (int *) malloc(_len_ops__i0___write160*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write160; _j0++) {
            ops[_i0]._write16[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___write80 = 1;
          ops[_i0]._write8 = (int *) malloc(_len_ops__i0___write80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___write80; _j0++) {
            ops[_i0]._write8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read_port0 = 1;
          ops[_i0]._read_port = (int *) malloc(_len_ops__i0___read_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read_port0; _j0++) {
            ops[_i0]._read_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read_mem0 = 1;
          ops[_i0]._read_mem = (int *) malloc(_len_ops__i0___read_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read_mem0; _j0++) {
            ops[_i0]._read_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read320 = 1;
          ops[_i0]._read32 = (int *) malloc(_len_ops__i0___read320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read320; _j0++) {
            ops[_i0]._read32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read160 = 1;
          ops[_i0]._read16 = (int *) malloc(_len_ops__i0___read160*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read160; _j0++) {
            ops[_i0]._read16[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ops__i0___read80 = 1;
          ops[_i0]._read8 = (int *) malloc(_len_ops__i0___read80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0___read80; _j0++) {
            ops[_i0]._read8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sdio_set_intf_ops(adapter,ops);
          free(adapter);
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write_port);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write_mem);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._writeN);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write32);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write16);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._write8);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read_port);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read_mem);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read32);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read16);
          }
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux]._read8);
          }
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
