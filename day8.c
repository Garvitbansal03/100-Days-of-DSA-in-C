#include <stdio.h>

int main() {
    int a, b, i;
    int result = 1;

    printf("Enter two space-separated integers (a and b): ");
    scanf("%d %d", &a, &b);

    for(i = 1; i <= b; i++) {
        result = result * a;
    }

    printf("Result: %d\n", result);

    return 0;
}