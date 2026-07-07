// 1. Output
print("Hello from Swift!")

// 2. Variables
// var is mutable, let is immutable (constant)
var score = 85
let average = 78.5

// 3. Conditionals (no parentheses around condition)
if score >= 80 {
    print("Result: Excellent!")
} else {
    print("Result: Try harder!")
}

// 4. Loops
print("For Loop output: ", terminator: "")
for i in 1...5 { // 1 to 5 inclusive range
    print("\(i) ", terminator: "")
}
print()
