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
struct TYPE_8__ {char* contenttype; char* wouldredirect; char* conn_primary_ip; char* conn_local_ip; char* conn_scheme; } ;
struct TYPE_7__ {char** str; scalar_t__ private_data; } ;
struct TYPE_6__ {char* most_recent_ftp_entrypath; } ;
struct TYPE_5__ {char* url; } ;
struct Curl_easy {TYPE_4__ info; TYPE_3__ set; TYPE_2__ state; TYPE_1__ change; } ;
typedef  int /*<<< orphan*/  CURLcode ;
typedef  int CURLINFO ;

/* Variables and functions */
 int /*<<< orphan*/  CURLE_OK ; 
 int /*<<< orphan*/  CURLE_UNKNOWN_OPTION ; 
#define  CURLINFO_CONTENT_TYPE 136 
#define  CURLINFO_EFFECTIVE_URL 135 
#define  CURLINFO_FTP_ENTRY_PATH 134 
#define  CURLINFO_LOCAL_IP 133 
#define  CURLINFO_PRIMARY_IP 132 
#define  CURLINFO_PRIVATE 131 
#define  CURLINFO_REDIRECT_URL 130 
#define  CURLINFO_RTSP_SESSION_ID 129 
#define  CURLINFO_SCHEME 128 
 size_t STRING_RTSP_SESSION_ID ; 

