/*
find positive root for  x*sinx-1=0 where e=0.001   x0=7
*/
#include<stdio.h>
#include<math.h>
#define f(x) (x*sin(x) -1)
#define f1(x) (sin(x)+x*cos(x))
void newton_raphson(){
    float x0, e=0.001, f, f1 ,x1;
    scanf("%f",&x0);
    do{
        printf("x0=%f  f(x0)=%f \n",x0 , f(x0));
        x1=(x0-(f(x0)/f1(x0)));
        printf("x1=%f  f(x1)=%f \n",x1 , f(x1));
        if(f(x1)==0.0){
            printf("\n x1 is exact root=%f",x1);
            break;
        }else{
            x0=x1;
        }
        
    }while(fabs(f(x1))<e);
     printf("answer is=%f",x1);
}
int main(){
    newton_raphson();
    return 0;
}

