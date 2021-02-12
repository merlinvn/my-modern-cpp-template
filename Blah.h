#pragma once
#include <iostream>
#include <optional>

namespace A::B {
class Blah {
public:
  void foo() { std::cout << "Inside Blah::foo()\n"; }
};
} // namespace A::B
