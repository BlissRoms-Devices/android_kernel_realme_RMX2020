/*
 * Copyright (C) 2018 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */
#include <linux/kernel.h>
#include "cam_cal_list.h"
#include "eeprom_i2c_common_driver.h"
#include "eeprom_i2c_custom_driver.h"
#include "kd_imgsensor.h"

struct stCAM_CAL_LIST_STRUCT g_camCalList[] = {
	/*Below is commom sensor */
#ifdef ODM_WT_EDIT
	/* Zhen.Quan@Camera.Driver, 2019/11/20, add for [otp bringup] */
	{OV12A10_SENSOR_ID, 0xA0, Common_read_region},
	{S5KGM1SP_SENSOR_ID, 0xA0, Common_read_region},
	{OV16A1Q_SENSOR_ID, 0xA8, Common_read_region},
	{OV8856_SENSOR_ID, 0xA2, Common_read_region},
	{GC5035_SENSOR_ID, 0xA8, Common_read_region},
	{GC2375H_SENSOR_ID, 0xA4, Common_read_region},
	{MONET_LH_MACRO_GC2375H_SENSOR_ID, 0xA4, Common_read_region},
	{MONETX_HLT_MACRO_GC2375H_SENSOR_ID, 0xA4, Common_read_region},
	{MONETD_LH_DEPTH_GC2375H_SENSOR_ID, 0xA4, Common_read_region},
	{MONETX_HLT_MACRO_GC2385_SENSOR_ID, 0xA4, Common_read_region},
	{MONETD_TRULY_OV12A10_SENSOR_ID, 0xA0, Common_read_region},
	{MONET_GC5035_SENSOR_ID, 0xA8, Common_read_region},
	{MONET_GC5035B_SENSOR_ID, 0xA8, Common_read_region},
#else
	{IMX519_SENSOR_ID, 0xA0, Common_read_region},
	{S5K2T7SP_SENSOR_ID, 0xA4, Common_read_region},
	{IMX338_SENSOR_ID, 0xA0, Common_read_region},
	{S5K4E6_SENSOR_ID, 0xA8, Common_read_region},
	{IMX386_SENSOR_ID, 0xA0, Common_read_region},
	{S5K3M3_SENSOR_ID, 0xA0, Common_read_region},
	{S5K2L7_SENSOR_ID, 0xA0, Common_read_region},
	{IMX398_SENSOR_ID, 0xA0, Common_read_region},
	{IMX350_SENSOR_ID, 0xA0, Common_read_region},
	{IMX318_SENSOR_ID, 0xA0, Common_read_region},
	{IMX386_MONO_SENSOR_ID, 0xA0, Common_read_region},
	/*B+B. No Cal data for main2 OV8856*/
	{S5K2P7_SENSOR_ID, 0xA0, Common_read_region},
#endif /* ODM_WT_EDIT */
	/*  ADD before this line */
	{0, 0, 0}       /*end of list */
};

unsigned int cam_cal_get_sensor_list(
	struct stCAM_CAL_LIST_STRUCT **ppCamcalList)
{
	if (ppCamcalList == NULL)
		return 1;

	*ppCamcalList = &g_camCalList[0];
	return 0;
}


