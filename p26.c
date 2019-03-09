#include <stdio.h>

void insere  (int v[], int N, int x) {
	int j,i;
	for (i = 0;i<N && x>v[i];i++); //Encontra o indice em que o x tem de ficar.
	for (j = N ; j != i ;j--) 
		v[j] = v[j-1]; //começando pelo fim, ou seja j = N, todos os elementos da lista vao sofrer um shit à direita ate que o j seja igual a i
	v[i] = x;		  // dps na posicao com indice i vao ser colocado o x, o que tem de ser feito no fim para nao se "perder" o valor que se tinha antes nessa posição.
} 