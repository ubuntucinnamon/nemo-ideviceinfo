/*
 * nemo-idevinfo.c
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
#ifdef HAVE_CONFIG_H
 #include <config.h>
#endif

#include "nemo-ideviceinfo.h"

#include <libintl.h>

static GType type_list[1];

void nemo_module_initialize (GTypeModule *module);
void nemo_module_shutdown (void);
void nemo_module_list_types (const GType **types, int *num_types);

void nemo_module_initialize (GTypeModule *module)
{
	g_print ("Initializing nemo-ideviceinfo extension\n");

	nemo_ideviceinfo_register_type (module);
	type_list[0] = NEMO_TYPE_IDEVICEINFO;

	bindtextdomain (GETTEXT_PACKAGE, LOCALEDIR);
	bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
}

void nemo_module_shutdown (void)
{
	g_print ("Shutting down nemo-ideviceinfo extension\n");
}

void nemo_module_list_types (const GType **types, int *num_types)
{
	*types = type_list;
	*num_types = G_N_ELEMENTS (type_list);
}
