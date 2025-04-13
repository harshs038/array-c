#include<stdio.h>
int main(){

    int n ;
    printf("Enter the size of Array :");
    scanf("%d", &n);
    int sum = 0 ;
    int arr[n];
    for(int i =0 ; i<=n-1 ; i++){
        printf("Enter numbers :");
        scanf("%d", &arr[i]);

    }
    
     for (int i = 0 ; i<n ; i++){
        sum = sum + arr[i];
      
     }
     printf("your sum is : %d", sum );
    return 0;
}