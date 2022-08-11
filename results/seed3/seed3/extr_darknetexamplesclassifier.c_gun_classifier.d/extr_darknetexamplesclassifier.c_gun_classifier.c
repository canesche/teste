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

/* Variables and functions */

void gun_classifier(char *datacfg, char *cfgfile, char *weightfile, int cam_index, const char *filename)
{
#ifdef OPENCV
    int bad_cats[] = {218, 539, 540, 1213, 1501, 1742, 1911, 2415, 4348, 19223, 368, 369, 370, 1133, 1200, 1306, 2122, 2301, 2537, 2823, 3179, 3596, 3639, 4489, 5107, 5140, 5289, 6240, 6631, 6762, 7048, 7171, 7969, 7984, 7989, 8824, 8927, 9915, 10270, 10448, 13401, 15205, 18358, 18894, 18895, 19249, 19697};

    printf("Classifier Demo\n");
    network *net = load_network(cfgfile, weightfile, 0);
    set_batch_network(net, 1);
    list *options = read_data_cfg(datacfg);

    srand(2222222);
    void * cap = open_video_stream(filename, cam_index, 0,0,0);

    int top = option_find_int(options, "top", 1);

    char *name_list = option_find_str(options, "names", 0);
    char **names = get_labels(name_list);

    int *indexes = calloc(top, sizeof(int));

    if(!cap) error("Couldn't connect to webcam.\n");
    float fps = 0;
    int i;

    while(1){
        struct timeval tval_before, tval_after, tval_result;
        gettimeofday(&tval_before, NULL);

        image in = get_image_from_stream(cap);
        image in_s = resize_image(in, net->w, net->h);

        float *predictions = network_predict(net, in_s.data);
        top_predictions(net, top, indexes);

        printf("\033[2J");
        printf("\033[1;1H");

        int threat = 0;
        for(i = 0; i < sizeof(bad_cats)/sizeof(bad_cats[0]); ++i){
            int index = bad_cats[i];
            if(predictions[index] > .01){
                printf("Threat Detected!\n");
                threat = 1;
                break;
            }
        }
        if(!threat) printf("Scanning...\n");
        for(i = 0; i < sizeof(bad_cats)/sizeof(bad_cats[0]); ++i){
            int index = bad_cats[i];
            if(predictions[index] > .01){
                printf("%s\n", names[index]);
            }
        }

        show_image(in, "Threat Detection", 10);
        free_image(in_s);
        free_image(in);

        gettimeofday(&tval_after, NULL);
        timersub(&tval_after, &tval_before, &tval_result);
        float curr = 1000000.f/((long int)tval_result.tv_usec);
        fps = .9*fps + .1*curr;
    }
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
          int cam_index = 100;
          int _len_datacfg0 = 1;
          char * datacfg = (char *) malloc(_len_datacfg0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_datacfg0; _i0++) {
            datacfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfgfile0 = 1;
          char * cfgfile = (char *) malloc(_len_cfgfile0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_cfgfile0; _i0++) {
            cfgfile[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_weightfile0 = 1;
          char * weightfile = (char *) malloc(_len_weightfile0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_weightfile0; _i0++) {
            weightfile[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 1;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gun_classifier(datacfg,cfgfile,weightfile,cam_index,filename);
          free(datacfg);
          free(cfgfile);
          free(weightfile);
          free(filename);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cam_index = 255;
          int _len_datacfg0 = 65025;
          char * datacfg = (char *) malloc(_len_datacfg0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_datacfg0; _i0++) {
            datacfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfgfile0 = 65025;
          char * cfgfile = (char *) malloc(_len_cfgfile0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_cfgfile0; _i0++) {
            cfgfile[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_weightfile0 = 65025;
          char * weightfile = (char *) malloc(_len_weightfile0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_weightfile0; _i0++) {
            weightfile[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 65025;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gun_classifier(datacfg,cfgfile,weightfile,cam_index,filename);
          free(datacfg);
          free(cfgfile);
          free(weightfile);
          free(filename);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cam_index = 10;
          int _len_datacfg0 = 100;
          char * datacfg = (char *) malloc(_len_datacfg0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_datacfg0; _i0++) {
            datacfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfgfile0 = 100;
          char * cfgfile = (char *) malloc(_len_cfgfile0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_cfgfile0; _i0++) {
            cfgfile[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_weightfile0 = 100;
          char * weightfile = (char *) malloc(_len_weightfile0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_weightfile0; _i0++) {
            weightfile[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 100;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gun_classifier(datacfg,cfgfile,weightfile,cam_index,filename);
          free(datacfg);
          free(cfgfile);
          free(weightfile);
          free(filename);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
