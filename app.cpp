#include <iostream>
#include "__lib.h"
#include "singleton.h"

int main() {
    *(Singleton<int>::getInstance()) = 30;
    func();
    std::cout << "app: " << *(Singleton<int>::getInstance()) << std::endl;
    return 0;
}