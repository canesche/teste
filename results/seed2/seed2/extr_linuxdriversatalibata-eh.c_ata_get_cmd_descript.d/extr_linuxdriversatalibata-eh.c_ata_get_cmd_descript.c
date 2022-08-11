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
typedef  int /*<<< orphan*/  u8 ;

/* Variables and functions */

const char *ata_get_cmd_descript(u8 command)
{
#ifdef CONFIG_ATA_VERBOSE_ERROR
	static const struct
	{
		u8 command;
		const char *text;
	} cmd_descr[] = {
		{ ATA_CMD_DEV_RESET,		"DEVICE RESET" },
		{ ATA_CMD_CHK_POWER,		"CHECK POWER MODE" },
		{ ATA_CMD_STANDBY,		"STANDBY" },
		{ ATA_CMD_IDLE,			"IDLE" },
		{ ATA_CMD_EDD,			"EXECUTE DEVICE DIAGNOSTIC" },
		{ ATA_CMD_DOWNLOAD_MICRO,	"DOWNLOAD MICROCODE" },
		{ ATA_CMD_DOWNLOAD_MICRO_DMA,	"DOWNLOAD MICROCODE DMA" },
		{ ATA_CMD_NOP,			"NOP" },
		{ ATA_CMD_FLUSH,		"FLUSH CACHE" },
		{ ATA_CMD_FLUSH_EXT,		"FLUSH CACHE EXT" },
		{ ATA_CMD_ID_ATA,		"IDENTIFY DEVICE" },
		{ ATA_CMD_ID_ATAPI,		"IDENTIFY PACKET DEVICE" },
		{ ATA_CMD_SERVICE,		"SERVICE" },
		{ ATA_CMD_READ,			"READ DMA" },
		{ ATA_CMD_READ_EXT,		"READ DMA EXT" },
		{ ATA_CMD_READ_QUEUED,		"READ DMA QUEUED" },
		{ ATA_CMD_READ_STREAM_EXT,	"READ STREAM EXT" },
		{ ATA_CMD_READ_STREAM_DMA_EXT,  "READ STREAM DMA EXT" },
		{ ATA_CMD_WRITE,		"WRITE DMA" },
		{ ATA_CMD_WRITE_EXT,		"WRITE DMA EXT" },
		{ ATA_CMD_WRITE_QUEUED,		"WRITE DMA QUEUED EXT" },
		{ ATA_CMD_WRITE_STREAM_EXT,	"WRITE STREAM EXT" },
		{ ATA_CMD_WRITE_STREAM_DMA_EXT, "WRITE STREAM DMA EXT" },
		{ ATA_CMD_WRITE_FUA_EXT,	"WRITE DMA FUA EXT" },
		{ ATA_CMD_WRITE_QUEUED_FUA_EXT, "WRITE DMA QUEUED FUA EXT" },
		{ ATA_CMD_FPDMA_READ,		"READ FPDMA QUEUED" },
		{ ATA_CMD_FPDMA_WRITE,		"WRITE FPDMA QUEUED" },
		{ ATA_CMD_FPDMA_SEND,		"SEND FPDMA QUEUED" },
		{ ATA_CMD_FPDMA_RECV,		"RECEIVE FPDMA QUEUED" },
		{ ATA_CMD_PIO_READ,		"READ SECTOR(S)" },
		{ ATA_CMD_PIO_READ_EXT,		"READ SECTOR(S) EXT" },
		{ ATA_CMD_PIO_WRITE,		"WRITE SECTOR(S)" },
		{ ATA_CMD_PIO_WRITE_EXT,	"WRITE SECTOR(S) EXT" },
		{ ATA_CMD_READ_MULTI,		"READ MULTIPLE" },
		{ ATA_CMD_READ_MULTI_EXT,	"READ MULTIPLE EXT" },
		{ ATA_CMD_WRITE_MULTI,		"WRITE MULTIPLE" },
		{ ATA_CMD_WRITE_MULTI_EXT,	"WRITE MULTIPLE EXT" },
		{ ATA_CMD_WRITE_MULTI_FUA_EXT,	"WRITE MULTIPLE FUA EXT" },
		{ ATA_CMD_SET_FEATURES,		"SET FEATURES" },
		{ ATA_CMD_SET_MULTI,		"SET MULTIPLE MODE" },
		{ ATA_CMD_VERIFY,		"READ VERIFY SECTOR(S)" },
		{ ATA_CMD_VERIFY_EXT,		"READ VERIFY SECTOR(S) EXT" },
		{ ATA_CMD_WRITE_UNCORR_EXT,	"WRITE UNCORRECTABLE EXT" },
		{ ATA_CMD_STANDBYNOW1,		"STANDBY IMMEDIATE" },
		{ ATA_CMD_IDLEIMMEDIATE,	"IDLE IMMEDIATE" },
		{ ATA_CMD_SLEEP,		"SLEEP" },
		{ ATA_CMD_INIT_DEV_PARAMS,	"INITIALIZE DEVICE PARAMETERS" },
		{ ATA_CMD_READ_NATIVE_MAX,	"READ NATIVE MAX ADDRESS" },
		{ ATA_CMD_READ_NATIVE_MAX_EXT,	"READ NATIVE MAX ADDRESS EXT" },
		{ ATA_CMD_SET_MAX,		"SET MAX ADDRESS" },
		{ ATA_CMD_SET_MAX_EXT,		"SET MAX ADDRESS EXT" },
		{ ATA_CMD_READ_LOG_EXT,		"READ LOG EXT" },
		{ ATA_CMD_WRITE_LOG_EXT,	"WRITE LOG EXT" },
		{ ATA_CMD_READ_LOG_DMA_EXT,	"READ LOG DMA EXT" },
		{ ATA_CMD_WRITE_LOG_DMA_EXT,	"WRITE LOG DMA EXT" },
		{ ATA_CMD_TRUSTED_NONDATA,	"TRUSTED NON-DATA" },
		{ ATA_CMD_TRUSTED_RCV,		"TRUSTED RECEIVE" },
		{ ATA_CMD_TRUSTED_RCV_DMA,	"TRUSTED RECEIVE DMA" },
		{ ATA_CMD_TRUSTED_SND,		"TRUSTED SEND" },
		{ ATA_CMD_TRUSTED_SND_DMA,	"TRUSTED SEND DMA" },
		{ ATA_CMD_PMP_READ,		"READ BUFFER" },
		{ ATA_CMD_PMP_READ_DMA,		"READ BUFFER DMA" },
		{ ATA_CMD_PMP_WRITE,		"WRITE BUFFER" },
		{ ATA_CMD_PMP_WRITE_DMA,	"WRITE BUFFER DMA" },
		{ ATA_CMD_CONF_OVERLAY,		"DEVICE CONFIGURATION OVERLAY" },
		{ ATA_CMD_SEC_SET_PASS,		"SECURITY SET PASSWORD" },
		{ ATA_CMD_SEC_UNLOCK,		"SECURITY UNLOCK" },
		{ ATA_CMD_SEC_ERASE_PREP,	"SECURITY ERASE PREPARE" },
		{ ATA_CMD_SEC_ERASE_UNIT,	"SECURITY ERASE UNIT" },
		{ ATA_CMD_SEC_FREEZE_LOCK,	"SECURITY FREEZE LOCK" },
		{ ATA_CMD_SEC_DISABLE_PASS,	"SECURITY DISABLE PASSWORD" },
		{ ATA_CMD_CONFIG_STREAM,	"CONFIGURE STREAM" },
		{ ATA_CMD_SMART,		"SMART" },
		{ ATA_CMD_MEDIA_LOCK,		"DOOR LOCK" },
		{ ATA_CMD_MEDIA_UNLOCK,		"DOOR UNLOCK" },
		{ ATA_CMD_DSM,			"DATA SET MANAGEMENT" },
		{ ATA_CMD_CHK_MED_CRD_TYP,	"CHECK MEDIA CARD TYPE" },
		{ ATA_CMD_CFA_REQ_EXT_ERR,	"CFA REQUEST EXTENDED ERROR" },
		{ ATA_CMD_CFA_WRITE_NE,		"CFA WRITE SECTORS WITHOUT ERASE" },
		{ ATA_CMD_CFA_TRANS_SECT,	"CFA TRANSLATE SECTOR" },
		{ ATA_CMD_CFA_ERASE,		"CFA ERASE SECTORS" },
		{ ATA_CMD_CFA_WRITE_MULT_NE,	"CFA WRITE MULTIPLE WITHOUT ERASE" },
		{ ATA_CMD_REQ_SENSE_DATA,	"REQUEST SENSE DATA EXT" },
		{ ATA_CMD_SANITIZE_DEVICE,	"SANITIZE DEVICE" },
		{ ATA_CMD_ZAC_MGMT_IN,		"ZAC MANAGEMENT IN" },
		{ ATA_CMD_ZAC_MGMT_OUT,		"ZAC MANAGEMENT OUT" },
		{ ATA_CMD_READ_LONG,		"READ LONG (with retries)" },
		{ ATA_CMD_READ_LONG_ONCE,	"READ LONG (without retries)" },
		{ ATA_CMD_WRITE_LONG,		"WRITE LONG (with retries)" },
		{ ATA_CMD_WRITE_LONG_ONCE,	"WRITE LONG (without retries)" },
		{ ATA_CMD_RESTORE,		"RECALIBRATE" },
		{ 0,				NULL } /* terminate list */
	};

	unsigned int i;
	for (i = 0; cmd_descr[i].text; i++)
		if (cmd_descr[i].command == command)
			return cmd_descr[i].text;
#endif

	return NULL;
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
          int command = 100;
          const char * benchRet = ata_get_cmd_descript(command);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int command = 255;
          const char * benchRet = ata_get_cmd_descript(command);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int command = 10;
          const char * benchRet = ata_get_cmd_descript(command);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
