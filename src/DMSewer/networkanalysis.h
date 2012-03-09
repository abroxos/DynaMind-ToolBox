/**
 * @file
 * @author  Chrisitan Urich <christian.urich@gmail.com>
 * @version 1.0
 * @section LICENSE
 *
 * This file is part of VIBe2
 *
 * Copyright (C) 2011  Christian Urich

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
#ifndef NETWORKANALYSIS_H
#define NETWORKANALYSIS_H
#include <module.h>
#include <DM.h>


/**
  * @ingroup Sewer
  * @brief Network analysis
  *
  * @author Christian Urich
  */
class DM_HELPER_DLL_EXPORT NetworkAnalysis : public  DM::Module {
    DM_DECLARE_NODE( NetworkAnalysis)

    private:
        DM::View network;


    /* std::vector<DM::Node> PointList;
    std::vector<DM::Edge> EdgeList;
    bool checkPoint(DM::Node & p, double offset);
    std::vector<int> findConnectedEdges(int ID);
    int findNewID(DM::Node & p, double offset);*/


public:
    NetworkAnalysis();
    void run();


};

#endif // NETWORKANALYSIS_H
