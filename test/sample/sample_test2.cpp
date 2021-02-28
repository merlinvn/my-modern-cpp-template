#include <gtest/gtest.h>

#include <fstream>  //for ifstream
#include <string>   //for strings
#include <vector>

void read_file_to_vector(std::vector<int>& my_vector) {
  my_vector.clear();
  std::ifstream stream(R"(./test/test_data/data.txt)", std::ios::in);

  if (!stream.is_open()) {
    std::cout << "File not found" << std::endl;
    return;
  }

  int num{0};
  while (stream >> num) {
    my_vector.push_back(num);
  }
}

// Tests factorial of 0.
// NOLINTNEXTLINE
TEST(ReadFileTest, can_read_10_numbers_from_file) {
  std::vector<int> v_int;
  read_file_to_vector(v_int);
  EXPECT_EQ(v_int.size(), 1);
}
