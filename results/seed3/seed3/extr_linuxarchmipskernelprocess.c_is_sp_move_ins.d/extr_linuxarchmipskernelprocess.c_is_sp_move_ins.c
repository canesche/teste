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
struct TYPE_2__ {int rs; int rt; scalar_t__ opcode; int simmediate; } ;
union mips_instruction {TYPE_1__ i_format; } ;

/* Variables and functions */
 scalar_t__ addiu_op ; 
 scalar_t__ daddiu_op ; 

__attribute__((used)) static inline int is_sp_move_ins(union mips_instruction *ip, int *frame_size)
{
#ifdef CONFIG_CPU_MICROMIPS
	unsigned short tmp;

	/*
	 * addiusp -imm
	 * addius5 sp,-imm
	 * addiu32 sp,sp,-imm
	 * jradiussp - NOT SUPPORTED
	 *
	 * microMIPS is not more fun...
	 */
	if (mm_insn_16bit(ip->word >> 16)) {
		if (ip->mm16_r3_format.opcode == mm_pool16d_op &&
		    ip->mm16_r3_format.simmediate & mm_addiusp_func) {
			tmp = ip->mm_b0_format.simmediate >> 1;
			tmp = ((tmp & 0x1ff) ^ 0x100) - 0x100;
			if ((tmp + 2) < 4) /* 0x0,0x1,0x1fe,0x1ff are special */
				tmp ^= 0x100;
			*frame_size = -(signed short)(tmp << 2);
			return 1;
		}
		if (ip->mm16_r5_format.opcode == mm_pool16d_op &&
		    ip->mm16_r5_format.rt == 29) {
			tmp = ip->mm16_r5_format.imm >> 1;
			*frame_size = -(signed short)(tmp & 0xf);
			return 1;
		}
		return 0;
	}

	if (ip->mm_i_format.opcode == mm_addiu32_op &&
	    ip->mm_i_format.rt == 29 && ip->mm_i_format.rs == 29) {
		*frame_size = -ip->i_format.simmediate;
		return 1;
	}
#else
	/* addiu/daddiu sp,sp,-imm */
	if (ip->i_format.rs != 29 || ip->i_format.rt != 29)
		return 0;

	if (ip->i_format.opcode == addiu_op ||
	    ip->i_format.opcode == daddiu_op) {
		*frame_size = -ip->i_format.simmediate;
		return 1;
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
          int _len_ip0 = 1;
          union mips_instruction * ip = (union mips_instruction *) malloc(_len_ip0*sizeof(union mips_instruction));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = 0;
          }
          int _len_frame_size0 = 1;
          int * frame_size = (int *) malloc(_len_frame_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame_size0; _i0++) {
            frame_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_sp_move_ins(ip,frame_size);
          printf("%d\n", benchRet); 
          free(ip);
          free(frame_size);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ip0 = 65025;
          union mips_instruction * ip = (union mips_instruction *) malloc(_len_ip0*sizeof(union mips_instruction));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = 0;
          }
          int _len_frame_size0 = 65025;
          int * frame_size = (int *) malloc(_len_frame_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame_size0; _i0++) {
            frame_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_sp_move_ins(ip,frame_size);
          printf("%d\n", benchRet); 
          free(ip);
          free(frame_size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ip0 = 100;
          union mips_instruction * ip = (union mips_instruction *) malloc(_len_ip0*sizeof(union mips_instruction));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = 0;
          }
          int _len_frame_size0 = 100;
          int * frame_size = (int *) malloc(_len_frame_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame_size0; _i0++) {
            frame_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_sp_move_ins(ip,frame_size);
          printf("%d\n", benchRet); 
          free(ip);
          free(frame_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
