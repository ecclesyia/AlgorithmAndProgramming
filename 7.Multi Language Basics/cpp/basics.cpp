#include <iostream>

int main() {
    // 1. Output (using streams)
    std::cout << "Hello from C++!" << std::endl;

    // 2. Variables
    int score = 85;
    double average = 78.5;

    // 3. Conditionals
    if (score >= 80) {
        std::cout << "Result: Excellent!" << std::endl;
    } else {
        std::cout << "Result: Try harder!" << std::endl;
    }

    // 4. Loops
    std::cout << "For Loop output: ";
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
