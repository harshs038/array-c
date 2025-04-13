#include<stdio.h>
int main(){

    int n ;
    printf("Enter the size of Array :");
    scanf("%d", &n);
    int product = 1 ;
    int arr[n];
    for(int i =0 ; i<=n-1 ; i++){
        printf("Enter numbers :");
        scanf("%d", &arr[i]);

    }
    
     for (int i = 0 ; i<n ; i++){
        product = product * arr[i];
      
     }
     printf("your product is : %d", product );
    return 0;
}