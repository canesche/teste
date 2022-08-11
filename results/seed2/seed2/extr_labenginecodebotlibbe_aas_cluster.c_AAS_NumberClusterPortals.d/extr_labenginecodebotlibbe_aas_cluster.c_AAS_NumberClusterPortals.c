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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int frontcluster; scalar_t__* clusterareanum; } ;
typedef  TYPE_1__ aas_portal_t ;
struct TYPE_5__ {int numportals; int firstportal; int /*<<< orphan*/  numareas; } ;
typedef  TYPE_2__ aas_cluster_t ;
struct TYPE_6__ {int* portalindex; TYPE_1__* portals; TYPE_2__* clusters; } ;

/* Variables and functions */
 TYPE_3__ aasworld ; 

void AAS_NumberClusterPortals(int clusternum)
{
	int i, portalnum;
	aas_cluster_t *cluster;
	aas_portal_t *portal;

	cluster = &aasworld.clusters[clusternum];
	for (i = 0; i < cluster->numportals; i++)
	{
		portalnum = aasworld.portalindex[cluster->firstportal + i];
		portal = &aasworld.portals[portalnum];
		if (portal->frontcluster == clusternum)
		{
			portal->clusterareanum[0] = cluster->numareas++;
		} //end if
		else
		{
			portal->clusterareanum[1] = cluster->numareas++;
		} //end else
	} //end for
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
          int clusternum = 100;
          AAS_NumberClusterPortals(clusternum);
        
        break;
    }
    // big-arr
    case 1:
    {
          int clusternum = 255;
          AAS_NumberClusterPortals(clusternum);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int clusternum = 10;
          AAS_NumberClusterPortals(clusternum);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
