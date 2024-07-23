#include <stdio.h>
#include <unistd.h>
int main(){
    int id=fork();
    printf("The  process\n");
    // if(id==0){
    //     printf("The child process\n");}
    // else{
    //     printf("The main process\n");

    //     }

    if(id!=0){
        fork();
    }
    
    return 0;
}