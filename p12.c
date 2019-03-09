#include <stdio.h>

void strnoV(char s[]) {
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] != 'a' && s[i] != 'A' &&
            s[i] != 'e' && s[i] != 'E' &&
            s[i] != 'i' && s[i] != 'I' &&
            s[i] != 'o' && s[i] != 'O' &&
            s[i] != 'u' && s[i] != 'U') { //Vai verificar se não é vogal.
            s[j] = s[i];                  //Caso nao seja vogal a string na posicao i n vai ser alterada e dps o j vai aumentar o valor em 1
            j++;						  //Caso seja vogal o valor de j nao aumenta para que no prox caso em que n seja vogal n haver espacos entre as letras.
        }
    s[j] = '\0';						  //No fim termina a frase
}