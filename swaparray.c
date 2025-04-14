#include<stdio.h>
void swap(int x[]){
    int temp = x[0];
    x[0] = x[1];
    x[1] = temp;
    return ;
}
int main(){
    int arr[2] = {1,2};
    printf("Before swap  X: %d\n", arr[0]);
    printf("Before swap  Y: %d\n", arr[1]);
   swap(arr) ;
    printf("After swap  X: %d\n", arr[0]);
    printf("After swap  Y: %d\n", arr[1]);
    return 0;
}