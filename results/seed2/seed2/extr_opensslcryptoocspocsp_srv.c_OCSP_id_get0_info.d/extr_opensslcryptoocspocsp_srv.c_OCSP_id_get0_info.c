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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * algorithm; } ;
struct TYPE_5__ {int /*<<< orphan*/  serialNumber; int /*<<< orphan*/  issuerKeyHash; int /*<<< orphan*/  issuerNameHash; TYPE_1__ hashAlgorithm; } ;
typedef  TYPE_2__ OCSP_CERTID ;
typedef  int /*<<< orphan*/  ASN1_OCTET_STRING ;
typedef  int /*<<< orphan*/  ASN1_OBJECT ;
typedef  int /*<<< orphan*/  ASN1_INTEGER ;

/* Variables and functions */

int OCSP_id_get0_info(ASN1_OCTET_STRING **piNameHash, ASN1_OBJECT **pmd,
                      ASN1_OCTET_STRING **pikeyHash,
                      ASN1_INTEGER **pserial, OCSP_CERTID *cid)
{
    if (!cid)
        return 0;
    if (pmd)
        *pmd = cid->hashAlgorithm.algorithm;
    if (piNameHash)
        *piNameHash = &cid->issuerNameHash;
    if (pikeyHash)
        *pikeyHash = &cid->issuerKeyHash;
    if (pserial)
        *pserial = &cid->serialNumber;
    return 1;
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
          int _len_piNameHash0 = 1;
          int ** piNameHash = (int **) malloc(_len_piNameHash0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_piNameHash0; _i0++) {
            int _len_piNameHash1 = 1;
            piNameHash[_i0] = (int *) malloc(_len_piNameHash1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_piNameHash1; _i1++) {
              piNameHash[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pmd0 = 1;
          int ** pmd = (int **) malloc(_len_pmd0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pmd0; _i0++) {
            int _len_pmd1 = 1;
            pmd[_i0] = (int *) malloc(_len_pmd1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pmd1; _i1++) {
              pmd[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pikeyHash0 = 1;
          int ** pikeyHash = (int **) malloc(_len_pikeyHash0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pikeyHash0; _i0++) {
            int _len_pikeyHash1 = 1;
            pikeyHash[_i0] = (int *) malloc(_len_pikeyHash1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pikeyHash1; _i1++) {
              pikeyHash[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pserial0 = 1;
          int ** pserial = (int **) malloc(_len_pserial0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pserial0; _i0++) {
            int _len_pserial1 = 1;
            pserial[_i0] = (int *) malloc(_len_pserial1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pserial1; _i1++) {
              pserial[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cid0 = 1;
          struct TYPE_5__ * cid = (struct TYPE_5__ *) malloc(_len_cid0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cid0; _i0++) {
            cid[_i0].serialNumber = ((-2 * (next_i()%2)) + 1) * next_i();
        cid[_i0].issuerKeyHash = ((-2 * (next_i()%2)) + 1) * next_i();
        cid[_i0].issuerNameHash = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cid__i0__hashAlgorithm_algorithm0 = 1;
          cid[_i0].hashAlgorithm.algorithm = (int *) malloc(_len_cid__i0__hashAlgorithm_algorithm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cid__i0__hashAlgorithm_algorithm0; _j0++) {
            cid[_i0].hashAlgorithm.algorithm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = OCSP_id_get0_info(piNameHash,pmd,pikeyHash,pserial,cid);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_piNameHash0; i1++) {
            int _len_piNameHash1 = 1;
              free(piNameHash[i1]);
          }
          free(piNameHash);
          for(int i1 = 0; i1 < _len_pmd0; i1++) {
            int _len_pmd1 = 1;
              free(pmd[i1]);
          }
          free(pmd);
          for(int i1 = 0; i1 < _len_pikeyHash0; i1++) {
            int _len_pikeyHash1 = 1;
              free(pikeyHash[i1]);
          }
          free(pikeyHash);
          for(int i1 = 0; i1 < _len_pserial0; i1++) {
            int _len_pserial1 = 1;
              free(pserial[i1]);
          }
          free(pserial);
          free(cid);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_piNameHash0 = 65025;
          int ** piNameHash = (int **) malloc(_len_piNameHash0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_piNameHash0; _i0++) {
            int _len_piNameHash1 = 1;
            piNameHash[_i0] = (int *) malloc(_len_piNameHash1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_piNameHash1; _i1++) {
              piNameHash[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pmd0 = 65025;
          int ** pmd = (int **) malloc(_len_pmd0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pmd0; _i0++) {
            int _len_pmd1 = 1;
            pmd[_i0] = (int *) malloc(_len_pmd1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pmd1; _i1++) {
              pmd[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pikeyHash0 = 65025;
          int ** pikeyHash = (int **) malloc(_len_pikeyHash0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pikeyHash0; _i0++) {
            int _len_pikeyHash1 = 1;
            pikeyHash[_i0] = (int *) malloc(_len_pikeyHash1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pikeyHash1; _i1++) {
              pikeyHash[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pserial0 = 65025;
          int ** pserial = (int **) malloc(_len_pserial0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pserial0; _i0++) {
            int _len_pserial1 = 1;
            pserial[_i0] = (int *) malloc(_len_pserial1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pserial1; _i1++) {
              pserial[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cid0 = 65025;
          struct TYPE_5__ * cid = (struct TYPE_5__ *) malloc(_len_cid0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cid0; _i0++) {
            cid[_i0].serialNumber = ((-2 * (next_i()%2)) + 1) * next_i();
        cid[_i0].issuerKeyHash = ((-2 * (next_i()%2)) + 1) * next_i();
        cid[_i0].issuerNameHash = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cid__i0__hashAlgorithm_algorithm0 = 1;
          cid[_i0].hashAlgorithm.algorithm = (int *) malloc(_len_cid__i0__hashAlgorithm_algorithm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cid__i0__hashAlgorithm_algorithm0; _j0++) {
            cid[_i0].hashAlgorithm.algorithm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = OCSP_id_get0_info(piNameHash,pmd,pikeyHash,pserial,cid);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_piNameHash0; i1++) {
            int _len_piNameHash1 = 1;
              free(piNameHash[i1]);
          }
          free(piNameHash);
          for(int i1 = 0; i1 < _len_pmd0; i1++) {
            int _len_pmd1 = 1;
              free(pmd[i1]);
          }
          free(pmd);
          for(int i1 = 0; i1 < _len_pikeyHash0; i1++) {
            int _len_pikeyHash1 = 1;
              free(pikeyHash[i1]);
          }
          free(pikeyHash);
          for(int i1 = 0; i1 < _len_pserial0; i1++) {
            int _len_pserial1 = 1;
              free(pserial[i1]);
          }
          free(pserial);
          free(cid);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_piNameHash0 = 100;
          int ** piNameHash = (int **) malloc(_len_piNameHash0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_piNameHash0; _i0++) {
            int _len_piNameHash1 = 1;
            piNameHash[_i0] = (int *) malloc(_len_piNameHash1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_piNameHash1; _i1++) {
              piNameHash[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pmd0 = 100;
          int ** pmd = (int **) malloc(_len_pmd0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pmd0; _i0++) {
            int _len_pmd1 = 1;
            pmd[_i0] = (int *) malloc(_len_pmd1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pmd1; _i1++) {
              pmd[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pikeyHash0 = 100;
          int ** pikeyHash = (int **) malloc(_len_pikeyHash0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pikeyHash0; _i0++) {
            int _len_pikeyHash1 = 1;
            pikeyHash[_i0] = (int *) malloc(_len_pikeyHash1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pikeyHash1; _i1++) {
              pikeyHash[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pserial0 = 100;
          int ** pserial = (int **) malloc(_len_pserial0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pserial0; _i0++) {
            int _len_pserial1 = 1;
            pserial[_i0] = (int *) malloc(_len_pserial1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pserial1; _i1++) {
              pserial[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cid0 = 100;
          struct TYPE_5__ * cid = (struct TYPE_5__ *) malloc(_len_cid0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cid0; _i0++) {
            cid[_i0].serialNumber = ((-2 * (next_i()%2)) + 1) * next_i();
        cid[_i0].issuerKeyHash = ((-2 * (next_i()%2)) + 1) * next_i();
        cid[_i0].issuerNameHash = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cid__i0__hashAlgorithm_algorithm0 = 1;
          cid[_i0].hashAlgorithm.algorithm = (int *) malloc(_len_cid__i0__hashAlgorithm_algorithm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cid__i0__hashAlgorithm_algorithm0; _j0++) {
            cid[_i0].hashAlgorithm.algorithm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = OCSP_id_get0_info(piNameHash,pmd,pikeyHash,pserial,cid);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_piNameHash0; i1++) {
            int _len_piNameHash1 = 1;
              free(piNameHash[i1]);
          }
          free(piNameHash);
          for(int i1 = 0; i1 < _len_pmd0; i1++) {
            int _len_pmd1 = 1;
              free(pmd[i1]);
          }
          free(pmd);
          for(int i1 = 0; i1 < _len_pikeyHash0; i1++) {
            int _len_pikeyHash1 = 1;
              free(pikeyHash[i1]);
          }
          free(pikeyHash);
          for(int i1 = 0; i1 < _len_pserial0; i1++) {
            int _len_pserial1 = 1;
              free(pserial[i1]);
          }
          free(pserial);
          free(cid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
