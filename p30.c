#include <stdio.h>

int menosFreq (int v[],int N ) { 
	int i, r = N,rt, j,p = v[0];
	for (i = 0; i < N;i++) {
			rt = 0;
		for (j = 0;j<N;j++) 
			if (v[j] == v[i]) rt++;
		if (rt < r) {
			r = rt;
			p = v[i];
		}
	}	
	return p;
}