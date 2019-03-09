#include <stdio.h>

char * mystrstr(char s1[], char s2[]) {
	int i,j = 0;
	if (*s2 == '\0') return s1;
	for (i = 0;s1[i] != '\0';i++){
		if (s1[i] != s2[j]);
		else j++;
		if (s2[j] == '\0') return s1+i-j+1; //Pk este valor  ?? i dont fucking know mas funciona.
	    }
	return NULL;
}