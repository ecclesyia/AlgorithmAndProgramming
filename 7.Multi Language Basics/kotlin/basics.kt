fun main() {
    // 1. Output
    println("Hello from Kotlin!")

    // 2. Variables
    // var -> mutable (can change), val -> read-only (constant)
    var score = 85
    val average = 78.5

    // 3. Conditionals
    if (score >= 80) {
        println("Result: Excellent!")
    } else {
        println("Result: Try harder!")
    }

    // 4. Loops
    print("For Loop output: ")
    for (i in 1..5) { // Range 1 to 5 inclusive
        print("$i ")
    }
    println()
}