__attribute__((used)) static CURLcode getinfo_char(struct Curl_easy *data, CURLINFO info,
                             const char **param_charp)
{
  switch(info) {
  case CURLINFO_EFFECTIVE_URL:
    *param_charp = data->change.url?data->change.url:(char *)"";
    break;
  case CURLINFO_CONTENT_TYPE:
    *param_charp = data->info.contenttype;
    break;
  case CURLINFO_PRIVATE:
    *param_charp = (char *) data->set.private_data;
    break;
  case CURLINFO_FTP_ENTRY_PATH:
    /* Return the entrypath string from the most recent connection.
       This pointer was copied from the connectdata structure by FTP.
       The actual string may be free()ed by subsequent libcurl calls so
       it must be copied to a safer area before the next libcurl call.
       Callers must never free it themselves. */
    *param_charp = data->state.most_recent_ftp_entrypath;
    break;
  case CURLINFO_REDIRECT_URL:
    /* Return the URL this request would have been redirected to if that
       option had been enabled! */
    *param_charp = data->info.wouldredirect;
    break;
  case CURLINFO_PRIMARY_IP:
    /* Return the ip address of the most recent (primary) connection */
    *param_charp = data->info.conn_primary_ip;
    break;
  case CURLINFO_LOCAL_IP:
    /* Return the source/local ip address of the most recent (primary)
       connection */
    *param_charp = data->info.conn_local_ip;
    break;
  case CURLINFO_RTSP_SESSION_ID:
    *param_charp = data->set.str[STRING_RTSP_SESSION_ID];
    break;
  case CURLINFO_SCHEME:
    *param_charp = data->info.conn_scheme;
    break;

  default:
    return CURLE_UNKNOWN_OPTION;
  }

  return CURLE_OK;
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
          int info = 100;
          int _len_data0 = 1;
          struct Curl_easy * data = (struct Curl_easy *) malloc(_len_data0*sizeof(struct Curl_easy));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__info_contenttype0 = 1;
          data[_i0].info.contenttype = (char *) malloc(_len_data__i0__info_contenttype0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_contenttype0; _j0++) {
            data[_i0].info.contenttype[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_wouldredirect0 = 1;
          data[_i0].info.wouldredirect = (char *) malloc(_len_data__i0__info_wouldredirect0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_wouldredirect0; _j0++) {
            data[_i0].info.wouldredirect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_conn_primary_ip0 = 1;
          data[_i0].info.conn_primary_ip = (char *) malloc(_len_data__i0__info_conn_primary_ip0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_conn_primary_ip0; _j0++) {
            data[_i0].info.conn_primary_ip[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_conn_local_ip0 = 1;
          data[_i0].info.conn_local_ip = (char *) malloc(_len_data__i0__info_conn_local_ip0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_conn_local_ip0; _j0++) {
            data[_i0].info.conn_local_ip[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_conn_scheme0 = 1;
          data[_i0].info.conn_scheme = (char *) malloc(_len_data__i0__info_conn_scheme0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_conn_scheme0; _j0++) {
            data[_i0].info.conn_scheme[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__set_str0 = 1;
          data[_i0].set.str = (char **) malloc(_len_data__i0__set_str0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_data__i0__set_str0; _j0++) {
            int _len_data__i0__set_str1 = 1;
            data[_i0].set.str[_j0] = (char *) malloc(_len_data__i0__set_str1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_data__i0__set_str1; _j1++) {
              data[_i0].set.str[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        data[_i0].set.private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__state_most_recent_ftp_entrypath0 = 1;
          data[_i0].state.most_recent_ftp_entrypath = (char *) malloc(_len_data__i0__state_most_recent_ftp_entrypath0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__state_most_recent_ftp_entrypath0; _j0++) {
            data[_i0].state.most_recent_ftp_entrypath[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__change_url0 = 1;
          data[_i0].change.url = (char *) malloc(_len_data__i0__change_url0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__change_url0; _j0++) {
            data[_i0].change.url[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_param_charp0 = 1;
          const char ** param_charp = (const char **) malloc(_len_param_charp0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_param_charp0; _i0++) {
            int _len_param_charp1 = 1;
            param_charp[_i0] = (const char *) malloc(_len_param_charp1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_param_charp1; _i1++) {
              param_charp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = getinfo_char(data,info,param_charp);
          printf("%d\n", benchRet); 
          free(data);
          for(int i1 = 0; i1 < _len_param_charp0; i1++) {
            int _len_param_charp1 = 1;
              free(param_charp[i1]);
          }
          free(param_charp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int info = 255;
          int _len_data0 = 65025;
          struct Curl_easy * data = (struct Curl_easy *) malloc(_len_data0*sizeof(struct Curl_easy));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__info_contenttype0 = 1;
          data[_i0].info.contenttype = (char *) malloc(_len_data__i0__info_contenttype0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_contenttype0; _j0++) {
            data[_i0].info.contenttype[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_wouldredirect0 = 1;
          data[_i0].info.wouldredirect = (char *) malloc(_len_data__i0__info_wouldredirect0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_wouldredirect0; _j0++) {
            data[_i0].info.wouldredirect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_conn_primary_ip0 = 1;
          data[_i0].info.conn_primary_ip = (char *) malloc(_len_data__i0__info_conn_primary_ip0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_conn_primary_ip0; _j0++) {
            data[_i0].info.conn_primary_ip[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_conn_local_ip0 = 1;
          data[_i0].info.conn_local_ip = (char *) malloc(_len_data__i0__info_conn_local_ip0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_conn_local_ip0; _j0++) {
            data[_i0].info.conn_local_ip[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_conn_scheme0 = 1;
          data[_i0].info.conn_scheme = (char *) malloc(_len_data__i0__info_conn_scheme0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_conn_scheme0; _j0++) {
            data[_i0].info.conn_scheme[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__set_str0 = 1;
          data[_i0].set.str = (char **) malloc(_len_data__i0__set_str0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_data__i0__set_str0; _j0++) {
            int _len_data__i0__set_str1 = 1;
            data[_i0].set.str[_j0] = (char *) malloc(_len_data__i0__set_str1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_data__i0__set_str1; _j1++) {
              data[_i0].set.str[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        data[_i0].set.private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__state_most_recent_ftp_entrypath0 = 1;
          data[_i0].state.most_recent_ftp_entrypath = (char *) malloc(_len_data__i0__state_most_recent_ftp_entrypath0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__state_most_recent_ftp_entrypath0; _j0++) {
            data[_i0].state.most_recent_ftp_entrypath[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__change_url0 = 1;
          data[_i0].change.url = (char *) malloc(_len_data__i0__change_url0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__change_url0; _j0++) {
            data[_i0].change.url[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_param_charp0 = 65025;
          const char ** param_charp = (const char **) malloc(_len_param_charp0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_param_charp0; _i0++) {
            int _len_param_charp1 = 1;
            param_charp[_i0] = (const char *) malloc(_len_param_charp1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_param_charp1; _i1++) {
              param_charp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = getinfo_char(data,info,param_charp);
          printf("%d\n", benchRet); 
          free(data);
          for(int i1 = 0; i1 < _len_param_charp0; i1++) {
            int _len_param_charp1 = 1;
              free(param_charp[i1]);
          }
          free(param_charp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int info = 10;
          int _len_data0 = 100;
          struct Curl_easy * data = (struct Curl_easy *) malloc(_len_data0*sizeof(struct Curl_easy));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__info_contenttype0 = 1;
          data[_i0].info.contenttype = (char *) malloc(_len_data__i0__info_contenttype0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_contenttype0; _j0++) {
            data[_i0].info.contenttype[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_wouldredirect0 = 1;
          data[_i0].info.wouldredirect = (char *) malloc(_len_data__i0__info_wouldredirect0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_wouldredirect0; _j0++) {
            data[_i0].info.wouldredirect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_conn_primary_ip0 = 1;
          data[_i0].info.conn_primary_ip = (char *) malloc(_len_data__i0__info_conn_primary_ip0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_conn_primary_ip0; _j0++) {
            data[_i0].info.conn_primary_ip[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_conn_local_ip0 = 1;
          data[_i0].info.conn_local_ip = (char *) malloc(_len_data__i0__info_conn_local_ip0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_conn_local_ip0; _j0++) {
            data[_i0].info.conn_local_ip[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__info_conn_scheme0 = 1;
          data[_i0].info.conn_scheme = (char *) malloc(_len_data__i0__info_conn_scheme0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__info_conn_scheme0; _j0++) {
            data[_i0].info.conn_scheme[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__set_str0 = 1;
          data[_i0].set.str = (char **) malloc(_len_data__i0__set_str0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_data__i0__set_str0; _j0++) {
            int _len_data__i0__set_str1 = 1;
            data[_i0].set.str[_j0] = (char *) malloc(_len_data__i0__set_str1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_data__i0__set_str1; _j1++) {
              data[_i0].set.str[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        data[_i0].set.private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__state_most_recent_ftp_entrypath0 = 1;
          data[_i0].state.most_recent_ftp_entrypath = (char *) malloc(_len_data__i0__state_most_recent_ftp_entrypath0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__state_most_recent_ftp_entrypath0; _j0++) {
            data[_i0].state.most_recent_ftp_entrypath[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__change_url0 = 1;
          data[_i0].change.url = (char *) malloc(_len_data__i0__change_url0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_data__i0__change_url0; _j0++) {
            data[_i0].change.url[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_param_charp0 = 100;
          const char ** param_charp = (const char **) malloc(_len_param_charp0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_param_charp0; _i0++) {
            int _len_param_charp1 = 1;
            param_charp[_i0] = (const char *) malloc(_len_param_charp1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_param_charp1; _i1++) {
              param_charp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = getinfo_char(data,info,param_charp);
          printf("%d\n", benchRet); 
          free(data);
          for(int i1 = 0; i1 < _len_param_charp0; i1++) {
            int _len_param_charp1 = 1;
              free(param_charp[i1]);
          }
          free(param_charp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
