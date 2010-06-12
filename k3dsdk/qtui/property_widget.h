#ifndef K3DSDK_QTUI_PROPERTY_WIDGET_H
#define K3DSDK_QTUI_PROPERTY_WIDGET_H

// K-3D
// Copyright (c) 1995-2010, Timothy M. Shead
//
// Contact: tshead@k-3d.com
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public
// License along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

/** \file
	\author Tim Shead (tshead@k-3d.com)
*/

#include <k3dsdk/iunknown.h>

namespace k3d
{

class idocument;
class iproperty;

namespace qtui
{

/// Abstract interface for a "property widget", a UI component used to control a K-3D property.
/// Note: implementations must publicly derive from QWidget.
class property_widget
{
public:
	virtual ~property_widget() {}

	/// Called once at startup to initialize the widget (this is necessary because plugins can't take constructor arguments).
	virtual void initialize(idocument& Document, iproperty& Property) = 0;

protected:
	property_widget() {}
	property_widget(const property_widget&) {}
	property_widget& operator=(const property_widget&) { return *this; }
};

} // namespace qtui

} // namespace k3d

#endif // !K3DSDK_QTUI_PROPERTY_WIDGET_H

