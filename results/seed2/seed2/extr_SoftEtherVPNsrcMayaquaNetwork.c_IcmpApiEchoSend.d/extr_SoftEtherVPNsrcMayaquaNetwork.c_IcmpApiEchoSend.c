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
typedef  int /*<<< orphan*/  UINT ;
typedef  int /*<<< orphan*/  UCHAR ;
typedef  int /*<<< orphan*/  IP ;
typedef  int /*<<< orphan*/  ICMP_RESULT ;

/* Variables and functions */

ICMP_RESULT *IcmpApiEchoSend(IP *dest_ip, UCHAR ttl, UCHAR *data, UINT size, UINT timeout)
{
#ifdef	OS_WIN32
	// Validate arguments
	if (dest_ip == NULL || IsIP4(dest_ip) == false || (size != 0 && data == NULL))
	{
		return NULL;
	}
	if (ttl == 0)
	{
		ttl = 127;
	}

	if (IsIcmpApiSupported())
	{
		HANDLE h;
		DWORD dw;
		IPAddr dest_addr;
		UINT reply_size;
		ICMP_ECHO_REPLY *reply;
		ICMP_RESULT *ret = NULL;
		IP_OPTION_INFORMATION opt;

		h = w32net->IcmpCreateFile();

		if (h == INVALID_HANDLE_VALUE)
		{
			return NULL;
		}

		Zero(&opt, sizeof(opt));
		opt.Ttl = ttl;

		IPToInAddr((struct in_addr *)&dest_addr, dest_ip);

		reply_size = sizeof(*reply) + size + 64;
		reply = ZeroMalloc(reply_size);

		dw = w32net->IcmpSendEcho(h, dest_addr, data, size, &opt, reply, reply_size, timeout);

		ret = ZeroMalloc(sizeof(ICMP_RESULT));

		if (dw >= 1 && reply->Status == IP_SUCCESS)
		{
			ret->Ok = true;
		}
		else
		{
			switch (reply->Status)
			{
			case IP_DEST_NET_UNREACHABLE:
				ret->Type = ICMP_TYPE_DESTINATION_UNREACHABLE;
				ret->Code = ICMP_CODE_NET_UNREACHABLE;
				break;

			case IP_DEST_HOST_UNREACHABLE:
				ret->Type = ICMP_TYPE_DESTINATION_UNREACHABLE;
				ret->Code = ICMP_CODE_HOST_UNREACHABLE;
				break;

			case IP_DEST_PROT_UNREACHABLE:
				ret->Type = ICMP_TYPE_DESTINATION_UNREACHABLE;
				ret->Code = ICMP_CODE_PROTOCOL_UNREACHABLE;
				break;

			case IP_DEST_PORT_UNREACHABLE:
				ret->Type = ICMP_TYPE_DESTINATION_UNREACHABLE;
				ret->Code = ICMP_CODE_PORT_UNREACHABLE;
				break;

			case IP_TTL_EXPIRED_TRANSIT:
				ret->Type = ICMP_TYPE_TIME_EXCEEDED;
				ret->Code = ICMP_CODE_TTL_EXCEEDED_IN_TRANSIT;
				break;

			case IP_TTL_EXPIRED_REASSEM:
				ret->Type = ICMP_TYPE_TIME_EXCEEDED;
				ret->Code = ICMP_CODE_FRAGMENT_REASSEMBLY_TIME_EXCEEDED;
				break;

			default:
				ret->Timeout = true;
				break;
			}
		}

		if (ret->Timeout == false)
		{
			ret->Ttl = reply->Options.Ttl;
			ret->Rtt = reply->RoundTripTime;
			InAddrToIP(&ret->IpAddress, (struct in_addr *)&reply->Address);

			if (reply->DataSize >= 1 && reply->Data != NULL)
			{
				ret->DataSize = reply->DataSize;
				ret->Data = Clone(reply->Data, reply->DataSize);
			}
		}

		Free(reply);

		w32net->IcmpCloseHandle(h);

		return ret;
	}
	else
	{
		return NULL;
	}

#else	// OS_WIN32
	return NULL;
#endif	// OS_WIN32
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
          int ttl = 100;
          int size = 100;
          int timeout = 100;
          int _len_dest_ip0 = 1;
          int * dest_ip = (int *) malloc(_len_dest_ip0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_ip0; _i0++) {
            dest_ip[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = IcmpApiEchoSend(dest_ip,ttl,data,size,timeout);
          printf("%d\n", (*benchRet)); 
          free(dest_ip);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ttl = 255;
          int size = 255;
          int timeout = 255;
          int _len_dest_ip0 = 65025;
          int * dest_ip = (int *) malloc(_len_dest_ip0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_ip0; _i0++) {
            dest_ip[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = IcmpApiEchoSend(dest_ip,ttl,data,size,timeout);
          printf("%d\n", (*benchRet)); 
          free(dest_ip);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ttl = 10;
          int size = 10;
          int timeout = 10;
          int _len_dest_ip0 = 100;
          int * dest_ip = (int *) malloc(_len_dest_ip0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_ip0; _i0++) {
            dest_ip[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = IcmpApiEchoSend(dest_ip,ttl,data,size,timeout);
          printf("%d\n", (*benchRet)); 
          free(dest_ip);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
