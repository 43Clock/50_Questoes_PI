#include <stdio.h>

int sufPref(char s1[], char s2[]) {
    int i = 0, j = 0, acc = 0;
    while (s1[i] != '\0' && s2[j] != '\0') {
        if (s1[i] != s2[j]) i++;
        else {
            while (s1[i] == s2[j] && s1[i] != '\0') {
                i++;
                j++;
                acc++;
            }
            if (s1[i] != '\0') {
                j = 0;
                acc = 0;
            }
        }
    }
    return acc;
}