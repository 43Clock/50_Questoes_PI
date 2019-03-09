#include <stdio.h>

int limpaEspacos (char s[]) {
	int i,j = 0;
	for (i = 0;s[i] != '\0';i++)
		if (s[i] == ' ' && s[i+1] == ' '); //Se tiver 2 espaços vazios seguidos, vai avancar na lista.
		else {
			s[j] = s[i];				// Caso contrario vai "recuar" a lista, ou seja, vai apagar os espaços até o haver 1, com recurso à var j.
			j++;						
		}
	s[j] = '\0';
	return j;
}