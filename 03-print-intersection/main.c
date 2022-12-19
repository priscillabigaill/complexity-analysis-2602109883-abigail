// write a c code to print all values that are contained in 
// two different arrays having the zixe of m and n, respectively

// example 
// if x = [1,4,5,6,2,3] and y = [2,3,4,5,1]
// then the output is 1,4,5,2,3

#include <stdio.h>
#include <stdlib.h>

#define M 6
#define N 5

/*
 * Function: print_common_values
 * -------------------------
 *  Prints the values that are contained in both x and y
 *
 *  x: the first array
 *  y: the second array
 *  m: the size of x
 *  n: the size of y
 */
void print_common_values(int x[M], int y[N], int m, int n)
{
    // Iterate over the elements of x
    for (int i = 0; i < m; i++)
    {
        // Iterate over the elements of y
        for (int j = 0; j < n; j++)
        {
            // Check if the element of x is equal to the element of y
            if (x[i] == y[j])
            {
                // Print the element of x
                printf("%d, ", x[i]);
            }
        }
    }
    // Print a newline character
    printf("\n");
}

int main()
{
    int x[M] = {1, 4, 5, 6, 2, 3};
    int y[N] = {2, 3, 4, 5, 1};

    // Call the print_common_values function
    print_common_values(x, y, M, N);

    // Return 0 to indicate successful execution
    return 0;
}

