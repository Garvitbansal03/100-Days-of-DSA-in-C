#include <stdio.h>

int main() {
    int m, n;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check if square matrix
    if(m != n) {
        printf("Not a Symmetric Matrix\n");
        return 0;
    }

    // Check symmetry
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j] != A[j][i]) {
                printf("Not a Symmetric Matrix\n");
                return 0;
            }
        }
    }

    // If all elements match
    printf("Symmetric Matrix\n");

    return 0;
}