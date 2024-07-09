#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    FILE *fp;

    fp = fopen("sample.txt", "w+");
    fprintf(fp, "Hello System programmers");


    fprintf(fp,"\nWelcome to introduction to file handling"); 

 fclose(fp);
// size_t fread(void *ptr, size_t size, size_t nmemb,FILE *stream);
    return 0;
}
