#include <stdlib.h>

int comuns (int a[],int na,int b[],int nb) {
	int i,j,acc = 0;
	for (i = 0; i<na;i++)
		for (j = 0;j<nb;j++) 
			if (a[i] == b[j]) { // So importa a 1ª occorecia em b
				acc++;
				break;
			}
	return acc;
}