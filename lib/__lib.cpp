#include "__lib.h"
#include "singleton.h"

void func() {
    *(Singleton<int>::getInstance()) = 10;
}