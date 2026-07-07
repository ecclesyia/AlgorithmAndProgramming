use std::io::{self, Write};

fn main() {
    // 1. Output
    println!("Hello from Rust!");

    // 2. Variables
    let mut age: i32 = 19;
    let gpa: f64 = 3.75;
    let grade: char = 'A';
    let name: &str = "Budi";

    println!("Name: {}", name);
    println!("Age: {} | GPA: {} | Grade: {}", age, gpa, grade);

    // 3. Input
    print!("Enter a new age: ");
    io::stdout().flush().unwrap(); // Flush output buffer so prompt displays immediately

    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    
    // Parse input string to integer
    age = input.trim().parse().unwrap_or(age);

    println!("Updated Age: {}", age);
}
