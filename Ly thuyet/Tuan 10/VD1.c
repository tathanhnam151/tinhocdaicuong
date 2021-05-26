#include<stdio.h>
#include<math.h>

int main() {
	double input = 151;
	while (input--) {
		double x; x = (50 - input)/10;
		printf("x=: %lf\n", x);
		if (x > 0)
			printf("Gia tri: %lf\n", pow(x, 5) + pow(x, 1.0/5));
		else
			printf("Gia tri: %lf\n", pow(x, 5) - pow((-x), 1.0/5));
	}
}
