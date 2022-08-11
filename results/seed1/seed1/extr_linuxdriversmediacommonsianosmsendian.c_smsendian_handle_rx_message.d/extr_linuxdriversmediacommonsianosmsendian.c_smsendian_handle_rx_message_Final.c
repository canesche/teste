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

/* Variables and functions */

void smsendian_handle_rx_message(void *buffer)
{
#ifdef __BIG_ENDIAN
	struct sms_msg_data *msg = (struct sms_msg_data *)buffer;
	int i;
	int msg_words;

	switch (msg->x_msg_header.msg_type) {
	case MSG_SMS_GET_VERSION_EX_RES:
	{
		struct sms_version_res *ver =
			(struct sms_version_res *) msg;
		ver->chip_model = le16_to_cpu((__force __le16)ver->chip_model);
		break;
	}

	case MSG_SMS_DVBT_BDA_DATA:
	case MSG_SMS_DAB_CHANNEL:
	case MSG_SMS_DATA_MSG:
	{
		break;
	}

	default:
	{
		msg_words = (msg->x_msg_header.msg_length -
				sizeof(struct sms_msg_hdr))/4;

		for (i = 0; i < msg_words; i++)
			msg->msg_data[i] = le32_to_cpu((__force __le32)msg->msg_data[i]);

		break;
	}
	}
#endif /* __BIG_ENDIAN */
}


// ------------------------------------------------------------------------- //




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
          void * buffer;
          smsendian_handle_rx_message(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * buffer;
          smsendian_handle_rx_message(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * buffer;
          smsendian_handle_rx_message(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
