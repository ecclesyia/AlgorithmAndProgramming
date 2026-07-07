using System;

class Program {
    static void Main() {
        // 1. Output
        Console.WriteLine("Hello from C#!");

        // 2. Variables
        int score = 85;
        double average = 78.5;

        // 3. Conditionals
        if (score >= 80) {
            Console.WriteLine("Result: Excellent!");
        } else {
            Console.WriteLine("Result: Try harder!");
        }

        // 4. Loops
        Console.Write("For Loop output: ");
        for (int i = 1; i <= 5; i++) {
            Console.Write(i + " ");
        }
        Console.WriteLine();
    }
}
