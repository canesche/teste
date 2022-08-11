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
typedef  int u32 ;
struct alu_struct {int is_static; int is_src_filter; int is_dst_filter; int prio_age; int mstp; int is_override; int is_use_fid; int port_forward; int fid; int* mac; } ;

/* Variables and functions */
 int ALU_V_DST_FILTER ; 
 int ALU_V_FID_M ; 
 int ALU_V_FID_S ; 
 int ALU_V_MSTP_M ; 
 int ALU_V_OVERRIDE ; 
 int ALU_V_PORT_MAP ; 
 int ALU_V_PRIO_AGE_CNT_M ; 
 int ALU_V_PRIO_AGE_CNT_S ; 
 int ALU_V_SRC_FILTER ; 
 int ALU_V_STATIC_VALID ; 
 int ALU_V_USE_FID ; 

__attribute__((used)) static void convert_alu(struct alu_struct *alu, u32 *alu_table)
{
	alu->is_static = !!(alu_table[0] & ALU_V_STATIC_VALID);
	alu->is_src_filter = !!(alu_table[0] & ALU_V_SRC_FILTER);
	alu->is_dst_filter = !!(alu_table[0] & ALU_V_DST_FILTER);
	alu->prio_age = (alu_table[0] >> ALU_V_PRIO_AGE_CNT_S) &
			ALU_V_PRIO_AGE_CNT_M;
	alu->mstp = alu_table[0] & ALU_V_MSTP_M;

	alu->is_override = !!(alu_table[1] & ALU_V_OVERRIDE);
	alu->is_use_fid = !!(alu_table[1] & ALU_V_USE_FID);
	alu->port_forward = alu_table[1] & ALU_V_PORT_MAP;

	alu->fid = (alu_table[2] >> ALU_V_FID_S) & ALU_V_FID_M;

	alu->mac[0] = (alu_table[2] >> 8) & 0xFF;
	alu->mac[1] = alu_table[2] & 0xFF;
	alu->mac[2] = (alu_table[3] >> 24) & 0xFF;
	alu->mac[3] = (alu_table[3] >> 16) & 0xFF;
	alu->mac[4] = (alu_table[3] >> 8) & 0xFF;
	alu->mac[5] = alu_table[3] & 0xFF;
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
          int _len_alu0 = 1;
          struct alu_struct * alu = (struct alu_struct *) malloc(_len_alu0*sizeof(struct alu_struct));
          for(int _i0 = 0; _i0 < _len_alu0; _i0++) {
            alu[_i0].is_static = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_src_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_dst_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].prio_age = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].mstp = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_override = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_use_fid = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].port_forward = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].fid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alu__i0__mac0 = 1;
          alu[_i0].mac = (int *) malloc(_len_alu__i0__mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alu__i0__mac0; _j0++) {
            alu[_i0].mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_alu_table0 = 1;
          int * alu_table = (int *) malloc(_len_alu_table0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_alu_table0; _i0++) {
            alu_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_alu(alu,alu_table);
          for(int _aux = 0; _aux < _len_alu0; _aux++) {
          free(alu[_aux].mac);
          }
          free(alu);
          free(alu_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_alu0 = 65025;
          struct alu_struct * alu = (struct alu_struct *) malloc(_len_alu0*sizeof(struct alu_struct));
          for(int _i0 = 0; _i0 < _len_alu0; _i0++) {
            alu[_i0].is_static = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_src_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_dst_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].prio_age = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].mstp = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_override = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_use_fid = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].port_forward = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].fid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alu__i0__mac0 = 1;
          alu[_i0].mac = (int *) malloc(_len_alu__i0__mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alu__i0__mac0; _j0++) {
            alu[_i0].mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_alu_table0 = 65025;
          int * alu_table = (int *) malloc(_len_alu_table0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_alu_table0; _i0++) {
            alu_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_alu(alu,alu_table);
          for(int _aux = 0; _aux < _len_alu0; _aux++) {
          free(alu[_aux].mac);
          }
          free(alu);
          free(alu_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_alu0 = 100;
          struct alu_struct * alu = (struct alu_struct *) malloc(_len_alu0*sizeof(struct alu_struct));
          for(int _i0 = 0; _i0 < _len_alu0; _i0++) {
            alu[_i0].is_static = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_src_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_dst_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].prio_age = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].mstp = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_override = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].is_use_fid = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].port_forward = ((-2 * (next_i()%2)) + 1) * next_i();
        alu[_i0].fid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alu__i0__mac0 = 1;
          alu[_i0].mac = (int *) malloc(_len_alu__i0__mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_alu__i0__mac0; _j0++) {
            alu[_i0].mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_alu_table0 = 100;
          int * alu_table = (int *) malloc(_len_alu_table0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_alu_table0; _i0++) {
            alu_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_alu(alu,alu_table);
          for(int _aux = 0; _aux < _len_alu0; _aux++) {
          free(alu[_aux].mac);
          }
          free(alu);
          free(alu_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
