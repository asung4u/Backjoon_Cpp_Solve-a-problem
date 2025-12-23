#include <iostream>

int main() {

    int N;

    std::cin >> N;

    for(int i = 0; i < 9; i++) {

        std::cout << N << " * " << i+1 << " = " << N * (i+1) << "\n"; 
    }

    return 0;
}

