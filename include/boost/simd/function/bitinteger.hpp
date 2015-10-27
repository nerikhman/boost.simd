//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_BITINTEGER_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_BITINTEGER_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-ieee

    Transforms a floating point value in a pattern of bits
    stored in an integer with different formulas according to
    the floating point sign (the converse of bitfloating)

    @par Semantic:

    @code
     as_integer_t<T> r = bitinteger(a0);
    @endcode

    is similar to:

    @code
      as_integer_t<T> r =
         (is_positive(a0) ?
           bitwise_cast<as_integer_t<T>>(a0) :
           Signmask<as_integer_t<T>>()-bitwise_cast<as_integer_t<T>>(a0);
    @endcode


    @return a value of same type as the input

**/
  template<typename T> auto bitinteger(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-ieee

      Function object tied to simd::bitinteger

      @see simd::bitinteger
    **/
    const boost::dispatch::functor<tag::bitinteger_> bitinteger = {};
  }
} }
#endif

#include <boost/simd/function/definition/bitinteger.hpp>
#include <boost/simd/arch/common/scalar/function/bitinteger.hpp>
//#include <boost/simd/arch/common/function/simd/bitinteger.hpp>

#endif
