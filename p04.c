#include <stdio.h>

int bitsUm (unsigned int n) {
	int r = 0;
	while (n!= 0) {
		if (n%2 == 0) n = n/2;
		else {n = n/2;
			  r += 1;}
	}
	return r;
}

int main () {
	int a, n;
	printf("Introduzir um numero: ");
	scanf ("%d",&n);
	a = bitsUm(n);
	printf("O seu numero tem %d '1' em binario.\n",a);
}