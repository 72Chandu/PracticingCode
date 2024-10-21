#include <stdio.h>
#include <stdlib.h>
float u_cal(float u, int n) { // Calculation of u mentioned in formula
    float temp = u;
    for (int i = 1; i < n; i++)
        temp = temp * (u + i);
    return temp;
}
int fact(int n) { // Calculating factorial of given n
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    // number of values given
    int n = 5;
    float x[] = { 1891, 1901, 1911, 1921, 1931 };

    // y[][] is used for difference table and y[][0] used for input
    float y[5][5];
    y[0][0] = 46;
    y[1][0] = 66;
    y[2][0] = 81;
    y[3][0] = 93;
    y[4][0] = 101;
    for (int i = 1; i < n; i++) { // Calculating the backward difference table
        for (int j = n - 1; j >= i; j--)
            y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
    }
    for (int i = 0; i < n; i++) {  // Displaying the backward difference table
        for (int j = 0; j <= i; j++)
            printf("%4.2f\t", y[i][j]);
        printf("\n");
    }
    float value = 1925; // Value to interpolate at

    // Initializing u and sum
    float sum = y[n - 1][0];
    float u = (value - x[n - 1]) / (x[1] - x[0]);
    for (int i = 1; i < n; i++) {
        sum = sum + (u_cal(u, i) * y[n - 1][i]) / fact(i);
    }

    printf("\n Value at %.2f is %.2f\n", value, sum);
    return 0;
}
