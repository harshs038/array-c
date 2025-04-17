#include<stdio.h>
int main(){
   int n ;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter the element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter the number of rotations : ");
    scanf("%d", &k);
    k = k % n; // To handle cases where k > n
    int rotatedArr[n];
    for(int i = 0 ; i < n ; i++){
        rotatedArr[i] = arr[(i + k) % n];
    }
    printf("Rotated array: ");
    for(int i = 0 ; i < n ; i++){
        printf("%d ", rotatedArr[i]);
    }


    return 0;
}