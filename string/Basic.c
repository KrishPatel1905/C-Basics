#include <stdio.h>
int main() {
    int choice;
    int total = 0;

    printf("Ashaben Restaurant.\n");
    printf("Welcome to Foodies Restaurant!\n");
    printf("Here is the menu:\n");
    printf("1. Dosa - ₹150\n");
    printf("2. parotha - ₹200\n");
    printf("3. coffe - ₹120\n");
    printf("4. Sandwich - ₹100\n");
    printf("5. Thepala - ₹80\n");
    printf("Enter '0' to finish ordering.\n");

    do {
        printf("\nEnter your choice (1-5, or 0 to finish): ");
        scanf("%d", &choice); // Take input for the choice

        switch (choice) {
            case 1:
                total += 150;
                printf("You added a Burger (₹150). Total so far: ₹%d\n", total);
                break;
            case 2:
                total += 200;
                printf("You added a Pizza (₹200). Total so far: ₹%d\n", total);
                break;
            case 3:
                total += 120;
                printf("You added Pasta (₹120). Total so far: ₹%d\n", total);
                break;
            case 4:
                total += 100;
                printf("You added a Sandwich (₹100). Total so far: ₹%d\n", total);
                break;
            case 5:
                total += 80;
                printf("You added French Fries (₹80). Total so far: ₹%d\n", total);
                break;
            case 0:
                printf("Order completed. Calculating total...\n");
                break;
            default:
                printf("Invalid choice. Please choose a valid menu item.\n");
        }
    } while (choice != 0);

    printf("\nYour final bill is: ₹%d\n", total);
    printf("Thank you for visiting Foodies Restaurant! Please come again.\n");

    return 0;
}
