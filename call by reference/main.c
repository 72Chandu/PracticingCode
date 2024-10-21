#include<stdio.h>
void swap(int *a,int *b){ //a,b holding the adress of n1,n2
    int c=*a;//c=4
    *a=*b;//intially:-(*a=4, <-*b=9) after:- n1=9
    *b=c;//*y=2->n2=2
    //by changing the value of variable that come from main will change in original memeory of that variable
}
int main(){
    int n1=4;
    int n2=7;
    swap(&n1,&n2);//actually we pass the adress of n1 and n2.also called (pass by adress) 
    //actually we making the copy of adress of(n1,n2) to another  adress
     //through that adress they acess the value inside it by using pointer
    printf("after swapinf=%d %d",n1,n2);
}