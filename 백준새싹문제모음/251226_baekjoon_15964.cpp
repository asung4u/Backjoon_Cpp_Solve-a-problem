#include <iostream>

long long calOper(long long A, long long B) {

    return (A+B)*(A-B);
}


int main() {

    long long A, B;

    std::cin >> A >> B;

    std::cout << calOper(A, B);

    return 0;
}