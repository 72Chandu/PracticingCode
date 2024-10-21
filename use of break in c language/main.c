#include<stdio.h>
int main(){
    float x,m,sum,average;
    sum=0;
    for(m=1;m<1000;++m){
        scanf("%f",&x);
        if(x<0)
        break;
        sum+=x;
    }
    average=sum/(float)(m-1);
    printf("%f\n",sum);
    printf("%f",average);
}