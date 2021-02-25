#include <iostream>
#include <optional>
#include <fmt/format.h>

#include "Blah.h"

int main() {

  A::B::Blah b;
  b.bar();

  const auto id = 123456;
  std::cout << fmt::format("Hello {} \n", id);
  return 0;
}
