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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
struct smp_chan {scalar_t__ enc_key_size; } ;
struct l2cap_conn {TYPE_1__* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_dev {scalar_t__ le_max_key_size; } ;
typedef  scalar_t__ __u8 ;
struct TYPE_2__ {struct hci_dev* hdev; } ;

/* Variables and functions */
 int /*<<< orphan*/  SMP_ENC_KEY_SIZE ; 
 scalar_t__ SMP_MIN_ENC_KEY_SIZE ; 

__attribute__((used)) static u8 check_enc_key_size(struct l2cap_conn *conn, __u8 max_key_size)
{
	struct l2cap_chan *chan = conn->smp;
	struct hci_dev *hdev = conn->hcon->hdev;
	struct smp_chan *smp = chan->data;

	if (max_key_size > hdev->le_max_key_size ||
	    max_key_size < SMP_MIN_ENC_KEY_SIZE)
		return SMP_ENC_KEY_SIZE;

	smp->enc_key_size = max_key_size;

	return 0;
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
          long max_key_size = 100;
          int _len_conn0 = 1;
          struct l2cap_conn * conn = (struct l2cap_conn *) malloc(_len_conn0*sizeof(struct l2cap_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              int _len_conn__i0__hcon0 = 1;
          conn[_i0].hcon = (struct TYPE_2__ *) malloc(_len_conn__i0__hcon0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_conn__i0__hcon0; _j0++) {
              int _len_conn__i0__hcon_hdev0 = 1;
          conn[_i0].hcon->hdev = (struct hci_dev *) malloc(_len_conn__i0__hcon_hdev0*sizeof(struct hci_dev));
          for(int _j0 = 0; _j0 < _len_conn__i0__hcon_hdev0; _j0++) {
            conn[_i0].hcon->hdev->le_max_key_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_conn__i0__smp0 = 1;
          conn[_i0].smp = (struct l2cap_chan *) malloc(_len_conn__i0__smp0*sizeof(struct l2cap_chan));
          for(int _j0 = 0; _j0 < _len_conn__i0__smp0; _j0++) {
              int _len_conn__i0__smp_data0 = 1;
          conn[_i0].smp->data = (struct smp_chan *) malloc(_len_conn__i0__smp_data0*sizeof(struct smp_chan));
          for(int _j0 = 0; _j0 < _len_conn__i0__smp_data0; _j0++) {
            conn[_i0].smp->data->enc_key_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = check_enc_key_size(conn,max_key_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].hcon);
          }
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].smp);
          }
          free(conn);
        
        break;
    }
    // big-arr
    case 1:
    {
          long max_key_size = 255;
          int _len_conn0 = 65025;
          struct l2cap_conn * conn = (struct l2cap_conn *) malloc(_len_conn0*sizeof(struct l2cap_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              int _len_conn__i0__hcon0 = 1;
          conn[_i0].hcon = (struct TYPE_2__ *) malloc(_len_conn__i0__hcon0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_conn__i0__hcon0; _j0++) {
              int _len_conn__i0__hcon_hdev0 = 1;
          conn[_i0].hcon->hdev = (struct hci_dev *) malloc(_len_conn__i0__hcon_hdev0*sizeof(struct hci_dev));
          for(int _j0 = 0; _j0 < _len_conn__i0__hcon_hdev0; _j0++) {
            conn[_i0].hcon->hdev->le_max_key_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_conn__i0__smp0 = 1;
          conn[_i0].smp = (struct l2cap_chan *) malloc(_len_conn__i0__smp0*sizeof(struct l2cap_chan));
          for(int _j0 = 0; _j0 < _len_conn__i0__smp0; _j0++) {
              int _len_conn__i0__smp_data0 = 1;
          conn[_i0].smp->data = (struct smp_chan *) malloc(_len_conn__i0__smp_data0*sizeof(struct smp_chan));
          for(int _j0 = 0; _j0 < _len_conn__i0__smp_data0; _j0++) {
            conn[_i0].smp->data->enc_key_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = check_enc_key_size(conn,max_key_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].hcon);
          }
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].smp);
          }
          free(conn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long max_key_size = 10;
          int _len_conn0 = 100;
          struct l2cap_conn * conn = (struct l2cap_conn *) malloc(_len_conn0*sizeof(struct l2cap_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              int _len_conn__i0__hcon0 = 1;
          conn[_i0].hcon = (struct TYPE_2__ *) malloc(_len_conn__i0__hcon0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_conn__i0__hcon0; _j0++) {
              int _len_conn__i0__hcon_hdev0 = 1;
          conn[_i0].hcon->hdev = (struct hci_dev *) malloc(_len_conn__i0__hcon_hdev0*sizeof(struct hci_dev));
          for(int _j0 = 0; _j0 < _len_conn__i0__hcon_hdev0; _j0++) {
            conn[_i0].hcon->hdev->le_max_key_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_conn__i0__smp0 = 1;
          conn[_i0].smp = (struct l2cap_chan *) malloc(_len_conn__i0__smp0*sizeof(struct l2cap_chan));
          for(int _j0 = 0; _j0 < _len_conn__i0__smp0; _j0++) {
              int _len_conn__i0__smp_data0 = 1;
          conn[_i0].smp->data = (struct smp_chan *) malloc(_len_conn__i0__smp_data0*sizeof(struct smp_chan));
          for(int _j0 = 0; _j0 < _len_conn__i0__smp_data0; _j0++) {
            conn[_i0].smp->data->enc_key_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = check_enc_key_size(conn,max_key_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].hcon);
          }
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].smp);
          }
          free(conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
