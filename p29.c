#include <stdio.h>

int retiraNeg (int v[], int N) {
	int i,j = 0;
	for (i = 0;i<N;i++) {
		if (v[i]>=0) {		//Se o elemento for positivo vai "adiciona-lo" à lista.
			v[j] = v[i];
			j++;
		}
	}
	return j;
}