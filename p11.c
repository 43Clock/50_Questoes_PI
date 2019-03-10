#include <stdio.h>

void strrev (char s[]) {
	int i,j;
	char t[100];
	for (i = 0;s[i] != '\0';i++) t[i] = s[i];
	for (j = 0;i>=0;j++) {
		s[j] = t[i-1];
		i--;
	}
	s[j] = '\0';
}
