#include <stdio.h>
#include <string.h>
int main(){
int a[]={1,2,3,4,5,6,7,8,9,10},min=a[0],max=a[0],i;
for(i=1;i<10;i++){
    if(a[i]<min){
        min=a[i];
    }
    else if(a[i]>max){
        max=a[i];
    }
}
return 0;

}