/*
 Copyright (c) 2016 Mathieu Laurendeau <mat.lau@laposte.net>
 License: GPLv3
 */

#ifndef GUHID_H_
#define GUHID_H_

#include <gimxhid/include/ghid.h>

struct guhid_device;

struct guhid_device * guhid_create(const s_hid_info * hid_info, struct ghid_device * hid);
int guhid_close(struct guhid_device * device);
int guhid_write(struct guhid_device * device, const void * buf, unsigned int count);
int guhid_is_opened(struct guhid_device * device);

#endif /* GUHID_H_ */
