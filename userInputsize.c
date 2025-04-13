#include<stdio.h>
int main(){
    int n ;
    printf("Enter the size of Array :");
    scanf("%d", &n);
    int arr[n];
    for(int i =0 ; i<=n-1 ; i++){
        scanf("%d", &arr[i]);

    }
    for(int i =0 ; i<=n-1 ; i++){
        printf("%d you entered : %d\n",i+1 , arr[i]);
        
    }
    return 0;
}