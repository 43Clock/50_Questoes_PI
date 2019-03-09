#include <stdio.h>

int main () {
	int input, max, temp, max2;
	scanf ("%d",&input);
	max = input;
	max2 = 0;
	while (input != 0) {
		scanf ("%d",&input);
		if (input > max) {
			temp = max;
			max = input;
			max2 = temp;
		}
		else if (input > max2 && input != max) max2 = input;
	}
	printf("O segundo maior numero é : %d\n", max2);
	return 0;
}