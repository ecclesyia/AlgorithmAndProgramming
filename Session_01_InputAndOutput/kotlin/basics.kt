import java.util.Scanner

fun main() {
    // 1. Output
    println("Hello from Kotlin!")

    // 2. Variables
    var age = 19
    val gpa = 3.75
    val grade = 'A'
    val name = "Budi"

    println("Name: $name")
    println("Age: $age | GPA: $gpa | Grade: $grade")

    // 3. Input
    val scanner = Scanner(System.`in`)
    print("Enter a new age: ")
    age = scanner.nextInt()

    println("Updated Age: $age")
}
