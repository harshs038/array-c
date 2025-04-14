// in this code , if the element is even then it will be multiplied by 2 and if the element is odd then it will be added by 10
// and then it will print the new array
#include<stdio.h>
int main(){
     int n ; 
     printf("Enter the size of array :");
     scanf("%d", &n) ;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        printf("Enter the element %d : ", i+1) ;
        scanf("%d", &arr[i]) ;
    }
    for(int i = 0 ; i < n ; i++){ 
        if(arr[i] %2==0){
            arr[i] = arr[i] * 2 ;
        }
        else{
            arr[i] = arr[i] + 10;
        }
        printf(" %d ", arr[i]) ;
    }
    
    return 0 ;
}