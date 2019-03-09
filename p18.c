#include <stdio.h>

int comprimento (char s[]) {
	int i, r=0;
	for (i = 0;s[i] !='\0';i++) r++;
	return r;
}

int maiorSufixo (char s1[],char s2[]) {
	int i,j,h = 0,acc = 0;
	i = comprimento(s1)-1;
	j = comprimento(s2)-1;
	while (s1[i-h] == s2[j-h]) {
		acc++;
		h++;
	}
	return acc;
}
