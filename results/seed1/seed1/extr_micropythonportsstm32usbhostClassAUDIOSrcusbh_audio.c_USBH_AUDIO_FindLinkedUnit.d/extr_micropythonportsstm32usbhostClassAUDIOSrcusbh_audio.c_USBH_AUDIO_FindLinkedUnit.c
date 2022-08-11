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
typedef  struct TYPE_19__   TYPE_9__ ;
typedef  struct TYPE_18__   TYPE_8__ ;
typedef  struct TYPE_17__   TYPE_7__ ;
typedef  struct TYPE_16__   TYPE_6__ ;
typedef  struct TYPE_15__   TYPE_5__ ;
typedef  struct TYPE_14__   TYPE_4__ ;
typedef  struct TYPE_13__   TYPE_3__ ;
typedef  struct TYPE_12__   TYPE_2__ ;
typedef  struct TYPE_11__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint8_t ;
typedef  size_t int32_t ;
struct TYPE_18__ {TYPE_1__* pActiveClass; } ;
typedef  TYPE_8__ USBH_HandleTypeDef ;
struct TYPE_16__ {TYPE_5__** OutputTerminalDesc; TYPE_4__** SelectorUnitDesc; TYPE_3__** MixerUnitDesc; TYPE_2__** FeatureUnitDesc; } ;
struct TYPE_17__ {size_t FeatureUnitNum; size_t MixerUnitNum; size_t SelectorUnitNum; size_t OutputTerminalNum; TYPE_6__ cs_desc; } ;
struct TYPE_19__ {TYPE_7__ class_desc; } ;
struct TYPE_15__ {size_t bSourceID; size_t bTerminalID; } ;
struct TYPE_14__ {size_t bSourceID0; size_t bUnitID; } ;
struct TYPE_13__ {size_t bSourceID0; size_t bSourceID1; size_t bUnitID; } ;
struct TYPE_12__ {size_t bSourceID; size_t bUnitID; } ;
struct TYPE_11__ {TYPE_9__* pData; } ;
typedef  TYPE_9__ AUDIO_HandleTypeDef ;

/* Variables and functions */
 int UAC_FEATURE_UNIT ; 
 int UAC_MIXER_UNIT ; 
 int UAC_OUTPUT_TERMINAL ; 
 int UAC_SELECTOR_UNIT ; 

