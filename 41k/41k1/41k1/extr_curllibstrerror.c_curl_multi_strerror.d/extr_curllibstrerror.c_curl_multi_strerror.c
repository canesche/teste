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
typedef  int CURLMcode ;

/* Variables and functions */
#define  CURLM_ADDED_ALREADY 138 
#define  CURLM_BAD_EASY_HANDLE 137 
#define  CURLM_BAD_HANDLE 136 
#define  CURLM_BAD_SOCKET 135 
#define  CURLM_CALL_MULTI_PERFORM 134 
#define  CURLM_INTERNAL_ERROR 133 
#define  CURLM_LAST 132 
#define  CURLM_OK 131 
#define  CURLM_OUT_OF_MEMORY 130 
#define  CURLM_RECURSIVE_API_CALL 129 
#define  CURLM_UNKNOWN_OPTION 128 

const char *
curl_multi_strerror(CURLMcode error)
{
#ifndef CURL_DISABLE_VERBOSE_STRINGS
  switch(error) {
  case CURLM_CALL_MULTI_PERFORM:
    return "Please call curl_multi_perform() soon";

  case CURLM_OK:
    return "No error";

  case CURLM_BAD_HANDLE:
    return "Invalid multi handle";

  case CURLM_BAD_EASY_HANDLE:
    return "Invalid easy handle";

  case CURLM_OUT_OF_MEMORY:
    return "Out of memory";

  case CURLM_INTERNAL_ERROR:
    return "Internal error";

  case CURLM_BAD_SOCKET:
    return "Invalid socket argument";

  case CURLM_UNKNOWN_OPTION:
    return "Unknown option";

  case CURLM_ADDED_ALREADY:
    return "The easy handle is already added to a multi handle";

  case CURLM_RECURSIVE_API_CALL:
    return "API function called from within callback";

  case CURLM_LAST:
    break;
  }

  return "Unknown error";
#else
  if(error == CURLM_OK)
    return "No error";
  else
    return "Error";
#endif
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
          int error = 100;
          const char * benchRet = curl_multi_strerror(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int error = 255;
          const char * benchRet = curl_multi_strerror(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int error = 10;
          const char * benchRet = curl_multi_strerror(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
