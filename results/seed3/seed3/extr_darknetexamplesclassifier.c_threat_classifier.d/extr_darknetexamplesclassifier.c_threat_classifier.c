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

void threat_classifier(char *datacfg, char *cfgfile, char *weightfile, int cam_index, const char *filename)
{
#ifdef OPENCV
    float threat = 0;
    float roll = .2;

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
    //cvNamedWindow("Threat", CV_WINDOW_NORMAL); 
    //cvResizeWindow("Threat", 512, 512);
    float fps = 0;
    int i;

    int count = 0;

    while(1){
        ++count;
        struct timeval tval_before, tval_after, tval_result;
        gettimeofday(&tval_before, NULL);

        image in = get_image_from_stream(cap);
        if(!in.data) break;
        image in_s = resize_image(in, net->w, net->h);

        image out = in;
        int x1 = out.w / 20;
        int y1 = out.h / 20;
        int x2 = 2*x1;
        int y2 = out.h - out.h/20;

        int border = .01*out.h;
        int h = y2 - y1 - 2*border;
        int w = x2 - x1 - 2*border;

        float *predictions = network_predict(net, in_s.data);
        float curr_threat = 0;
        if(1){
            curr_threat = predictions[0] * 0 + 
                predictions[1] * .6 + 
                predictions[2];
        } else {
            curr_threat = predictions[218] +
                predictions[539] + 
                predictions[540] + 
                predictions[368] + 
                predictions[369] + 
                predictions[370];
        }
        threat = roll * curr_threat + (1-roll) * threat;

        draw_box_width(out, x2 + border, y1 + .02*h, x2 + .5 * w, y1 + .02*h + border, border, 0,0,0);
        if(threat > .97) {
            draw_box_width(out,  x2 + .5 * w + border,
                    y1 + .02*h - 2*border, 
                    x2 + .5 * w + 6*border, 
                    y1 + .02*h + 3*border, 3*border, 1,0,0);
        }
        draw_box_width(out,  x2 + .5 * w + border,
                y1 + .02*h - 2*border, 
                x2 + .5 * w + 6*border, 
                y1 + .02*h + 3*border, .5*border, 0,0,0);
        draw_box_width(out, x2 + border, y1 + .42*h, x2 + .5 * w, y1 + .42*h + border, border, 0,0,0);
        if(threat > .57) {
            draw_box_width(out,  x2 + .5 * w + border,
                    y1 + .42*h - 2*border, 
                    x2 + .5 * w + 6*border, 
                    y1 + .42*h + 3*border, 3*border, 1,1,0);
        }
        draw_box_width(out,  x2 + .5 * w + border,
                y1 + .42*h - 2*border, 
                x2 + .5 * w + 6*border, 
                y1 + .42*h + 3*border, .5*border, 0,0,0);

        draw_box_width(out, x1, y1, x2, y2, border, 0,0,0);
        for(i = 0; i < threat * h ; ++i){
            float ratio = (float) i / h;
            float r = (ratio < .5) ? (2*(ratio)) : 1;
            float g = (ratio < .5) ? 1 : 1 - 2*(ratio - .5);
            draw_box_width(out, x1 + border, y2 - border - i, x2 - border, y2 - border - i, 1, r, g, 0);
        }
        top_predictions(net, top, indexes);
        char buff[256];
        sprintf(buff, "/home/pjreddie/tmp/threat_%06d", count);
        //save_image(out, buff);

        printf("\033[2J");
        printf("\033[1;1H");
        printf("\nFPS:%.0f\n",fps);

        for(i = 0; i < top; ++i){
            int index = indexes[i];
            printf("%.1f%%: %s\n", predictions[index]*100, names[index]);
        }

        if(1){
            show_image(out, "Threat", 10);
        }
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
          threat_classifier(datacfg,cfgfile,weightfile,cam_index,filename);
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
          threat_classifier(datacfg,cfgfile,weightfile,cam_index,filename);
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
          threat_classifier(datacfg,cfgfile,weightfile,cam_index,filename);
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
