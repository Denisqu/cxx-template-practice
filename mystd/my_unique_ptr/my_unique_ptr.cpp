#include "my_unique_ptr.h"
#include <iostream>
#include <memory>

int main() {
  mystd::unique_ptr<int> a(new int(100));
  std::cout << *a << std::endl;

  // deleted: mystd::unique_ptr<int> b = a;
  auto b = std::move(a);
  ++(*b);
  std::cout << *b << std::endl;
}