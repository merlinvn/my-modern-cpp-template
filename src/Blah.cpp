#include "Blah.h"

namespace A::B {

void A::B::Blah::test() {
  int g{0};
  //= 0 + 'A';
  bar();
  std::cout << "This is a test" << std::endl;
}

}  // namespace A::B
