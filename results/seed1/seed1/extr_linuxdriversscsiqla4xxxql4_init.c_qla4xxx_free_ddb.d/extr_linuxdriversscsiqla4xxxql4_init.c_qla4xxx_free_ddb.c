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
struct scsi_qla_host {int /*<<< orphan*/  tot_ddbs; struct ddb_entry** fw_ddb_index_map; } ;
struct ddb_entry {size_t fw_ddb_index; } ;

/* Variables and functions */
 scalar_t__ INVALID_ENTRY ; 

void qla4xxx_free_ddb(struct scsi_qla_host *ha,
    struct ddb_entry *ddb_entry)
{
	/* Remove device pointer from index mapping arrays */
	ha->fw_ddb_index_map[ddb_entry->fw_ddb_index] =
		(struct ddb_entry *) INVALID_ENTRY;
	ha->tot_ddbs--;
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
          int _len_ha0 = 1;
          struct scsi_qla_host * ha = (struct scsi_qla_host *) malloc(_len_ha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_ha0; _i0++) {
            ha[_i0].tot_ddbs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ha__i0__fw_ddb_index_map0 = 1;
          ha[_i0].fw_ddb_index_map = (struct ddb_entry **) malloc(_len_ha__i0__fw_ddb_index_map0*sizeof(struct ddb_entry *));
          for(int _j0 = 0; _j0 < _len_ha__i0__fw_ddb_index_map0; _j0++) {
            int _len_ha__i0__fw_ddb_index_map1 = 1;
            ha[_i0].fw_ddb_index_map[_j0] = (struct ddb_entry *) malloc(_len_ha__i0__fw_ddb_index_map1*sizeof(struct ddb_entry));
            for(int _j1 = 0; _j1 < _len_ha__i0__fw_ddb_index_map1; _j1++) {
              ha[_i0].fw_ddb_index_map[_j0]->fw_ddb_index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ddb_entry0 = 1;
          struct ddb_entry * ddb_entry = (struct ddb_entry *) malloc(_len_ddb_entry0*sizeof(struct ddb_entry));
          for(int _i0 = 0; _i0 < _len_ddb_entry0; _i0++) {
            ddb_entry[_i0].fw_ddb_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qla4xxx_free_ddb(ha,ddb_entry);
          for(int _aux = 0; _aux < _len_ha0; _aux++) {
          free(*(ha[_aux].fw_ddb_index_map));
        free(ha[_aux].fw_ddb_index_map);
          }
          free(ha);
          free(ddb_entry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ha0 = 65025;
          struct scsi_qla_host * ha = (struct scsi_qla_host *) malloc(_len_ha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_ha0; _i0++) {
            ha[_i0].tot_ddbs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ha__i0__fw_ddb_index_map0 = 1;
          ha[_i0].fw_ddb_index_map = (struct ddb_entry **) malloc(_len_ha__i0__fw_ddb_index_map0*sizeof(struct ddb_entry *));
          for(int _j0 = 0; _j0 < _len_ha__i0__fw_ddb_index_map0; _j0++) {
            int _len_ha__i0__fw_ddb_index_map1 = 1;
            ha[_i0].fw_ddb_index_map[_j0] = (struct ddb_entry *) malloc(_len_ha__i0__fw_ddb_index_map1*sizeof(struct ddb_entry));
            for(int _j1 = 0; _j1 < _len_ha__i0__fw_ddb_index_map1; _j1++) {
              ha[_i0].fw_ddb_index_map[_j0]->fw_ddb_index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ddb_entry0 = 65025;
          struct ddb_entry * ddb_entry = (struct ddb_entry *) malloc(_len_ddb_entry0*sizeof(struct ddb_entry));
          for(int _i0 = 0; _i0 < _len_ddb_entry0; _i0++) {
            ddb_entry[_i0].fw_ddb_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qla4xxx_free_ddb(ha,ddb_entry);
          for(int _aux = 0; _aux < _len_ha0; _aux++) {
          free(*(ha[_aux].fw_ddb_index_map));
        free(ha[_aux].fw_ddb_index_map);
          }
          free(ha);
          free(ddb_entry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ha0 = 100;
          struct scsi_qla_host * ha = (struct scsi_qla_host *) malloc(_len_ha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_ha0; _i0++) {
            ha[_i0].tot_ddbs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ha__i0__fw_ddb_index_map0 = 1;
          ha[_i0].fw_ddb_index_map = (struct ddb_entry **) malloc(_len_ha__i0__fw_ddb_index_map0*sizeof(struct ddb_entry *));
          for(int _j0 = 0; _j0 < _len_ha__i0__fw_ddb_index_map0; _j0++) {
            int _len_ha__i0__fw_ddb_index_map1 = 1;
            ha[_i0].fw_ddb_index_map[_j0] = (struct ddb_entry *) malloc(_len_ha__i0__fw_ddb_index_map1*sizeof(struct ddb_entry));
            for(int _j1 = 0; _j1 < _len_ha__i0__fw_ddb_index_map1; _j1++) {
              ha[_i0].fw_ddb_index_map[_j0]->fw_ddb_index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ddb_entry0 = 100;
          struct ddb_entry * ddb_entry = (struct ddb_entry *) malloc(_len_ddb_entry0*sizeof(struct ddb_entry));
          for(int _i0 = 0; _i0 < _len_ddb_entry0; _i0++) {
            ddb_entry[_i0].fw_ddb_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qla4xxx_free_ddb(ha,ddb_entry);
          for(int _aux = 0; _aux < _len_ha0; _aux++) {
          free(*(ha[_aux].fw_ddb_index_map));
        free(ha[_aux].fw_ddb_index_map);
          }
          free(ha);
          free(ddb_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
