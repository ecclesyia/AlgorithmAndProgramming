#include <stdio.h>

// 1. Recursive Factorial with call stack depth trace
// Time Complexity: O(n)
// Space Complexity: O(n) due to stack frames
long long factorial(int n, int depth) {
    // Indent prints to show stack depth
    for (int i = 0; i < depth; i++) printf("  ");
    printf("factorial(%d) called\n", n);

    // Base case
    if (n <= 1) {
        for (int i = 0; i < depth; i++) printf("  ");
        printf("factorial(%d) reached base case, returning 1\n", n);
        return 1;
    }

    // Recursive case
    long long result = n * factorial(n - 1, depth + 1);

    for (int i = 0; i < depth; i++) printf("  ");
    printf("factorial(%d) returning %lld\n", n, result);
    return result;
}

// 2. Recursive Fibonacci
// Time Complexity: O(2^n) - exponential branching!
// Space Complexity: O(n) - depth of recursion tree
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("--- Recursion & Stack Trace Demo ---\n");

    // Test Factorial with stack visualization
    int fact_num = 5;
    printf("\nCalculating factorial(%d):\n", fact_num);
    long long fact_res = factorial(fact_num, 0);
    printf("Result: %d! = %lld\n", fact_num, fact_res);

    // Test Fibonacci branching
    int fib_num = 6;
    printf("\nCalculating fibonacci(%d):\n", fib_num);
    int fib_res = fibonacci(fib_num);
    printf("Result: Fib(%d) = %d\n", fib_num, fib_res);
    printf("Fibonacci Sequence up to %d: ", fib_num);
    for (int i = 0; i <= fib_num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
