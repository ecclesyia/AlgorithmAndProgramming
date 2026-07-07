public class basics {
    public static void main(String[] args) {
        // 1. Output
        System.out.println("Hello from Java!");

        // 2. Variables
        int score = 85;
        double average = 78.5;

        // 3. Conditionals
        if (score >= 80) {
            System.out.println("Result: Excellent!");
        } else {
            System.out.println("Result: Try harder!");
        }

        // 4. Loops
        System.out.print("For Loop output: ");
        for (int i = 1; i <= 5; i++) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}
