// ======================================================================
//
// Copyright (c) 1999 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------
// release       : 
// release_date  : 
//
// file          : include/CGAL/Convex_hull_leda_traits_2.h
// package       : Convex_hull_2 
// revision      : $Revision$
// revision_date : $Date$
// author(s)     : Stefan Schirra
//
// coordinator   : MPI, Saarbruecken
// ======================================================================


#ifndef CGAL_CONVEX_HULL_LEDA_TRAITS_2_H
#define CGAL_CONVEX_HULL_LEDA_TRAITS_2_H

#include <CGAL/ch_utils.h>
#include <CGAL/leda_in_CGAL_2.h>
#include <CGAL/predicate_objects_on_points_2.h>

CGAL_BEGIN_NAMESPACE
class Convex_hull_leda_traits_2
{
public:
  typedef   leda_point                                      Point_2;    
  typedef   CGAL::p_Less_xy<Point_2>                        Less_xy_2;
  typedef   CGAL::p_Less_yx<Point_2>                        Less_yx_2;
  typedef   CGAL::p_Left_of_line_2p<Point_2>                Left_of_line_2;
  typedef   CGAL::p_Less_dist_to_line_2p<Point_2>           
                                               Less_signed_distance_to_line_2;
  typedef   CGAL::p_Less_rotate_ccw<Point_2>                Less_rotate_ccw_2;
  typedef   CGAL::p_Leftturn<Point_2>                       Leftturn_2;
  typedef   leda_segment                                    Segment_2; 
  
  Less_xy_2
  less_xy_2_object() const 
  { return Less_xy_2(); } 

  Less_yx_2
  less_yx_2_object() const 
  { return Less_yx_2(); } 

  Left_of_line_2
  left_of_line_2_object( const Point_2& p, const Point_2& q) const 
  { return Left_of_line_2( p, q); } 

  Less_signed_distance_to_line_2
  less_signed_distance_to_line_2_object( const Point_2& p, 
                                         const Point_2& q) const
  { return Less_signed_distance_to_line_2( p, q); } 

  Less_rotate_ccw_2
  less_rotate_ccw_2_object( const Point_2& p ) const
  { return Less_rotate_ccw_2( p); }

  Leftturn_2
  leftturn_2_object() const
  { return Leftturn_2(); }

};
CGAL_END_NAMESPACE

#endif // CGAL_CONVEX_HULL_LEDA_TRAITS_2_H
