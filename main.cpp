#include <iostream>
#include "my_unique_ptr.h"

int main() {
    auto a = mystd::unique_ptr<int>(new int(10));
    std::cout << *a << std::endl;
}
