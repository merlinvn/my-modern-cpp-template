#include <iostream>
#include <optional>
#include <fmt/format.h>

#include "Blah.h"

int main() {
  // std::optional<bool> blah;

  A::B::Blah b;
  b.foo();
  const auto id = 123456;
  std::cout << fmt::format("Hello {} \n", id);
  return 0;
}
