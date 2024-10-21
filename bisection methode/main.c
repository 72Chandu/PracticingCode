#include <stdio.h>
#include <math.h>
double f(double x) {// Define the function f(x) = x^3 - 9x + 1
    return x*x*x - 9*x + 1;
}
int main() {
    double a = 2.0, b = 3.0, c;
    double tolerance = 1e-6; // Define a tolerance level for stopping
    int max_iterations = 1000, iterations = 0;
    if (f(a) * f(b) >= 0) {// Check if initial interval is valid
        printf("The function does not change sign over the interval [%lf, %lf].\n", a, b);
        printf("Please provide a valid interval where the function changes sign.\n");
        return -1;
    }// Bisection method
    while ((b - a) >= tolerance && iterations < max_iterations) {
        c = (a + b) / 2.0;// Calculate the midpoint
        if (fabs(f(c)) <= tolerance) { // Check the value of the function at the midpoint
            break; // Root found with sufficient precision
        }
        if (f(a) * f(c) < 0) { // Decide the subinterval to use for the next step
            b = c; // Root is in the left subinterval
        } else {
            a = c; // Root is in the right subinterval
        }
        printf("Iteration %d: a = %lf, b = %lf, c = %lf, f(a) = %lf, f(b) = %lf, f(c) = %lf\n",iterations, a, b, c, f(a), f(b), f(c));
        iterations++;
    }
    printf("The root found at x = %lf after %d iterations.\n", c, iterations);
    printf("f(x) = %lf\n", f(c)); // Should be close to 0
    return 0;
}
