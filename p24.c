#include <stdio.h>

int remRep (char s[]) {
	int i,j = 0;
	for (i = 0;s[i] != '\0';i++) {
		if (s[i] != s[i+1])	{
			s[j] = s[i];
			j++;
		}		
	}
	s[j] = '\0';
	return j;
}
