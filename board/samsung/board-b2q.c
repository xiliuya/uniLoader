/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2026, xiliuya <xiliuya1@gmail.com>
 */

#include <board.h>
#include <drivers/framework.h>
#include <lib/simplefb.h>
#include <util.h>

static struct video_info b2q_fb = {
	.format = FB_FORMAT_ARGB8888,
	.width = 1080,
	.height = 2640,
	.stride = 4,
	.address = (void *)0xe4000000,
	.scale = 2
};

static const struct device b2q_devices[] = {
	{"simplefb", &b2q_fb, "fb"},
};

struct board_data board_ops = {
	.name = "samsung-b2q",
	.ops = {},
	.devices = b2q_devices,
	.num_devices = ARRAY_SIZE(b2q_devices),
	.quirks = 0
};
