#include<stdio.h>
#include<string.h>
 typedef struct student{
    char name[100];
    int grade;
}student;
int main(){
    student s1,s2;
    strcpy(s1.name,"chandu");
    s1.grade=123;
    strcpy(s2.name,"rupak");
    s2.grade=234;

    printf("%s",s1.name);
    printf("%d",s1.grade);
    printf("%s",s2.name);
    printf("%d",s2.grade);
}