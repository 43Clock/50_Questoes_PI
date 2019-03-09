#include <stdio.h>

int cardinalMSet (int N, int v[N]) {
	int i,acc = 0;
	for (i = 0; i<N;i++)
		acc += v[i];
	return acc;
}