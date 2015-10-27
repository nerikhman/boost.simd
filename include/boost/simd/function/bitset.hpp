//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_BITSET_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_BITSET_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-bitwise

    Returns x with the ith bit set

    @par semantic:
    For any given value @c x of type @c T, i  of type @c I:

    @code
    as_integer_t<T> r = bitset(x, i);
    @endcode

    @see  bitset

    @return      a value of the type of the first input.


**/
  template<typename T> auto bitset(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-bitwise

      Function object tied to simd::bitset

      @see simd::bitset
    **/
    const boost::dispatch::functor<tag::bitset_> bitset = {};
  }
} }
#endif

#include <boost/simd/function/definition/bitset.hpp>
#include <boost/simd/arch/common/generic/function/bitset.hpp>
//#include <boost/simd/arch/common/function/simd/bitset.hpp>

#endif
