#include<stdio.h>
int main() {
	int input, max = -2147483647, counter, mod = 1;
	while((mod%5) != 0 || (mod <= 0)) {
		scanf("%d", &input);
		if (input > max) {
			max = input;
			counter = 1;
		} else if (input == max) {
			counter++;
		} 
		mod = input;
	}
	printf("%d\n%d", max, counter);
	return 0;
}
