#include <iostream>
#include <vector>
#include <string>

#include "./chap_1/chap_1.hpp"
#include "./chap_2/chap_2.hpp"
#include "./algorithm/intReverse.hpp"

int main() {
    int a = 832;
    if (isPrime(a) && isPrime(intReverse(a)) ) {
        std::cout << a << std::endl;
    }
    pointAndRef();
    constExample();
    return 0;
}
