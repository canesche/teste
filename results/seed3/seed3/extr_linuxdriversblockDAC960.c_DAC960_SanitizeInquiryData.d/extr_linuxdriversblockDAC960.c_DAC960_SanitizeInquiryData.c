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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int PeripheralDeviceType; unsigned char* VendorIdentification; unsigned char* ProductIdentification; unsigned char* ProductRevisionLevel; } ;
struct TYPE_5__ {int PeripheralDeviceType; int PageLength; unsigned char* ProductSerialNumber; } ;
typedef  TYPE_1__ DAC960_SCSI_Inquiry_UnitSerialNumber_T ;
typedef  TYPE_2__ DAC960_SCSI_Inquiry_T ;

/* Variables and functions */

__attribute__((used)) static void DAC960_SanitizeInquiryData(DAC960_SCSI_Inquiry_T
					 *InquiryStandardData,
				       DAC960_SCSI_Inquiry_UnitSerialNumber_T
					 *InquiryUnitSerialNumber,
				       unsigned char *Vendor,
				       unsigned char *Model,
				       unsigned char *Revision,
				       unsigned char *SerialNumber)
{
  int SerialNumberLength, i;
  if (InquiryStandardData->PeripheralDeviceType == 0x1F) return;
  for (i = 0; i < sizeof(InquiryStandardData->VendorIdentification); i++)
    {
      unsigned char VendorCharacter =
	InquiryStandardData->VendorIdentification[i];
      Vendor[i] = (VendorCharacter >= ' ' && VendorCharacter <= '~'
		   ? VendorCharacter : ' ');
    }
  Vendor[sizeof(InquiryStandardData->VendorIdentification)] = '\0';
  for (i = 0; i < sizeof(InquiryStandardData->ProductIdentification); i++)
    {
      unsigned char ModelCharacter =
	InquiryStandardData->ProductIdentification[i];
      Model[i] = (ModelCharacter >= ' ' && ModelCharacter <= '~'
		  ? ModelCharacter : ' ');
    }
  Model[sizeof(InquiryStandardData->ProductIdentification)] = '\0';
  for (i = 0; i < sizeof(InquiryStandardData->ProductRevisionLevel); i++)
    {
      unsigned char RevisionCharacter =
	InquiryStandardData->ProductRevisionLevel[i];
      Revision[i] = (RevisionCharacter >= ' ' && RevisionCharacter <= '~'
		     ? RevisionCharacter : ' ');
    }
  Revision[sizeof(InquiryStandardData->ProductRevisionLevel)] = '\0';
  if (InquiryUnitSerialNumber->PeripheralDeviceType == 0x1F) return;
  SerialNumberLength = InquiryUnitSerialNumber->PageLength;
  if (SerialNumberLength >
      sizeof(InquiryUnitSerialNumber->ProductSerialNumber))
    SerialNumberLength = sizeof(InquiryUnitSerialNumber->ProductSerialNumber);
  for (i = 0; i < SerialNumberLength; i++)
    {
      unsigned char SerialNumberCharacter =
	InquiryUnitSerialNumber->ProductSerialNumber[i];
      SerialNumber[i] =
	(SerialNumberCharacter >= ' ' && SerialNumberCharacter <= '~'
	 ? SerialNumberCharacter : ' ');
    }
  SerialNumber[SerialNumberLength] = '\0';
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
          int _len_InquiryStandardData0 = 1;
          struct TYPE_6__ * InquiryStandardData = (struct TYPE_6__ *) malloc(_len_InquiryStandardData0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_InquiryStandardData0; _i0++) {
            InquiryStandardData[_i0].PeripheralDeviceType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_InquiryStandardData__i0__VendorIdentification0 = 1;
          InquiryStandardData[_i0].VendorIdentification = (unsigned char *) malloc(_len_InquiryStandardData__i0__VendorIdentification0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryStandardData__i0__VendorIdentification0; _j0++) {
            InquiryStandardData[_i0].VendorIdentification[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_InquiryStandardData__i0__ProductIdentification0 = 1;
          InquiryStandardData[_i0].ProductIdentification = (unsigned char *) malloc(_len_InquiryStandardData__i0__ProductIdentification0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryStandardData__i0__ProductIdentification0; _j0++) {
            InquiryStandardData[_i0].ProductIdentification[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_InquiryStandardData__i0__ProductRevisionLevel0 = 1;
          InquiryStandardData[_i0].ProductRevisionLevel = (unsigned char *) malloc(_len_InquiryStandardData__i0__ProductRevisionLevel0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryStandardData__i0__ProductRevisionLevel0; _j0++) {
            InquiryStandardData[_i0].ProductRevisionLevel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_InquiryUnitSerialNumber0 = 1;
          struct TYPE_5__ * InquiryUnitSerialNumber = (struct TYPE_5__ *) malloc(_len_InquiryUnitSerialNumber0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_InquiryUnitSerialNumber0; _i0++) {
            InquiryUnitSerialNumber[_i0].PeripheralDeviceType = ((-2 * (next_i()%2)) + 1) * next_i();
        InquiryUnitSerialNumber[_i0].PageLength = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_InquiryUnitSerialNumber__i0__ProductSerialNumber0 = 1;
          InquiryUnitSerialNumber[_i0].ProductSerialNumber = (unsigned char *) malloc(_len_InquiryUnitSerialNumber__i0__ProductSerialNumber0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryUnitSerialNumber__i0__ProductSerialNumber0; _j0++) {
            InquiryUnitSerialNumber[_i0].ProductSerialNumber[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_Vendor0 = 1;
          unsigned char * Vendor = (unsigned char *) malloc(_len_Vendor0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_Vendor0; _i0++) {
            Vendor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Model0 = 1;
          unsigned char * Model = (unsigned char *) malloc(_len_Model0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_Model0; _i0++) {
            Model[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Revision0 = 1;
          unsigned char * Revision = (unsigned char *) malloc(_len_Revision0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_Revision0; _i0++) {
            Revision[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SerialNumber0 = 1;
          unsigned char * SerialNumber = (unsigned char *) malloc(_len_SerialNumber0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_SerialNumber0; _i0++) {
            SerialNumber[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DAC960_SanitizeInquiryData(InquiryStandardData,InquiryUnitSerialNumber,Vendor,Model,Revision,SerialNumber);
          for(int _aux = 0; _aux < _len_InquiryStandardData0; _aux++) {
          free(InquiryStandardData[_aux].VendorIdentification);
          }
          for(int _aux = 0; _aux < _len_InquiryStandardData0; _aux++) {
          free(InquiryStandardData[_aux].ProductIdentification);
          }
          for(int _aux = 0; _aux < _len_InquiryStandardData0; _aux++) {
          free(InquiryStandardData[_aux].ProductRevisionLevel);
          }
          free(InquiryStandardData);
          for(int _aux = 0; _aux < _len_InquiryUnitSerialNumber0; _aux++) {
          free(InquiryUnitSerialNumber[_aux].ProductSerialNumber);
          }
          free(InquiryUnitSerialNumber);
          free(Vendor);
          free(Model);
          free(Revision);
          free(SerialNumber);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_InquiryStandardData0 = 65025;
          struct TYPE_6__ * InquiryStandardData = (struct TYPE_6__ *) malloc(_len_InquiryStandardData0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_InquiryStandardData0; _i0++) {
            InquiryStandardData[_i0].PeripheralDeviceType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_InquiryStandardData__i0__VendorIdentification0 = 1;
          InquiryStandardData[_i0].VendorIdentification = (unsigned char *) malloc(_len_InquiryStandardData__i0__VendorIdentification0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryStandardData__i0__VendorIdentification0; _j0++) {
            InquiryStandardData[_i0].VendorIdentification[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_InquiryStandardData__i0__ProductIdentification0 = 1;
          InquiryStandardData[_i0].ProductIdentification = (unsigned char *) malloc(_len_InquiryStandardData__i0__ProductIdentification0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryStandardData__i0__ProductIdentification0; _j0++) {
            InquiryStandardData[_i0].ProductIdentification[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_InquiryStandardData__i0__ProductRevisionLevel0 = 1;
          InquiryStandardData[_i0].ProductRevisionLevel = (unsigned char *) malloc(_len_InquiryStandardData__i0__ProductRevisionLevel0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryStandardData__i0__ProductRevisionLevel0; _j0++) {
            InquiryStandardData[_i0].ProductRevisionLevel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_InquiryUnitSerialNumber0 = 65025;
          struct TYPE_5__ * InquiryUnitSerialNumber = (struct TYPE_5__ *) malloc(_len_InquiryUnitSerialNumber0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_InquiryUnitSerialNumber0; _i0++) {
            InquiryUnitSerialNumber[_i0].PeripheralDeviceType = ((-2 * (next_i()%2)) + 1) * next_i();
        InquiryUnitSerialNumber[_i0].PageLength = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_InquiryUnitSerialNumber__i0__ProductSerialNumber0 = 1;
          InquiryUnitSerialNumber[_i0].ProductSerialNumber = (unsigned char *) malloc(_len_InquiryUnitSerialNumber__i0__ProductSerialNumber0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryUnitSerialNumber__i0__ProductSerialNumber0; _j0++) {
            InquiryUnitSerialNumber[_i0].ProductSerialNumber[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_Vendor0 = 65025;
          unsigned char * Vendor = (unsigned char *) malloc(_len_Vendor0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_Vendor0; _i0++) {
            Vendor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Model0 = 65025;
          unsigned char * Model = (unsigned char *) malloc(_len_Model0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_Model0; _i0++) {
            Model[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Revision0 = 65025;
          unsigned char * Revision = (unsigned char *) malloc(_len_Revision0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_Revision0; _i0++) {
            Revision[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SerialNumber0 = 65025;
          unsigned char * SerialNumber = (unsigned char *) malloc(_len_SerialNumber0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_SerialNumber0; _i0++) {
            SerialNumber[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DAC960_SanitizeInquiryData(InquiryStandardData,InquiryUnitSerialNumber,Vendor,Model,Revision,SerialNumber);
          for(int _aux = 0; _aux < _len_InquiryStandardData0; _aux++) {
          free(InquiryStandardData[_aux].VendorIdentification);
          }
          for(int _aux = 0; _aux < _len_InquiryStandardData0; _aux++) {
          free(InquiryStandardData[_aux].ProductIdentification);
          }
          for(int _aux = 0; _aux < _len_InquiryStandardData0; _aux++) {
          free(InquiryStandardData[_aux].ProductRevisionLevel);
          }
          free(InquiryStandardData);
          for(int _aux = 0; _aux < _len_InquiryUnitSerialNumber0; _aux++) {
          free(InquiryUnitSerialNumber[_aux].ProductSerialNumber);
          }
          free(InquiryUnitSerialNumber);
          free(Vendor);
          free(Model);
          free(Revision);
          free(SerialNumber);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_InquiryStandardData0 = 100;
          struct TYPE_6__ * InquiryStandardData = (struct TYPE_6__ *) malloc(_len_InquiryStandardData0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_InquiryStandardData0; _i0++) {
            InquiryStandardData[_i0].PeripheralDeviceType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_InquiryStandardData__i0__VendorIdentification0 = 1;
          InquiryStandardData[_i0].VendorIdentification = (unsigned char *) malloc(_len_InquiryStandardData__i0__VendorIdentification0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryStandardData__i0__VendorIdentification0; _j0++) {
            InquiryStandardData[_i0].VendorIdentification[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_InquiryStandardData__i0__ProductIdentification0 = 1;
          InquiryStandardData[_i0].ProductIdentification = (unsigned char *) malloc(_len_InquiryStandardData__i0__ProductIdentification0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryStandardData__i0__ProductIdentification0; _j0++) {
            InquiryStandardData[_i0].ProductIdentification[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_InquiryStandardData__i0__ProductRevisionLevel0 = 1;
          InquiryStandardData[_i0].ProductRevisionLevel = (unsigned char *) malloc(_len_InquiryStandardData__i0__ProductRevisionLevel0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryStandardData__i0__ProductRevisionLevel0; _j0++) {
            InquiryStandardData[_i0].ProductRevisionLevel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_InquiryUnitSerialNumber0 = 100;
          struct TYPE_5__ * InquiryUnitSerialNumber = (struct TYPE_5__ *) malloc(_len_InquiryUnitSerialNumber0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_InquiryUnitSerialNumber0; _i0++) {
            InquiryUnitSerialNumber[_i0].PeripheralDeviceType = ((-2 * (next_i()%2)) + 1) * next_i();
        InquiryUnitSerialNumber[_i0].PageLength = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_InquiryUnitSerialNumber__i0__ProductSerialNumber0 = 1;
          InquiryUnitSerialNumber[_i0].ProductSerialNumber = (unsigned char *) malloc(_len_InquiryUnitSerialNumber__i0__ProductSerialNumber0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_InquiryUnitSerialNumber__i0__ProductSerialNumber0; _j0++) {
            InquiryUnitSerialNumber[_i0].ProductSerialNumber[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_Vendor0 = 100;
          unsigned char * Vendor = (unsigned char *) malloc(_len_Vendor0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_Vendor0; _i0++) {
            Vendor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Model0 = 100;
          unsigned char * Model = (unsigned char *) malloc(_len_Model0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_Model0; _i0++) {
            Model[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Revision0 = 100;
          unsigned char * Revision = (unsigned char *) malloc(_len_Revision0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_Revision0; _i0++) {
            Revision[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SerialNumber0 = 100;
          unsigned char * SerialNumber = (unsigned char *) malloc(_len_SerialNumber0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_SerialNumber0; _i0++) {
            SerialNumber[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DAC960_SanitizeInquiryData(InquiryStandardData,InquiryUnitSerialNumber,Vendor,Model,Revision,SerialNumber);
          for(int _aux = 0; _aux < _len_InquiryStandardData0; _aux++) {
          free(InquiryStandardData[_aux].VendorIdentification);
          }
          for(int _aux = 0; _aux < _len_InquiryStandardData0; _aux++) {
          free(InquiryStandardData[_aux].ProductIdentification);
          }
          for(int _aux = 0; _aux < _len_InquiryStandardData0; _aux++) {
          free(InquiryStandardData[_aux].ProductRevisionLevel);
          }
          free(InquiryStandardData);
          for(int _aux = 0; _aux < _len_InquiryUnitSerialNumber0; _aux++) {
          free(InquiryUnitSerialNumber[_aux].ProductSerialNumber);
          }
          free(InquiryUnitSerialNumber);
          free(Vendor);
          free(Model);
          free(Revision);
          free(SerialNumber);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
