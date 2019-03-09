#include <stdio.h>

void truncW(char t[], int n) {
    int i, j = 0, repetir = n,p;
    for (i = 0; t[i] != '\0'; i++) {
        if (t[i] == ' ') {
            repetir = n;
            t[j] = ' ';
            j++;
        } 
        else {
            p = i;
            while (repetir > 0 && t[p] != ' ') {
                t[j] = t[p];
                p++;
                j++;
                if (t[p] != ' ') i++;
                repetir -= 1;
            }
        }
    }
    t[j] = '\0';
}