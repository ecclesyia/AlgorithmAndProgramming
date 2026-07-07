#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int target = 40;

    std::cout << "--- C++ Standard Library Binary Search ---" << std::endl;

    // std::binary_search returns true/false
    bool found = std::binary_search(numbers.begin(), numbers.end(), target);
    std::cout << "Target " << target << " exists in vector: " << (found ? "Yes" : "No") << std::endl;

    // To get iterator index, use std::lower_bound
    auto it = std::lower_bound(numbers.begin(), numbers.end(), target);
    if (it != numbers.end() && *it == target) {
        std::cout << "Found at index: " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "Not found!" << std::endl;
    }

    return 0;
}
