#include<stdio.h>
int main(){
    float x[100], y[100];
    int n;
    printf("enter the number of data");
    scanf("%d",&n);
    printf("enter the data");
    for(int i=1;i<=n;i++){
        printf("x[%d]",i);
        scanf("%f",&x[i]);
        printf("y[%d]",i);
        scanf("%f",&y[i]);
    }
    float point;
    printf("enter the interpolation point=");
    scanf("%f",&point);
    float ans=0;
    for(int i=1;i<=n;i++){
        int p=x[i];
        for(int j=1;j<=n;j++){
            if(i!=j){
             p=p*(point-y[j])/(y[i]-y[j]);
          }
        }
        ans+=p;
    }
    printf("interpolation value at %f is %.3f",point, ans);
}

