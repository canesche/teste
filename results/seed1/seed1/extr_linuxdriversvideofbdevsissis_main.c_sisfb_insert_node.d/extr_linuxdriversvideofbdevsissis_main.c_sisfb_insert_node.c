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
       4            dlinked\n\
       5            bintree\n\
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
struct SIS_OH {struct SIS_OH* poh_next; struct SIS_OH* poh_prev; } ;

/* Variables and functions */

__attribute__((used)) static void
sisfb_insert_node(struct SIS_OH *pohList, struct SIS_OH *poh)
{
	struct SIS_OH *pohTemp = pohList->poh_next;

	pohList->poh_next = poh;
	pohTemp->poh_prev = poh;

	poh->poh_prev = pohList;
	poh->poh_next = pohTemp;
}


// ------------------------------------------------------------------------- //

struct SIS_OH *_allocate_pohList(int length, struct SIS_OH *aux_pohList[]) {
  struct SIS_OH *walker = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));

  aux_pohList[0] = walker;
  walker->poh_next = NULL;
  walker->poh_prev = NULL;

  struct SIS_OH *head = walker;
  for(int i = 1; i < length; i++) {
    walker->poh_next = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));
    walker = walker->poh_next;
    aux_pohList[i] = walker;
    walker->poh_prev = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));
    walker = walker->poh_prev;
    aux_pohList[i] = walker;
    walker->poh_next = NULL;
    walker->poh_prev = NULL;
  }

  return head;
}

void _delete_pohList(struct SIS_OH *aux_pohList[], int aux_pohList_size) {
  for(int i = 0; i < aux_pohList_size; i++) 
    if(aux_pohList[i])
      free(aux_pohList[i]);
}

struct SIS_OH *_allocate_poh(int length, struct SIS_OH *aux_poh[]) {
  struct SIS_OH *walker = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));

  aux_poh[0] = walker;
  walker->poh_next = NULL;
  walker->poh_prev = NULL;

  struct SIS_OH *head = walker;
  for(int i = 1; i < length; i++) {
    walker->poh_next = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));
    walker = walker->poh_next;
    aux_poh[i] = walker;
    walker->poh_prev = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));
    walker = walker->poh_prev;
    aux_poh[i] = walker;
    walker->poh_next = NULL;
    walker->poh_prev = NULL;
  }

  return head;
}

void _delete_poh(struct SIS_OH *aux_poh[], int aux_poh_size) {
  for(int i = 0; i < aux_poh_size; i++) 
    if(aux_poh[i])
      free(aux_poh[i]);
}

struct SIS_OH *_allocate_Dlinked_pohList(int length, struct SIS_OH *aux_dlinked_pohList[] ) {
  struct SIS_OH *walker = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));

  aux_dlinked_pohList[0] = walker;
  walker->poh_next = NULL;
  walker->poh_prev = NULL;

  struct SIS_OH *head = walker;
  for(int i = 1; i < length; i++) {
    walker->poh_prev = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));
    walker->poh_prev->poh_next = walker;
    walker = walker->poh_prev;
    aux_dlinked_pohList[i] = walker;
    if (i == (length - 1)) 
      walker->poh_prev = NULL;  }

  return head;
}

void _delete_Dlinked_pohList(struct SIS_OH *aux_dlinked_pohList[], int aux_dlinked_pohList_size) {
  for(int i = 0; i < aux_dlinked_pohList_size; i++) 
    if(aux_dlinked_pohList[i])
      free(aux_dlinked_pohList[i]);
}

struct SIS_OH *_allocate_Dlinked_poh(int length, struct SIS_OH *aux_dlinked_poh[] ) {
  struct SIS_OH *walker = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));

  aux_dlinked_poh[0] = walker;
  walker->poh_next = NULL;
  walker->poh_prev = NULL;

  struct SIS_OH *head = walker;
  for(int i = 1; i < length; i++) {
    walker->poh_prev = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));
    walker->poh_prev->poh_next = walker;
    walker = walker->poh_prev;
    aux_dlinked_poh[i] = walker;
    if (i == (length - 1)) 
      walker->poh_prev = NULL;  }

  return head;
}

