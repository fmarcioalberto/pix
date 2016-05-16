/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */

/*
 *  Pix
 *
 *  Copyright (C) 2001-2009 The Free Software Foundation, Inc.
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

#ifndef DLG_CATALOG_H
#define DLG_CATALOG_H

#include <glib.h>
#include <pix.h>

void   dlg_add_to_catalog              (GthBrowser *browser,
					GList      *list /* GFile list */);
void   add_to_catalog                  (GthBrowser *browser,
					GFile      *catalog,
					GList      *list /* GFile list */);
void   dlg_move_to_catalog_directory   (GthBrowser *browser,
					char       *catalog_path);

#endif /* DLG_CATALOG_H */
