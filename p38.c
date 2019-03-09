#include <stdio.h>

void somasAc (int v[], int Ac[], int N) {
	int i;
	for (i = 0; i<N;i++) {
		//Ac[i] = Ac[i-1] + v[i]; Esta parte está correta
		Ac[i] = (i != 0)? Ac[i-1] + v[i] : v[0]; // Esta linha é basicamente um if else
	}	// onde (i != 0) é a condicão. O que esta antes dos ':' é caso seja verdade o que esta dps é caso contrario
}