#include <stdio.h>

int contaPal (char s[]) {
	int i,acc = 0;
	for (i = 0;s[i] != '\0';i++) {
		if (s[i] != ' ' && s[i] != '\n' && (s[i-1] == ' ' || s[i-1] == '\0')) acc++; // Esta parte vai ver se dps de uma letra ha um espaco;
	}
	return acc;
}