#include<stdio.h>
int main(){
    int arr[5] = {2,4,6,8,1};
    char chh[5] = {'A', 'B' , 'C' , 'D' , 'E'};
    arr[4] = 100; //change value of an array
    printf("%d\n", arr[2]);
    printf("%d\n", arr[4]);
    printf("%c\n", chh[4]);
    return 0;
}