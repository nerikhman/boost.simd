//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_NEGIFNOT_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_NEGIFNOT_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-boolean

    The function returns -a1 if a0 is false and a1 otherwise.
    The two operands must have the same cardinal.

    @par Semantic:

    For every parameters of types respectively T0, T1:

    @code
    T1 r = negifnot(a0,a1);
    @endcode

    is similar to:

    @code
    T1 r = a0 ? a1 : -a1;
    @endcode



    @return a value of the same type as the second parameter

**/
  template<typename T> auto negifnot(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-boolean

      Function object tied to simd::negifnot

      @see simd::negifnot
    **/
    const boost::dispatch::functor<tag::negifnot_> negifnot = {};
  }
} }
#endif

#include <boost/simd/function/definition/negifnot.hpp>
#include <boost/simd/arch/common/scalar/function/negifnot.hpp>
//#include <boost/simd/arch/common/function/simd/negifnot.hpp>

#endif