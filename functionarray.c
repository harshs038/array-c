#include<stdio.h>
void fun(int x[]){
    x[0] = 10;
    x[1] = 20;
    return ;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    printf("Before function call : %d\n", arr[0]);
    printf("Before function call : %d\n", arr[1]);
    fun(arr);
    printf("After function call : %d\n", arr[0]);
    printf("Before function call : %d\n", arr[1]);
   


    return 0;
}