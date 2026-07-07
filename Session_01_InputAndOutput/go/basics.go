package main

import "fmt"

func main() {
    // 1. Output
    fmt.Println("Hello from Go!")

    // 2. Variables
    age := 19
    gpa := 3.75
    grade := 'A'
    name := "Budi"

    fmt.Println("Name:", name)
    fmt.Printf("Age: %d | GPA: %.2f | Grade: %c\n", age, gpa, grade)

    // 3. Input
    fmt.Print("Enter a new age: ")
    fmt.Scanf("%d", &age)

    fmt.Println("Updated Age:", age)
}
