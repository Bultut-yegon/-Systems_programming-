#include <stdio.h>
int main(){
int num1, num2;
printf("Enter two integers: ");

//check if both inputs are valid integers
if(scanf("%d %d ", &num1, &num2)!=2){
//clear input buffer
while (getchar()!= '\n');
//check for valid input type
printf("Invalid input. Please enter integers only. Try again later.\n");
return 1;}








//scanf("%d %d ", &num1,&num2);
printf("Sum: %d\n", num1+num2);
return 0;
}
