#include <stdio.h>

char charMaisfreq (char s[]) {
	int i,j,rep = 0,rep1 = 0,tmp;
	char c;
	for (i = 0; s[i] != '\0';i++) {
			rep1 = 0;
		for (j = 0; s[j] != '\0';j++) 
			if (s[j] == s[i]) rep1++;
	
	if (rep1>rep) {
		rep = rep1;
		c = s[i];
		}
	}
	return c;
}