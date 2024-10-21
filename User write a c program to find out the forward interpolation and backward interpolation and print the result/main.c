#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
double forwardInterpolation(double x0, double x[], double y[], int n) {
    double result = y[0];
    double term = 1;
    for (int i = 1; i < n; i++) {
        term *= (x0 - x[i - 1]) / (x[i] - x[i - 1]);
        result += term * y[i];
    }

    return result;
}

double backwardInterpolation(double x0, double x[], double y[], int n) {
    double result = y[n - 1];
    double term = 1;
    for (int i = n - 2; i >= 0; i--) {
        term *= (x0 - x[i + 1]) / (x[i] - x[i + 1]);
        result += term * y[i];
    }
    return result;
}

int main() {
    // Example data points
    double x[] = {10, 15, 20, 25, 30};
    double y[] = {0.1736, 0.2588, 0.3420, 0.4226, 0.5000};
    int n = sizeof(x) / sizeof(x[0]);
    double x0 = 18; // Value for interpolation

    double forward_result = forwardInterpolation(x0, x, y, n);
    printf("Forward Interpolation at x = %.2f: %.4f\n", x0, forward_result);

    double backward_result = backwardInterpolation(x0, x, y, n);
    printf("Backward Interpolation at x = %.2f: %.4f\n", x0, backward_result);

    return 0;
}
