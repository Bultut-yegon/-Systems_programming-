#include <stdio.h>
void main(){
//int arr[8];
//arr[8]={100,23,45,67,89,81,28,44};
int array[4]={1,2,3,4};//array initialisation
array[2]=77;
int count;
for (count=0;count<4;count++){
printf("Elements of the first array is %d\n",array[count]);
}
}
