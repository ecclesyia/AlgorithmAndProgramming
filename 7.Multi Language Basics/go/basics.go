package main

import "fmt"

func main() {
    // 1. Output
    fmt.Println("Hello from Go!")

    // 2. Variables (short declaration operator :=)
    score := 85
    average := 78.5

    // 3. Conditionals (no parentheses around condition)
    if score >= 80 {
        fmt.Println("Result: Excellent!")
    } else {
        fmt.Println("Result: Try harder!")
    }

    // 4. Loops (Go only has 'for' loop, no 'while' loop)
    fmt.Print("For Loop output: ")
    for i := 1; i <= 5; i++ {
        fmt.Printf("%d ", i)
    }
    fmt.Println()
    
    // Formatting variables in print
    _ = average // Silence unused variable error in Go compilation
}
