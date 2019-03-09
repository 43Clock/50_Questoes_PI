#include <stdio.h>

int iguaisConsecutivos (char s[]) {
	int i, j, rep = 0, rep2 = 0;
	for (i = 0; s[i] != '\0'; i++) {
			rep2 = 0;
		for (j = i; s[j] == s[i];j++) rep2++;
		if (rep2>rep)
			rep = rep2;
	}
	return rep;
}