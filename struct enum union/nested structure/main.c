#include<stdio.h>
#include<string.h>
struct subject{
int math;
int science;
int physics;
};
struct student{
    char name[100];
    int grade;
    struct subject marks;
}student;
int main(){
    student;
   //initialising the student marks
   student.marks.math=23;
   student.marks.physics=24;
   student.marks.science=28;
   strcpy(student.name,"chandu");
   student.grade=58;
   printf("name=%s\n",student.name);
   printf("grade=%d\n",student.grade);
   printf("math=%d\n",student.marks.math);
   printf("physics=%d\n",student.marks.physics);
   printf("science=%d\n",student.marks.science);
}