// Write a C code to return 1 if an integer k is in both arrays that are different

// Example:
// If x = [1,4,5,6,2,3], y = [2,3,4,5, 1] and k = 5, 
// then the output is: 1
// If x = [1,4,5,6,2,3], y = [2,3,4,5,1] and k = 6, 
// then the output is: 0

#include <stdio.h>

#define M 6
#define N 5

int main() {
    // Declare the arrays
    int x[M] = {1, 4, 5, 6, 2, 3};
    int y[N] = {2, 3, 4, 5, 1};

    // Declare the search key
    int k = 5;

    // Initialize the result to 0
    int result = 0;

    // Search for k in x
    for (int i = 0; i < M; i++) {
        if (x[i] == k) {
            result = 1;
            break;
        }
    }

    // Search for k in y if it was not found in x
    if (!result) {
        for (int i = 0; i < N; i++) {
            if (y[i] == k) {
                result = 1;
                break;
            }
        }
    }

    // Print the result
    printf("The result is: %d\n", result);

    return 0;
}
