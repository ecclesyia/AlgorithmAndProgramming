#include <stdio.h>

// Recursive Factorial with console indent trace (Call Stack simulation)
long long factorial(int n, int depth) {
    // Indent based on depth
    for (int i = 0; i < depth; i++) printf("  ");
    printf("factorial(%d) called\n", n);

    // 1. Base Case
    if (n <= 1) {
        for (int i = 0; i < depth; i++) printf("  ");
        printf("factorial(%d) base case reached. Returning 1.\n", n);
        return 1;
    }

    // 2. Recursive Case
    long long result = n * factorial(n - 1, depth + 1);

    for (int i = 0; i < depth; i++) printf("  ");
    printf("factorial(%d) returning %lld\n", n, result);
    return result;
}

// Recursive Fibonacci (exponential branching: O(2^n))
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("--- C Recursion stack trace ---\n");
    int num = 4;
    long long fact_res = factorial(num, 0);
    printf("Result: %d! = %lld\n", num, fact_res);

    int fib_num = 5;
    printf("\nFibonacci number at position %d: %d\n", fib_num, fibonacci(fib_num));

    return 0;
}
