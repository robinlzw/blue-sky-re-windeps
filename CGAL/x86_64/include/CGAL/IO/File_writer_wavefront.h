// Copyright (c) 1997  
// Utrecht University (The Netherlands),
// ETH Zurich (Switzerland),
// INRIA Sophia-Antipolis (France),
// Max-Planck-Institute Saarbruecken (Germany),
// and Tel-Aviv University (Israel).  All rights reserved. 
//
// This file is part of CGAL (www.cgal.org)
//
// $URL: https://github.com/CGAL/cgal/blob/releases/CGAL-5.0/Stream_support/include/CGAL/IO/File_writer_wavefront.h $
// $Id: File_writer_wavefront.h 52164b1 2019-10-19T15:34:59+02:00 Sébastien Loriot
// SPDX-License-Identifier: LGPL-3.0-or-later OR LicenseRef-Commercial
// 
//
// Author(s)     : Lutz Kettner  <kettner@mpi-sb.mpg.de>

#ifndef CGAL_IO_FILE_WRITER_WAVEFRONT_H
#define CGAL_IO_FILE_WRITER_WAVEFRONT_H 1

#include <CGAL/IO/binary_file_io.h>
#include <iostream>
#include <cstddef>

namespace CGAL {

class CGAL_EXPORT File_writer_wavefront {
    std::ostream*  m_out;
    std::size_t    m_facets;
public:
    std::ostream& out() const { return *m_out; }
    void write_header( std::ostream& out,
                       std::size_t vertices,
                       std::size_t halfedges,
                       std::size_t facets);
    void write_footer() const {
        out() << "\n# End of Wavefront obj format #" << std::endl;
    }
    void write_vertex( const double& x, const double& y, const double& z) {
        out() << "v " << x << ' ' << y << ' ' << z << '\n';
    }
    void write_vertex_normal( const double& x, const double& y, const double& z) {
        out() << "vn " << x << ' ' << y << ' ' << z << '\n';
    }
    void write_facet_header() {
        out() << "\n# " << m_facets << " facets\n";
        out() << "# ------------------------------------------\n\n";
    }
    void write_facet_begin( std::size_t)            { out() << "f "; }
    void write_facet_vertex_index( std::size_t idx) { out() << ' ' << idx+1; }
    void write_facet_end()                          { out() << '\n'; }
};

} //namespace CGAL

#ifdef CGAL_HEADER_ONLY
#include <CGAL/IO/File_writer_wavefront_impl.h>
#endif // CGAL_HEADER_ONLY

#endif // CGAL_IO_FILE_WRITER_WAVEFRONT_H //
// EOF //
