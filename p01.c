#include <stdio.h>

int main () {
    int a, max;
    scanf("%d",&a);
    max = a;
    while (a != 0) {
        scanf ("%d",&a);
        if (a>max) max = a;
    }
    printf("O maior numero é: %d\n", max);
    return 0;
}