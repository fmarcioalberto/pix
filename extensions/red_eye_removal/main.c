/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */

/*
 *  Pix
 *
 *  Copyright (C) 2009 Free Software Foundation, Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <config.h>
#include <gtk/gtk.h>
#include <pix.h>
#include "gth-file-tool-red-eye.h"


G_MODULE_EXPORT void
pix_extension_activate (void)
{
	gth_main_register_type ("file-tools", GTH_TYPE_FILE_TOOL_RED_EYE);
}


G_MODULE_EXPORT void
pix_extension_deactivate (void)
{
}


G_MODULE_EXPORT gboolean
pix_extension_is_configurable (void)
{
	return FALSE;
}


G_MODULE_EXPORT void
pix_extension_configure (GtkWindow *parent)
{
}
