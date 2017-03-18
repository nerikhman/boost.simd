// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor real in simd mode for bs::complex<double> type with no decorator (regular call).
#include <simd_bench.hpp>
#include <boost/simd/type/complex/function/real.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_BENCH_MAIN()
{
  using T = bs::complex<double>;
  run<T>(bs::real, nsbg::rand<T>(-10, 10));
}
