#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[1000];
    FILE*ptr;
    char fname[100]="file.text";
    ptr=fopen(fname,"w");
    if(ptr==NULL){
        printf("file is not created");
        exit(1);
    }
    printf("enter the sentance to file");
    fgets(str,sizeof str,stdin);
    fprintf(ptr,"%s",str);
    fclose(ptr);
    
}