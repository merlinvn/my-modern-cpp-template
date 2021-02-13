#pragma once
#include <iostream>
#include <optional>

namespace A {
namespace B {
class Blah {
public:
  void foo() {
    std::cout << "Inside Blah::foo()\n";
    std::cout << "Inside Blah::foo()\n";
  }
};
}  // namespace B
}  // namespace A
