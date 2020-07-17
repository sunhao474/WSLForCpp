#include <iostream>
#include <vector>
#include <string>

<<<<<<< HEAD
using namespace std;

int main() {
    vector<string> msg{"hello", "C++", "world"};
    for (const string& word: msg) {
        cout << word << " ";
    }
    cout << endl;
    
=======
#include "./chap_1/chap_1.hpp"

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

int main() {
    int a = 832;
    if (isPrime(a) && isPrime(intReverse(a)) ) {
        std::cout << a << std::endl;
    }
>>>>>>> 4df1453a0383749e5c1f1590699fc1e124e4ab07
    return 0;
}
