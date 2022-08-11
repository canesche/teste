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

__attribute__((used)) static int __ConvertTime(const char *NTTime, char *buffer, int buf_size) {
  const char *cur_char;
  char *cur_output, *end_output;
  cur_char = NTTime;
  cur_output = buffer;
  end_output = cur_output + buf_size;
  buf_size = 0;
  while (*cur_char) {
    switch(*cur_char) {
    case 'h':
      if (*(cur_char + 1) == 'h') {
        if (cur_output && (cur_output + 2 > end_output)) {
          *cur_output = 0;
          return ++buf_size;
        }
        if (cur_output) { *(cur_output++) = '%'; *(cur_output++) = 'I'; }
        buf_size += 2;
        ++cur_char;
      }
      else {
        if (cur_output && (cur_output + 3 > end_output)) {
          *cur_output = 0;
          return ++buf_size;
        }
        if (cur_output) { *(cur_output++) = '%'; *(cur_output++) = '#'; *(cur_output++) = 'I'; }
        buf_size += 3;
      }
      break;
    case 'H':
      if (*(cur_char + 1) == 'H') {
        if (cur_output && (cur_output + 2 > end_output)) {
          *cur_output = 0;
          return ++buf_size;
        }
        if (cur_output) { *(cur_output++) = '%'; *(cur_output++) = 'H'; }
        buf_size += 2;
        ++cur_char;
      }
      else {
        if (cur_output && (cur_output + 3 > end_output)) {
          *cur_output = 0;
          return ++buf_size;
        }
        if (cur_output) { *(cur_output++) = '%'; *(cur_output++) = '#'; *(cur_output++) = 'H'; }
        buf_size += 3;
      }
      break;
    case 'm':
      if (*(cur_char + 1) == 'm') {
        if (cur_output && (cur_output + 2 > end_output)) {
          *cur_output = 0;
          return ++buf_size;
        }
        if (cur_output) { *(cur_output++) = '%'; *(cur_output++) = 'M'; }
        buf_size += 2;
        cur_char++;
      }
      else {
        if (cur_output && (cur_output + 3 > end_output)) {
          *cur_output = 0;
          return ++buf_size;
        }
        if (cur_output) { *(cur_output++) = '%'; *(cur_output++) = '#'; *(cur_output++) = 'M'; }
        buf_size += 3;
      }
      break;
    case 's':
      if (*(cur_char + 1) == 's') {
        if (cur_output && (cur_output + 2 > end_output)) {
          *cur_output = 0;
          return ++buf_size;
        }
        if (cur_output) { *(cur_output++) = '%'; *(cur_output++) = 'S'; }
        buf_size += 2;
        ++cur_char;
      }
      else {
        if (cur_output && (cur_output + 3 > end_output)) {
          *cur_output = 0;
          return ++buf_size;
        }
        if (cur_output) { *(cur_output++) = '%'; *(cur_output++) = '#'; *(cur_output++) = 'S'; }
        buf_size += 3;
      }
      break;
    case 't':
      if (*(cur_char + 1) == 't')
        ++cur_char;
      if (cur_output && (cur_output + 2 > end_output)) {
        *cur_output = 0;
        return ++buf_size;
      }
      if (cur_output) { *(cur_output++) = '%'; *(cur_output++) = 'p'; }
      buf_size += 2;
      break;
    case '%':
      if (cur_output && (cur_output + 2 > end_output)) {
        *cur_output = 0;
        return ++buf_size;
      }
      if (cur_output) { *(cur_output++)='%'; *(cur_output++)='%'; }
      buf_size += 2;
      break;
    case '\'':
      ++cur_char;
      while (*cur_char != '\'' && *cur_char != 0 && (!cur_output || (cur_output != end_output))) {
        if (cur_output) *cur_output++ = *cur_char;
        ++cur_char;
        buf_size += 1;
      }
      break;
    default:
      if (cur_output) { *(cur_output++) = *cur_char; }
      buf_size += 1;
      break;
    }
    if (*cur_char == 0) break;
    ++cur_char;
  }

  if (!cur_output || cur_output != end_output) {
    if (cur_output) *cur_output = 0;
    buf_size += 1;
  }
  else {
    /* We trunc result */
    *(--cur_output) = 0;
  }

  return buf_size;
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
          int buf_size = 100;
          int _len_NTTime0 = 1;
          const char * NTTime = (const char *) malloc(_len_NTTime0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_NTTime0; _i0++) {
            NTTime[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 1;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __ConvertTime(NTTime,buffer,buf_size);
          printf("%d\n", benchRet); 
          free(NTTime);
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int buf_size = 255;
          int _len_NTTime0 = 65025;
          const char * NTTime = (const char *) malloc(_len_NTTime0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_NTTime0; _i0++) {
            NTTime[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 65025;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __ConvertTime(NTTime,buffer,buf_size);
          printf("%d\n", benchRet); 
          free(NTTime);
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int buf_size = 10;
          int _len_NTTime0 = 100;
          const char * NTTime = (const char *) malloc(_len_NTTime0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_NTTime0; _i0++) {
            NTTime[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 100;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __ConvertTime(NTTime,buffer,buf_size);
          printf("%d\n", benchRet); 
          free(NTTime);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
