//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_INF_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_INF_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-predicates

    Returns True if a0 is inf or -inf else returns False.

    @par Semantic:

    @code
    logical<T> r = is_inf(a0);
    @endcode

    is similar to:

    @code
    logical<T> r = (a0 == Inf) || (a0 == -Inf);
    @endcode


    @return a logical value

**/
  template<typename T> auto is_inf(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-predicates

      Function object tied to simd::is_inf

      @see simd::is_inf
    **/
    const boost::dispatch::functor<tag::is_inf_> is_inf = {};
  }
} }
#endif

#include <boost/simd/function/definition/is_inf.hpp>
#include <boost/simd/arch/common/scalar/function/is_inf.hpp>
//#include <boost/simd/arch/common/function/simd/is_inf.hpp>

#endif
