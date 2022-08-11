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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  int uint32_t ;
struct TYPE_3__ {int* data; int shift; scalar_t__ count; int size; int logical_min; int logical_max; int resolution; scalar_t__ sign; } ;
typedef  TYPE_1__ HID_Report_ItemTypedef ;

/* Variables and functions */

uint32_t HID_ReadItem(HID_Report_ItemTypedef *ri, uint8_t ndx)
{
  uint32_t val=0;
  uint32_t x=0;
  uint32_t bofs;
  uint8_t *data=ri->data;
  uint8_t shift=ri->shift;
  
  /* get the logical value of the item */
  
  /* if this is an array, wee may need to offset ri->data.*/
  if (ri->count > 0)
  { 
    /* If app tries to read outside of the array. */
    if (ri->count <= ndx)
    {
      return(0);
    }
    
    /* calculate bit offset */
    bofs = ndx*ri->size;
    bofs += shift;
    /* calculate byte offset + shift pair from bit offset. */    
    data+=bofs/8;
    shift=(uint8_t)(bofs%8);
  }
  /* read data bytes in little endian order */
  for(x=0; x < ((ri->size & 0x7) ? (ri->size/8)+1 : (ri->size/8)); x++)
  {
    val=(uint32_t)(*data << (x*8));
  }    
  val=(val >> shift) & ((1<<ri->size)-1);
  
  if (val < ri->logical_min || val > ri->logical_max)
  {
    return(0);
  }
  
  /* convert logical value to physical value */
  /* See if the number is negative or not. */
  if ((ri->sign) && (val & (1<<(ri->size-1))))
  {
    /* yes, so sign extend value to 32 bits. */
    int vs=(int)((-1 & ~((1<<(ri->size))-1)) | val);
    
    if(ri->resolution == 1)
    {
      return((uint32_t)vs);
    }
    return((uint32_t)(vs*ri->resolution));
  }
  else
  {
    if(ri->resolution == 1)
    {
      return(val);
    }
    return(val*ri->resolution);    
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
          int ndx = 100;
          int _len_ri0 = 1;
          struct TYPE_3__ * ri = (struct TYPE_3__ *) malloc(_len_ri0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
              int _len_ri__i0__data0 = 1;
          ri[_i0].data = (int *) malloc(_len_ri__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ri__i0__data0; _j0++) {
            ri[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ri[_i0].shift = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].logical_min = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].logical_max = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].resolution = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].sign = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = HID_ReadItem(ri,ndx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ri0; _aux++) {
          free(ri[_aux].data);
          }
          free(ri);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ndx = 255;
          int _len_ri0 = 65025;
          struct TYPE_3__ * ri = (struct TYPE_3__ *) malloc(_len_ri0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
              int _len_ri__i0__data0 = 1;
          ri[_i0].data = (int *) malloc(_len_ri__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ri__i0__data0; _j0++) {
            ri[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ri[_i0].shift = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].logical_min = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].logical_max = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].resolution = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].sign = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = HID_ReadItem(ri,ndx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ri0; _aux++) {
          free(ri[_aux].data);
          }
          free(ri);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ndx = 10;
          int _len_ri0 = 100;
          struct TYPE_3__ * ri = (struct TYPE_3__ *) malloc(_len_ri0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
              int _len_ri__i0__data0 = 1;
          ri[_i0].data = (int *) malloc(_len_ri__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ri__i0__data0; _j0++) {
            ri[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ri[_i0].shift = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].logical_min = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].logical_max = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].resolution = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].sign = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = HID_ReadItem(ri,ndx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ri0; _aux++) {
          free(ri[_aux].data);
          }
          free(ri);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
