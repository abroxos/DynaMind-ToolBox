/**
 * @file
 * @author Michael Mair <michael.mair@uibk.ac.at>
 * @version 1.0
 * @section LICENSE
 *
 * This file is part of DynaMind
 *
 * Copyright (C) 2012  Christian Urich

 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */
#include <eraseview.h>

DM_DECLARE_NODE_NAME(EraseView, Modules)
EraseView::EraseView()
{
	this->forceRefreshSimulation(true);
	sys_in = NULL;
	data.push_back(  DM::View ("dummy", DM::SUBSYSTEM, DM::MODIFY) );
	this->addParameter("NameOfView", DM::STRING, &this->NameOfView);

}

void EraseView::run()
{
	sys_in = this->getData("Data");
	sys_in->getAllComponentsInView(DM::View (NameOfView, DM::COMPONENT, DM::DEL));
}

void EraseView::init()
{
	if(NameOfView=="")
		return;

	data.clear();
	data.push_back(  DM::View ("dummy", DM::SUBSYSTEM, DM::MODIFY) );
	data.push_back(  DM::View (NameOfView, DM::COMPONENT, DM::DEL) );
	this->addData("Data", data);
}

string EraseView::getHelpUrl()
{
	return "";
}
