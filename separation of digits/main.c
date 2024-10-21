#include<stdio.h>
int main(){
    int first,second,third,fourth,fivth;
    int n=12345;
    first=n/10000;
     printf("%d\n",first);
    n=n%10000;
    printf("%d\n",n);
    second=n/1000;
     printf("%d\n",second);
    n=n%1000;
    printf("%d\n",n);
    third=n/100;
     printf("%d\n",third); 
    n=n%100;
    printf("%d\n",n);
    fourth=n/10;
     printf("%d\n",fourth);
    n=n%10;
    printf("%d\n",n);
    fivth=n%10;
    printf("%d",fivth);
    
}