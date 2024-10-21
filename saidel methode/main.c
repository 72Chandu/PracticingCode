#include<stdio.h>
int main(){
    int n = 0, m = 0;
    printf("Enter size of 2d array(Square matrix) : ");
    scanf("%d",&n);
    
    float a[10][10];
    for (int i = 0; i < n; i++) {  //Input values of left side of equations
        for (int j = 0; j < n; j++) {
           printf("Enter values no :( %d , %d ) ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    
    printf("\nEnter Values to the right side of equation\n"); //Input right side of equations
    float b[10];
    for (int i = 0; i < n; i++){
        printf("Enter values no :( %d , %d) \n",i , n);
        scanf("%f",&b[i]);
    }
    
    printf("Enter initial values of x\n");
    float x[10];
    for (int i = 0; i < n; i++){
        printf("Enter values no. :( %d ):",i);
        scanf("%f",&x[i]);
    }
 
    
    printf("\nEnter the no. of iteration : ");
    scanf("%d",&m);
 
    float y[10];
    while (m > 0){
        for (int i = 0; i < n; i++){
            y[i] = (b[i] / a[i][i]);
            for (int j = 0; j < n; j++){
                if (j == i)   continue;
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
            printf("x%d = %f    ", i + 1, y[i]);
        }
        printf("\n");
        m--;
    }
    return 0;
}
/*
1. First input the no of equations and then input the left hand and right hand side of each equation and the no of operations.
2. Then, for each iteration, calculate the values of variables and print them.
3. Iterating through a loop until the condition is met.
4. The value of variables in the last iteration is the final solution of the equation.
25x + 5y + z = 106.8
64x + 8y + z = 177.2
144x + 12y + z = 279.2

Enter size of 2d array(Square matrix) : 3
Enter values no :( 0 , 0 ) 25
Enter values no :( 0 , 1 ) 5
Enter values no :( 0 , 2 ) 1
Enter values no :( 1 , 0 ) 64
Enter values no :( 1 , 1 ) 8
Enter values no :( 1 , 2 ) 1
Enter values no :( 2 , 0 ) 144
Enter values no :( 2 , 1 ) 12
Enter values no :( 2 , 2 ) 1

Enter Values to the right side of equation
Enter values no :( 0 , 3) 
106.8
Enter values no :( 1 , 3) 
177.2
Enter values no :( 2 , 3) 
279.2
Enter initial values of x
Enter values no. :( 0 ):0
Enter values no. :( 1 ):0
Enter values no. :( 2 ):0

Enter the no. of iteration : 4
x1 = 4.272000    x2 = -12.026003    x3 = -191.655975    
x1 = 14.343440    x2 = -68.640518    x3 = -962.569153    
x1 = 56.502869    x2 = -309.551819    x3 = -4142.590820    
x1 = 231.885986    x2 = -1315.114014    x3 = -17331.015625    
m-2
#include <stdio.h> 
 
int main()
{ 
    //a sparse way of representing the equations 
    float eq[3][4];
    int i;
    float x ,y , z; 
    x = 1; y = 1; z = 2; //initial guess
    eq[0][0] = 7/4.0; 
    eq[0][1] = 0; 
    eq[0][2] = 1/4.0; 
    eq[0][3]= -1/4.0;
    eq[1][0] = 21/8.0; 
    eq[1][1] = 4/8.0;
    eq[1][2] = 0;
    eq[1][3]= 1/8.0;
    eq[2][0] = 15/5.0;
    eq[2][1] = 2/5.0;
    eq[2][2] = -1/5.0;
    eq[2][3]= 0;
 
    //10 iterations of gauss-seidel 
    for (i = 0;i < 10; i++)
    {
        x = eq[0][0] + eq[0][2] * y + eq[0][3] * z;
        y = eq[1][0] + eq[1][1] * x + eq[1][3] * z;
        z = eq[2][0] + eq[2][1] * x + eq[2][2] * y;
        printf("Output: \n%f %f %f\n", x, y, z); 
    } 
 
    return 0; 
}
*/