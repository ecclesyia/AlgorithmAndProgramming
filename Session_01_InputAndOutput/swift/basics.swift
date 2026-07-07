// 1. Output
print("Hello from Swift!")

// 2. Variables
var age = 19
let gpa = 3.75
let grade: Character = "A"
let name = "Budi"

print("Name: \(name)")
print("Age: \(age) | GPA: \(gpa) | Grade: \(grade)")

// 3. Input
print("Enter a new age: ", terminator: "")
if let input = readLine(), let newAge = Int(input) {
    age = newAge
}

print("Updated Age: \(age)")
