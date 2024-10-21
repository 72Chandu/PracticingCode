#include<stdio.h>
struct height{
    int feet;
    int inch;
};
int main(){
    struct height h1,h2,result;
    printf("enter the first height");
    printf("feet: ");
    scanf("%d",&h1.feet);
    printf("inches: ");
    scanf("%d",&h1.inch);

    printf("enter the second height");
    printf("feet: ");
    scanf("%d",&h2.feet);
    printf("inches: ");
    scanf("%d",&h2.inch);
    result.feet=h1.feet+h2.feet;
    result.inch=h1.inch+h2.inch;

    if(result.inch>=12){
        result.feet+=result.inch/12;
        result.inch%=12;
    }
    printf("\n total height:%d feet %d inches\n",result.feet,result.inch);
    return 0;

}