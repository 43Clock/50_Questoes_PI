#include <stdio.h>

int maiorPrefixo (char s1[],char s2[]) {
	int i,acc = 0 ;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0';i++) {
		if (s1[i] == s2[i]) acc++;
		else return acc;
	}
	return acc;
}