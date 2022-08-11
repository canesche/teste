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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint8_t ;
typedef  int /*<<< orphan*/  USBH_StatusTypeDef ;
struct TYPE_5__ {int /*<<< orphan*/ ** MixerUnitDesc; int /*<<< orphan*/ ** SelectorUnitDesc; int /*<<< orphan*/ ** FeatureUnitDesc; int /*<<< orphan*/ ** OutputTerminalDesc; int /*<<< orphan*/ ** InputTerminalDesc; int /*<<< orphan*/ * HeaderDesc; } ;
struct TYPE_7__ {size_t ASNum; TYPE_2__* as_desc; int /*<<< orphan*/  MixerUnitNum; TYPE_1__ cs_desc; int /*<<< orphan*/  SelectorUnitNum; int /*<<< orphan*/  FeatureUnitNum; int /*<<< orphan*/  OutputTerminalNum; int /*<<< orphan*/  InputTerminalNum; } ;
struct TYPE_6__ {int /*<<< orphan*/ * FormatTypeDesc; int /*<<< orphan*/ * GeneralDesc; } ;
typedef  int /*<<< orphan*/  AUDIO_SelectorDescTypeDef ;
typedef  int /*<<< orphan*/  AUDIO_OTDescTypeDef ;
typedef  int /*<<< orphan*/  AUDIO_MixerDescTypeDef ;
typedef  int /*<<< orphan*/  AUDIO_ITDescTypeDef ;
typedef  int /*<<< orphan*/  AUDIO_HeaderDescTypeDef ;
typedef  int /*<<< orphan*/  AUDIO_FeatureDescTypeDef ;
typedef  TYPE_3__ AUDIO_ClassSpecificDescTypedef ;
typedef  int /*<<< orphan*/  AUDIO_ASGeneralDescTypeDef ;
typedef  int /*<<< orphan*/  AUDIO_ASFormatTypeDescTypeDef ;

/* Variables and functions */
#define  UAC_AS_GENERAL 135 
#define  UAC_FEATURE_UNIT 134 
#define  UAC_FORMAT_TYPE 133 
#define  UAC_HEADER 132 
#define  UAC_INPUT_TERMINAL 131 
#define  UAC_MIXER_UNIT 130 
#define  UAC_OUTPUT_TERMINAL 129 
#define  UAC_SELECTOR_UNIT 128 
 int /*<<< orphan*/  USBH_OK ; 
 scalar_t__ USB_SUBCLASS_AUDIOCONTROL ; 
 scalar_t__ USB_SUBCLASS_AUDIOSTREAMING ; 

