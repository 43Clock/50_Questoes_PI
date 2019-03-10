#include <stdio.h>

int sufPref(char s1[], char s2[]) {
    int i = 0, j = 0, acc = 0;
    while (s1[i] != '\0' && s2[j] != '\0') {
        if (s1[i] != s2[j]) i++;
        else {
            while (s1[i] == s2[j] && s1[i] != '\0') {   //Enquanto forem iguais os valores de i e j aumentam
                i++;                            
                j++;    
                acc++;
            }
            if (s1[i] != '\0') {                //Quando a condição anterior chegar ao fim vai ver se s1 chegou ao fim
                j = 0;                          //Se chegou ao fim quer dizer que o sufixo de s1 estava totalmente no prefixo de s2
                acc = 0;                        //Se nao chegou ao fim, o indice da palavra com o prefixe vai voltar ao inicio para continuar a comparação
            }
        }
    }
    return acc;
}
