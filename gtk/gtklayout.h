/* GTK - The GIMP Toolkit
 * Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 *
 * GtkLayout: Widget for scrolling of arbitrary-sized areas.
 *
 * Copyright Owen Taylor, 1998
 */

/*
 * Modified by the GTK+ Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GTK+ Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GTK+ at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __GTK_LAYOUT_H__
#define __GTK_LAYOUT_H__


#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif

#include <gtk/gtkcontainer.h>


G_BEGIN_DECLS

#define GTK_TYPE_LAYOUT            (gtk_layout_get_type ())
#define GTK_LAYOUT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LAYOUT, GtkLayout))
#define GTK_LAYOUT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LAYOUT, GtkLayoutClass))
#define GTK_IS_LAYOUT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LAYOUT))
#define GTK_IS_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LAYOUT))
#define GTK_LAYOUT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LAYOUT, GtkLayoutClass))


typedef struct _GtkLayout              GtkLayout;
typedef struct _GtkLayoutClass         GtkLayoutClass;

struct _GtkLayout
{
  GtkContainer parent_instance;
};

struct _GtkLayoutClass
{
  GtkContainerClass parent_class;

  /* Padding for future expansion */
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

GDK_AVAILABLE_IN_ALL
GType          gtk_layout_get_type        (void) G_GNUC_CONST;
GDK_AVAILABLE_IN_ALL
GtkWidget*     gtk_layout_new             (GtkAdjustment *hadjustment,
				           GtkAdjustment *vadjustment);
GDK_AVAILABLE_IN_ALL
void           gtk_layout_put             (GtkLayout     *layout,
		                           GtkWidget     *child_widget,
		                           gint           x,
		                           gint           y);

GDK_AVAILABLE_IN_ALL
void           gtk_layout_move            (GtkLayout     *layout,
		                           GtkWidget     *child_widget,
		                           gint           x,
		                           gint           y);

GDK_AVAILABLE_IN_ALL
void           gtk_layout_set_size        (GtkLayout     *layout,
			                   guint          width,
			                   guint          height);
GDK_AVAILABLE_IN_ALL
void           gtk_layout_get_size        (GtkLayout     *layout,
					   guint         *width,
					   guint         *height);

G_END_DECLS

#endif /* __GTK_LAYOUT_H__ */
