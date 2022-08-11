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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ tib_; } ;
struct TYPE_6__ {TYPE_1__ java_lang_Class; } ;
struct TYPE_7__ {TYPE_2__ fields; } ;
typedef  TYPE_3__ java_lang_Class ;
struct TYPE_8__ {int flags; scalar_t__ baseType; } ;
typedef  TYPE_4__ __TIB_DEFINITION_TEMPLATE ;
typedef  scalar_t__ JAVA_OBJECT ;

/* Variables and functions */
 scalar_t__ JAVA_NULL ; 
 int XMLVM_TYPE_ARRAY ; 

JAVA_OBJECT java_lang_Class_getComponentType__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getComponentType__]
    java_lang_Class* thiz = (java_lang_Class*) me;
    __TIB_DEFINITION_TEMPLATE* tib = (__TIB_DEFINITION_TEMPLATE*) thiz->fields.java_lang_Class.tib_;
    if ((tib->flags & XMLVM_TYPE_ARRAY) == 0) {
        // This is not an array
        return JAVA_NULL;
    }
    return tib->baseType;
    //XMLVM_END_NATIVE
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
          long me = 100;
          long benchRet = java_lang_Class_getComponentType__(me);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long me = 255;
          long benchRet = java_lang_Class_getComponentType__(me);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long me = 10;
          long benchRet = java_lang_Class_getComponentType__(me);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
