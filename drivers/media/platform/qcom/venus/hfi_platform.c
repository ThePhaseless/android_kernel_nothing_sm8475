// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */
#include "hfi_platform.h"

const struct hfi_platform *hfi_platform_get(enum hfi_version version)
{
	switch (version) {
	case HFI_VERSION_4XX:
		return &hfi_plat_v4;
	default:
		break;
	}

	return NULL;
}

unsigned long
hfi_platform_get_codec_vpp_freq(enum hfi_version version, u32 codec, u32 session_type)
{
	const struct hfi_platform *plat;
	unsigned long freq = 0;

	plat = hfi_platform_get(version);
	if (!plat)
		return 0;

	if (plat->codec_vpp_freq)
		freq = plat->codec_vpp_freq(session_type, codec);

	return freq;
}

unsigned long
hfi_platform_get_codec_vsp_freq(enum hfi_version version, u32 codec, u32 session_type)
{
	const struct hfi_platform *plat;
	unsigned long freq = 0;

	plat = hfi_platform_get(version);
	if (!plat)
		return 0;

	if (plat->codec_vpp_freq)
		freq = plat->codec_vsp_freq(session_type, codec);

	return freq;
}
