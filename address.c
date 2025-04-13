#include<stdio.h>
int main(){
   int arr[5]= {2,4,6,8,1};
   for(int i = 0 ; i <5 ; i++){
    printf("%p\n",&arr[i]);
   }
 
    return 0;
}