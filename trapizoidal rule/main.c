/*
intrigation of f(x) from a to b= h[(y0+yn)/2 + y1 +y2 + y3+ ....yn-1)]
ex: f(x)=\/x  a=2 b=7  , n=10   h=(7-2)/10=0.5
 x1=2           y1=f(2)=1/2
 x2=2+0.5       y2=f(2.5)=1/2.5
 x3=2.5+0.5     y3=f(3)=1/3
 
 xn=a+h*n       yn=f(a+h*n)=1/n;
*/
#include<stdio.h>
#include<math.h>
#define f(x) 1/x 
int main(){
    int n;
    printf("enter the no of subinterval:");
    scanf("%d", &n);
    
    float a, b, x;
    printf("enter the intial limits:");
    scanf("%f", &a);
    printf("enter the final limits:");
    scanf("%f", &b);
    
    float h=(b-a)/n;
    float integral=(f(a)+f(b))/2; // sum of first ans last term
    for(int i=1;i<n;i++){
        x=a+i*h;
        integral=integral+f(x);
        printf("x%d=%f   y%d=%f\n",i,x,i,integral);
    }
    integral=integral*h;
    printf("value=%f", integral);
    
    
}