#include <stdio.h>

int comprimento (char s[]) {
	int i, r=0;
	for (i = 0;s[i] !='\0';i++) r++;
	return r;
}

int palindroma (char s[]) { // 0 == False ;1 == True
	int i,j;
	j = comprimento(s)-1;			  // Indice maximo da palavra.
	if (comprimento(s) = 0) return 0; // Caso em que é lista vazia.
	for (i = 0; i != j && s[i] != '\0';i++,j--)
		if (s[i] != s[j]) return 0;   // Se forem dif da return a 0.
	return 1;
}