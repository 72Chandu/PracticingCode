#include <stdio.h>

// Calculation of u mentioned in formula
float u_cal(float u, int n) {
	float temp = u;
	for (int i = 1; i < n; i++)
		temp = temp * (u + i);
	return temp;
}

// Calculating factorial of given n
int fact(int n) {
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}

// Function to calculate backward difference table
void calculateBackwardDifferenceTable(float x[], float y[][5], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = n - 1; j >= i; j--)
			y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
	}
}

// Function to display the backward difference table
void displayBackwardDifferenceTable(float y[][5], int n) {
	printf("Backward Difference Table:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)
			printf("%4.2f\t", y[i][j]);
		printf("\n");
	}
}

// Function to interpolate using Newton Backward Interpolation
float interpolateNewtonBackward(float x[], float y[][5], int n, float value) {
	float sum = y[n - 1][0];
	float u = (value - x[n - 1]) / (x[1] - x[0]);
	for (int i = 1; i < n; i++) {
		sum = sum + (u_cal(u, i) * y[n - 1][i]) / fact(i);
	}
	return sum;
}

int main() {
	int n;
	printf("Enter the number of data points: ");
	scanf("%d", &n);
	float x[n], y[n][5];
	printf("Enter the values of x and y for each data point:\n");
	for (int i = 0; i < n; i++) {
		printf("Enter x[%d]: ", i);
		scanf("%f", &x[i]);
		printf("Enter y[%d]: ", i);
		scanf("%f", &y[i][0]);
	}
	calculateBackwardDifferenceTable(x, y, n);
	displayBackwardDifferenceTable(y, n);

	float value;
	printf("Enter the value to interpolate at: ");
	scanf("%f", &value);

	float result = interpolateNewtonBackward(x, y, n, value);
	printf("\nValue at %.2f is %.2f\n", value, result);
	return 0;
}

