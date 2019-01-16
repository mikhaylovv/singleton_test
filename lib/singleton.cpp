#include "singleton.h"
#include <atomic>

template<class T>
T * Singleton<T>::getInstance() {
    static Singleton<T> sin;
    return &sin.data;
}

template class Singleton<std::atomic<int>>;