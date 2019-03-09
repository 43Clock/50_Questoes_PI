#include <stdio.h>

int elimRepOrd (int v[],int N) { 
	int i, j = 0;
	for (i = 0;i<N;i++) {
		if (v[i] != v[j]) {
			j++;
			v[j] = v[i];
		}
	}
	return j+1; //Pois j é um indice ou seja tem j+1 elementos;
}