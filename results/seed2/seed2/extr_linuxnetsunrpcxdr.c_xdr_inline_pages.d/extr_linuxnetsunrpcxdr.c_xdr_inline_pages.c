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
struct xdr_buf {unsigned int page_base; unsigned int page_len; unsigned int buflen; struct page** pages; struct kvec* tail; struct kvec* head; } ;
struct page {int dummy; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;

/* Variables and functions */

void
xdr_inline_pages(struct xdr_buf *xdr, unsigned int offset,
		 struct page **pages, unsigned int base, unsigned int len)
{
	struct kvec *head = xdr->head;
	struct kvec *tail = xdr->tail;
	char *buf = (char *)head->iov_base;
	unsigned int buflen = head->iov_len;

	head->iov_len  = offset;

	xdr->pages = pages;
	xdr->page_base = base;
	xdr->page_len = len;

	tail->iov_base = buf + offset;
	tail->iov_len = buflen - offset;

	xdr->buflen += len;
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
          unsigned int offset = 100;
          unsigned int base = 100;
          unsigned int len = 100;
          int _len_xdr0 = 1;
          struct xdr_buf * xdr = (struct xdr_buf *) malloc(_len_xdr0*sizeof(struct xdr_buf));
          for(int _i0 = 0; _i0 < _len_xdr0; _i0++) {
            xdr[_i0].page_base = ((-2 * (next_i()%2)) + 1) * next_i();
        xdr[_i0].page_len = ((-2 * (next_i()%2)) + 1) * next_i();
        xdr[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xdr__i0__pages0 = 1;
          xdr[_i0].pages = (struct page **) malloc(_len_xdr__i0__pages0*sizeof(struct page *));
          for(int _j0 = 0; _j0 < _len_xdr__i0__pages0; _j0++) {
            int _len_xdr__i0__pages1 = 1;
            xdr[_i0].pages[_j0] = (struct page *) malloc(_len_xdr__i0__pages1*sizeof(struct page));
            for(int _j1 = 0; _j1 < _len_xdr__i0__pages1; _j1++) {
              xdr[_i0].pages[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_xdr__i0__tail0 = 1;
          xdr[_i0].tail = (struct kvec *) malloc(_len_xdr__i0__tail0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_xdr__i0__tail0; _j0++) {
              int _len_xdr__i0__tail_iov_base0 = 1;
          xdr[_i0].tail->iov_base = (char *) malloc(_len_xdr__i0__tail_iov_base0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_xdr__i0__tail_iov_base0; _j0++) {
            xdr[_i0].tail->iov_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xdr[_i0].tail->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xdr__i0__head0 = 1;
          xdr[_i0].head = (struct kvec *) malloc(_len_xdr__i0__head0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_xdr__i0__head0; _j0++) {
              int _len_xdr__i0__head_iov_base0 = 1;
          xdr[_i0].head->iov_base = (char *) malloc(_len_xdr__i0__head_iov_base0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_xdr__i0__head_iov_base0; _j0++) {
            xdr[_i0].head->iov_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xdr[_i0].head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pages0 = 1;
          struct page ** pages = (struct page **) malloc(_len_pages0*sizeof(struct page *));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            int _len_pages1 = 1;
            pages[_i0] = (struct page *) malloc(_len_pages1*sizeof(struct page));
            for(int _i1 = 0; _i1 < _len_pages1; _i1++) {
              pages[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          xdr_inline_pages(xdr,offset,pages,base,len);
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(*(xdr[_aux].pages));
        free(xdr[_aux].pages);
          }
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(xdr[_aux].tail);
          }
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(xdr[_aux].head);
          }
          free(xdr);
          for(int i1 = 0; i1 < _len_pages0; i1++) {
            int _len_pages1 = 1;
              free(pages[i1]);
          }
          free(pages);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int offset = 255;
          unsigned int base = 255;
          unsigned int len = 255;
          int _len_xdr0 = 65025;
          struct xdr_buf * xdr = (struct xdr_buf *) malloc(_len_xdr0*sizeof(struct xdr_buf));
          for(int _i0 = 0; _i0 < _len_xdr0; _i0++) {
            xdr[_i0].page_base = ((-2 * (next_i()%2)) + 1) * next_i();
        xdr[_i0].page_len = ((-2 * (next_i()%2)) + 1) * next_i();
        xdr[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xdr__i0__pages0 = 1;
          xdr[_i0].pages = (struct page **) malloc(_len_xdr__i0__pages0*sizeof(struct page *));
          for(int _j0 = 0; _j0 < _len_xdr__i0__pages0; _j0++) {
            int _len_xdr__i0__pages1 = 1;
            xdr[_i0].pages[_j0] = (struct page *) malloc(_len_xdr__i0__pages1*sizeof(struct page));
            for(int _j1 = 0; _j1 < _len_xdr__i0__pages1; _j1++) {
              xdr[_i0].pages[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_xdr__i0__tail0 = 1;
          xdr[_i0].tail = (struct kvec *) malloc(_len_xdr__i0__tail0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_xdr__i0__tail0; _j0++) {
              int _len_xdr__i0__tail_iov_base0 = 1;
          xdr[_i0].tail->iov_base = (char *) malloc(_len_xdr__i0__tail_iov_base0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_xdr__i0__tail_iov_base0; _j0++) {
            xdr[_i0].tail->iov_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xdr[_i0].tail->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xdr__i0__head0 = 1;
          xdr[_i0].head = (struct kvec *) malloc(_len_xdr__i0__head0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_xdr__i0__head0; _j0++) {
              int _len_xdr__i0__head_iov_base0 = 1;
          xdr[_i0].head->iov_base = (char *) malloc(_len_xdr__i0__head_iov_base0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_xdr__i0__head_iov_base0; _j0++) {
            xdr[_i0].head->iov_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xdr[_i0].head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pages0 = 65025;
          struct page ** pages = (struct page **) malloc(_len_pages0*sizeof(struct page *));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            int _len_pages1 = 1;
            pages[_i0] = (struct page *) malloc(_len_pages1*sizeof(struct page));
            for(int _i1 = 0; _i1 < _len_pages1; _i1++) {
              pages[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          xdr_inline_pages(xdr,offset,pages,base,len);
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(*(xdr[_aux].pages));
        free(xdr[_aux].pages);
          }
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(xdr[_aux].tail);
          }
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(xdr[_aux].head);
          }
          free(xdr);
          for(int i1 = 0; i1 < _len_pages0; i1++) {
            int _len_pages1 = 1;
              free(pages[i1]);
          }
          free(pages);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int offset = 10;
          unsigned int base = 10;
          unsigned int len = 10;
          int _len_xdr0 = 100;
          struct xdr_buf * xdr = (struct xdr_buf *) malloc(_len_xdr0*sizeof(struct xdr_buf));
          for(int _i0 = 0; _i0 < _len_xdr0; _i0++) {
            xdr[_i0].page_base = ((-2 * (next_i()%2)) + 1) * next_i();
        xdr[_i0].page_len = ((-2 * (next_i()%2)) + 1) * next_i();
        xdr[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xdr__i0__pages0 = 1;
          xdr[_i0].pages = (struct page **) malloc(_len_xdr__i0__pages0*sizeof(struct page *));
          for(int _j0 = 0; _j0 < _len_xdr__i0__pages0; _j0++) {
            int _len_xdr__i0__pages1 = 1;
            xdr[_i0].pages[_j0] = (struct page *) malloc(_len_xdr__i0__pages1*sizeof(struct page));
            for(int _j1 = 0; _j1 < _len_xdr__i0__pages1; _j1++) {
              xdr[_i0].pages[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_xdr__i0__tail0 = 1;
          xdr[_i0].tail = (struct kvec *) malloc(_len_xdr__i0__tail0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_xdr__i0__tail0; _j0++) {
              int _len_xdr__i0__tail_iov_base0 = 1;
          xdr[_i0].tail->iov_base = (char *) malloc(_len_xdr__i0__tail_iov_base0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_xdr__i0__tail_iov_base0; _j0++) {
            xdr[_i0].tail->iov_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xdr[_i0].tail->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xdr__i0__head0 = 1;
          xdr[_i0].head = (struct kvec *) malloc(_len_xdr__i0__head0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_xdr__i0__head0; _j0++) {
              int _len_xdr__i0__head_iov_base0 = 1;
          xdr[_i0].head->iov_base = (char *) malloc(_len_xdr__i0__head_iov_base0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_xdr__i0__head_iov_base0; _j0++) {
            xdr[_i0].head->iov_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xdr[_i0].head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pages0 = 100;
          struct page ** pages = (struct page **) malloc(_len_pages0*sizeof(struct page *));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            int _len_pages1 = 1;
            pages[_i0] = (struct page *) malloc(_len_pages1*sizeof(struct page));
            for(int _i1 = 0; _i1 < _len_pages1; _i1++) {
              pages[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          xdr_inline_pages(xdr,offset,pages,base,len);
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(*(xdr[_aux].pages));
        free(xdr[_aux].pages);
          }
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(xdr[_aux].tail);
          }
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(xdr[_aux].head);
          }
          free(xdr);
          for(int i1 = 0; i1 < _len_pages0; i1++) {
            int _len_pages1 = 1;
              free(pages[i1]);
          }
          free(pages);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
