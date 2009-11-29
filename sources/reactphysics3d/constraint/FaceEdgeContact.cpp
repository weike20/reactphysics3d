/***************************************************************************
* Copyright (C) 2009      Daniel Chappuis                                  *
****************************************************************************
* This file is part of ReactPhysics3D.                                     *
*                                                                          *
* ReactPhysics3D is free software: you can redistribute it and/or modify   *
* it under the terms of the GNU Lesser General Public License as published *
* by the Free Software Foundation, either version 3 of the License, or     *
* (at your option) any later version.                                      *
*                                                                          *
* ReactPhysics3D is distributed in the hope that it will be useful,        *
* but WITHOUT ANY WARRANTY; without even the implied warranty of           *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the             *
* GNU Lesser General Public License for more details.                      *
*                                                                          *
* You should have received a copy of the GNU Lesser General Public License *
* along with ReactPhysics3D. If not, see <http://www.gnu.org/licenses/>.   *
***************************************************************************/

// Libraries
#include "FaceEdgeContact.h"

// We want to use the ReactPhysics3D namespace
using namespace reactphysics3d;

// Constructor
FaceEdgeContact::FaceEdgeContact(Body* const body1, Body* const body2, const Vector3D& normalVector, const Time& time, const Segment3D& contactSegment)
                :Contact(body1, body2, normalVector, time), contactSegment(contactSegment) {

}

// Destructor
FaceEdgeContact::~FaceEdgeContact() {

}


