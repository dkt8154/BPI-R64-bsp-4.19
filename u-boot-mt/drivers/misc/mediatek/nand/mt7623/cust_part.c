#include "typedefs.h"
#include "platform.h"
#include "blkdev.h"
#include "cust_part.h"

static part_t platform_parts[PART_MAX_COUNT] = {
	{PART_PRELOADER,0, PART_SIZE_PRELOADER, 0,PART_FLAG_NONE,NAND_PART_USER,TYPE_LOW},
	{PART_UBOOT,0, PART_SIZE_UBOOT, 0,PART_FLAG_NONE,NAND_PART_USER,TYPE_LOW},
	{PART_CONFIG,0, PART_SIZE_CONFIG, 0,PART_FLAG_NONE,NAND_PART_USER,TYPE_LOW},
	{PART_FACTORY,0, PART_SIZE_FACTORY, 0,PART_FLAG_NONE,NAND_PART_USER,TYPE_LOW},
	{PART_BOOTIMG,0, PART_SIZE_BOOTIMG, 0,PART_FLAG_NONE,NAND_PART_USER,TYPE_LOW},
	{PART_RECOVERY,0, PART_SIZE_RECOVERY, 0,PART_FLAG_NONE,NAND_PART_USER,TYPE_LOW},
	{PART_ROOTFS,0, PART_SIZE_ROOTFS, 0,PART_FLAG_NONE,NAND_PART_USER,TYPE_FULL},
	{PART_USER,0, PART_SIZE_USRDATA, 0,PART_FLAG_NONE,NAND_PART_USER,TYPE_FULL},
	{NULL,0,0,0,PART_FLAG_END,NAND_PART_UNKNOWN,TYPE_LOW},
};

void cust_part_init(void){}

part_t *cust_part_tbl(void)
{
	 return &platform_parts[0];
}

