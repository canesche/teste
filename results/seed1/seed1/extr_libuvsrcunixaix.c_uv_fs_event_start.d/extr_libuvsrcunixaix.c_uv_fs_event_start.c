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
typedef  int /*<<< orphan*/  uv_fs_event_t ;
typedef  int /*<<< orphan*/  uv_fs_event_cb ;

/* Variables and functions */
 int UV_ENOSYS ; 

int uv_fs_event_start(uv_fs_event_t* handle,
                      uv_fs_event_cb cb,
                      const char* filename,
                      unsigned int flags) {
#ifdef HAVE_SYS_AHAFS_EVPRODS_H
  int  fd, rc, str_offset = 0;
  char cwd[PATH_MAX];
  char absolute_path[PATH_MAX];
  char readlink_cwd[PATH_MAX];
  struct timeval zt;
  fd_set pollfd;


  /* Figure out whether filename is absolute or not */
  if (filename[0] == '\0') {
    /* Missing a pathname */
    return UV_ENOENT;
  }
  else if (filename[0] == '/') {
    /* We have absolute pathname */
    /* TODO(bnoordhuis) Check uv__strscpy() return value. */
    uv__strscpy(absolute_path, filename, sizeof(absolute_path));
  } else {
    /* We have a relative pathname, compose the absolute pathname */
    snprintf(cwd, sizeof(cwd), "/proc/%lu/cwd", (unsigned long) getpid());
    rc = readlink(cwd, readlink_cwd, sizeof(readlink_cwd) - 1);
    if (rc < 0)
      return rc;
    /* readlink does not null terminate our string */
    readlink_cwd[rc] = '\0';

    if (filename[0] == '.' && filename[1] == '/')
      str_offset = 2;

    snprintf(absolute_path, sizeof(absolute_path), "%s%s", readlink_cwd,
             filename + str_offset);
  }

  if (uv__is_ahafs_mounted() < 0)  /* /aha checks failed */
    return UV_ENOSYS;

  /* Setup ahafs */
  rc = uv__setup_ahafs((const char *)absolute_path, &fd);
  if (rc != 0)
    return rc;

  /* Setup/Initialize all the libuv routines */
  uv__handle_start(handle);
  uv__io_init(&handle->event_watcher, uv__ahafs_event, fd);
  handle->path = uv__strdup(filename);
  handle->cb = cb;
  handle->dir_filename = NULL;

  uv__io_start(handle->loop, &handle->event_watcher, POLLIN);

  /* AHAFS wants someone to poll for it to start mointoring.
   *  so kick-start it so that we don't miss an event in the
   *  eventuality of an event that occurs in the current loop. */
  do {
    memset(&zt, 0, sizeof(zt));
    FD_ZERO(&pollfd);
    FD_SET(fd, &pollfd);
    rc = select(fd + 1, &pollfd, NULL, NULL, &zt);
  } while (rc == -1 && errno == EINTR);
  return 0;
#else
  return UV_ENOSYS;
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
          int cb = 100;
          unsigned int flags = 100;
          int _len_handle0 = 1;
          int * handle = (int *) malloc(_len_handle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 1;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv_fs_event_start(handle,cb,filename,flags);
          printf("%d\n", benchRet); 
          free(handle);
          free(filename);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cb = 255;
          unsigned int flags = 255;
          int _len_handle0 = 65025;
          int * handle = (int *) malloc(_len_handle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 65025;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv_fs_event_start(handle,cb,filename,flags);
          printf("%d\n", benchRet); 
          free(handle);
          free(filename);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cb = 10;
          unsigned int flags = 10;
          int _len_handle0 = 100;
          int * handle = (int *) malloc(_len_handle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 100;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv_fs_event_start(handle,cb,filename,flags);
          printf("%d\n", benchRet); 
          free(handle);
          free(filename);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
