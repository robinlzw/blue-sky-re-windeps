// Copyright (c) 1997-2010  INRIA Sophia-Antipolis (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org)
//
// $URL: https://github.com/CGAL/cgal/blob/releases/CGAL-5.0/Kernel_23/include/CGAL/Projection_traits_xz_3.h $
// $Id: Projection_traits_xz_3.h 52164b1 2019-10-19T15:34:59+02:00 Sébastien Loriot
// SPDX-License-Identifier: LGPL-3.0-or-later OR LicenseRef-Commercial
// 
//
// Author(s)     : Mariette Yvinec

#ifndef CGAL_PROJECTION_TRAITS_XZ_3_H
#define CGAL_PROJECTION_TRAITS_XZ_3_H

#include <CGAL/internal/Projection_traits_3.h>

namespace CGAL {

template < class R >
class Projection_traits_xz_3
  : public internal::Projection_traits_3<R,1>
{};

} //namespace CGAL

#endif // CGAL_PROJECTION_TRAITS_XZ_3_H
