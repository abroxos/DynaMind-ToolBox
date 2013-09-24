/**
 * @file
 * @author  Christian Mikovits <christian.mikovits@uibk.ac.at>
 * @version 0.1a
 * @section LICENSE
 * DynAlp module registration
   Copyright (C) 2013 Christian Mikovits

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
**/

#include "dmnodefactory.h"
#include "dmmoduleregistry.h"

#include "prettyparcels.h"
#include "createbuilding.h"
#include "urbandevelcycle.h"
#include "urbandevelrank.h"

using namespace std;

extern "C" void DM_HELPER_DLL_EXPORT  registerModules(DM::ModuleRegistry *registry) {
    registry->addNodeFactory(new DM::NodeFactory<CreateBuilding>());
    registry->addNodeFactory(new DM::NodeFactory<PrettyParcels>());
    registry->addNodeFactory(new DM::NodeFactory<UrbanDevelCycle>());
    registry->addNodeFactory(new DM::NodeFactory<UrbanDevelRank>());
}
