#include <stdio.h>

int pertence (char c,char s[]) { // 0 nao pertence; 1 pertence
	int i,n = 0;
	for (i = 0;s[i] != '\0';i++) {
		if (c == s[i]) {
			n = 1;
			break;
		}
	}
	return n;
}

int contida (char a[], char b[]) { // 0 == False, 1== True
	int i,j;
	for (i = 0;a[i] != '\0';i++) {
		if (pertence(a[i],b) == 1);
		else return 0;
		}
	return 1;
}
