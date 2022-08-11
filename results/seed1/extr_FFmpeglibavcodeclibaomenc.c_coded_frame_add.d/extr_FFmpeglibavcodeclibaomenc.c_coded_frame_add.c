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
       3            linked\n\
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
struct FrameListData {struct FrameListData* next; } ;

/* Variables and functions */

__attribute__((used)) static void coded_frame_add(void *list, struct FrameListData *cx_frame)
{
    struct FrameListData **p = list;

    while (*p)
        p = &(*p)->next;
    *p = cx_frame;
    cx_frame->next = NULL;
}


// ------------------------------------------------------------------------- //

struct FrameListData *_allocate_cx_frame(int length, struct FrameListData *aux_cx_frame[]) {
  struct FrameListData *walker = (struct FrameListData *)malloc(sizeof(struct FrameListData));

  aux_cx_frame[0] = walker;
  walker->next = NULL;

  struct FrameListData *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct FrameListData *)malloc(sizeof(struct FrameListData));
    walker = walker->next;
    aux_cx_frame[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_cx_frame(struct FrameListData *aux_cx_frame[], int aux_cx_frame_size) {
  for(int i = 0; i < aux_cx_frame_size; i++) 
    if(aux_cx_frame[i])
      free(aux_cx_frame[i]);
}

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
          void * list;
          struct FrameListData * aux_cx_frame[1];
          struct FrameListData * cx_frame = _allocate_cx_frame(1, aux_cx_frame);
          coded_frame_add(list,cx_frame);
          _delete_cx_frame(aux_cx_frame, 1);
        
        break;
    }
    // linked
    case 3:
    {
          void * list;
          struct FrameListData * aux_cx_frame[10000];
          struct FrameListData * cx_frame = _allocate_cx_frame(10000, aux_cx_frame);
          coded_frame_add(list,cx_frame);
          _delete_cx_frame(aux_cx_frame, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
