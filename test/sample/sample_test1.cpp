#include <gtest/gtest.h>

int Factorial(int n) {
  if (n == 1 || n == 0) {
    return 1;
  }
  return n * Factorial(n - 1);
}

// Tests factorial of 0.
// NOLINTNEXTLINE
TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(Factorial(0), 1);
}

// Tests factorial of positive numbers.
// NOLINTNEXTLINE
TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(Factorial(1), 1);
  EXPECT_EQ(Factorial(2), 2);
  EXPECT_EQ(Factorial(3), 6);
  EXPECT_EQ(Factorial(8), 40320);
}
