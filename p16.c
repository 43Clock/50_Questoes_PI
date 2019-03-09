#include <stdio.h>

int diff (char s[],int i,int j){ //0 caso nao exista rep; 1 caso exista; verifica se existem letras iguas ao indice j para traz na lista
	int r =0;					 //Esta funçao vai ter como input um tipo de intervalo para testar se ha valores iguas nesse intervalo; 
	for (; i<j && r == 0;i++)
		if (s[j] == s[i]) r = 1; //0 caso exista repetidos
	return r;  //1 caso n exista rep
}

int difConsecutivos (char s[]) { // Quando aparece uma letra igual, para de contar
	int i,j,r = 0,tmp = 0;
		for (i = 0;s[i] != '\0';i++) {
			tmp = 0;
			for (j = i;s[j] != '\0' && diff (s,i,j) == 0;j++) tmp++; // vai testar em varios intervalos i-j qual é o que tem maior numero de diferentes seguidos;
			if (tmp>r) r = tmp;
	}
	return r;
}
