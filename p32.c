#include <stdio.h>

int maxCresc (int v[],int N ) {
	int i, r = 0,rt, j,p;
	for (i = 0; i < N;i++) {
			rt = 1;					  //Cada conjunto de crescentes tem pelo menos um elemento.
			p = i+1;				  //A var p vai ver se o prox elemnto, dai ele ser i+1.
		for (j = i;v[j]<=v[p];j++) {  //Com a var j = i vai testar sempre a partir da posicao de i quantos elementos sao crescentes
				p++;
				rt++;
			}
		if (rt > r) {				 // Vai comparar os valores para ver qual é o maior
			r = rt;
		}
	}	
	return r;
}