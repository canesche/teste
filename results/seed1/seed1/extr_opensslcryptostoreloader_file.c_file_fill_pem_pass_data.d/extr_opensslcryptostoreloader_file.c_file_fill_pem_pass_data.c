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
struct pem_pass_data {char const* prompt_info; void* data; int /*<<< orphan*/  const* ui_method; } ;
typedef  int /*<<< orphan*/  UI_METHOD ;

/* Variables and functions */

__attribute__((used)) static int file_fill_pem_pass_data(struct pem_pass_data *pass_data,
                                   const char *prompt_info,
                                   const UI_METHOD *ui_method, void *ui_data)
{
    if (pass_data == NULL)
        return 0;
    pass_data->ui_method = ui_method;
    pass_data->data = ui_data;
    pass_data->prompt_info = prompt_info;
    return 1;
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
          int _len_pass_data0 = 1;
          struct pem_pass_data * pass_data = (struct pem_pass_data *) malloc(_len_pass_data0*sizeof(struct pem_pass_data));
          for(int _i0 = 0; _i0 < _len_pass_data0; _i0++) {
              int _len_pass_data__i0__prompt_info0 = 1;
          pass_data[_i0].prompt_info = (const char *) malloc(_len_pass_data__i0__prompt_info0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_pass_data__i0__prompt_info0; _j0++) {
            pass_data[_i0].prompt_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pass_data__i0__ui_method0 = 1;
          pass_data[_i0].ui_method = (const int *) malloc(_len_pass_data__i0__ui_method0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_pass_data__i0__ui_method0; _j0++) {
            pass_data[_i0].ui_method[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_prompt_info0 = 1;
          const char * prompt_info = (const char *) malloc(_len_prompt_info0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prompt_info0; _i0++) {
            prompt_info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ui_method0 = 1;
          const int * ui_method = (const int *) malloc(_len_ui_method0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ui_method0; _i0++) {
            ui_method[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ui_data;
          int benchRet = file_fill_pem_pass_data(pass_data,prompt_info,ui_method,ui_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pass_data0; _aux++) {
          free(pass_data[_aux].prompt_info);
          }
          for(int _aux = 0; _aux < _len_pass_data0; _aux++) {
          free(pass_data[_aux].ui_method);
          }
          free(pass_data);
          free(prompt_info);
          free(ui_method);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pass_data0 = 65025;
          struct pem_pass_data * pass_data = (struct pem_pass_data *) malloc(_len_pass_data0*sizeof(struct pem_pass_data));
          for(int _i0 = 0; _i0 < _len_pass_data0; _i0++) {
              int _len_pass_data__i0__prompt_info0 = 1;
          pass_data[_i0].prompt_info = (const char *) malloc(_len_pass_data__i0__prompt_info0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_pass_data__i0__prompt_info0; _j0++) {
            pass_data[_i0].prompt_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pass_data__i0__ui_method0 = 1;
          pass_data[_i0].ui_method = (const int *) malloc(_len_pass_data__i0__ui_method0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_pass_data__i0__ui_method0; _j0++) {
            pass_data[_i0].ui_method[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_prompt_info0 = 65025;
          const char * prompt_info = (const char *) malloc(_len_prompt_info0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prompt_info0; _i0++) {
            prompt_info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ui_method0 = 65025;
          const int * ui_method = (const int *) malloc(_len_ui_method0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ui_method0; _i0++) {
            ui_method[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ui_data;
          int benchRet = file_fill_pem_pass_data(pass_data,prompt_info,ui_method,ui_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pass_data0; _aux++) {
          free(pass_data[_aux].prompt_info);
          }
          for(int _aux = 0; _aux < _len_pass_data0; _aux++) {
          free(pass_data[_aux].ui_method);
          }
          free(pass_data);
          free(prompt_info);
          free(ui_method);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pass_data0 = 100;
          struct pem_pass_data * pass_data = (struct pem_pass_data *) malloc(_len_pass_data0*sizeof(struct pem_pass_data));
          for(int _i0 = 0; _i0 < _len_pass_data0; _i0++) {
              int _len_pass_data__i0__prompt_info0 = 1;
          pass_data[_i0].prompt_info = (const char *) malloc(_len_pass_data__i0__prompt_info0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_pass_data__i0__prompt_info0; _j0++) {
            pass_data[_i0].prompt_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pass_data__i0__ui_method0 = 1;
          pass_data[_i0].ui_method = (const int *) malloc(_len_pass_data__i0__ui_method0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_pass_data__i0__ui_method0; _j0++) {
            pass_data[_i0].ui_method[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_prompt_info0 = 100;
          const char * prompt_info = (const char *) malloc(_len_prompt_info0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prompt_info0; _i0++) {
            prompt_info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ui_method0 = 100;
          const int * ui_method = (const int *) malloc(_len_ui_method0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ui_method0; _i0++) {
            ui_method[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ui_data;
          int benchRet = file_fill_pem_pass_data(pass_data,prompt_info,ui_method,ui_data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pass_data0; _aux++) {
          free(pass_data[_aux].prompt_info);
          }
          for(int _aux = 0; _aux < _len_pass_data0; _aux++) {
          free(pass_data[_aux].ui_method);
          }
          free(pass_data);
          free(prompt_info);
          free(ui_method);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
