#ifndef foodbusutilhfoo
#define foodbusutilhfoo

/* $Id$ */

/***
  This file is part of PulseAudio.
 
  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation; either version 2 of the License,
  or (at your option) any later version.
 
  PulseAudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.
 
  You should have received a copy of the GNU Lesser General Public License
  along with PulseAudio; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

#include <dbus/dbus.h>

typedef struct pa_dbus_connection pa_dbus_connection;

/* return the DBusConnection of the specified type for the given core,
 * like dbus_bus_get(), but integrates the connection with the pa_core */
pa_dbus_connection* pa_dbus_bus_get(pa_core *c, DBusBusType type, DBusError *error);

DBusConnection* pa_dbus_connection_get(pa_dbus_connection *conn);

pa_dbus_connection* pa_dbus_connection_ref(pa_dbus_connection *conn);
void pa_dbus_connection_unref(pa_dbus_connection *conn);

#endif
