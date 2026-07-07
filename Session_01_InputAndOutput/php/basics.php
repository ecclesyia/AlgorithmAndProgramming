<?php
// 1. Output
echo "Hello from PHP!\n";

// 2. Variables (prefixed with $)
$age = 19;
$gpa = 3.75;
$grade = 'A';
$name = "Budi";

echo "Name: $name\n";
echo "Age: $age | GPA: $gpa | Grade: $grade\n";

// 3. Input
echo "Enter a new age: ";
$input = fgets(STDIN);
$age = (int)$input;

echo "Updated Age: $age\n";
?>
