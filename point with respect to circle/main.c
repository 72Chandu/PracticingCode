#include<stdio.h>
#include<math.h>
int main(){
    float x,y,xc,yc,r,di,p,q;
    printf("enter x,y,xc,yc,r");
    scanf("%f%f%f%f%f",&x,&y,&xc,&yc,&r);
    p=(xc-x)*(xc-x);
    q=(yc-y)*(yc-y);
    di=sqrt(p+q);
    if(di>r){
        printf("point is outside the circle");
    }
    else if(di<r){
        printf("point is inside the circle");
    }
    else if(di==r){
        printf("point is on the circle");
    }
    return 0;
}