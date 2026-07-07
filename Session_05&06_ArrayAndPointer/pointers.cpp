#include <iostream>

// C++ references (&) allow passing variables by reference without pointer dereference syntax!
void swapCpp(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    // 1. C++ Reference Semantics
    int val = 500;
    int &ref = val; // ref is an alias of val

    std::cout << "--- C++ Reference Semantics ---" << std::endl;
    std::cout << "Value of val: " << val << std::endl;
    std::cout << "Value of ref: " << ref << std::endl;

    ref = 999; // Changing ref changes val!
    std::cout << "Value of val after modifying ref: " << val << std::endl;

    // 2. Swapping using references
    int num1 = 12, num2 = 77;
    std::cout << "\n--- C++ Swap by Reference ---" << std::endl;
    std::cout << "Before: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swapCpp(num1, num2); // Call directly without passing &
    std::cout << "After : num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
