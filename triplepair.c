#include<stdio.h>
int main(){
        int n ; 
        printf("Enter the size of array :");
        scanf("%d", &n) ;
    int x ; 
    printf("Enter value to check pairs :") ;
    scanf("%d", &x) ;
    int arr[n];
  int totalPairs = 0 ;
  for(int i = 0 ; i < n ; i++){
        printf("Enter the element %d : ", i+1) ;
        scanf("%d", &arr[i]) ;
    }
   
  
 for (int i = 0 ; i < n ; i++){
     for (int j = i+1 ; j < n ; j++){
            for (int k = j+1 ; k < n ; k++){
            if(arr[i] + arr[j] + arr[k] == x){
                totalPairs++ ;
                printf("Pair found : %d + %d + %d = %d\n", arr[i], arr[j], arr[k], x) ;
            }
            }
     } 
     
    }
    printf("Total pairs : %d\n", totalPairs) ;
    return 0 ;
}