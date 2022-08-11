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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint32_t ;
struct lpfc_vport {int dummy; } ;
struct TYPE_3__ {scalar_t__ Fc4Type; } ;
struct TYPE_4__ {TYPE_1__ gid; } ;
struct lpfc_sli_ct_request {TYPE_2__ un; } ;
struct lpfc_iocbq {struct lpfc_dmabuf* context1; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;

/* Variables and functions */
 scalar_t__ SLI_CTPT_FCP ; 
 scalar_t__ SLI_CTPT_NVME ; 

int
lpfc_get_gidft_type(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb)
{
	struct lpfc_sli_ct_request *CtReq;
	struct lpfc_dmabuf *mp;
	uint32_t type;

	mp = cmdiocb->context1;
	if (mp == NULL)
		return 0;
	CtReq = (struct lpfc_sli_ct_request *)mp->virt;
	type = (uint32_t)CtReq->un.gid.Fc4Type;
	if ((type != SLI_CTPT_FCP) && (type != SLI_CTPT_NVME))
		return 0;
	return type;
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
          int _len_vport0 = 1;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
            vport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmdiocb0 = 1;
          struct lpfc_iocbq * cmdiocb = (struct lpfc_iocbq *) malloc(_len_cmdiocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_cmdiocb0; _i0++) {
              int _len_cmdiocb__i0__context10 = 1;
          cmdiocb[_i0].context1 = (struct lpfc_dmabuf *) malloc(_len_cmdiocb__i0__context10*sizeof(struct lpfc_dmabuf));
          for(int _j0 = 0; _j0 < _len_cmdiocb__i0__context10; _j0++) {
            cmdiocb[_i0].context1->virt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_get_gidft_type(vport,cmdiocb);
          printf("%d\n", benchRet); 
          free(vport);
          for(int _aux = 0; _aux < _len_cmdiocb0; _aux++) {
          free(cmdiocb[_aux].context1);
          }
          free(cmdiocb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vport0 = 65025;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
            vport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmdiocb0 = 65025;
          struct lpfc_iocbq * cmdiocb = (struct lpfc_iocbq *) malloc(_len_cmdiocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_cmdiocb0; _i0++) {
              int _len_cmdiocb__i0__context10 = 1;
          cmdiocb[_i0].context1 = (struct lpfc_dmabuf *) malloc(_len_cmdiocb__i0__context10*sizeof(struct lpfc_dmabuf));
          for(int _j0 = 0; _j0 < _len_cmdiocb__i0__context10; _j0++) {
            cmdiocb[_i0].context1->virt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_get_gidft_type(vport,cmdiocb);
          printf("%d\n", benchRet); 
          free(vport);
          for(int _aux = 0; _aux < _len_cmdiocb0; _aux++) {
          free(cmdiocb[_aux].context1);
          }
          free(cmdiocb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vport0 = 100;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
            vport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmdiocb0 = 100;
          struct lpfc_iocbq * cmdiocb = (struct lpfc_iocbq *) malloc(_len_cmdiocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_cmdiocb0; _i0++) {
              int _len_cmdiocb__i0__context10 = 1;
          cmdiocb[_i0].context1 = (struct lpfc_dmabuf *) malloc(_len_cmdiocb__i0__context10*sizeof(struct lpfc_dmabuf));
          for(int _j0 = 0; _j0 < _len_cmdiocb__i0__context10; _j0++) {
            cmdiocb[_i0].context1->virt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_get_gidft_type(vport,cmdiocb);
          printf("%d\n", benchRet); 
          free(vport);
          for(int _aux = 0; _aux < _len_cmdiocb0; _aux++) {
          free(cmdiocb[_aux].context1);
          }
          free(cmdiocb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
