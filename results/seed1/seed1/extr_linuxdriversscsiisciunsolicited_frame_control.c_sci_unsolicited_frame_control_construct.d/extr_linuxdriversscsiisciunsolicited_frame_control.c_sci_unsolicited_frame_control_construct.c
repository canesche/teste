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
struct TYPE_6__ {int physical_address; int /*<<< orphan*/ * array; } ;
struct TYPE_5__ {int physical_address; int* array; } ;
struct TYPE_4__ {struct sci_unsolicited_frame* array; } ;
struct sci_unsolicited_frame_control {TYPE_3__ headers; TYPE_2__ address_table; TYPE_1__ buffers; scalar_t__ get; } ;
struct sci_unsolicited_frame {int /*<<< orphan*/  state; int /*<<< orphan*/ * header; void* buffer; } ;
struct isci_host {int ufi_dma; void* ufi_buf; struct sci_unsolicited_frame_control uf_control; } ;
typedef  int dma_addr_t ;

/* Variables and functions */
 int SCI_UFI_BUF_SIZE ; 
 int SCI_UFI_HDR_SIZE ; 
 int SCU_MAX_UNSOLICITED_FRAMES ; 
 int SCU_UNSOLICITED_FRAME_BUFFER_SIZE ; 
 int /*<<< orphan*/  UNSOLICITED_FRAME_EMPTY ; 

