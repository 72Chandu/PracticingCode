#include <stdio.h>
#include <string.h>
struct copy{
    char f_name[100];
    char l_name[100];
    int idno;
    double grade;
};
int main(){
    struct copy c1 = {"chandu", "yadev", 12, 23.43};
    struct copy c2;
    c2 = c1;
    printf("%s ", c1.f_name);
    printf("%s\n", c1.l_name);
    printf("%d\n", c1.idno);
    printf("%5.3f\n", c1.grade);

    printf("%s ", c2.f_name);
    printf("%s\n", c2.l_name);
    printf("%d\n", c2.idno);
    printf("%5.3f\n", c2.grade);
    //modefication of the  value
    strcpy(c1.f_name,"dip");//we can modefify all the value same as it done for f_name,l_name
    strcpy(c1.l_name,"raj");

    printf("%s ", c1.f_name);
    printf("%s\n", c1.l_name);
    printf("%d\n", c1.idno);
    printf("%5.3f\n", c1.grade);
    //modification will not apply on c2
    printf("%s ", c2.f_name);
    printf("%s\n", c2.l_name);
    printf("%d\n", c2.idno);
    printf("%5.3f\n", c2.grade);
    return 0;
}
