#include <iostream>
#include <string>

int main() {
    // 1. Output
    std::cout << "Hello from C++!" << std::endl;

    // 2. Variables
    int age = 19;
    double gpa = 3.75;
    char grade = 'A';
    std::string name = "Budi";

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << " | GPA: " << gpa << " | Grade: " << grade << std::endl;

    // 3. Input
    std::cout << "Enter a new age: ";
    std::cin >> age;

    std::cout << "Updated Age: " << age << std::endl;

    return 0;
}
