//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_INTERLEAVE_EVEN_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_INTERLEAVE_EVEN_HPP_INCLUDED

namespace boost { namespace simd
{

  /*!
    @ingroup group-swar
    @defgroup real-interleave_even interleave_even (function object)

    This function object computes a vector from a combination of the two inputs.

    @headerref{<boost/simd/function/interleave_even.hpp>}

    @par Description

      @code
      Value interleave_even(Value const& x, Value const& y);
      @endcode

    @par Semantic:

    For every parameters of types respectively T0:

    @code
    T0 r = interleave_even(x,y);
    @endcode

    is equivalent to :

    @code
    r = [ x[0] y[0] x[2] y[2] ... x[n/2] y[n/2] ]
    @endcode

    with <tt> n = cardinal_of<T>::value </tt>

  **/

} }

#include <boost/simd/function/simd/interleave_even.hpp>

#endif
