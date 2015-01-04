/*

 Copyright  2011  Mustapha Oldache   <mustapha.oldache@gmail.com>

  This file is part of Awsedit.

Awsedit is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Awsedit is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Awsedit.  If not, see <http://www.gnu.org/licenses/>. */


/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"
extern  GtkWidget *rechercher;
extern  GtkWidget *conversion;
extern  GtkWidget *enregistrer;
extern  GtkWidget *type;
extern  GtkWidget *description;
GtkWidget *awsedit;
int
main (int argc, char *argv[])
{

  gchar *p;
  gchar *pixmap_dir;
#ifdef ENABLE_NLS
    bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
      bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
        textdomain (GETTEXT_PACKAGE);
#endif
  g_thread_init(NULL);
  gdk_threads_init ();
  gdk_threads_enter ();
  gtk_set_locale ();
  gtk_init (&argc, &argv);

 add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  awsedit = create_awsedit ();
  gtk_widget_set_size_request(awsedit,840,464);
  gtk_widget_show (awsedit);
  gtk_widget_set_sensitive(rechercher,FALSE);
  gtk_widget_set_sensitive(conversion,FALSE);
  gtk_widget_set_sensitive(enregistrer,FALSE);
  gtk_widget_set_sensitive(type,FALSE);
  gtk_widget_set_sensitive(description,FALSE);
  g_signal_connect ((gpointer) awsedit, "destroy", G_CALLBACK(gtk_main_quit),
                    NULL);
if (argc>1)  on_ouvrir_activate(NULL,argv[1]);
  gtk_main ();
gdk_threads_leave ();
  return 0;
}

