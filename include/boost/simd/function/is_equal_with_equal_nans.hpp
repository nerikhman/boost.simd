//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_EQUAL_WITH_EQUAL_NANS_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_EQUAL_WITH_EQUAL_NANS_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-predicates

    Returns True or False according a0 and a1 are equal or not.
    nans are considered equal

    @par Semantic:

    @code
    logical<T> r = is_equal_with_equal_nans(a0,a1);
    @endcode

    is similar to:

    @code
    logical<T> r = (a0 == a1) || ((a0!= a0) && (a1!= a1));
    @endcode



    @return a logical value

**/
  template<typename T> auto is_equal_with_equal_nans(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-predicates

      Function object tied to simd::is_equal_with_equal_nans

      @see simd::is_equal_with_equal_nans
    **/
    const boost::dispatch::functor<tag::is_equal_with_equal_nans_> is_equal_with_equal_nans = {};
  }
} }
#endif

#include <boost/simd/function/definition/is_equal_with_equal_nans.hpp>
#include <boost/simd/arch/common/scalar/function/is_equal_with_equal_nans.hpp>
//#include <boost/simd/arch/common/function/simd/is_equal_with_equal_nans.hpp>

#endif
