//------------------------------------------------------------------------------
// © 2021-2024. Triad National Security, LLC. All rights reserved.  This
// program was produced under U.S. Government contract 89233218CNA000001
// for Los Alamos National Laboratory (LANL), which is operated by Triad
// National Security, LLC for the U.S.  Department of Energy/National
// Nuclear Security Administration. All rights in the program are
// reserved by Triad National Security, LLC, and the U.S. Department of
// Energy/National Nuclear Security Administration. The Government is
// granted for itself and others acting on its behalf a nonexclusive,
// paid-up, irrevocable worldwide license in this material to reproduce,
// prepare derivative works, distribute copies to the public, perform
// publicly and display publicly, and to permit others to do so.
//------------------------------------------------------------------------------

#ifndef _SINGULARITY_EOS_EOS_VARIANT_UTILS_HPP_
#define _SINGULARITY_EOS_EOS_VARIANT_UTILS_HPP_

#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <utility>

#include <ports-of-call/portability.hpp>
#include <singularity-eos/eos/eos_variant.hpp>

namespace singularity {

// a function that returns a Variant from a typelist
template <typename... Ts>
struct tl_to_Variant_struct {
  using vt = Variant<Ts...>;
};

template <typename... Ts>
constexpr auto tl_to_Variant(tl<Ts...>) {
  return tl_to_Variant_struct<Ts...>{};
}

} // namespace singularity

#endif // _SINGULARITY_EOS_EOS_VARIANT_UTILS_HPP_
