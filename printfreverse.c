#include <stdio.h>

int main() {
    int arr[10];

    // Taking input from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the   reverse array using a loop
    printf("You entered:\n");
    for (int i = 9; i>=0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
