#include <stdio.h>
int main(){
//initializing value k=20 and pointers ptr and q. *ptr=20 because it points to the memory location of the k.
int k=20, *ptr=&k, *q;
//The address of pointer ptr is assigned to q. Therefore, q will have same memory location as ptr and k.
//if we print their values, you will notice that they are the same.
q=ptr;
printf("%d %d %d\n",*q,*ptr,k);// output 20 20 20
//We can also use one variable to change the value of k.
*q=200;
printf("%d %d %d",*ptr,*q,k);// output 200 200 200
return 0;
}