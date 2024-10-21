#include <stdio.h>

// calculating u mentioned in the formula
float u_cal(float u, int n) {
	float temp = u;
	for (int i = 1; i < n; i++)
		temp = temp * (u - i);
	return temp;
}

// calculating factorial of given number n
int fact(int n) {
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}

// Function to calculate forward difference table
void calculateForwardDifferenceTable(float x[], float y[][10], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++)
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
	}
}

// Function to display the forward difference table
void displayForwardDifferenceTable(float x[], float y[][10], int n) {
	printf("Forward Difference Table:\n");
	for (int i = 0; i < n; i++) {
		printf("%4.2f\t", x[i]);
		for (int j = 0; j < n - i; j++)
			printf("%4.2f\t", y[i][j]);
		printf("\n");
	}
}

// Function to interpolate using Newton Forward Interpolation
float interpolateNewtonForward(float x[], float y[][10], int n, float value) {
	float sum = y[0][0];
	float u = (value - x[0]) / (x[1] - x[0]);
	for (int i = 1; i < n; i++) {
		sum = sum + (u_cal(u, i) * y[0][i]) / fact(i);
	}
	return sum;
}

int main() {
	int n;
	printf("Enter the number of data points: ");
	scanf("%d", &n);

	float x[n], y[n][10];

	printf("Enter the values of x and y for each data point:\n");
	for (int i = 0; i < n; i++) {
		printf("Enter x[%d]: ", i);
		scanf("%f", &x[i]);
		printf("Enter y[%d]: ", i);
		scanf("%f", &y[i][0]);
	}

	calculateForwardDifferenceTable(x, y, n);
	displayForwardDifferenceTable(x, y, n);

	float value;
	printf("Enter the value to interpolate at: ");
	scanf("%f", &value);

	float result = interpolateNewtonForward(x, y, n, value);
	printf("\nValue at %.2f is %.2f\n", value, result);

	return 0;
}

