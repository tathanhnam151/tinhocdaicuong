#include<stdio.h>

int main() {
	int input, sum, counter = 0, mod = 1;
	while(mod!= 0) {
		scanf("%d", &input);
		if (!(input%2)) {
			sum += input;
			counter++;
		}
		mod = input;
	}
	counter--;
	printf("%lf", (double)sum/counter);
	return 0;
}
