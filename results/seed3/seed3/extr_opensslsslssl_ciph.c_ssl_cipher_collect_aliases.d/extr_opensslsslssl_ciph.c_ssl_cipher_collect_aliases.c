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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_5__ {int algorithm_mkey; int algorithm_auth; int algorithm_enc; int algorithm_mac; } ;
struct TYPE_4__ {struct TYPE_4__* next; int /*<<< orphan*/ * cipher; } ;
typedef  int /*<<< orphan*/  SSL_CIPHER ;
typedef  TYPE_1__ CIPHER_ORDER ;

/* Variables and functions */
 TYPE_3__* cipher_aliases ; 

__attribute__((used)) static void ssl_cipher_collect_aliases(const SSL_CIPHER **ca_list,
                                       int num_of_group_aliases,
                                       uint32_t disabled_mkey,
                                       uint32_t disabled_auth,
                                       uint32_t disabled_enc,
                                       uint32_t disabled_mac,
                                       CIPHER_ORDER *head)
{
    CIPHER_ORDER *ciph_curr;
    const SSL_CIPHER **ca_curr;
    int i;
    uint32_t mask_mkey = ~disabled_mkey;
    uint32_t mask_auth = ~disabled_auth;
    uint32_t mask_enc = ~disabled_enc;
    uint32_t mask_mac = ~disabled_mac;

    /*
     * First, add the real ciphers as already collected
     */
    ciph_curr = head;
    ca_curr = ca_list;
    while (ciph_curr != NULL) {
        *ca_curr = ciph_curr->cipher;
        ca_curr++;
        ciph_curr = ciph_curr->next;
    }

    /*
     * Now we add the available ones from the cipher_aliases[] table.
     * They represent either one or more algorithms, some of which
     * in any affected category must be supported (set in enabled_mask),
     * or represent a cipher strength value (will be added in any case because algorithms=0).
     */
    for (i = 0; i < num_of_group_aliases; i++) {
        uint32_t algorithm_mkey = cipher_aliases[i].algorithm_mkey;
        uint32_t algorithm_auth = cipher_aliases[i].algorithm_auth;
        uint32_t algorithm_enc = cipher_aliases[i].algorithm_enc;
        uint32_t algorithm_mac = cipher_aliases[i].algorithm_mac;

        if (algorithm_mkey)
            if ((algorithm_mkey & mask_mkey) == 0)
                continue;

        if (algorithm_auth)
            if ((algorithm_auth & mask_auth) == 0)
                continue;

        if (algorithm_enc)
            if ((algorithm_enc & mask_enc) == 0)
                continue;

        if (algorithm_mac)
            if ((algorithm_mac & mask_mac) == 0)
                continue;

        *ca_curr = (SSL_CIPHER *)(cipher_aliases + i);
        ca_curr++;
    }

    *ca_curr = NULL;            /* end of list */
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_head(int length, struct TYPE_4__ *aux_head[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_head[0] = walker;
  walker->next = NULL;
  int _len_walker_cipher0 = 1;
  walker->cipher = (int *) malloc(_len_walker_cipher0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_cipher0; _i0++) {
    walker->cipher[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_head[i] = walker;
    walker->next = NULL;
  int _len_walker_cipher0 = 1;
  walker->cipher = (int *) malloc(_len_walker_cipher0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_cipher0; _i0++) {
    walker->cipher[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_head(struct TYPE_4__ *aux_head[], int aux_head_size) {
  for(int i = 0; i < aux_head_size; i++) 
    if(aux_head[i])
      free(aux_head[i]);
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
          int num_of_group_aliases = 100;
          int disabled_mkey = 100;
          int disabled_auth = 100;
          int disabled_enc = 100;
          int disabled_mac = 100;
          int _len_ca_list0 = 1;
          const int ** ca_list = (const int **) malloc(_len_ca_list0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_ca_list0; _i0++) {
            int _len_ca_list1 = 1;
            ca_list[_i0] = (const int *) malloc(_len_ca_list1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_ca_list1; _i1++) {
              ca_list[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct TYPE_4__ * aux_head[1];
          struct TYPE_4__ * head = _allocate_head(1, aux_head);
          ssl_cipher_collect_aliases(ca_list,num_of_group_aliases,disabled_mkey,disabled_auth,disabled_enc,disabled_mac,head);
          for(int i1 = 0; i1 < _len_ca_list0; i1++) {
            int _len_ca_list1 = 1;
              free(ca_list[i1]);
          }
          free(ca_list);
          _delete_head(aux_head, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int num_of_group_aliases = ((-2 * (next_i()%2)) + 1) * next_i();
          int disabled_mkey = ((-2 * (next_i()%2)) + 1) * next_i();
          int disabled_auth = ((-2 * (next_i()%2)) + 1) * next_i();
          int disabled_enc = ((-2 * (next_i()%2)) + 1) * next_i();
          int disabled_mac = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca_list0 = 1;
          const int ** ca_list = (const int **) malloc(_len_ca_list0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_ca_list0; _i0++) {
            int _len_ca_list1 = 1;
            ca_list[_i0] = (const int *) malloc(_len_ca_list1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_ca_list1; _i1++) {
              ca_list[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct TYPE_4__ * aux_head[10000];
          struct TYPE_4__ * head = _allocate_head(10000, aux_head);
          ssl_cipher_collect_aliases(ca_list,num_of_group_aliases,disabled_mkey,disabled_auth,disabled_enc,disabled_mac,head);
          for(int i1 = 0; i1 < _len_ca_list0; i1++) {
            int _len_ca_list1 = 1;
              free(ca_list[i1]);
          }
          free(ca_list);
          _delete_head(aux_head, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
