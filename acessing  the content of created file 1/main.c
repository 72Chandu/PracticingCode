#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr1;
    char str;
    char fname[1000];
    printf("enter the file name");
    scanf("%s",fname);
    ptr1=fopen(fname,"r");
    if(ptr1==NULL){
        printf("no file is exists");
        exit(0);
    }
    str=fgetc(ptr1);
    while(str!=EOF){
        printf("%c",str);
        str=fgetc(ptr1);
    }
    fclose(ptr1);
}