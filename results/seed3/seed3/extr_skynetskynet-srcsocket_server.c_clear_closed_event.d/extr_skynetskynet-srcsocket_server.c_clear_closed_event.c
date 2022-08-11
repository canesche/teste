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
struct socket_server {int event_index; int event_n; struct event* ev; } ;
struct socket_message {int id; } ;
struct socket {scalar_t__ type; int id; } ;
struct event {struct socket* s; } ;

/* Variables and functions */
 int SOCKET_CLOSE ; 
 int SOCKET_ERR ; 
 scalar_t__ SOCKET_TYPE_INVALID ; 

__attribute__((used)) static inline void 
clear_closed_event(struct socket_server *ss, struct socket_message * result, int type) {
	if (type == SOCKET_CLOSE || type == SOCKET_ERR) {
		int id = result->id;
		int i;
		for (i=ss->event_index; i<ss->event_n; i++) {
			struct event *e = &ss->ev[i];
			struct socket *s = e->s;
			if (s) {
				if (s->type == SOCKET_TYPE_INVALID && s->id == id) {
					e->s = NULL;
					break;
				}
			}
		}
	}
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
          int type = 100;
          int _len_ss0 = 1;
          struct socket_server * ss = (struct socket_server *) malloc(_len_ss0*sizeof(struct socket_server));
          for(int _i0 = 0; _i0 < _len_ss0; _i0++) {
            ss[_i0].event_index = ((-2 * (next_i()%2)) + 1) * next_i();
        ss[_i0].event_n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ss__i0__ev0 = 1;
          ss[_i0].ev = (struct event *) malloc(_len_ss__i0__ev0*sizeof(struct event));
          for(int _j0 = 0; _j0 < _len_ss__i0__ev0; _j0++) {
              int _len_ss__i0__ev_s0 = 1;
          ss[_i0].ev->s = (struct socket *) malloc(_len_ss__i0__ev_s0*sizeof(struct socket));
          for(int _j0 = 0; _j0 < _len_ss__i0__ev_s0; _j0++) {
            ss[_i0].ev->s->type = ((-2 * (next_i()%2)) + 1) * next_i();
        ss[_i0].ev->s->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_result0 = 1;
          struct socket_message * result = (struct socket_message *) malloc(_len_result0*sizeof(struct socket_message));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clear_closed_event(ss,result,type);
          for(int _aux = 0; _aux < _len_ss0; _aux++) {
          free(ss[_aux].ev);
          }
          free(ss);
          free(result);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int _len_ss0 = 65025;
          struct socket_server * ss = (struct socket_server *) malloc(_len_ss0*sizeof(struct socket_server));
          for(int _i0 = 0; _i0 < _len_ss0; _i0++) {
            ss[_i0].event_index = ((-2 * (next_i()%2)) + 1) * next_i();
        ss[_i0].event_n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ss__i0__ev0 = 1;
          ss[_i0].ev = (struct event *) malloc(_len_ss__i0__ev0*sizeof(struct event));
          for(int _j0 = 0; _j0 < _len_ss__i0__ev0; _j0++) {
              int _len_ss__i0__ev_s0 = 1;
          ss[_i0].ev->s = (struct socket *) malloc(_len_ss__i0__ev_s0*sizeof(struct socket));
          for(int _j0 = 0; _j0 < _len_ss__i0__ev_s0; _j0++) {
            ss[_i0].ev->s->type = ((-2 * (next_i()%2)) + 1) * next_i();
        ss[_i0].ev->s->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_result0 = 65025;
          struct socket_message * result = (struct socket_message *) malloc(_len_result0*sizeof(struct socket_message));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clear_closed_event(ss,result,type);
          for(int _aux = 0; _aux < _len_ss0; _aux++) {
          free(ss[_aux].ev);
          }
          free(ss);
          free(result);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int _len_ss0 = 100;
          struct socket_server * ss = (struct socket_server *) malloc(_len_ss0*sizeof(struct socket_server));
          for(int _i0 = 0; _i0 < _len_ss0; _i0++) {
            ss[_i0].event_index = ((-2 * (next_i()%2)) + 1) * next_i();
        ss[_i0].event_n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ss__i0__ev0 = 1;
          ss[_i0].ev = (struct event *) malloc(_len_ss__i0__ev0*sizeof(struct event));
          for(int _j0 = 0; _j0 < _len_ss__i0__ev0; _j0++) {
              int _len_ss__i0__ev_s0 = 1;
          ss[_i0].ev->s = (struct socket *) malloc(_len_ss__i0__ev_s0*sizeof(struct socket));
          for(int _j0 = 0; _j0 < _len_ss__i0__ev_s0; _j0++) {
            ss[_i0].ev->s->type = ((-2 * (next_i()%2)) + 1) * next_i();
        ss[_i0].ev->s->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_result0 = 100;
          struct socket_message * result = (struct socket_message *) malloc(_len_result0*sizeof(struct socket_message));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clear_closed_event(ss,result,type);
          for(int _aux = 0; _aux < _len_ss0; _aux++) {
          free(ss[_aux].ev);
          }
          free(ss);
          free(result);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
