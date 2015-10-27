//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_MAXMAG_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_MAXMAG_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-ieee

    Returns the input value which have the greatest absolute value.

    @par Semantic:

    @code
    T r = maxmag(a0,a1);
    @endcode

    is similar to:

    @code
    T r = abs(a0) > abs(a1) ? a0 : abs(a1) > abs(a0) ? a1 : max(a0, a1);
    @endcode



    @return a value of same type as the inputs

**/
  template<typename T> auto maxmag(T const& x, T const& y) {}

  namespace functional
  {
    /*!
      @ingroup group-ieee

      Function object tied to simd::maxmag

      @see simd::maxmag
    **/
    const boost::dispatch::functor<tag::maxmag_> maxmag = {};
  }
} }
#endif

#include <boost/simd/function/definition/maxmag.hpp>
#include <boost/simd/arch/common/scalar/function/maxmag.hpp>
//#include <boost/simd/arch/common/function/simd/maxmag.hpp>

#endif
