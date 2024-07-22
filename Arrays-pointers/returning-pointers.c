#include <stdio.h>

int *returningMid(int array[],int n){
    return &array[n/2];
    }
int main(){

    int array[]={23,56,78,98,789,21};
    int size=sizeof(array)/sizeof(array[0]);
    int *mid=returningMid(array,size);
    printf("%d",*mid);
    return 0;
    // printf("%d", *point);
}