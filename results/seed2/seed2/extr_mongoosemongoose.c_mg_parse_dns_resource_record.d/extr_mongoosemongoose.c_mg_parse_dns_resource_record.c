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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_4__ {char* p; int len; } ;
struct TYPE_3__ {char* p; int len; } ;
struct mg_dns_resource_record {unsigned char rtype; unsigned char rclass; int ttl; TYPE_2__ rdata; int /*<<< orphan*/  kind; TYPE_1__ name; } ;

/* Variables and functions */
 int /*<<< orphan*/  MG_DNS_ANSWER ; 
 int /*<<< orphan*/  MG_DNS_QUESTION ; 

__attribute__((used)) static unsigned char *mg_parse_dns_resource_record(
    unsigned char *data, unsigned char *end, struct mg_dns_resource_record *rr,
    int reply) {
  unsigned char *name = data;
  int chunk_len, data_len;

  while (data < end && (chunk_len = *data)) {
    if (((unsigned char *) data)[0] & 0xc0) {
      data += 1;
      break;
    }
    data += chunk_len + 1;
  }

  if (data > end - 5) {
    return NULL;
  }

  rr->name.p = (char *) name;
  rr->name.len = data - name + 1;
  data++;

  rr->rtype = data[0] << 8 | data[1];
  data += 2;

  rr->rclass = data[0] << 8 | data[1];
  data += 2;

  rr->kind = reply ? MG_DNS_ANSWER : MG_DNS_QUESTION;
  if (reply) {
    if (data >= end - 6) {
      return NULL;
    }

    rr->ttl = (uint32_t) data[0] << 24 | (uint32_t) data[1] << 16 |
              data[2] << 8 | data[3];
    data += 4;

    data_len = *data << 8 | *(data + 1);
    data += 2;

    rr->rdata.p = (char *) data;
    rr->rdata.len = data_len;
    data += data_len;
  }
  return data;
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
          int reply = 100;
          int _len_data0 = 1;
          unsigned char * data = (unsigned char *) malloc(_len_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 1;
          unsigned char * end = (unsigned char *) malloc(_len_end0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rr0 = 1;
          struct mg_dns_resource_record * rr = (struct mg_dns_resource_record *) malloc(_len_rr0*sizeof(struct mg_dns_resource_record));
          for(int _i0 = 0; _i0 < _len_rr0; _i0++) {
            rr[_i0].rtype = ((-2 * (next_i()%2)) + 1) * next_i();
        rr[_i0].rclass = ((-2 * (next_i()%2)) + 1) * next_i();
        rr[_i0].ttl = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rr__i0__rdata_p0 = 1;
          rr[_i0].rdata.p = (char *) malloc(_len_rr__i0__rdata_p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rr__i0__rdata_p0; _j0++) {
            rr[_i0].rdata.p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rr[_i0].rdata.len = ((-2 * (next_i()%2)) + 1) * next_i();
        rr[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rr__i0__name_p0 = 1;
          rr[_i0].name.p = (char *) malloc(_len_rr__i0__name_p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rr__i0__name_p0; _j0++) {
            rr[_i0].name.p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rr[_i0].name.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char * benchRet = mg_parse_dns_resource_record(data,end,rr,reply);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(data);
          free(end);
          free(rr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reply = 255;
          int _len_data0 = 65025;
          unsigned char * data = (unsigned char *) malloc(_len_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 65025;
          unsigned char * end = (unsigned char *) malloc(_len_end0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rr0 = 65025;
          struct mg_dns_resource_record * rr = (struct mg_dns_resource_record *) malloc(_len_rr0*sizeof(struct mg_dns_resource_record));
          for(int _i0 = 0; _i0 < _len_rr0; _i0++) {
            rr[_i0].rtype = ((-2 * (next_i()%2)) + 1) * next_i();
        rr[_i0].rclass = ((-2 * (next_i()%2)) + 1) * next_i();
        rr[_i0].ttl = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rr__i0__rdata_p0 = 1;
          rr[_i0].rdata.p = (char *) malloc(_len_rr__i0__rdata_p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rr__i0__rdata_p0; _j0++) {
            rr[_i0].rdata.p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rr[_i0].rdata.len = ((-2 * (next_i()%2)) + 1) * next_i();
        rr[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rr__i0__name_p0 = 1;
          rr[_i0].name.p = (char *) malloc(_len_rr__i0__name_p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rr__i0__name_p0; _j0++) {
            rr[_i0].name.p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rr[_i0].name.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char * benchRet = mg_parse_dns_resource_record(data,end,rr,reply);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(data);
          free(end);
          free(rr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reply = 10;
          int _len_data0 = 100;
          unsigned char * data = (unsigned char *) malloc(_len_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 100;
          unsigned char * end = (unsigned char *) malloc(_len_end0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rr0 = 100;
          struct mg_dns_resource_record * rr = (struct mg_dns_resource_record *) malloc(_len_rr0*sizeof(struct mg_dns_resource_record));
          for(int _i0 = 0; _i0 < _len_rr0; _i0++) {
            rr[_i0].rtype = ((-2 * (next_i()%2)) + 1) * next_i();
        rr[_i0].rclass = ((-2 * (next_i()%2)) + 1) * next_i();
        rr[_i0].ttl = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rr__i0__rdata_p0 = 1;
          rr[_i0].rdata.p = (char *) malloc(_len_rr__i0__rdata_p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rr__i0__rdata_p0; _j0++) {
            rr[_i0].rdata.p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rr[_i0].rdata.len = ((-2 * (next_i()%2)) + 1) * next_i();
        rr[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rr__i0__name_p0 = 1;
          rr[_i0].name.p = (char *) malloc(_len_rr__i0__name_p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rr__i0__name_p0; _j0++) {
            rr[_i0].name.p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rr[_i0].name.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char * benchRet = mg_parse_dns_resource_record(data,end,rr,reply);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(data);
          free(end);
          free(rr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
