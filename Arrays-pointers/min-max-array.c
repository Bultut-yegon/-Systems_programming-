#include <stdio.h>
#include <string.h>

void minMaxValues(int arr[],int len,int *min,int *max){
    *min = *max=arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]<*min)
        *min=arr[i];
        if(arr[i]>*max)
        *max=arr[i];
    }
}
int main(){
int array[]={17,45,22,13,56,78,90,56,392},min,max,i,len=sizeof(array)/sizeof(array[0]);

minMaxValues(array,len,&min,&max);
printf("Minimum value in the array is: %d\n and maximum value is: %d",min,max);
return 0;

}