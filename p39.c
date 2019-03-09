#include <stdio.h>

int triSup (int N, float m[N][N]) {
	int i,j,r = 1;
	for (i = 0;i<N;i++)
		for (j = 0;j<N && r == 1;j++)
			if (j<i && m[i][j] != 0) r = 0; //sempre que o j<i o valor esta abaixo da diagonal
	return r;
}