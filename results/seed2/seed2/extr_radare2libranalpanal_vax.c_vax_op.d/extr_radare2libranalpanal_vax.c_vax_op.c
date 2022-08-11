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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int ut8 ;
typedef  int /*<<< orphan*/  ut64 ;
struct TYPE_3__ {int size; void* type; } ;
typedef  int /*<<< orphan*/  RAnalOpMask ;
typedef  TYPE_1__ RAnalOp ;
typedef  int /*<<< orphan*/  RAnal ;

/* Variables and functions */
 void* R_ANAL_OP_TYPE_ADD ; 
 void* R_ANAL_OP_TYPE_CJMP ; 
 void* R_ANAL_OP_TYPE_CMP ; 
 void* R_ANAL_OP_TYPE_DIV ; 
 void* R_ANAL_OP_TYPE_MOV ; 
 void* R_ANAL_OP_TYPE_NOP ; 
 void* R_ANAL_OP_TYPE_SHL ; 
 void* R_ANAL_OP_TYPE_SUB ; 
 void* R_ANAL_OP_TYPE_TRAP ; 
 void* R_ANAL_OP_TYPE_UNK ; 
 void* R_ANAL_OP_TYPE_XOR ; 

__attribute__((used)) static int vax_op(RAnal *anal, RAnalOp *op, ut64 addr, const ut8 *buf, int len, RAnalOpMask mask) {
	op->size = 1;
	if (len < 1) {
		return -1;
	}
	op->type = R_ANAL_OP_TYPE_UNK;
	switch (buf[0]) {
	case 0xd0:
	case 0x2e:
		op->type = R_ANAL_OP_TYPE_MOV;
		op->size = 8;
		break;
	case 0x78:
		op->type = R_ANAL_OP_TYPE_SHL;
		op->size = 8;
		break;
	case 0xc0:
	case 0xd8:
		op->type = R_ANAL_OP_TYPE_ADD;
		op->size = 8;
		break;
	case 0x00:
		op->type = R_ANAL_OP_TYPE_TRAP; // HALT
		break;
	case 0x01:
		op->type = R_ANAL_OP_TYPE_NOP;
		break;
	case 0x51:
	case 0x73:
		op->type = R_ANAL_OP_TYPE_CMP;
		break;
	case 0xac:
		op->type = R_ANAL_OP_TYPE_XOR;
		op->size = 4;
		break;
	case 0x5a:
		op->size = 2;
		break;
	case 0x11:
	case 0x18:
		op->size = 2;
		op->type = R_ANAL_OP_TYPE_CJMP;
		break;
	case 0x31:
	case 0xe9:
		op->size = 3;
		op->type = R_ANAL_OP_TYPE_CJMP;
		break;
	case 0xc6:
	case 0xc7:
		op->size = 8;
		op->type = R_ANAL_OP_TYPE_DIV;
		break;
	case 0xd6:
	case 0x61:
		op->size = 2;
		op->type = R_ANAL_OP_TYPE_ADD;
		break;
	case 0x62:
		op->type = R_ANAL_OP_TYPE_SUB;
		break;
	case 0xff:
		op->size = 2;
		break;
	}
	return op->size;
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
          int addr = 100;
          int len = 100;
          int mask = 100;
          int _len_anal0 = 1;
          int * anal = (int *) malloc(_len_anal0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_anal0; _i0++) {
            anal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op0 = 1;
          struct TYPE_3__ * op = (struct TYPE_3__ *) malloc(_len_op0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vax_op(anal,op,addr,buf,len,mask);
          printf("%d\n", benchRet); 
          free(anal);
          free(op);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int addr = 255;
          int len = 255;
          int mask = 255;
          int _len_anal0 = 65025;
          int * anal = (int *) malloc(_len_anal0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_anal0; _i0++) {
            anal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op0 = 65025;
          struct TYPE_3__ * op = (struct TYPE_3__ *) malloc(_len_op0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vax_op(anal,op,addr,buf,len,mask);
          printf("%d\n", benchRet); 
          free(anal);
          free(op);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int addr = 10;
          int len = 10;
          int mask = 10;
          int _len_anal0 = 100;
          int * anal = (int *) malloc(_len_anal0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_anal0; _i0++) {
            anal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op0 = 100;
          struct TYPE_3__ * op = (struct TYPE_3__ *) malloc(_len_op0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vax_op(anal,op,addr,buf,len,mask);
          printf("%d\n", benchRet); 
          free(anal);
          free(op);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
