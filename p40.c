#include <stdio.h>

void transposta (int N,float m[N][N]) { 
	int i,j,tmp,k = 0;
	for (i = 0;i<N;i++,k++)
		for (j = 0;j<k;j++) {    //o k serve para "controlar" a os valores da diagonais a alterar, isto é as diagonais secundarias , por exp.
			tmp = m[i][j];		 //numa mat 4x4, o k = 0 vai alterar apenas [0][0]
			m[i][j] = m[j][i];   // k = 1 vai alterar [1][0] com [0][1]
			m[j][i] = tmp;		 // k = 2 vai alterar [2][0] com [0][2] e [2][1] com [1][2]
		}						 // k = 3 vai alterar [3][0] com [0][3] e [3][1] com [1][3] e [3][2] com [2][3]
}