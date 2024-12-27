#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) { // Base condition
        return 1;
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
