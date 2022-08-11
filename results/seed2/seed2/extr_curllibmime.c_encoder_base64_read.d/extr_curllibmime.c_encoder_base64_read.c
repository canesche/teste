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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ bufbeg; scalar_t__ bufend; int pos; int* buf; } ;
typedef  TYPE_1__ mime_encoder_state ;
struct TYPE_5__ {TYPE_1__ encstate; } ;
typedef  TYPE_2__ curl_mimepart ;

/* Variables and functions */
 int MAX_ENCODED_LINE_LENGTH ; 
 void** base64 ; 

__attribute__((used)) static size_t encoder_base64_read(char *buffer, size_t size, bool ateof,
                                curl_mimepart *part)
{
  mime_encoder_state *st = &part->encstate;
  size_t cursize = 0;
  int i;
  char *ptr = buffer;

  while(st->bufbeg < st->bufend) {
    /* Line full ? */
    if(st->pos > MAX_ENCODED_LINE_LENGTH - 4) {
      /* Yes, we need 2 characters for CRLF. */
      if(size < 2)
        break;
      *ptr++ = '\r';
      *ptr++ = '\n';
      st->pos = 0;
      cursize += 2;
      size -= 2;
    }

    /* Be sure there is enough space and input data for a base64 group. */
    if(size < 4 || st->bufend - st->bufbeg < 3)
      break;

    /* Encode three bytes as four characters. */
    i = st->buf[st->bufbeg++] & 0xFF;
    i = (i << 8) | (st->buf[st->bufbeg++] & 0xFF);
    i = (i << 8) | (st->buf[st->bufbeg++] & 0xFF);
    *ptr++ = base64[(i >> 18) & 0x3F];
    *ptr++ = base64[(i >> 12) & 0x3F];
    *ptr++ = base64[(i >> 6) & 0x3F];
    *ptr++ = base64[i & 0x3F];
    cursize += 4;
    st->pos += 4;
    size -= 4;
  }

  /* If at eof, we have to flush the buffered data. */
  if(ateof && size >= 4) {
    /* Buffered data size can only be 0, 1 or 2. */
    ptr[2] = ptr[3] = '=';
    i = 0;
    switch(st->bufend - st->bufbeg) {
    case 2:
      i = (st->buf[st->bufbeg + 1] & 0xFF) << 8;
      /* FALLTHROUGH */
    case 1:
      i |= (st->buf[st->bufbeg] & 0xFF) << 16;
      ptr[0] = base64[(i >> 18) & 0x3F];
      ptr[1] = base64[(i >> 12) & 0x3F];
      if(++st->bufbeg != st->bufend) {
        ptr[2] = base64[(i >> 6) & 0x3F];
        st->bufbeg++;
      }
      cursize += 4;
      st->pos += 4;
      break;
    }
  }

#ifdef CURL_DOES_CONVERSIONS
  /* This is now textual data, Convert character codes. */
  if(part->easy && cursize) {
    CURLcode result = Curl_convert_to_network(part->easy, buffer, cursize);
    if(result)
      return READ_ERROR;
  }
#endif

  return cursize;
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
          unsigned long size = 100;
          int ateof = 100;
          int _len_buffer0 = 1;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_part0 = 1;
          struct TYPE_5__ * part = (struct TYPE_5__ *) malloc(_len_part0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_part0; _i0++) {
            part[_i0].encstate.bufbeg = ((-2 * (next_i()%2)) + 1) * next_i();
        part[_i0].encstate.bufend = ((-2 * (next_i()%2)) + 1) * next_i();
        part[_i0].encstate.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_part__i0__encstate_buf0 = 1;
          part[_i0].encstate.buf = (int *) malloc(_len_part__i0__encstate_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_part__i0__encstate_buf0; _j0++) {
            part[_i0].encstate.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = encoder_base64_read(buffer,size,ateof,part);
          printf("%lu\n", benchRet); 
          free(buffer);
          free(part);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          int ateof = 255;
          int _len_buffer0 = 65025;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_part0 = 65025;
          struct TYPE_5__ * part = (struct TYPE_5__ *) malloc(_len_part0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_part0; _i0++) {
            part[_i0].encstate.bufbeg = ((-2 * (next_i()%2)) + 1) * next_i();
        part[_i0].encstate.bufend = ((-2 * (next_i()%2)) + 1) * next_i();
        part[_i0].encstate.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_part__i0__encstate_buf0 = 1;
          part[_i0].encstate.buf = (int *) malloc(_len_part__i0__encstate_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_part__i0__encstate_buf0; _j0++) {
            part[_i0].encstate.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = encoder_base64_read(buffer,size,ateof,part);
          printf("%lu\n", benchRet); 
          free(buffer);
          free(part);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          int ateof = 10;
          int _len_buffer0 = 100;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_part0 = 100;
          struct TYPE_5__ * part = (struct TYPE_5__ *) malloc(_len_part0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_part0; _i0++) {
            part[_i0].encstate.bufbeg = ((-2 * (next_i()%2)) + 1) * next_i();
        part[_i0].encstate.bufend = ((-2 * (next_i()%2)) + 1) * next_i();
        part[_i0].encstate.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_part__i0__encstate_buf0 = 1;
          part[_i0].encstate.buf = (int *) malloc(_len_part__i0__encstate_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_part__i0__encstate_buf0; _j0++) {
            part[_i0].encstate.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = encoder_base64_read(buffer,size,ateof,part);
          printf("%lu\n", benchRet); 
          free(buffer);
          free(part);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