__attribute__((used)) static int32_t USBH_AUDIO_FindLinkedUnit(USBH_HandleTypeDef *phost, uint8_t UnitID)
{
  uint8_t Index;  
  AUDIO_HandleTypeDef *AUDIO_Handle;
  
  AUDIO_Handle =  phost->pActiveClass->pData;    
  
  /* Find Feature Unit */
  for(Index = 0; Index < AUDIO_Handle->class_desc.FeatureUnitNum; Index ++)
  {
    if(AUDIO_Handle->class_desc.cs_desc.FeatureUnitDesc[Index]->bSourceID == UnitID)
    {
      UnitID = AUDIO_Handle->class_desc.cs_desc.FeatureUnitDesc[Index]->bUnitID;
      
      return ((UnitID << 16) | (UAC_FEATURE_UNIT << 8) | Index);
    }
  }
  
  /* Find Mixer Unit */
  for(Index = 0; Index < AUDIO_Handle->class_desc.MixerUnitNum; Index ++)
  {
    if((AUDIO_Handle->class_desc.cs_desc.MixerUnitDesc[Index]->bSourceID0 == UnitID)||
       (AUDIO_Handle->class_desc.cs_desc.MixerUnitDesc[Index]->bSourceID1 == UnitID))
    {
      UnitID = AUDIO_Handle->class_desc.cs_desc.MixerUnitDesc[Index]->bUnitID;
      
      return ((UnitID << 16) | (UAC_MIXER_UNIT << 8) | Index);
    }
  }
  
  
  /* Find Selector Unit */
  for(Index = 0; Index < AUDIO_Handle->class_desc.SelectorUnitNum; Index ++)
  {
    if(AUDIO_Handle->class_desc.cs_desc.SelectorUnitDesc[Index]->bSourceID0 == UnitID)
    {
      UnitID = AUDIO_Handle->class_desc.cs_desc.SelectorUnitDesc[Index]->bUnitID;
      
      return ((UnitID << 16) | (UAC_SELECTOR_UNIT << 8) | Index); 
    }
  }  
  
  
  /* Find OT Unit */  
  for(Index = 0; Index < AUDIO_Handle->class_desc.OutputTerminalNum; Index ++)
  {
    if(AUDIO_Handle->class_desc.cs_desc.OutputTerminalDesc[Index]->bSourceID == UnitID)
    {
      UnitID = AUDIO_Handle->class_desc.cs_desc.OutputTerminalDesc[Index]->bTerminalID;
      
      return ((UnitID << 16) | (UAC_OUTPUT_TERMINAL << 8) | Index);
    }
  } 
  
  /* No associated Unit found */
  return -1;
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
          unsigned long UnitID = 100;
          int _len_phost0 = 1;
          struct TYPE_18__ * phost = (struct TYPE_18__ *) malloc(_len_phost0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_11__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_19__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_19__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->class_desc.FeatureUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.MixerUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.SelectorUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.OutputTerminalNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc = (struct TYPE_15__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc0*sizeof(struct TYPE_15__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc[_j0] = (struct TYPE_15__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc1*sizeof(struct TYPE_15__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc[_j0]->bSourceID = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc[_j0]->bTerminalID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc = (struct TYPE_14__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc0*sizeof(struct TYPE_14__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc[_j0] = (struct TYPE_14__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc1*sizeof(struct TYPE_14__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc[_j0]->bSourceID0 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc[_j0]->bUnitID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc = (struct TYPE_13__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc0*sizeof(struct TYPE_13__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0] = (struct TYPE_13__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc1*sizeof(struct TYPE_13__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0]->bSourceID0 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0]->bSourceID1 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0]->bUnitID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc = (struct TYPE_12__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc0*sizeof(struct TYPE_12__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc[_j0] = (struct TYPE_12__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc1*sizeof(struct TYPE_12__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc[_j0]->bSourceID = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc[_j0]->bUnitID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          unsigned long benchRet = USBH_AUDIO_FindLinkedUnit(phost,UnitID);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long UnitID = 255;
          int _len_phost0 = 65025;
          struct TYPE_18__ * phost = (struct TYPE_18__ *) malloc(_len_phost0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_11__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_19__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_19__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->class_desc.FeatureUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.MixerUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.SelectorUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.OutputTerminalNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc = (struct TYPE_15__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc0*sizeof(struct TYPE_15__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc[_j0] = (struct TYPE_15__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc1*sizeof(struct TYPE_15__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc[_j0]->bSourceID = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc[_j0]->bTerminalID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc = (struct TYPE_14__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc0*sizeof(struct TYPE_14__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc[_j0] = (struct TYPE_14__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc1*sizeof(struct TYPE_14__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc[_j0]->bSourceID0 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc[_j0]->bUnitID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc = (struct TYPE_13__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc0*sizeof(struct TYPE_13__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0] = (struct TYPE_13__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc1*sizeof(struct TYPE_13__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0]->bSourceID0 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0]->bSourceID1 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0]->bUnitID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc = (struct TYPE_12__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc0*sizeof(struct TYPE_12__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc[_j0] = (struct TYPE_12__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc1*sizeof(struct TYPE_12__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc[_j0]->bSourceID = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc[_j0]->bUnitID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          unsigned long benchRet = USBH_AUDIO_FindLinkedUnit(phost,UnitID);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long UnitID = 10;
          int _len_phost0 = 100;
          struct TYPE_18__ * phost = (struct TYPE_18__ *) malloc(_len_phost0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_11__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_19__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_19__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->class_desc.FeatureUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.MixerUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.SelectorUnitNum = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.OutputTerminalNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc = (struct TYPE_15__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc0*sizeof(struct TYPE_15__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc[_j0] = (struct TYPE_15__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc1*sizeof(struct TYPE_15__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_OutputTerminalDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc[_j0]->bSourceID = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.OutputTerminalDesc[_j0]->bTerminalID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc = (struct TYPE_14__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc0*sizeof(struct TYPE_14__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc[_j0] = (struct TYPE_14__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc1*sizeof(struct TYPE_14__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_SelectorUnitDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc[_j0]->bSourceID0 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.SelectorUnitDesc[_j0]->bUnitID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc = (struct TYPE_13__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc0*sizeof(struct TYPE_13__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0] = (struct TYPE_13__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc1*sizeof(struct TYPE_13__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_MixerUnitDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0]->bSourceID0 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0]->bSourceID1 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.MixerUnitDesc[_j0]->bUnitID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc0 = 1;
          phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc = (struct TYPE_12__ **) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc0*sizeof(struct TYPE_12__ *));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc0; _j0++) {
            int _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc1 = 1;
            phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc[_j0] = (struct TYPE_12__ *) malloc(_len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc1*sizeof(struct TYPE_12__));
            for(int _j1 = 0; _j1 < _len_phost__i0__pActiveClass_pData_class_desc_cs_desc_FeatureUnitDesc1; _j1++) {
              phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc[_j0]->bSourceID = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->class_desc.cs_desc.FeatureUnitDesc[_j0]->bUnitID = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          unsigned long benchRet = USBH_AUDIO_FindLinkedUnit(phost,UnitID);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
