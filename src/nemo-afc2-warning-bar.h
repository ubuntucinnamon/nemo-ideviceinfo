/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2005 William Jon McCann <mccann@jhu.edu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Authors: William Jon McCann <mccann@jhu.edu>
 *
 */

#ifndef __NEMO_AFC2_WARNING_BAR_H
#define __NEMO_AFC2_WARNING_BAR_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define NEMO_TYPE_AFC2_WARNING_BAR         (nemo_afc2_warning_bar_get_type ())
#define NEMO_AFC2_WARNING_BAR(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), NEMO_TYPE_AFC2_WARNING_BAR, NemoAfc2WarningBar))
#define NEMO_AFC2_WARNING_BAR_CLASS(k)     (G_TYPE_CHECK_CLASS_CAST((k), NEMO_TYPE_AFC2_WARNING_BAR, NemoAfc2WarningBarClass))
#define NEMO_IS_AFC2_WARNING_BAR(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), NEMO_TYPE_AFC2_WARNING_BAR))
#define NEMO_IS_AFC2_WARNING_BAR_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE ((k), NEMO_TYPE_AFC2_WARNING_BAR))
#define NEMO_AFC2_WARNING_BAR_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NEMO_TYPE_AFC2_WARNING_BAR, NemoAfc2WarningBarClass))

typedef struct NemoAfc2WarningBarPrivate NemoAfc2WarningBarPrivate;

typedef struct
{
        GtkBox                 box;

        NemoAfc2WarningBarPrivate *priv;
} NemoAfc2WarningBar;

typedef struct
{
        GtkBoxClass            parent_class;
} NemoAfc2WarningBarClass;

GType       nemo_afc2_warning_bar_get_type          (void);
GtkWidget  *nemo_afc2_warning_bar_new               (void);

G_END_DECLS

#endif /* __GS_AFC2_WARNING_BAR_H */
