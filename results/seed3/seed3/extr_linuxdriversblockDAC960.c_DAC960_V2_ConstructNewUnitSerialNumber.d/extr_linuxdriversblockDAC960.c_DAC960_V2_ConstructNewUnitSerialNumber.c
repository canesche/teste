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
typedef  struct TYPE_18__   TYPE_8__ ;
typedef  struct TYPE_17__   TYPE_7__ ;
typedef  struct TYPE_16__   TYPE_6__ ;
typedef  struct TYPE_15__   TYPE_5__ ;
typedef  struct TYPE_14__   TYPE_4__ ;
typedef  struct TYPE_13__   TYPE_3__ ;
typedef  struct TYPE_12__   TYPE_2__ ;
typedef  struct TYPE_11__   TYPE_1__ ;

/* Type definitions */
struct TYPE_13__ {int /*<<< orphan*/  NewInquiryUnitSerialNumberDMA; } ;
struct TYPE_18__ {TYPE_3__ V2; } ;
struct TYPE_15__ {TYPE_4__* ScatterGatherSegments; } ;
struct TYPE_12__ {int LogicalUnit; int TargetID; int Channel; } ;
struct TYPE_11__ {int DataTransferControllerToHost; int NoAutoRequestSense; } ;
struct TYPE_16__ {int DataTransferSize; int CDBLength; int* SCSI_CDB; TYPE_5__ DataTransferMemoryAddress; TYPE_2__ PhysicalDevice; TYPE_1__ CommandControlBits; int /*<<< orphan*/  CommandOpcode; } ;
struct TYPE_17__ {TYPE_6__ SCSI_10; } ;
struct TYPE_14__ {int SegmentByteCount; int /*<<< orphan*/  SegmentDataPointer; } ;
typedef  TYPE_7__ DAC960_V2_CommandMailbox_T ;
typedef  int /*<<< orphan*/  DAC960_SCSI_Inquiry_UnitSerialNumber_T ;
typedef  TYPE_8__ DAC960_Controller_T ;

/* Variables and functions */
 int /*<<< orphan*/  DAC960_V2_SCSI_10_Passthru ; 

