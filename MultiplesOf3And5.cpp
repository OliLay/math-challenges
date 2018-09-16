#include <iostream>

// Problem 1 (https://projecteuler.net/problem=1)
int multipleOf3And5() {
    int result = 0;
    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }

    std::cout << "Wert ist: " << result;

    return result;
}