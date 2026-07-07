import java.util.Scanner;

public class basics {
    public static void main(String[] args) {
        // 1. Output
        System.out.println("Hello from Java!");

        // 2. Variables
        int age = 19;
        double gpa = 3.75;
        char grade = 'A';
        String name = "Budi";

        System.out.println("Name: " + name);
        System.out.println("Age: " + age + " | GPA: " + gpa + " | Grade: " + grade);

        // 3. Input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a new age: ");
        age = scanner.nextInt();

        System.out.println("Updated Age: " + age);
        scanner.close();
    }
}