void _delete_Dlinked_poh(struct SIS_OH *aux_dlinked_poh[], int aux_dlinked_poh_size) {
  for(int i = 0; i < aux_dlinked_poh_size; i++) 
    if(aux_dlinked_poh[i])
      free(aux_dlinked_poh[i]);
}

struct SIS_OH *_allocateBinTree_pohList(int length, struct SIS_OH *aux_tree_pohList[], int *counter_pohList) {
  if(length == 0)
    return NULL;
  struct SIS_OH *walker = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));

  aux_tree_pohList[*counter_pohList] = walker;
  (*counter_pohList)++;
  walker->poh_next = _allocateBinTree_pohList(length - 1, aux_tree_pohList, counter_pohList);
  walker->poh_prev = _allocateBinTree_pohList(length - 1, aux_tree_pohList, counter_pohList);
  return walker;
}

void _deleteBinTree_pohList(struct SIS_OH *aux_tree_pohList[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_pohList[i])
      free(aux_tree_pohList[i]);
}

struct SIS_OH *_allocateBinTree_poh(int length, struct SIS_OH *aux_tree_poh[], int *counter_poh) {
  if(length == 0)
    return NULL;
  struct SIS_OH *walker = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));

  aux_tree_poh[*counter_poh] = walker;
  (*counter_poh)++;
  walker->poh_next = _allocateBinTree_poh(length - 1, aux_tree_poh, counter_poh);
  walker->poh_prev = _allocateBinTree_poh(length - 1, aux_tree_poh, counter_poh);
  return walker;
}

void _deleteBinTree_poh(struct SIS_OH *aux_tree_poh[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_poh[i])
      free(aux_tree_poh[i]);
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
          struct SIS_OH * aux_pohList[1];
          struct SIS_OH * pohList = _allocate_pohList(1, aux_pohList);
          struct SIS_OH * aux_poh[1];
          struct SIS_OH * poh = _allocate_poh(1, aux_poh);
          sisfb_insert_node(pohList,poh);
          _delete_pohList(aux_pohList, 1);
          _delete_poh(aux_poh, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct SIS_OH * aux_pohList[10000];
          struct SIS_OH * pohList = _allocate_pohList(10000, aux_pohList);
          struct SIS_OH * aux_poh[10000];
          struct SIS_OH * poh = _allocate_poh(10000, aux_poh);
          sisfb_insert_node(pohList,poh);
          _delete_pohList(aux_pohList, 10000);
          _delete_poh(aux_poh, 10000);
        
        break;
    }
    // dlinked
    case 4:
    {
          struct SIS_OH * aux_dlinked_pohList[10000];
          struct SIS_OH * pohList = _allocate_Dlinked_pohList(10000, aux_dlinked_pohList);
          struct SIS_OH * aux_dlinked_poh[10000];
          struct SIS_OH * poh = _allocate_Dlinked_poh(10000, aux_dlinked_poh);
          sisfb_insert_node(pohList,poh);
          _delete_Dlinked_pohList(aux_dlinked_pohList, 10000);
          _delete_Dlinked_poh(aux_dlinked_poh, 10000);
        
        break;
    }
    // bintree
    case 5:
    {
          int counter_pohList= 0;
          struct SIS_OH *  aux_tree_pohList[1023];
          struct SIS_OH * pohList = _allocateBinTree_pohList(10, aux_tree_pohList, &counter_pohList);
          int counter_poh= 0;
          struct SIS_OH *  aux_tree_poh[1023];
          struct SIS_OH * poh = _allocateBinTree_poh(10, aux_tree_poh, &counter_poh);
          sisfb_insert_node(pohList,poh);
          _deleteBinTree_pohList(aux_tree_pohList);
          _deleteBinTree_poh(aux_tree_poh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