__attribute__((used)) static void DAC960_V2_ConstructNewUnitSerialNumber(
	DAC960_Controller_T *Controller,
	DAC960_V2_CommandMailbox_T *CommandMailbox, int Channel, int TargetID,
	int LogicalUnit)
{
      CommandMailbox->SCSI_10.CommandOpcode = DAC960_V2_SCSI_10_Passthru;
      CommandMailbox->SCSI_10.CommandControlBits
			     .DataTransferControllerToHost = true;
      CommandMailbox->SCSI_10.CommandControlBits
			     .NoAutoRequestSense = true;
      CommandMailbox->SCSI_10.DataTransferSize =
	sizeof(DAC960_SCSI_Inquiry_UnitSerialNumber_T);
      CommandMailbox->SCSI_10.PhysicalDevice.LogicalUnit = LogicalUnit;
      CommandMailbox->SCSI_10.PhysicalDevice.TargetID = TargetID;
      CommandMailbox->SCSI_10.PhysicalDevice.Channel = Channel;
      CommandMailbox->SCSI_10.CDBLength = 6;
      CommandMailbox->SCSI_10.SCSI_CDB[0] = 0x12; /* INQUIRY */
      CommandMailbox->SCSI_10.SCSI_CDB[1] = 1; /* EVPD = 1 */
      CommandMailbox->SCSI_10.SCSI_CDB[2] = 0x80; /* Page Code */
      CommandMailbox->SCSI_10.SCSI_CDB[3] = 0; /* Reserved */
      CommandMailbox->SCSI_10.SCSI_CDB[4] =
	sizeof(DAC960_SCSI_Inquiry_UnitSerialNumber_T);
      CommandMailbox->SCSI_10.SCSI_CDB[5] = 0; /* Control */
      CommandMailbox->SCSI_10.DataTransferMemoryAddress
			     .ScatterGatherSegments[0]
			     .SegmentDataPointer =
		Controller->V2.NewInquiryUnitSerialNumberDMA;
      CommandMailbox->SCSI_10.DataTransferMemoryAddress
			     .ScatterGatherSegments[0]
			     .SegmentByteCount =
		CommandMailbox->SCSI_10.DataTransferSize;
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
          int Channel = 100;
          int TargetID = 100;
          int LogicalUnit = 100;
          int _len_Controller0 = 1;
          struct TYPE_18__ * Controller = (struct TYPE_18__ *) malloc(_len_Controller0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_Controller0; _i0++) {
            Controller[_i0].V2.NewInquiryUnitSerialNumberDMA = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CommandMailbox0 = 1;
          struct TYPE_17__ * CommandMailbox = (struct TYPE_17__ *) malloc(_len_CommandMailbox0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_CommandMailbox0; _i0++) {
            CommandMailbox[_i0].SCSI_10.DataTransferSize = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CDBLength = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_CommandMailbox__i0__SCSI_10_SCSI_CDB0 = 1;
          CommandMailbox[_i0].SCSI_10.SCSI_CDB = (int *) malloc(_len_CommandMailbox__i0__SCSI_10_SCSI_CDB0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_CommandMailbox__i0__SCSI_10_SCSI_CDB0; _j0++) {
            CommandMailbox[_i0].SCSI_10.SCSI_CDB[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CommandMailbox__i0__SCSI_10_DataTransferMemoryAddress_ScatterGatherSegments0 = 1;
          CommandMailbox[_i0].SCSI_10.DataTransferMemoryAddress.ScatterGatherSegments = (struct TYPE_14__ *) malloc(_len_CommandMailbox__i0__SCSI_10_DataTransferMemoryAddress_ScatterGatherSegments0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_CommandMailbox__i0__SCSI_10_DataTransferMemoryAddress_ScatterGatherSegments0; _j0++) {
            CommandMailbox[_i0].SCSI_10.DataTransferMemoryAddress.ScatterGatherSegments->SegmentByteCount = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.DataTransferMemoryAddress.ScatterGatherSegments->SegmentDataPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        CommandMailbox[_i0].SCSI_10.PhysicalDevice.LogicalUnit = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.PhysicalDevice.TargetID = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.PhysicalDevice.Channel = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CommandControlBits.DataTransferControllerToHost = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CommandControlBits.NoAutoRequestSense = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CommandOpcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DAC960_V2_ConstructNewUnitSerialNumber(Controller,CommandMailbox,Channel,TargetID,LogicalUnit);
          free(Controller);
          free(CommandMailbox);
        
        break;
    }
    // big-arr
    case 1:
    {
          int Channel = 255;
          int TargetID = 255;
          int LogicalUnit = 255;
          int _len_Controller0 = 65025;
          struct TYPE_18__ * Controller = (struct TYPE_18__ *) malloc(_len_Controller0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_Controller0; _i0++) {
            Controller[_i0].V2.NewInquiryUnitSerialNumberDMA = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CommandMailbox0 = 65025;
          struct TYPE_17__ * CommandMailbox = (struct TYPE_17__ *) malloc(_len_CommandMailbox0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_CommandMailbox0; _i0++) {
            CommandMailbox[_i0].SCSI_10.DataTransferSize = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CDBLength = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_CommandMailbox__i0__SCSI_10_SCSI_CDB0 = 1;
          CommandMailbox[_i0].SCSI_10.SCSI_CDB = (int *) malloc(_len_CommandMailbox__i0__SCSI_10_SCSI_CDB0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_CommandMailbox__i0__SCSI_10_SCSI_CDB0; _j0++) {
            CommandMailbox[_i0].SCSI_10.SCSI_CDB[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CommandMailbox__i0__SCSI_10_DataTransferMemoryAddress_ScatterGatherSegments0 = 1;
          CommandMailbox[_i0].SCSI_10.DataTransferMemoryAddress.ScatterGatherSegments = (struct TYPE_14__ *) malloc(_len_CommandMailbox__i0__SCSI_10_DataTransferMemoryAddress_ScatterGatherSegments0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_CommandMailbox__i0__SCSI_10_DataTransferMemoryAddress_ScatterGatherSegments0; _j0++) {
            CommandMailbox[_i0].SCSI_10.DataTransferMemoryAddress.ScatterGatherSegments->SegmentByteCount = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.DataTransferMemoryAddress.ScatterGatherSegments->SegmentDataPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        CommandMailbox[_i0].SCSI_10.PhysicalDevice.LogicalUnit = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.PhysicalDevice.TargetID = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.PhysicalDevice.Channel = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CommandControlBits.DataTransferControllerToHost = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CommandControlBits.NoAutoRequestSense = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CommandOpcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DAC960_V2_ConstructNewUnitSerialNumber(Controller,CommandMailbox,Channel,TargetID,LogicalUnit);
          free(Controller);
          free(CommandMailbox);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Channel = 10;
          int TargetID = 10;
          int LogicalUnit = 10;
          int _len_Controller0 = 100;
          struct TYPE_18__ * Controller = (struct TYPE_18__ *) malloc(_len_Controller0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_Controller0; _i0++) {
            Controller[_i0].V2.NewInquiryUnitSerialNumberDMA = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CommandMailbox0 = 100;
          struct TYPE_17__ * CommandMailbox = (struct TYPE_17__ *) malloc(_len_CommandMailbox0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_CommandMailbox0; _i0++) {
            CommandMailbox[_i0].SCSI_10.DataTransferSize = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CDBLength = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_CommandMailbox__i0__SCSI_10_SCSI_CDB0 = 1;
          CommandMailbox[_i0].SCSI_10.SCSI_CDB = (int *) malloc(_len_CommandMailbox__i0__SCSI_10_SCSI_CDB0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_CommandMailbox__i0__SCSI_10_SCSI_CDB0; _j0++) {
            CommandMailbox[_i0].SCSI_10.SCSI_CDB[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CommandMailbox__i0__SCSI_10_DataTransferMemoryAddress_ScatterGatherSegments0 = 1;
          CommandMailbox[_i0].SCSI_10.DataTransferMemoryAddress.ScatterGatherSegments = (struct TYPE_14__ *) malloc(_len_CommandMailbox__i0__SCSI_10_DataTransferMemoryAddress_ScatterGatherSegments0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_CommandMailbox__i0__SCSI_10_DataTransferMemoryAddress_ScatterGatherSegments0; _j0++) {
            CommandMailbox[_i0].SCSI_10.DataTransferMemoryAddress.ScatterGatherSegments->SegmentByteCount = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.DataTransferMemoryAddress.ScatterGatherSegments->SegmentDataPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        CommandMailbox[_i0].SCSI_10.PhysicalDevice.LogicalUnit = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.PhysicalDevice.TargetID = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.PhysicalDevice.Channel = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CommandControlBits.DataTransferControllerToHost = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CommandControlBits.NoAutoRequestSense = ((-2 * (next_i()%2)) + 1) * next_i();
        CommandMailbox[_i0].SCSI_10.CommandOpcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DAC960_V2_ConstructNewUnitSerialNumber(Controller,CommandMailbox,Channel,TargetID,LogicalUnit);
          free(Controller);
          free(CommandMailbox);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
