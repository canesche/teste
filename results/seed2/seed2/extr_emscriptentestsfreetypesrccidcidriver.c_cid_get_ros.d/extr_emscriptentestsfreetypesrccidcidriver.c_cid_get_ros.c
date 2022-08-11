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
struct TYPE_4__ {char* registry; char* ordering; int /*<<< orphan*/  supplement; } ;
struct TYPE_5__ {TYPE_1__ cid; } ;
typedef  int /*<<< orphan*/  FT_Int ;
typedef  int /*<<< orphan*/  FT_Error ;
typedef  TYPE_1__* CID_FaceInfo ;
typedef  TYPE_2__* CID_Face ;

/* Variables and functions */
 int /*<<< orphan*/  CID_Err_Ok ; 

__attribute__((used)) static FT_Error
  cid_get_ros( CID_Face      face,
               const char*  *registry,
               const char*  *ordering,
               FT_Int       *supplement )
  {
    CID_FaceInfo  cid = &face->cid;


    if ( registry )
      *registry = cid->registry;
      
    if ( ordering )
      *ordering = cid->ordering;

    if ( supplement )
      *supplement = cid->supplement;
      
    return CID_Err_Ok;
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
          int _len_face0 = 1;
          struct TYPE_5__ * face = (struct TYPE_5__ *) malloc(_len_face0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_face0; _i0++) {
              int _len_face__i0__cid_registry0 = 1;
          face[_i0].cid.registry = (char *) malloc(_len_face__i0__cid_registry0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_face__i0__cid_registry0; _j0++) {
            face[_i0].cid.registry[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_face__i0__cid_ordering0 = 1;
          face[_i0].cid.ordering = (char *) malloc(_len_face__i0__cid_ordering0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_face__i0__cid_ordering0; _j0++) {
            face[_i0].cid.ordering[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        face[_i0].cid.supplement = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_registry0 = 1;
          const char ** registry = (const char **) malloc(_len_registry0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_registry0; _i0++) {
            int _len_registry1 = 1;
            registry[_i0] = (const char *) malloc(_len_registry1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_registry1; _i1++) {
              registry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ordering0 = 1;
          const char ** ordering = (const char **) malloc(_len_ordering0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_ordering0; _i0++) {
            int _len_ordering1 = 1;
            ordering[_i0] = (const char *) malloc(_len_ordering1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_ordering1; _i1++) {
              ordering[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_supplement0 = 1;
          int * supplement = (int *) malloc(_len_supplement0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_supplement0; _i0++) {
            supplement[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cid_get_ros(face,registry,ordering,supplement);
          printf("%d\n", benchRet); 
          free(face);
          for(int i1 = 0; i1 < _len_registry0; i1++) {
            int _len_registry1 = 1;
              free(registry[i1]);
          }
          free(registry);
          for(int i1 = 0; i1 < _len_ordering0; i1++) {
            int _len_ordering1 = 1;
              free(ordering[i1]);
          }
          free(ordering);
          free(supplement);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_face0 = 65025;
          struct TYPE_5__ * face = (struct TYPE_5__ *) malloc(_len_face0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_face0; _i0++) {
              int _len_face__i0__cid_registry0 = 1;
          face[_i0].cid.registry = (char *) malloc(_len_face__i0__cid_registry0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_face__i0__cid_registry0; _j0++) {
            face[_i0].cid.registry[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_face__i0__cid_ordering0 = 1;
          face[_i0].cid.ordering = (char *) malloc(_len_face__i0__cid_ordering0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_face__i0__cid_ordering0; _j0++) {
            face[_i0].cid.ordering[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        face[_i0].cid.supplement = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_registry0 = 65025;
          const char ** registry = (const char **) malloc(_len_registry0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_registry0; _i0++) {
            int _len_registry1 = 1;
            registry[_i0] = (const char *) malloc(_len_registry1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_registry1; _i1++) {
              registry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ordering0 = 65025;
          const char ** ordering = (const char **) malloc(_len_ordering0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_ordering0; _i0++) {
            int _len_ordering1 = 1;
            ordering[_i0] = (const char *) malloc(_len_ordering1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_ordering1; _i1++) {
              ordering[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_supplement0 = 65025;
          int * supplement = (int *) malloc(_len_supplement0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_supplement0; _i0++) {
            supplement[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cid_get_ros(face,registry,ordering,supplement);
          printf("%d\n", benchRet); 
          free(face);
          for(int i1 = 0; i1 < _len_registry0; i1++) {
            int _len_registry1 = 1;
              free(registry[i1]);
          }
          free(registry);
          for(int i1 = 0; i1 < _len_ordering0; i1++) {
            int _len_ordering1 = 1;
              free(ordering[i1]);
          }
          free(ordering);
          free(supplement);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_face0 = 100;
          struct TYPE_5__ * face = (struct TYPE_5__ *) malloc(_len_face0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_face0; _i0++) {
              int _len_face__i0__cid_registry0 = 1;
          face[_i0].cid.registry = (char *) malloc(_len_face__i0__cid_registry0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_face__i0__cid_registry0; _j0++) {
            face[_i0].cid.registry[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_face__i0__cid_ordering0 = 1;
          face[_i0].cid.ordering = (char *) malloc(_len_face__i0__cid_ordering0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_face__i0__cid_ordering0; _j0++) {
            face[_i0].cid.ordering[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        face[_i0].cid.supplement = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_registry0 = 100;
          const char ** registry = (const char **) malloc(_len_registry0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_registry0; _i0++) {
            int _len_registry1 = 1;
            registry[_i0] = (const char *) malloc(_len_registry1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_registry1; _i1++) {
              registry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ordering0 = 100;
          const char ** ordering = (const char **) malloc(_len_ordering0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_ordering0; _i0++) {
            int _len_ordering1 = 1;
            ordering[_i0] = (const char *) malloc(_len_ordering1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_ordering1; _i1++) {
              ordering[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_supplement0 = 100;
          int * supplement = (int *) malloc(_len_supplement0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_supplement0; _i0++) {
            supplement[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cid_get_ros(face,registry,ordering,supplement);
          printf("%d\n", benchRet); 
          free(face);
          for(int i1 = 0; i1 < _len_registry0; i1++) {
            int _len_registry1 = 1;
              free(registry[i1]);
          }
          free(registry);
          for(int i1 = 0; i1 < _len_ordering0; i1++) {
            int _len_ordering1 = 1;
              free(ordering[i1]);
          }
          free(ordering);
          free(supplement);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
