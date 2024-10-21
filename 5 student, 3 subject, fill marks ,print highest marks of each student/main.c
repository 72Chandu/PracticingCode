#include<stdio.h>
int main(){
    int a[6][4];// Increased array size by 1 for both dimensions to fix index out of bounds error
    for(int i=1;i<=5;i++){//taking of marks
         printf("student%d\n",i);
        for(int j=1;j<=3;j++){
            printf("subject%d: ",j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++){
        int max=a[i][1];// Initialize max with the first subject's marks
        for(int j=2;j<=3;j++){
            if(a[i][j]>max){
            max=a[i][j];
            }
        }
        printf("max marks of student%d is:%d \n",i,max);
    }
    return 0;
}