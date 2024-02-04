#include <iostream>
#include "my_unique_ptr.h"

int main() {
    auto a = mystd::unique_ptr<int>(new int(10));
    auto b = std::move(a);
    std::cout << *b << std::endl;
}
