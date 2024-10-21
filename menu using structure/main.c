#include<stdio.h>
#include<stdlib.h>
#define n 3
struct employee{
    int empid;
    char empname[50];
    float salary;
};
struct employee emp[n];//globally declaration of structure 
void searchById(int empId){
    int found=0;
    for(int i=0;i<n;i++){
        if(emp[i].empid==empId){
            printf("employee ID: %d \n",emp[i].empid);
            printf("employee name: %s \n",emp[i].empname);
            printf("employee salary: %f \n",emp[i].salary);
            found=1;
            break;
        }
    }
    if(!found) printf("employee with id %d not found \n",empId);
}
void displayAll(){
    for(int i=0;i<n;i++){
        printf("employee ID: %d \n",emp[i].empid);
        printf("employee name: %s \n",emp[i].empname);
        printf("employee salary: %f \n",emp[i].salary);
    }
}
 void displaysalaryAbove10000(){
     int found=0;
     for(int i=0;i<n;i++){
         if(emp[i].salary>10000){
             printf("employee ID: %d \n",emp[i].empid);
             printf("employee name: %s \n",emp[i].empname);
             printf("employee salary: %f \n",emp[i].salary);
             found=1;
         }
     }
     if(!found) printf("non of them have this salary");
 }
int main(){
    int choice,empId;
   for(int i=0;i<n;i++){
        printf("enter employee no %d ID\n: ",i+1);
        scanf("%d",&emp[i].empid);
        printf("enter employee no %d name\n",i+1);
        scanf("%s",&emp[i].empname);
        printf("enter the employee no %d salary\n",i+1);
        scanf("%f",&emp[i].salary);
        }
        printf("entert the operation which you want");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter employee ID to search:");
            scanf("%d",&empId);
            searchById(empId);
            break;
            case 2: displayAll();
            break;
            case 3:displaysalaryAbove10000();
            break;
            default:printf("invalid choice");
        }
}
