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
struct TYPE_2__ {unsigned int bNumEndpoints; } ;
struct usb_host_interface {TYPE_1__ desc; struct usb_host_endpoint* endpoint; } ;
struct usb_host_endpoint {unsigned char* extra; int extralen; } ;

/* Variables and functions */
 int ENODEV ; 
 unsigned char USB_DT_PIPE_USAGE ; 

__attribute__((used)) static int uas_find_endpoints(struct usb_host_interface *alt,
			      struct usb_host_endpoint *eps[])
{
	struct usb_host_endpoint *endpoint = alt->endpoint;
	unsigned i, n_endpoints = alt->desc.bNumEndpoints;

	for (i = 0; i < n_endpoints; i++) {
		unsigned char *extra = endpoint[i].extra;
		int len = endpoint[i].extralen;
		while (len >= 3) {
			if (extra[1] == USB_DT_PIPE_USAGE) {
				unsigned pipe_id = extra[2];
				if (pipe_id > 0 && pipe_id < 5)
					eps[pipe_id - 1] = &endpoint[i];
				break;
			}
			len -= extra[0];
			extra += extra[0];
		}
	}

	if (!eps[0] || !eps[1] || !eps[2] || !eps[3])
		return -ENODEV;

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
          int _len_alt0 = 1;
          struct usb_host_interface * alt = (struct usb_host_interface *) malloc(_len_alt0*sizeof(struct usb_host_interface));
          for(int _i0 = 0; _i0 < _len_alt0; _i0++) {
            alt[_i0].desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alt__i0__endpoint0 = 1;
          alt[_i0].endpoint = (struct usb_host_endpoint *) malloc(_len_alt__i0__endpoint0*sizeof(struct usb_host_endpoint));
          for(int _j0 = 0; _j0 < _len_alt__i0__endpoint0; _j0++) {
              int _len_alt__i0__endpoint_extra0 = 1;
          alt[_i0].endpoint->extra = (unsigned char *) malloc(_len_alt__i0__endpoint_extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_alt__i0__endpoint_extra0; _j0++) {
            alt[_i0].endpoint->extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        alt[_i0].endpoint->extralen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_eps0 = 1;
          struct usb_host_endpoint ** eps = (struct usb_host_endpoint **) malloc(_len_eps0*sizeof(struct usb_host_endpoint *));
          for(int _i0 = 0; _i0 < _len_eps0; _i0++) {
            int _len_eps1 = 1;
            eps[_i0] = (struct usb_host_endpoint *) malloc(_len_eps1*sizeof(struct usb_host_endpoint));
            for(int _i1 = 0; _i1 < _len_eps1; _i1++) {
                int _len_eps__i0___i1__extra0 = 1;
          eps[_i0][_i1].extra = (unsigned char *) malloc(_len_eps__i0___i1__extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_eps__i0___i1__extra0; _j0++) {
            eps[_i0][_i1].extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        eps[_i0][_i1].extralen = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = uas_find_endpoints(alt,eps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_alt0; _aux++) {
          free(alt[_aux].endpoint);
          }
          free(alt);
          for(int i1 = 0; i1 < _len_eps0; i1++) {
            int _len_eps1 = 1;
              for(int _aux = 0; _aux < _len_eps1; _aux++) {
          free(eps[_aux].extra);
          }
          free(eps[i1]);
          }
          free(eps);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_alt0 = 65025;
          struct usb_host_interface * alt = (struct usb_host_interface *) malloc(_len_alt0*sizeof(struct usb_host_interface));
          for(int _i0 = 0; _i0 < _len_alt0; _i0++) {
            alt[_i0].desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alt__i0__endpoint0 = 1;
          alt[_i0].endpoint = (struct usb_host_endpoint *) malloc(_len_alt__i0__endpoint0*sizeof(struct usb_host_endpoint));
          for(int _j0 = 0; _j0 < _len_alt__i0__endpoint0; _j0++) {
              int _len_alt__i0__endpoint_extra0 = 1;
          alt[_i0].endpoint->extra = (unsigned char *) malloc(_len_alt__i0__endpoint_extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_alt__i0__endpoint_extra0; _j0++) {
            alt[_i0].endpoint->extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        alt[_i0].endpoint->extralen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_eps0 = 65025;
          struct usb_host_endpoint ** eps = (struct usb_host_endpoint **) malloc(_len_eps0*sizeof(struct usb_host_endpoint *));
          for(int _i0 = 0; _i0 < _len_eps0; _i0++) {
            int _len_eps1 = 1;
            eps[_i0] = (struct usb_host_endpoint *) malloc(_len_eps1*sizeof(struct usb_host_endpoint));
            for(int _i1 = 0; _i1 < _len_eps1; _i1++) {
                int _len_eps__i0___i1__extra0 = 1;
          eps[_i0][_i1].extra = (unsigned char *) malloc(_len_eps__i0___i1__extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_eps__i0___i1__extra0; _j0++) {
            eps[_i0][_i1].extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        eps[_i0][_i1].extralen = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = uas_find_endpoints(alt,eps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_alt0; _aux++) {
          free(alt[_aux].endpoint);
          }
          free(alt);
          for(int i1 = 0; i1 < _len_eps0; i1++) {
            int _len_eps1 = 1;
              for(int _aux = 0; _aux < _len_eps1; _aux++) {
          free(eps[_aux].extra);
          }
          free(eps[i1]);
          }
          free(eps);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_alt0 = 100;
          struct usb_host_interface * alt = (struct usb_host_interface *) malloc(_len_alt0*sizeof(struct usb_host_interface));
          for(int _i0 = 0; _i0 < _len_alt0; _i0++) {
            alt[_i0].desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alt__i0__endpoint0 = 1;
          alt[_i0].endpoint = (struct usb_host_endpoint *) malloc(_len_alt__i0__endpoint0*sizeof(struct usb_host_endpoint));
          for(int _j0 = 0; _j0 < _len_alt__i0__endpoint0; _j0++) {
              int _len_alt__i0__endpoint_extra0 = 1;
          alt[_i0].endpoint->extra = (unsigned char *) malloc(_len_alt__i0__endpoint_extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_alt__i0__endpoint_extra0; _j0++) {
            alt[_i0].endpoint->extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        alt[_i0].endpoint->extralen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_eps0 = 100;
          struct usb_host_endpoint ** eps = (struct usb_host_endpoint **) malloc(_len_eps0*sizeof(struct usb_host_endpoint *));
          for(int _i0 = 0; _i0 < _len_eps0; _i0++) {
            int _len_eps1 = 1;
            eps[_i0] = (struct usb_host_endpoint *) malloc(_len_eps1*sizeof(struct usb_host_endpoint));
            for(int _i1 = 0; _i1 < _len_eps1; _i1++) {
                int _len_eps__i0___i1__extra0 = 1;
          eps[_i0][_i1].extra = (unsigned char *) malloc(_len_eps__i0___i1__extra0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_eps__i0___i1__extra0; _j0++) {
            eps[_i0][_i1].extra[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        eps[_i0][_i1].extralen = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = uas_find_endpoints(alt,eps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_alt0; _aux++) {
          free(alt[_aux].endpoint);
          }
          free(alt);
          for(int i1 = 0; i1 < _len_eps0; i1++) {
            int _len_eps1 = 1;
              for(int _aux = 0; _aux < _len_eps1; _aux++) {
          free(eps[_aux].extra);
          }
          free(eps[i1]);
          }
          free(eps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
