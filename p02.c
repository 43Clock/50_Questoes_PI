#include <stdio.h>

int main () {
	float input, total, quantos = 0;
	float media;
	scanf ("%f",&input);
	total = input;
	while (input != 0) {
		scanf ("%f",&input);
		total = total + input;
		quantos += 1;
	}
	media = total/quantos;
	printf("A media dos valores introduzidos é: %f\n", media);
	return 0;
}