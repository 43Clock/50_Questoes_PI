#include <stdio.h>

void truncW(char t[], int n) {
    int i, j = 0, repetir = n;
    for (i = 0; t[i] != '\0'; i++) {
        if (t[i] == ' ') {
        	repetir = n;
        	t[j] = t[i];
        	j++;
        }
        else {
        	if (repetir != 0) {
        	t[j] = t[i];
        	repetir--;
        	j++;
        	}
    	}
	}
    t[j] = '\0';
}
