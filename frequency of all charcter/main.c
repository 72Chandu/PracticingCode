#include<stdio.h>
#include<string.h>
int main(){
char str[100];
gets(str);
puts(str);
int len=strlen(str);
int i,j,k,count=0;
for(i=0;i<len;i++){
    char ch=str[i];
    for(j=0;j<len;j++){
        if(ch==str[j]){
            count++;
        for(k=j;k<len;k++){
            str[k]=str[k+1];
        }
        len--;
        str[len]='\n';
        j--;
        }
    }
    printf("no of char %c equal to %d",ch,count);
    i--;
    count=0;
}
}