//Write a program to enter the marks of 5 students for 6 subjects using 2-dimensional array. Calculate the result of each student and display the percentage.

#include<stdio.h>
#include<conio.h>

int main() {
   
    int marks[5][6];


    int total=0;
    float percentage;


    for (int i = 0; i < 5; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < 6; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }


    printf("Results:\n");
    for (int i = 0; i < 5; i++) {


        for (int j = 0; j < 6; j++) {
            total += marks[i][j];
        }


        percentage = total / 6;


        printf("Student %d: Total = %d, Percentage = %.2f\n", i + 1, total, percentage);
    }

    return 0;
    
}




