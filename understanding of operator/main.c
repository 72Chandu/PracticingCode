#include<stdio.h>
void main(){
    int a=-5;
    int k=(a++,++a);
    printf("%d",k);
}
// int k = (a++, ++a);: The expression (a++, ++a) uses the comma operator. It first evaluates a++,->-4
//The result of a++ is discarded. Then, ++a pre-increments ->-3 
//The value of ++a becomes the value of k.