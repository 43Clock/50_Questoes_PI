#include <stdio.h>

int strcmp (char s1[],char s2[]) {
	int i;
	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0';i++); //tem de  ter s1[i] != '\0' && s2[i] != '\0' 
	if (s1[i] == '\0' && s2[i] == '\0') return 0;
	else return (s1[i]-s2[i]);
}