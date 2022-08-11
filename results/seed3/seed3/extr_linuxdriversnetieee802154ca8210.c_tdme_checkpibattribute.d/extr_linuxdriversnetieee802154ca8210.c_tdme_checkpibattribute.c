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
typedef  int u8 ;

/* Variables and functions */
#define  MAC_ASSOCIATED_PAN_COORD 149 
#define  MAC_ASSOCIATION_PERMIT 148 
#define  MAC_AUTO_REQUEST 147 
#define  MAC_AUTO_REQUEST_KEY_ID_MODE 146 
#define  MAC_AUTO_REQUEST_SECURITY_LEVEL 145 
#define  MAC_BATT_LIFE_EXT 144 
#define  MAC_BATT_LIFE_EXT_PERIODS 143 
#define  MAC_BEACON_ORDER 142 
#define  MAC_BEACON_PAYLOAD 141 
#define  MAC_BEACON_PAYLOAD_LENGTH 140 
#define  MAC_GTS_PERMIT 139 
 int MAC_INVALID_PARAMETER ; 
#define  MAC_MAX_BE 138 
#define  MAC_MAX_CSMA_BACKOFFS 137 
#define  MAC_MAX_FRAME_RETRIES 136 
#define  MAC_MIN_BE 135 
#define  MAC_PROMISCUOUS_MODE 134 
#define  MAC_RESPONSE_WAIT_TIME 133 
#define  MAC_RX_ON_WHEN_IDLE 132 
#define  MAC_SECURITY_ENABLED 131 
 int MAC_SUCCESS ; 
#define  MAC_SUPERFRAME_ORDER 130 
 int MAX_BEACON_PAYLOAD_LENGTH ; 
#define  PHY_CCA_MODE 129 
#define  PHY_TRANSMIT_POWER 128 

__attribute__((used)) static u8 tdme_checkpibattribute(
	u8            pib_attribute,
	u8            pib_attribute_length,
	const void   *pib_attribute_value
)
{
	u8 status = MAC_SUCCESS;
	u8 value;

	value  = *((u8 *)pib_attribute_value);

	switch (pib_attribute) {
	/* PHY */
	case PHY_TRANSMIT_POWER:
		if (value > 0x3F)
			status = MAC_INVALID_PARAMETER;
		break;
	case PHY_CCA_MODE:
		if (value > 0x03)
			status = MAC_INVALID_PARAMETER;
		break;
	/* MAC */
	case MAC_BATT_LIFE_EXT_PERIODS:
		if (value < 6 || value > 41)
			status = MAC_INVALID_PARAMETER;
		break;
	case MAC_BEACON_PAYLOAD:
		if (pib_attribute_length > MAX_BEACON_PAYLOAD_LENGTH)
			status = MAC_INVALID_PARAMETER;
		break;
	case MAC_BEACON_PAYLOAD_LENGTH:
		if (value > MAX_BEACON_PAYLOAD_LENGTH)
			status = MAC_INVALID_PARAMETER;
		break;
	case MAC_BEACON_ORDER:
		if (value > 15)
			status = MAC_INVALID_PARAMETER;
		break;
	case MAC_MAX_BE:
		if (value < 3 || value > 8)
			status = MAC_INVALID_PARAMETER;
		break;
	case MAC_MAX_CSMA_BACKOFFS:
		if (value > 5)
			status = MAC_INVALID_PARAMETER;
		break;
	case MAC_MAX_FRAME_RETRIES:
		if (value > 7)
			status = MAC_INVALID_PARAMETER;
		break;
	case MAC_MIN_BE:
		if (value > 8)
			status = MAC_INVALID_PARAMETER;
		break;
	case MAC_RESPONSE_WAIT_TIME:
		if (value < 2 || value > 64)
			status = MAC_INVALID_PARAMETER;
		break;
	case MAC_SUPERFRAME_ORDER:
		if (value > 15)
			status = MAC_INVALID_PARAMETER;
		break;
	/* boolean */
	case MAC_ASSOCIATED_PAN_COORD:
	case MAC_ASSOCIATION_PERMIT:
	case MAC_AUTO_REQUEST:
	case MAC_BATT_LIFE_EXT:
	case MAC_GTS_PERMIT:
	case MAC_PROMISCUOUS_MODE:
	case MAC_RX_ON_WHEN_IDLE:
	case MAC_SECURITY_ENABLED:
		if (value > 1)
			status = MAC_INVALID_PARAMETER;
		break;
	/* MAC SEC */
	case MAC_AUTO_REQUEST_SECURITY_LEVEL:
		if (value > 7)
			status = MAC_INVALID_PARAMETER;
		break;
	case MAC_AUTO_REQUEST_KEY_ID_MODE:
		if (value > 3)
			status = MAC_INVALID_PARAMETER;
		break;
	default:
		break;
	}

	return status;
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
          int pib_attribute = 100;
          int pib_attribute_length = 100;
          int _len_pib_attribute_value0 = 1;
          const void * pib_attribute_value = (const void *) malloc(_len_pib_attribute_value0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pib_attribute_value0; _i0++) {
            pib_attribute_value[_i0] = 0;
          }
          int benchRet = tdme_checkpibattribute(pib_attribute,pib_attribute_length,pib_attribute_value);
          printf("%d\n", benchRet); 
          free(pib_attribute_value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pib_attribute = 255;
          int pib_attribute_length = 255;
          int _len_pib_attribute_value0 = 65025;
          const void * pib_attribute_value = (const void *) malloc(_len_pib_attribute_value0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pib_attribute_value0; _i0++) {
            pib_attribute_value[_i0] = 0;
          }
          int benchRet = tdme_checkpibattribute(pib_attribute,pib_attribute_length,pib_attribute_value);
          printf("%d\n", benchRet); 
          free(pib_attribute_value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pib_attribute = 10;
          int pib_attribute_length = 10;
          int _len_pib_attribute_value0 = 100;
          const void * pib_attribute_value = (const void *) malloc(_len_pib_attribute_value0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pib_attribute_value0; _i0++) {
            pib_attribute_value[_i0] = 0;
          }
          int benchRet = tdme_checkpibattribute(pib_attribute,pib_attribute_length,pib_attribute_value);
          printf("%d\n", benchRet); 
          free(pib_attribute_value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
