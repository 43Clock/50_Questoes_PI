#include <stdio.h>

int unionMSet (int N, int v1[N], int v2[N], int r[N]) {
	int i;
	for (i = 0; i<N;i++)
		if (v1[i] > v2[i]) r[i] = v1[i];
		else r[i] = v2[i];
}