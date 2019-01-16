#include <iostream>
#include "__lib.h"
#include "singleton.h"
#include <atomic>

int main() {
    Singleton<std::atomic<int>>::getInstance()->store(30);
    func();
    std::cout << "app: " << Singleton<std::atomic<int>>::getInstance()->load() << std::endl;
    return 0;
}