#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    // Taking input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Printing the n-th Fibonacci number
    printf("The %dth Fibonacci number is: %d\n", n, fib(n));

    return 0;
}