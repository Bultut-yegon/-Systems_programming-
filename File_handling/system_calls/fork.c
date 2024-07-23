#include <stdio.h>
#include <unistd.h>
int main(){
    int id=fork();
    if(id==0){
        printf("The child process\n");}
    else{
        printf("The main process\n");

        }
    
    return 0;
}