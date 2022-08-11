#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {void** specularColor; } ;
typedef  TYPE_1__ picoShader_t ;
typedef  void** picoColor_t ;

/* Variables and functions */

void PicoSetShaderSpecularColor( picoShader_t *shader, picoColor_t color ){
	if ( shader == NULL || color == NULL ) {
		return;
	}
	shader->specularColor[ 0 ] = color[ 0 ];
	shader->specularColor[ 1 ] = color[ 1 ];
	shader->specularColor[ 2 ] = color[ 2 ];
	shader->specularColor[ 3 ] = color[ 3 ];
}