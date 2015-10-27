//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_COMPARE_LESS_EQUAL_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_COMPARE_LESS_EQUAL_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-reduction

    Returns a logical scalar that is the result of the lexicographic
    test for <= on all elements of the entries

    It is probably not what you wish. Have a look to is_less_equal

    @par Semantic:

    For every parameters of type T0:

    @code
    as_logical_t<scalar_of_t<T0>> r = compare_less_equal(a0,a1);
    @endcode

    is similar to:

    @code
      as_logical_t<scalar_of_t<T0>> r = !compare_greater(a1, a0)
    @endcode

    @par Alias:
    @c compare_le

    @see is_less_equal


    @return a value of the scalar logical type associated to the parameter

**/
  template<typename T> auto compare_less_equal(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-reduction

      Function object tied to simd::compare_less_equal

      @see simd::compare_less_equal
    **/
    const boost::dispatch::functor<tag::compare_less_equal_> compare_less_equal = {};
  }
} }
#endif

#include <boost/simd/function/definition/compare_less_equal.hpp>
#include <boost/simd/arch/common/scalar/function/compare_less_equal.hpp>
//#include <boost/simd/arch/common/function/simd/compare_less_equal.hpp>

#endif
