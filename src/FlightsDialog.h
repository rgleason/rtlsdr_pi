/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  rtlsdr Plugin
 * Author:   Sean D'Epagnier
 *
 ***************************************************************************
 *   Copyright (C) 2019 by Sean D'Epagnier                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
 ***************************************************************************
 */

#include "rtlsdrUI.h"

class rtlsdr_pi;

class FlightsDialog : public FlightsDialogBase
{
public:
    FlightsDialog( Flights &_flights, PlugIn_Position_Fix_Ex &fix, wxWindow* parent);

    void OnGoto( wxCommandEvent& event );

    double last_view_scale_ppm;

private:
    void OnTimer(wxTimerEvent &);
    wxTimer m_timer;

    Flights &m_flights;
    PlugIn_Position_Fix_Ex &m_lastfix;
};

