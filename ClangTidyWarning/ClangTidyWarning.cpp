// ClangTidyWarning.cpp

#include <iostream>

namespace {
constexpr int kValue{0};

struct MyStruct {
  int value;
};
}  // namespace

int main() noexcept {  // NOLINT(bugprone-exception-escape)
  const MyStruct my_struct{.value{0}};

  std::cout << "Value: " << my_struct.value << "\n";
}