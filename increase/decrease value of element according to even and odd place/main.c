#include<stdio.h>
int main(){
    int a[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        if(a[i]%2==0) a[i]-=2;
        else a[i]+=10;
    }
    for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    
}