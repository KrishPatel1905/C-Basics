#include <stdio.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100


int bookIDs[MAX_BOOKS];
char bookTitles[MAX_BOOKS][MAX_TITLE_LENGTH];
int bookCount = 0;

// Function prototypes
void addBook();
void displayBooks();

int main() {
    int choice;

    while (1) {
        printf("\n========== Library Management System ==========\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            addBook();
        } else if (choice == 2) {
            displayBooks();
        } else if (choice == 3) {
            printf("Exiting the program. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}


void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }

    printf("\nEnter Book ID: ");
    scanf("%d", &bookIDs[bookCount]);
    getchar(); 

    printf("Enter Book Title: ");
    gets(bookTitles[bookCount]); 

    bookCount++;
    printf("Book added successfully!\n");
}


void displayBooks() {
    if (bookCount == 0) {
        printf("\nNo books in the library.\n");
        return;
    }

    printf("\n========== List of Books ==========\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d, Title: %s\n", bookIDs[i], bookTitles[i]);
    }
}
