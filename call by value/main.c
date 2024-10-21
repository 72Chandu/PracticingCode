#include<stdio.h>//system created header file /stander header file
void swap(int a,int b){//copy of n1 and n2 to a and b respectively to another memory location
    int c=a;//by changing the value of n1 and n2 it will reflect onely in a & b not in n1 & n2
    a=b;
    b=c;
    printf(" after swaping=%d%d",a,b);
}
int main(){
    int n1=2;//2,5 are actual parameter
    int n2=5;
    printf(" before swaping=%d%d",n1,n2);
    swap(n1,n2);//n1,n2 are formal parameter
    return 0;
}