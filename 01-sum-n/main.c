#include <stdio.h>
#include <stdlib.h>

/*
 * Function: sum
 * -------------------------
 *  Sums the first n numbers
 *
 *  n: the number of numbers to sum
 *
 *  returns: the sum of the first n numbers
 */
int sum(int n)
{
    // Initialize the result to 0
    int result = 0;

    // Initialize the counter to 0
    int i = 0;

    // Loop until i is greater than n
    while (i <= n)
    {
        // Add i to the result
        result += i;

        // Increment the counter
        i++;
    }

    // Return the result
    return result;
}

int main()
{
    // Call the sum function and print the result to the console
    printf("The sum of the first 10 numbers is %d", sum(10));

    // Return 0 to indicate successful execution
    return 0;
}
