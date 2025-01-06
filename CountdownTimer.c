#include <stdio.h>
#include <unistd.h>

int main() {
    int seconds;

    printf("Enter the countdown time in seconds: ");
    scanf("%d", &seconds);

    printf("Starting countdown...\n");

    for (int i = seconds; i > 0; i--) {
        printf(":%d.. \n", i);
        sleep(1);
    }

    printf("Time's up!\n");

    return 0;
}
