fn main() {
    // 1. Output
    println!("Hello from Rust!");

    // 2. Variables
    // By default, variables in Rust are immutable. Use 'mut' to make them mutable.
    let score = 85;
    let _average = 78.5; // Prefix with underscore to prevent unused variable warnings

    // 3. Conditionals (no parentheses around condition)
    if score >= 80 {
        println!("Result: Excellent!");
    } else {
        println!("Result: Try harder!");
    }

    // 4. Loops
    print!("For Loop output: ");
    for i in 1..=5 { // 1 to 5 inclusive
        print!("{} ", i);
    }
    println!();
}