void sci_unsolicited_frame_control_construct(struct isci_host *ihost)
{
	struct sci_unsolicited_frame_control *uf_control = &ihost->uf_control;
	struct sci_unsolicited_frame *uf;
	dma_addr_t dma = ihost->ufi_dma;
	void *virt = ihost->ufi_buf;
	int i;

	/*
	 * The Unsolicited Frame buffers are set at the start of the UF
	 * memory descriptor entry. The headers and address table will be
	 * placed after the buffers.
	 */

	/*
	 * Program the location of the UF header table into the SCU.
	 * Notes:
	 * - The address must align on a 64-byte boundary. Guaranteed to be
	 *   on 64-byte boundary already 1KB boundary for unsolicited frames.
	 * - Program unused header entries to overlap with the last
	 *   unsolicited frame.  The silicon will never DMA to these unused
	 *   headers, since we program the UF address table pointers to
	 *   NULL.
	 */
	uf_control->headers.physical_address = dma + SCI_UFI_BUF_SIZE;
	uf_control->headers.array = virt + SCI_UFI_BUF_SIZE;

	/*
	 * Program the location of the UF address table into the SCU.
	 * Notes:
	 * - The address must align on a 64-bit boundary. Guaranteed to be on 64
	 *   byte boundary already due to above programming headers being on a
	 *   64-bit boundary and headers are on a 64-bytes in size.
	 */
	uf_control->address_table.physical_address = dma + SCI_UFI_BUF_SIZE + SCI_UFI_HDR_SIZE;
	uf_control->address_table.array = virt + SCI_UFI_BUF_SIZE + SCI_UFI_HDR_SIZE;
	uf_control->get = 0;

	/*
	 * UF buffer requirements are:
	 * - The last entry in the UF queue is not NULL.
	 * - There is a power of 2 number of entries (NULL or not-NULL)
	 *   programmed into the queue.
	 * - Aligned on a 1KB boundary. */

	/*
	 * Program the actual used UF buffers into the UF address table and
	 * the controller's array of UFs.
	 */
	for (i = 0; i < SCU_MAX_UNSOLICITED_FRAMES; i++) {
		uf = &uf_control->buffers.array[i];

		uf_control->address_table.array[i] = dma;

		uf->buffer = virt;
		uf->header = &uf_control->headers.array[i];
		uf->state  = UNSOLICITED_FRAME_EMPTY;

		/*
		 * Increment the address of the physical and virtual memory
		 * pointers. Everything is aligned on 1k boundary with an
		 * increment of 1k.
		 */
		virt += SCU_UNSOLICITED_FRAME_BUFFER_SIZE;
		dma += SCU_UNSOLICITED_FRAME_BUFFER_SIZE;
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
          int _len_ihost0 = 1;
          struct isci_host * ihost = (struct isci_host *) malloc(_len_ihost0*sizeof(struct isci_host));
          for(int _i0 = 0; _i0 < _len_ihost0; _i0++) {
            ihost[_i0].ufi_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ihost[_i0].uf_control.headers.physical_address = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__uf_control_headers_array0 = 1;
          ihost[_i0].uf_control.headers.array = (int *) malloc(_len_ihost__i0__uf_control_headers_array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_headers_array0; _j0++) {
            ihost[_i0].uf_control.headers.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ihost[_i0].uf_control.address_table.physical_address = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__uf_control_address_table_array0 = 1;
          ihost[_i0].uf_control.address_table.array = (int *) malloc(_len_ihost__i0__uf_control_address_table_array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_address_table_array0; _j0++) {
            ihost[_i0].uf_control.address_table.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ihost__i0__uf_control_buffers_array0 = 1;
          ihost[_i0].uf_control.buffers.array = (struct sci_unsolicited_frame *) malloc(_len_ihost__i0__uf_control_buffers_array0*sizeof(struct sci_unsolicited_frame));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_buffers_array0; _j0++) {
            ihost[_i0].uf_control.buffers.array->state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__uf_control_buffers_array_header0 = 1;
          ihost[_i0].uf_control.buffers.array->header = (int *) malloc(_len_ihost__i0__uf_control_buffers_array_header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_buffers_array_header0; _j0++) {
            ihost[_i0].uf_control.buffers.array->header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        ihost[_i0].uf_control.get = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sci_unsolicited_frame_control_construct(ihost);
          free(ihost);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ihost0 = 65025;
          struct isci_host * ihost = (struct isci_host *) malloc(_len_ihost0*sizeof(struct isci_host));
          for(int _i0 = 0; _i0 < _len_ihost0; _i0++) {
            ihost[_i0].ufi_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ihost[_i0].uf_control.headers.physical_address = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__uf_control_headers_array0 = 1;
          ihost[_i0].uf_control.headers.array = (int *) malloc(_len_ihost__i0__uf_control_headers_array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_headers_array0; _j0++) {
            ihost[_i0].uf_control.headers.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ihost[_i0].uf_control.address_table.physical_address = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__uf_control_address_table_array0 = 1;
          ihost[_i0].uf_control.address_table.array = (int *) malloc(_len_ihost__i0__uf_control_address_table_array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_address_table_array0; _j0++) {
            ihost[_i0].uf_control.address_table.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ihost__i0__uf_control_buffers_array0 = 1;
          ihost[_i0].uf_control.buffers.array = (struct sci_unsolicited_frame *) malloc(_len_ihost__i0__uf_control_buffers_array0*sizeof(struct sci_unsolicited_frame));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_buffers_array0; _j0++) {
            ihost[_i0].uf_control.buffers.array->state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__uf_control_buffers_array_header0 = 1;
          ihost[_i0].uf_control.buffers.array->header = (int *) malloc(_len_ihost__i0__uf_control_buffers_array_header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_buffers_array_header0; _j0++) {
            ihost[_i0].uf_control.buffers.array->header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        ihost[_i0].uf_control.get = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sci_unsolicited_frame_control_construct(ihost);
          free(ihost);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ihost0 = 100;
          struct isci_host * ihost = (struct isci_host *) malloc(_len_ihost0*sizeof(struct isci_host));
          for(int _i0 = 0; _i0 < _len_ihost0; _i0++) {
            ihost[_i0].ufi_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ihost[_i0].uf_control.headers.physical_address = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__uf_control_headers_array0 = 1;
          ihost[_i0].uf_control.headers.array = (int *) malloc(_len_ihost__i0__uf_control_headers_array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_headers_array0; _j0++) {
            ihost[_i0].uf_control.headers.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ihost[_i0].uf_control.address_table.physical_address = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__uf_control_address_table_array0 = 1;
          ihost[_i0].uf_control.address_table.array = (int *) malloc(_len_ihost__i0__uf_control_address_table_array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_address_table_array0; _j0++) {
            ihost[_i0].uf_control.address_table.array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ihost__i0__uf_control_buffers_array0 = 1;
          ihost[_i0].uf_control.buffers.array = (struct sci_unsolicited_frame *) malloc(_len_ihost__i0__uf_control_buffers_array0*sizeof(struct sci_unsolicited_frame));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_buffers_array0; _j0++) {
            ihost[_i0].uf_control.buffers.array->state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__uf_control_buffers_array_header0 = 1;
          ihost[_i0].uf_control.buffers.array->header = (int *) malloc(_len_ihost__i0__uf_control_buffers_array_header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ihost__i0__uf_control_buffers_array_header0; _j0++) {
            ihost[_i0].uf_control.buffers.array->header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        ihost[_i0].uf_control.get = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sci_unsolicited_frame_control_construct(ihost);
          free(ihost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
