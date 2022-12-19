// Write a code to sum all elements of a MxN matrix
#include <stdio.h>

#define M 3
#define N 2

int main() {
    int matrix[M][N] = {
        {1,2},
        {3,4},
        {5,6}
    };

    int sum = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of the matrix is: %d\n", sum);

    return 0;
}
