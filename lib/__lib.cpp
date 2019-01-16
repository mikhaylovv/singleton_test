#include "__lib.h"
#include "singleton.h"
#include <iostream>
#include <atomic>

void func() {
    Singleton<std::atomic<int>>::getInstance()->store(10);
    std::cout << "lib: " << Singleton<std::atomic<int>>::getInstance()->load() << std::endl;
}