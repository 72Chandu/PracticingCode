#include<stdio.h>
#include<string.h>
struct student{
char f_name[100];
char l_name[100];
int id_no;
double grade;
};
int main(){
    struct student s1,s2,s3;
    strcpy(s1.f_name,"chandu");//assineing the value to s1
    strcpy(s1.l_name,"yadev");
    s1.id_no=45;
    s1.grade=2.5;
    // S1.f_name =  "Rosa";  throw a error message
  // [Error] incompatible types in assignment of 'const char [5]' to 'char [20]'
  // So use strcpy() function to assign the value to s1.f_name, s1.l_name
    strcpy(s2.f_name,"digamber");//assine value to s2
    strcpy(s2.l_name,"kumar");
    s2.id_no=38;
    s2.grade=65.54;
    printf("%s ",s1.f_name);//printing s1
    printf("%s\n",s1.l_name);
    printf("id=%d\n",s1.id_no);
    printf("grade=%5.2f\n",s1.grade);

    printf("%s ",s2.f_name);//printing s2
    printf("%s\n",s2.l_name);
    printf("id=%d\n",s2.id_no);
    printf("grade=%5.2f\n",s2.grade);

    return 0;
}
