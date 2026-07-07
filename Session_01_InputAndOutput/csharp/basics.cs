using System;

class Program {
    static void Main() {
        // 1. Output
        Console.WriteLine("Hello from C#!");

        // 2. Variables
        int age = 19;
        double gpa = 3.75;
        char grade = 'A';
        string name = "Budi";

        Console.WriteLine("Name: " + name);
        Console.WriteLine($"Age: {age} | GPA: {gpa} | Grade: {grade}");

        // 3. Input
        Console.Write("Enter a new age: ");
        string input = Console.ReadLine();
        age = Convert.ToInt32(input);

        Console.WriteLine("Updated Age: " + age);
    }
}
