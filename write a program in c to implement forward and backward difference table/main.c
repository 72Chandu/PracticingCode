#include <stdio.h>
void forwardDifferenceTable(double x[], double y[], double forward[][10], int n) {
    for (int i = 0; i < n; i++) { // Initialize the first column with y values
        forward[i][0] = y[i];
    }
    for (int j = 1; j < n; j++) { // Calculate forward difference table
        for (int i = 0; i < n - j; i++) {
            forward[i][j] = forward[i + 1][j - 1] - forward[i][j - 1];
        }
    }
}
void backwardDifferenceTable(double x[], double y[], double backward[][10], int n) {
    for (int i = 0; i < n; i++) { // Initialize the last column with y values
        backward[i][0] = y[i];
    }
    for (int j = 1; j < n; j++) { // Calculate backward difference table
        for (int i = n - 1; i >= j; i--) {
            backward[i][j] = backward[i][j - 1] - backward[i - 1][j - 1];
        }
    }
}
void displayDifferenceTable(double table[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%.2f\t", table[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Example data points
    double x[] = {1, 2, 3, 4, 5};
    double y[] = {2, 3, 5, 7, 11};
    int n = sizeof(x) / sizeof(x[0]);

    // Initialize arrays for difference tables
    double forward[10][10], backward[10][10];

    printf("Forward Difference Table:\n");
    forwardDifferenceTable(x, y, forward, n);
    displayDifferenceTable(forward, n);

    printf("\n");

    printf("Backward Difference Table:\n");
    backwardDifferenceTable(x, y, backward, n);
    displayDifferenceTable(backward, n);

    return 0;
}
