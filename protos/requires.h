#ifndef THIRD_PARTY_UPB_PROTOS_REQUIRES_H_
#define THIRD_PARTY_UPB_PROTOS_REQUIRES_H_

#include <type_traits>
namespace protos::templates {
// C++17 port of Requires from C++20
template <typename... T, typename F>
constexpr bool Requires(F) {
  return std::is_invocable_v<F, T...>;
}
}  // namespace protos::templates

#endif  // THIRD_PARTY_UPB_PROTOS_REQUIRES_H_
