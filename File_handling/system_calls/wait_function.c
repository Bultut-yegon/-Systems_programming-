#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
    int id = fork(),n,status;
    if(id==0){
        n=1;
    }
    else{
        n=7;
    }
    if(id!=0){
        wait(&status);
    }
    for(int i=1;i<=n+3;i++){
        printf("%d",i);
        fflush(stdout);
    }
}