#include <stdio.h>

int main() {
    int marks[10]; // Declare an array to store marks of 10 students

    // Input marks from the user
    printf("Enter marks of 10 students:\n");
    for(int i = 0; i < 10; i++) {
        printf("Student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    // Check for students scoring less than 35 and print their index
    printf("\nStudents with marks less than 35:\n");
    for(int i = 0; i < 10; i++) {
        if(marks[i] < 35) {
            printf(" Student %d scored %d\n",i+1, marks[i]);
        }
    }

    return 0;
}
