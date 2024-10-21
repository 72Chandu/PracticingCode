#include <stdio.h>
#include<string.h>
struct student{
    int rollno;#include<stdio.h>
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
    char name[100];
    int marks[3];//for 3 subject
};
int main(){
    struct student s[2];//calculate for onley tow student
    int i, j;
    for (i = 0; i < 2; i++){
        printf("student details %d:\n", i + 1);
        printf("roll number:"); 
        scanf("%d", &s[i].rollno);
        printf("name:");
        scanf("%s", &s[i].name);
        printf("marks for 3 subject:\n");
        for(j=0;j<3;j++){
            printf("subject%d=",j+1);
            scanf("%d",&s[i].marks[j]);
        }
        printf("\n");
    }
    printf("result \n");
    for (i = 0; i < 2; i++){
        printf("roll no:%d\n", s[i].rollno);
        printf("name:%s\n", s[i].name);
        int total = 0;
        for (j = 0; j < 3; j++)
        {
            total += s[i].marks[j];
        }
        printf("total marks:%d\n", total);
        printf("\n");
    }
    return 0;
}
