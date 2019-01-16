#include "__lib.h"
#include "singleton.h"
#include <iostream>

void func() {
    *(Singleton<int>::getInstance()) = 10;
    std::cout << "lib: " << *(Singleton<int>::getInstance()) << std::endl;
}