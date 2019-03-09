#include <stdio.h>

int crescente (int s[],int i,int j) {
	int r = 1;
	for (;i<j && r == 1;i++)    // vai da posicao i ate à j
		if (s[i]>s[i+1]) r = 0;
	return r;
}