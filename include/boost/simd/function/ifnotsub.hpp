//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IFNOTSUB_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IFNOTSUB_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-boolean


    The function returns the second entry or the difference of the second
    and third entries, according to the first entry being True or
    False

    @par Semantic:

    For every parameters of types respectively T0, T1, T1:

    @code
    T1 r = ifnotsub(a0,a1,a2);
    @endcode

    is similar to:

    @code
    T1 r = a0 ? a1 :  a1-a2;
    @endcode

    @par Alias:
    @c selnotadd

    @see selsub

    @return a value of the same type as the second parameter

**/
  template<typename T> auto ifnotsub(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-boolean

      Function object tied to simd::ifnotsub

      @see simd::ifnotsub
    **/
    const boost::dispatch::functor<tag::ifnotsub_> ifnotsub = {};
  }
} }
#endif

#include <boost/simd/function/definition/ifnotsub.hpp>
#include <boost/simd/arch/common/scalar/function/ifnotsub.hpp>
//#include <boost/simd/arch/common/function/simd/ifnotsub.hpp>

#endif