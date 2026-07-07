const readline = require('readline');

// 1. Output
console.log("Hello from JavaScript!");

// 2. Variables
let age = 19;
const gpa = 3.75;
const grade = 'A';
const name = "Budi";

console.log("Name: " + name);
console.log(`Age: ${age} | GPA: ${gpa} | Grade: ${grade}`);

// 3. Input
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Enter a new age: ', (answer) => {
    age = parseInt(answer);
    console.log("Updated Age: " + age);
    rl.close();
});
