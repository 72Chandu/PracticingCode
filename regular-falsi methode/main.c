#include <stdio.h>
#include <math.h>
double f(double x) {  // Example function: f(x) = x^2 - 2*x + 1
    return (x*x*x - 2*x + 1);
}
// Regula Falsi method implementation
double regulaFalsi(double xL, double xH, double tol, int maxIter) {
    if (f(xL) * f(xH) >= 0) {
        printf("Incorrect initial guesses.\n");
        return -1;
    }
    double mid= xL;  // Initialize result
    for (int i = 0; i < maxIter; i++) {
        mid =( xL - ((f(xL)*(xH-xL) )  / ( f(xH) - f(xL) )) ); // Find the point that touches the x-axis
        if (fabs(f(xL)) < tol) { // Check if the found point is a root
            break;
        }
        else if (f(xH) * f(xL) < 0) { // Decide the side to repeat the steps
            xH = mid;
        }
        else {
            xL = mid;
        }
    }
    return mid;
}
int main() {
    double xL = -200, xH = 300;  // Initial guesses
    double e = 0.001;        // Tolerance
    int maxIter = 1000000;        // Maximum number of iterations
    double root = regulaFalsi(xL, xH, e, maxIter);
    if (root != -1) {
        printf("The root is: %lf\n", root);
    }

    return 0;
}

