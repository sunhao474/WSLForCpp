#include <iostream>
#include "./intReverse.hpp"
#define MAX 100

int intReverse(const int& value) {
    int oper = value;
    char temp[MAX];
    if (oper < 0) return -1;

    int i = 0;
    while (oper > 0) {
        temp[i] = oper % 10 + '0';
        oper = oper / 10;
        i++;
    }

    temp[i] = '\0';

    int result = std::atoi(temp);

    return result;
}

bool isPrime(const int& value) {
    for (int i = 2; i < value -1; i++) {
        if (value % i == 0) return false;
    }

    return true;
}