//==================================================================================================
/*
  Copyright 2017 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
//! [is_not_infinite]
#include <boost/simd/predicates.hpp>
#include <boost/simd/pack.hpp>
#include <boost/simd/constant/inf.hpp>
#include <boost/simd/constant/minf.hpp>
#include <boost/simd/constant/nan.hpp>
#include <boost/simd/constant/mindenormal.hpp>
#include <iostream>

namespace bs =  boost::simd;
using pack_ft = bs::pack <float, 8>;

int main()
{
  pack_ft pf = { 0.0f, 1.0f, -1.0f, -2.0f
                , bs::Mindenormal<float>(), bs::Inf<float>(), bs::Minf<float>(), bs::Nan<float>() };

  std::cout
    << "---- simd" << '\n'
    << "<- pf =                  " << pf << '\n'
    << "-> bs::is_not_infinite(pf) = " << bs::is_not_infinite(pf) << '\n';

  float xf = 1.0f;
  float yf = bs::Mindenormal<float>();

  std::cout
    << "---- scalar"  << '\n'
    << "<- xf =                  " << xf << '\n'
    << "-> bs::is_not_infinite(xf) = " << bs::is_not_infinite(xf) << '\n'
    << "<- yf =                  " << yf << '\n'
    << "-> bs::is_not_infinite(yf) = " << bs::is_not_infinite(yf) << '\n';
  return 0;
}
//! [is_not_infinite]
