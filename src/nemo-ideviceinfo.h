/*
 * nemo-ideviceinfo.h
 * 
 * Copyright (C) 2010 Nikias Bassen <nikias@gmx.li>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more profile.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 
 * USA
 */
#ifndef NEMO_IDEVICEINFO_H
#define NEMO_IDEVICEINFO_H

#include <glib-object.h>

G_BEGIN_DECLS

#define NEMO_TYPE_IDEVICEINFO   (nemo_ideviceinfo_get_type ())
#define NEMO_IDEVICEINFO(o)     (G_TYPE_CHECK_INSTANCE_CAST ((o), NEMO_TYPE_IDEVICEINFO, Nemo_iDeviceInfo))
#define NEMO_IS_IDEVICEINFO(o)  (G_TYPE_CHECK_INSTANCE_TYPE ((o), NEMO_TYPE_IDEVICEINFO))
typedef struct _Nemo_iDeviceInfo      Nemo_iDeviceInfo;
typedef struct _Nemo_iDeviceInfoClass Nemo_iDeviceInfoClass;

struct _Nemo_iDeviceInfo {
	GObject parent_slot;
};

struct _Nemo_iDeviceInfoClass {
	GObjectClass parent_slot;
};

GType nemo_ideviceinfo_get_type      (void);
void  nemo_ideviceinfo_register_type (GTypeModule *module);

G_END_DECLS

#endif
