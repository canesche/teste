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
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
typedef  char u_char ;
typedef  size_t ngx_uint_t ;
struct TYPE_11__ {int /*<<< orphan*/  data; int /*<<< orphan*/  len; } ;
struct TYPE_10__ {size_t len; char* data; } ;
struct TYPE_12__ {scalar_t__ hash; TYPE_2__ value; TYPE_1__ key; } ;
typedef  TYPE_3__ ngx_table_elt_t ;
struct TYPE_13__ {size_t len; char* data; } ;
typedef  TYPE_4__ ngx_str_t ;
struct TYPE_14__ {size_t nelts; TYPE_3__* elts; struct TYPE_14__* next; } ;
typedef  TYPE_5__ ngx_list_part_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_15__ {int valid; int not_found; int /*<<< orphan*/  data; scalar_t__ no_cacheable; int /*<<< orphan*/  len; } ;
typedef  TYPE_6__ ngx_http_variable_value_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_OK ; 

ngx_int_t
ngx_http_variable_unknown_header(ngx_http_variable_value_t *v, ngx_str_t *var,
    ngx_list_part_t *part, size_t prefix)
{
    u_char            ch;
    ngx_uint_t        i, n;
    ngx_table_elt_t  *header;

    header = part->elts;

    for (i = 0; /* void */ ; i++) {

        if (i >= part->nelts) {
            if (part->next == NULL) {
                break;
            }

            part = part->next;
            header = part->elts;
            i = 0;
        }

        if (header[i].hash == 0) {
            continue;
        }

        for (n = 0; n + prefix < var->len && n < header[i].key.len; n++) {
            ch = header[i].key.data[n];

            if (ch >= 'A' && ch <= 'Z') {
                ch |= 0x20;

            } else if (ch == '-') {
                ch = '_';
            }

            if (var->data[n + prefix] != ch) {
                break;
            }
        }

        if (n + prefix == var->len && n == header[i].key.len) {
            v->len = header[i].value.len;
            v->valid = 1;
            v->no_cacheable = 0;
            v->not_found = 0;
            v->data = header[i].value.data;

            return NGX_OK;
        }
    }

    v->not_found = 1;

    return NGX_OK;
}


// ------------------------------------------------------------------------- //

struct TYPE_14__ *_allocate_part(int length, struct TYPE_14__ *aux_part[]) {
  struct TYPE_14__ *walker = (struct TYPE_14__ *)malloc(sizeof(struct TYPE_14__));

  aux_part[0] = walker;
walker->nelts = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_elts0 = 1;
  walker->elts = (struct TYPE_12__ *) malloc(_len_walker_elts0*sizeof(struct TYPE_12__));
  for(int _i0 = 0; _i0 < _len_walker_elts0; _i0++) {
    walker->elts.hash = ((-2 * (next_i()%2)) + 1) * next_i();
walker->elts.value.data = ((-2 * (next_i()%2)) + 1) * next_i();
walker->elts.value.len = ((-2 * (next_i()%2)) + 1) * next_i();
walker->elts.key.len = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_elts_key_data0 = 1;
  walker->elts.key.data = (char *) malloc(_len_walker_elts_key_data0*sizeof(char));
  for(int _j0 = 0; _j0 < _len_walker_elts_key_data0; _j0++) {
    walker->elts.key.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }
  walker->next = NULL;

  struct TYPE_14__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_14__ *)malloc(sizeof(struct TYPE_14__));
    walker = walker->next;
    aux_part[i] = walker;
walker->nelts = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_elts0 = 1;
  walker->elts = (struct TYPE_12__ *) malloc(_len_walker_elts0*sizeof(struct TYPE_12__));
  for(int _i0 = 0; _i0 < _len_walker_elts0; _i0++) {
    walker->elts.hash = ((-2 * (next_i()%2)) + 1) * next_i();
walker->elts.value.data = ((-2 * (next_i()%2)) + 1) * next_i();
walker->elts.value.len = ((-2 * (next_i()%2)) + 1) * next_i();
walker->elts.key.len = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_elts_key_data0 = 1;
  walker->elts.key.data = (char *) malloc(_len_walker_elts_key_data0*sizeof(char));
  for(int _j0 = 0; _j0 < _len_walker_elts_key_data0; _j0++) {
    walker->elts.key.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }
    walker->next = NULL;
  }

  return head;
}

void _delete_part(struct TYPE_14__ *aux_part[], int aux_part_size) {
  for(int i = 0; i < aux_part_size; i++) 
    if(aux_part[i])
      free(aux_part[i]);
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
          unsigned long prefix = 100;
          int _len_v0 = 1;
          struct TYPE_15__ * v = (struct TYPE_15__ *) malloc(_len_v0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 1;
          struct TYPE_13__ * var = (struct TYPE_13__ *) malloc(_len_var0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_var__i0__data0 = 1;
          var[_i0].data = (char *) malloc(_len_var__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_var__i0__data0; _j0++) {
            var[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_14__ * aux_part[1];
          struct TYPE_14__ * part = _allocate_part(1, aux_part);
          int benchRet = ngx_http_variable_unknown_header(v,var,part,prefix);
          printf("%d\n", benchRet); 
          free(v);
          for(int _aux = 0; _aux < _len_var0; _aux++) {
          free(var[_aux].data);
          }
          free(var);
          _delete_part(aux_part, 1);
        
        break;
    }
    // linked
    case 3:
    {
          unsigned long prefix = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_v0 = 1;
          struct TYPE_15__ * v = (struct TYPE_15__ *) malloc(_len_v0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 1;
          struct TYPE_13__ * var = (struct TYPE_13__ *) malloc(_len_var0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_var__i0__data0 = 1;
          var[_i0].data = (char *) malloc(_len_var__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_var__i0__data0; _j0++) {
            var[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_14__ * aux_part[10000];
          struct TYPE_14__ * part = _allocate_part(10000, aux_part);
          int benchRet = ngx_http_variable_unknown_header(v,var,part,prefix);
          printf("%d\n", benchRet); 
          free(v);
          for(int _aux = 0; _aux < _len_var0; _aux++) {
          free(var[_aux].data);
          }
          free(var);
          _delete_part(aux_part, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
