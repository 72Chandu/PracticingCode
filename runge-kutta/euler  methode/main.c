#include<stdio.h>
#include<math.h>
float dydx(float x, float y) {
    return ((y*y - x*x)/ (y*y+x*x));
}
float rungekutta(float x0, float y0, float x, float h){
    int n=(int)((x-x0)/h);
    float k1, k2, k3, k4;
    float y=y0;
    for(int i=1;i<=n;i++){
    k1=h*dydx(x0, y);
    k2=h*dydx(x0+0.5*h, y+0.5*k1);
    k3=h*dydx(x0+0.5*h, y+0.5*k2);
    k4=h*dydx(x0+ h, y+ k3);
    y= y+ (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);
    x0=x0+h;
    }
    return y;
}
void eular(float x0, float y, float h, float x){
   // float temp=-1;
    while(x0<x){
      // temp=y;
       y=y+ h*dydx(x0, y);
       x0=x0+h;
    }
    printf("approximate solution at x=%f is=%f\n", x,y);
}
int main(){
     float x0=0, y=1, x=2, h=0.2;
     printf("the value of y at x is : %f \n", rungekutta(x0, y, x, h));
     eular(x0, y, h, x);
     return 0;
}
