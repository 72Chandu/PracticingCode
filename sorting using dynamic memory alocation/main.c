#include<stdio.h>
#include<stdlib.h>
void sortInAccending(int* num,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(num[j]>num[j+1]){
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    int *num;
    printf("enter the number n");
    scanf("%d",&n);
    num=(int*)malloc(n*sizeof(int));//dynamic memeory alocation
    printf("enter the element");
    for(int i=0;i<n;i++){//giving the element to alocated memoey
        scanf("%d",&num[i]);
    }
    sortInAccending(num,n);
    printf("print the number in accending order");
    for(int i=0;i<n;i++){
        printf("%d",num[i]);
    }
    free(num);
    return 0;
    
}