__attribute__((used)) static USBH_StatusTypeDef ParseCSDescriptors(AUDIO_ClassSpecificDescTypedef *class_desc, 
                                      uint8_t ac_subclass, 
                                      uint8_t *pdesc)
{
  if(ac_subclass == USB_SUBCLASS_AUDIOCONTROL)
  {
    switch(pdesc[2])
    {
    case UAC_HEADER: 
      class_desc->cs_desc.HeaderDesc = (AUDIO_HeaderDescTypeDef *)pdesc;    
      break;
      
    case UAC_INPUT_TERMINAL:
      class_desc->cs_desc.InputTerminalDesc[class_desc->InputTerminalNum++] = (AUDIO_ITDescTypeDef*) pdesc;    
      break;
      
    case UAC_OUTPUT_TERMINAL:
      class_desc->cs_desc.OutputTerminalDesc[class_desc->OutputTerminalNum++] = (AUDIO_OTDescTypeDef*) pdesc;   
      break;

    case UAC_FEATURE_UNIT:
      class_desc->cs_desc.FeatureUnitDesc[class_desc->FeatureUnitNum++] = (AUDIO_FeatureDescTypeDef*) pdesc; 
      break;
      
    case UAC_SELECTOR_UNIT:
      class_desc->cs_desc.SelectorUnitDesc[class_desc->SelectorUnitNum++] = (AUDIO_SelectorDescTypeDef*) pdesc; 
      break;

    case UAC_MIXER_UNIT:
      class_desc->cs_desc.MixerUnitDesc[class_desc->MixerUnitNum++] = (AUDIO_MixerDescTypeDef*) pdesc; 
      break;      

    default: 
      break;
    }
  }
  else if(ac_subclass == USB_SUBCLASS_AUDIOSTREAMING)
  {
    switch(pdesc[2])
    {
    case UAC_AS_GENERAL:
      class_desc->as_desc[class_desc->ASNum].GeneralDesc = (AUDIO_ASGeneralDescTypeDef*) pdesc; 
      break;
    case UAC_FORMAT_TYPE:      
      class_desc->as_desc[class_desc->ASNum++].FormatTypeDesc = (AUDIO_ASFormatTypeDescTypeDef*) pdesc; 
      break;
    default:
      break;
    }
  }
 
  return USBH_OK;
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
          long ac_subclass = 100;
          int _len_class_desc0 = 1;
          struct TYPE_7__ * class_desc = (struct TYPE_7__ *) malloc(_len_class_desc0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_class_desc0; _i0++) {
            class_desc[_i0].ASNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_class_desc__i0__as_desc0 = 1;
          class_desc[_i0].as_desc = (struct TYPE_6__ *) malloc(_len_class_desc__i0__as_desc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__as_desc0; _j0++) {
              int _len_class_desc__i0__as_desc_FormatTypeDesc0 = 1;
          class_desc[_i0].as_desc->FormatTypeDesc = (int *) malloc(_len_class_desc__i0__as_desc_FormatTypeDesc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__as_desc_FormatTypeDesc0; _j0++) {
            class_desc[_i0].as_desc->FormatTypeDesc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_class_desc__i0__as_desc_GeneralDesc0 = 1;
          class_desc[_i0].as_desc->GeneralDesc = (int *) malloc(_len_class_desc__i0__as_desc_GeneralDesc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__as_desc_GeneralDesc0; _j0++) {
            class_desc[_i0].as_desc->GeneralDesc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        class_desc[_i0].MixerUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_class_desc__i0__cs_desc_MixerUnitDesc0 = 1;
          class_desc[_i0].cs_desc.MixerUnitDesc = (int **) malloc(_len_class_desc__i0__cs_desc_MixerUnitDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_MixerUnitDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_MixerUnitDesc1 = 1;
            class_desc[_i0].cs_desc.MixerUnitDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_MixerUnitDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_MixerUnitDesc1; _j1++) {
              class_desc[_i0].cs_desc.MixerUnitDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_SelectorUnitDesc0 = 1;
          class_desc[_i0].cs_desc.SelectorUnitDesc = (int **) malloc(_len_class_desc__i0__cs_desc_SelectorUnitDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_SelectorUnitDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_SelectorUnitDesc1 = 1;
            class_desc[_i0].cs_desc.SelectorUnitDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_SelectorUnitDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_SelectorUnitDesc1; _j1++) {
              class_desc[_i0].cs_desc.SelectorUnitDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_FeatureUnitDesc0 = 1;
          class_desc[_i0].cs_desc.FeatureUnitDesc = (int **) malloc(_len_class_desc__i0__cs_desc_FeatureUnitDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_FeatureUnitDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_FeatureUnitDesc1 = 1;
            class_desc[_i0].cs_desc.FeatureUnitDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_FeatureUnitDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_FeatureUnitDesc1; _j1++) {
              class_desc[_i0].cs_desc.FeatureUnitDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_OutputTerminalDesc0 = 1;
          class_desc[_i0].cs_desc.OutputTerminalDesc = (int **) malloc(_len_class_desc__i0__cs_desc_OutputTerminalDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_OutputTerminalDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_OutputTerminalDesc1 = 1;
            class_desc[_i0].cs_desc.OutputTerminalDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_OutputTerminalDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_OutputTerminalDesc1; _j1++) {
              class_desc[_i0].cs_desc.OutputTerminalDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_InputTerminalDesc0 = 1;
          class_desc[_i0].cs_desc.InputTerminalDesc = (int **) malloc(_len_class_desc__i0__cs_desc_InputTerminalDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_InputTerminalDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_InputTerminalDesc1 = 1;
            class_desc[_i0].cs_desc.InputTerminalDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_InputTerminalDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_InputTerminalDesc1; _j1++) {
              class_desc[_i0].cs_desc.InputTerminalDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_HeaderDesc0 = 1;
          class_desc[_i0].cs_desc.HeaderDesc = (int *) malloc(_len_class_desc__i0__cs_desc_HeaderDesc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_HeaderDesc0; _j0++) {
            class_desc[_i0].cs_desc.HeaderDesc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        class_desc[_i0].SelectorUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        class_desc[_i0].FeatureUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        class_desc[_i0].OutputTerminalNum = ((-2 * (next_i()%2)) + 1) * next_i();
        class_desc[_i0].InputTerminalNum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdesc0 = 1;
          long * pdesc = (long *) malloc(_len_pdesc0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pdesc0; _i0++) {
            pdesc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ParseCSDescriptors(class_desc,ac_subclass,pdesc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_class_desc0; _aux++) {
          free(class_desc[_aux].as_desc);
          }
          free(class_desc);
          free(pdesc);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ac_subclass = 255;
          int _len_class_desc0 = 65025;
          struct TYPE_7__ * class_desc = (struct TYPE_7__ *) malloc(_len_class_desc0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_class_desc0; _i0++) {
            class_desc[_i0].ASNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_class_desc__i0__as_desc0 = 1;
          class_desc[_i0].as_desc = (struct TYPE_6__ *) malloc(_len_class_desc__i0__as_desc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__as_desc0; _j0++) {
              int _len_class_desc__i0__as_desc_FormatTypeDesc0 = 1;
          class_desc[_i0].as_desc->FormatTypeDesc = (int *) malloc(_len_class_desc__i0__as_desc_FormatTypeDesc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__as_desc_FormatTypeDesc0; _j0++) {
            class_desc[_i0].as_desc->FormatTypeDesc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_class_desc__i0__as_desc_GeneralDesc0 = 1;
          class_desc[_i0].as_desc->GeneralDesc = (int *) malloc(_len_class_desc__i0__as_desc_GeneralDesc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__as_desc_GeneralDesc0; _j0++) {
            class_desc[_i0].as_desc->GeneralDesc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        class_desc[_i0].MixerUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_class_desc__i0__cs_desc_MixerUnitDesc0 = 1;
          class_desc[_i0].cs_desc.MixerUnitDesc = (int **) malloc(_len_class_desc__i0__cs_desc_MixerUnitDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_MixerUnitDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_MixerUnitDesc1 = 1;
            class_desc[_i0].cs_desc.MixerUnitDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_MixerUnitDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_MixerUnitDesc1; _j1++) {
              class_desc[_i0].cs_desc.MixerUnitDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_SelectorUnitDesc0 = 1;
          class_desc[_i0].cs_desc.SelectorUnitDesc = (int **) malloc(_len_class_desc__i0__cs_desc_SelectorUnitDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_SelectorUnitDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_SelectorUnitDesc1 = 1;
            class_desc[_i0].cs_desc.SelectorUnitDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_SelectorUnitDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_SelectorUnitDesc1; _j1++) {
              class_desc[_i0].cs_desc.SelectorUnitDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_FeatureUnitDesc0 = 1;
          class_desc[_i0].cs_desc.FeatureUnitDesc = (int **) malloc(_len_class_desc__i0__cs_desc_FeatureUnitDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_FeatureUnitDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_FeatureUnitDesc1 = 1;
            class_desc[_i0].cs_desc.FeatureUnitDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_FeatureUnitDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_FeatureUnitDesc1; _j1++) {
              class_desc[_i0].cs_desc.FeatureUnitDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_OutputTerminalDesc0 = 1;
          class_desc[_i0].cs_desc.OutputTerminalDesc = (int **) malloc(_len_class_desc__i0__cs_desc_OutputTerminalDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_OutputTerminalDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_OutputTerminalDesc1 = 1;
            class_desc[_i0].cs_desc.OutputTerminalDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_OutputTerminalDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_OutputTerminalDesc1; _j1++) {
              class_desc[_i0].cs_desc.OutputTerminalDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_InputTerminalDesc0 = 1;
          class_desc[_i0].cs_desc.InputTerminalDesc = (int **) malloc(_len_class_desc__i0__cs_desc_InputTerminalDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_InputTerminalDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_InputTerminalDesc1 = 1;
            class_desc[_i0].cs_desc.InputTerminalDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_InputTerminalDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_InputTerminalDesc1; _j1++) {
              class_desc[_i0].cs_desc.InputTerminalDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_HeaderDesc0 = 1;
          class_desc[_i0].cs_desc.HeaderDesc = (int *) malloc(_len_class_desc__i0__cs_desc_HeaderDesc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_HeaderDesc0; _j0++) {
            class_desc[_i0].cs_desc.HeaderDesc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        class_desc[_i0].SelectorUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        class_desc[_i0].FeatureUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        class_desc[_i0].OutputTerminalNum = ((-2 * (next_i()%2)) + 1) * next_i();
        class_desc[_i0].InputTerminalNum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdesc0 = 65025;
          long * pdesc = (long *) malloc(_len_pdesc0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pdesc0; _i0++) {
            pdesc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ParseCSDescriptors(class_desc,ac_subclass,pdesc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_class_desc0; _aux++) {
          free(class_desc[_aux].as_desc);
          }
          free(class_desc);
          free(pdesc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ac_subclass = 10;
          int _len_class_desc0 = 100;
          struct TYPE_7__ * class_desc = (struct TYPE_7__ *) malloc(_len_class_desc0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_class_desc0; _i0++) {
            class_desc[_i0].ASNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_class_desc__i0__as_desc0 = 1;
          class_desc[_i0].as_desc = (struct TYPE_6__ *) malloc(_len_class_desc__i0__as_desc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__as_desc0; _j0++) {
              int _len_class_desc__i0__as_desc_FormatTypeDesc0 = 1;
          class_desc[_i0].as_desc->FormatTypeDesc = (int *) malloc(_len_class_desc__i0__as_desc_FormatTypeDesc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__as_desc_FormatTypeDesc0; _j0++) {
            class_desc[_i0].as_desc->FormatTypeDesc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_class_desc__i0__as_desc_GeneralDesc0 = 1;
          class_desc[_i0].as_desc->GeneralDesc = (int *) malloc(_len_class_desc__i0__as_desc_GeneralDesc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__as_desc_GeneralDesc0; _j0++) {
            class_desc[_i0].as_desc->GeneralDesc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        class_desc[_i0].MixerUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_class_desc__i0__cs_desc_MixerUnitDesc0 = 1;
          class_desc[_i0].cs_desc.MixerUnitDesc = (int **) malloc(_len_class_desc__i0__cs_desc_MixerUnitDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_MixerUnitDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_MixerUnitDesc1 = 1;
            class_desc[_i0].cs_desc.MixerUnitDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_MixerUnitDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_MixerUnitDesc1; _j1++) {
              class_desc[_i0].cs_desc.MixerUnitDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_SelectorUnitDesc0 = 1;
          class_desc[_i0].cs_desc.SelectorUnitDesc = (int **) malloc(_len_class_desc__i0__cs_desc_SelectorUnitDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_SelectorUnitDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_SelectorUnitDesc1 = 1;
            class_desc[_i0].cs_desc.SelectorUnitDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_SelectorUnitDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_SelectorUnitDesc1; _j1++) {
              class_desc[_i0].cs_desc.SelectorUnitDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_FeatureUnitDesc0 = 1;
          class_desc[_i0].cs_desc.FeatureUnitDesc = (int **) malloc(_len_class_desc__i0__cs_desc_FeatureUnitDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_FeatureUnitDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_FeatureUnitDesc1 = 1;
            class_desc[_i0].cs_desc.FeatureUnitDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_FeatureUnitDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_FeatureUnitDesc1; _j1++) {
              class_desc[_i0].cs_desc.FeatureUnitDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_OutputTerminalDesc0 = 1;
          class_desc[_i0].cs_desc.OutputTerminalDesc = (int **) malloc(_len_class_desc__i0__cs_desc_OutputTerminalDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_OutputTerminalDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_OutputTerminalDesc1 = 1;
            class_desc[_i0].cs_desc.OutputTerminalDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_OutputTerminalDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_OutputTerminalDesc1; _j1++) {
              class_desc[_i0].cs_desc.OutputTerminalDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_InputTerminalDesc0 = 1;
          class_desc[_i0].cs_desc.InputTerminalDesc = (int **) malloc(_len_class_desc__i0__cs_desc_InputTerminalDesc0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_InputTerminalDesc0; _j0++) {
            int _len_class_desc__i0__cs_desc_InputTerminalDesc1 = 1;
            class_desc[_i0].cs_desc.InputTerminalDesc[_j0] = (int *) malloc(_len_class_desc__i0__cs_desc_InputTerminalDesc1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_class_desc__i0__cs_desc_InputTerminalDesc1; _j1++) {
              class_desc[_i0].cs_desc.InputTerminalDesc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_class_desc__i0__cs_desc_HeaderDesc0 = 1;
          class_desc[_i0].cs_desc.HeaderDesc = (int *) malloc(_len_class_desc__i0__cs_desc_HeaderDesc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_class_desc__i0__cs_desc_HeaderDesc0; _j0++) {
            class_desc[_i0].cs_desc.HeaderDesc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        class_desc[_i0].SelectorUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        class_desc[_i0].FeatureUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        class_desc[_i0].OutputTerminalNum = ((-2 * (next_i()%2)) + 1) * next_i();
        class_desc[_i0].InputTerminalNum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdesc0 = 100;
          long * pdesc = (long *) malloc(_len_pdesc0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pdesc0; _i0++) {
            pdesc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ParseCSDescriptors(class_desc,ac_subclass,pdesc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_class_desc0; _aux++) {
          free(class_desc[_aux].as_desc);
          }
          free(class_desc);
          free(pdesc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
