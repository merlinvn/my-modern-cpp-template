#pragma once
#include <iostream>
#include <optional>
#include <vector>

namespace A::B {
class Blah {
public:
  void bar() {
    std::cout << "Inside Blah::foo()\n";
    std::cout << "Inside Blah::foo()\n";
  }

  static size_t this_is_another_function_style(const std::vector<int>& v) {
    std::cout << v.size() << std::endl;
    return v.size();
  }

  static void thisIsALongNameFuction(int a, std::string_view b) {
    int c = a * 2;
    std::cout << b << "--" << c << std::endl;
  }

  void test();
};
}  // namespace A::B
