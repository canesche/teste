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
typedef  int /*<<< orphan*/  srbControl ;
typedef  int ULONG ;
typedef  int /*<<< orphan*/  UCHAR ;
typedef  int /*<<< orphan*/  SRB_IO_CONTROL ;
typedef  int /*<<< orphan*/  SENDCMDINPARAMS ;
typedef  int /*<<< orphan*/  PSRB_IO_CONTROL ;
typedef  int /*<<< orphan*/  PFUNCTIONAL_DEVICE_EXTENSION ;
typedef  int /*<<< orphan*/  NTSTATUS ;

/* Variables and functions */
 int /*<<< orphan*/  DiskPerformSmartCommand (int /*<<< orphan*/ ,int /*<<< orphan*/ ,int /*<<< orphan*/ ,int /*<<< orphan*/ ,int,int /*<<< orphan*/ ,int /*<<< orphan*/ ,int*) ; 
 int /*<<< orphan*/  ENABLE_DISABLE_AUTOSAVE ; 
 int /*<<< orphan*/  IOCTL_SCSI_MINIPORT_ENABLE_DISABLE_AUTOSAVE ; 
 int /*<<< orphan*/  SMART_CMD ; 

__inline NTSTATUS
DiskDisableSmartAttributeAutosave(
    PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    )
{
    UCHAR srbControl[sizeof(SRB_IO_CONTROL) + sizeof(SENDCMDINPARAMS)];
    ULONG bufferSize = sizeof(srbControl);
    return DiskPerformSmartCommand(FdoExtension,
                                   IOCTL_SCSI_MINIPORT_ENABLE_DISABLE_AUTOSAVE,
                                   SMART_CMD,
                                   ENABLE_DISABLE_AUTOSAVE,
                                   0x00,
                                   0,
                                   (PSRB_IO_CONTROL)srbControl,
                                   &bufferSize);
}