
#include<stdio.h>

int main() {
	int sum = 0;
	int iter = 0;
	for (iter; iter < 1000; iter++) {
		if (iter % 3 == 0) {
			sum += iter;
		} else if (iter % 5 == 0) {
			sum += iter;
		}
	}
	printf("%i\n", sum);
}
