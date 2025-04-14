#include<stdio.h>
int main(){
     int n ,  sum =0 , sum1 = 0  ;
     printf("Enter the size of array :");
     scanf("%d", &n) ;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        printf("Enter the element %d : ", i+1) ;
        scanf("%d", &arr[i]) ;
    }
    for(int i =0 ; i<n ; i++){
        if(arr[i] %2==0){
            sum = sum + arr[i] ;
        }
        else{
            sum1 = sum1 + arr[i] ;
        }
       
    }
    printf("Sum of even indices : %d\n", sum) ;
    printf("Sum of odd indices : %d\n", sum1) ;

    return 0;
}