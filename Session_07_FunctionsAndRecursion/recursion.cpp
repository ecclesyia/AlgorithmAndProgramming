#include <iostream>

// Calculate sum of numbers from 1 to N recursively
int recursiveSum(int n) {
    if (n <= 1) return 1; // Base case
    return n + recursiveSum(n - 1); // Recursive case
}

int main() {
    std::cout << "--- C++ Recursion Sum ---" << std::endl;
    int limit = 10;
    std::cout << "Sum from 1 to " << limit << " = " << recursiveSum(limit) << std::endl;
    return 0;
}
