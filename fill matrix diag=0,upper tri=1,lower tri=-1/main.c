#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                printf("enter 0: ");
                scanf("%d",&a[i][j]);
            }
            else if(i<j){
                printf("enter 1: ");
                scanf("%d",&a[i][j]);
            }
            else if(i>j){
                printf("enter -1: ");
                scanf("%d",&a[i][j]);
            }
        }
    }printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
}