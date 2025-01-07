#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &number);

    printf("Multiplication Table for %d:\n", number);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
